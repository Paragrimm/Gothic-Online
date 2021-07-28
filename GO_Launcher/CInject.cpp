#define _WIN32_WINNT 0x0501 // WinXP only
#define VC_EXTRALEAN
#include <Windows.h>
#include <TlHelp32.h>
#include <comdef.h>

#include "CInject.h"
#include "SLog.h"

// Cancel unicode, only way in Qt
#define Process32First Process32First
#define Process32Next Process32Next
#define PROCESSENTRY32 PROCESSENTRY32

#define CREATE_THREAD_ACCESS (PROCESS_CREATE_THREAD | PROCESS_QUERY_INFORMATION | PROCESS_VM_OPERATION | PROCESS_VM_WRITE | PROCESS_VM_READ)

unsigned CInject::GetIndexOfAddress(DWORD oldFunction)
{
	for (unsigned i = 0; i < hookList.size(); ++i)
	{
		if (hookList.at(i)->address == oldFunction)
			return i;
	}

	return 0;
}

PROCESS_INFORMATION CInject::RunApplication(const char *path)
{
    STARTUPINFOA startupInfo;
	PROCESS_INFORMATION procInfo;
	ZeroMemory(&startupInfo, sizeof(startupInfo));
	startupInfo.cb = sizeof(startupInfo);

	if (!CreateProcessA(path, NULL, NULL, NULL, false, NULL, NULL, NULL, &startupInfo, &procInfo)) {
		LOG("[error CreateProcess] %s", GetLastError());
	}

	return procInfo;
}

DWORD CInject::GetPID(const char *processName)
{
	DWORD procId = 0;
	HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

	if (hSnap != INVALID_HANDLE_VALUE) {
		PROCESSENTRY32 procEntry;
		procEntry.dwSize = sizeof(procEntry);

		if (Process32First(hSnap, &procEntry)) {
			do {
				if (!_stricmp(procEntry.szExeFile, processName)) {
					procId = procEntry.th32ProcessID;
					break;
				}
			} while (Process32Next(hSnap, &procEntry));
		}
	}
	CloseHandle(hSnap);
	return procId;
}

BOOL CInject::IsProcessRunning(DWORD pid)
{
	HANDLE process = OpenProcess(SYNCHRONIZE, FALSE, pid);
	DWORD ret = WaitForSingleObject(process, 0);
	CloseHandle(process);
	return ret == WAIT_TIMEOUT;
}

bool CInject::InjectDLL(PROCESS_INFORMATION process, const char *processPath, const char *path)
{
	LPCSTR DLL_PATH = (LPCSTR)path;
	int DLL_PATH_SIZE = strlen(DLL_PATH) + 1;

	DWORD ProcessID = process.dwProcessId;
	while (ProcessID == 0) {
		ProcessID = GetPID(processPath);
		Sleep(30);
	}

	FARPROC LoadLibAddy = GetProcAddress(GetModuleHandle(TEXT("kernel32.dll")), "LoadLibraryA");
	if (!LoadLibAddy)
	{
		DWORD err = GetLastError();
		LOG("[error LoadLibraryA] %s", err);
		return false;
	}

	HANDLE Proc = OpenProcess(CREATE_THREAD_ACCESS, FALSE, ProcessID);
	if (!Proc)
	{
		DWORD err = GetLastError();
		LOG("[error OpenProcess] %s", err);
		return false;
	}

	LPVOID RemoteString = VirtualAllocEx(Proc, NULL, DLL_PATH_SIZE, MEM_COMMIT, PAGE_READWRITE);
	if (!RemoteString)
	{
		DWORD err = GetLastError();
		LOG("[error VirtualAllocEx] %s", err);
		CloseHandle(Proc);
		return false;
	}

	if (!WriteProcessMemory(Proc, RemoteString, DLL_PATH, DLL_PATH_SIZE, NULL))
	{
		DWORD err = GetLastError();
		LOG("[error WriteProcessMemory] %s", err);
		VirtualFreeEx(Proc, RemoteString, 0, MEM_RELEASE);
		CloseHandle(Proc);
		return false;
	}

	HANDLE Thread = CreateRemoteThread(Proc, NULL, NULL, (LPTHREAD_START_ROUTINE)LoadLibAddy, RemoteString, NULL, NULL);
	if (!Thread)
	{
		DWORD err = GetLastError();
		LOG("[error CreateRemoteThread] %s", err);
		VirtualFreeEx(Proc, RemoteString, 0, MEM_RELEASE);
		CloseHandle(Proc);
		return false;
	}

	WaitForSingleObject(Thread, INFINITE);

	// If the target process is 32bit, you can use GetExitCodeThread()
	// to find out if LoadLibraryA() was successful or not.
	//
	// If the target process is 64bit, it is much harder to determine
	// that. You would have to allocate an entire function containing
	// shellcode that calls LoadLibraryA() and saves the result in
	// memory that you can then read via ReadProcessMemory().  Or,
	// you would have to enumerate the target process's modules list
	// looking for the DLL that you just injected.

	CloseHandle(Thread);

	VirtualFreeEx(Proc, RemoteString, 0, MEM_RELEASE);
	CloseHandle(Proc);

	return true;
}

bool CInject::IsAddressHooked(DWORD oldFunction)
{
	for (unsigned i = 0; i < hookList.size(); i++)
	{
		if (hookList.at(i)->address == oldFunction)
			return true;
	}
	return false;
}

bool CInject::ImportHook(DWORD oldFunction, size_t sizeNewFunction, ...)
{
	if (sizeNewFunction == sizeof(void*))
	{
		if (IsAddressHooked(oldFunction) == false)
		{
			va_list args;
			va_start(args, sizeNewFunction);
			DWORD function = (DWORD)va_arg(args, void*);
			va_end(args);

			Hook* pHook = new Hook;
			pHook->address = oldFunction;

			BYTE jmp[6] = { 0xE9, //jmp
							0x00, 0x00, 0x00, 0x00, //address
							0xC3 }; //retn

			//Read backup
			ReadProcessMemory(GetCurrentProcess(), (LPVOID)oldFunction, pHook->backup, 6, 0);

			DWORD dwCalc = (function - oldFunction - 5);
			memcpy(&jmp[1], &dwCalc, 4);
			WriteProcessMemory(GetCurrentProcess(), (LPVOID)oldFunction, jmp, 6, 0);

			//Add hook to list
			hookList.push_back(pHook);

			return true;
		}
	}

	return false;
}

bool CInject::RemoveHook(DWORD oldFunction)
{
	if (IsAddressHooked(oldFunction))
	{
		//Return backup
		unsigned int index = GetIndexOfAddress(oldFunction);
		WriteProcessMemory(GetCurrentProcess(), (LPVOID)oldFunction, hookList.at(index)->backup, 6, 0);

		//Remove hook from list
		hookList.erase(hookList.begin() + index);

		return true;
	}

	return false;
}
