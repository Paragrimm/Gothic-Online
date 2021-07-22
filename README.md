# Gothic Online
Server Gothic Online 0.4.6a for Gothic 1.

moar: http://gothic-online.com.pl

# How to Build
You need Qt installed in order to build the launcher!
See: https://www.qt.io/download-qt-installer
Afterwards please make sure to set your installed Qt version in the visual studio project settings.
(Visual Studio Qt Tools required)

# Solutions
## GO_Launcher
WARNING: The Launcher is not working yet. It basically starts Gothic as Singleplayer game (it just executes GothicMod.exe without any start parameters yet).
Is the Gothic Online Launcher that is needed to connect to a server (GO_Server).

Files needed in Release:
- GO_Launcher.exe
- "lang"-Directory with content
- "Multiplayer"-Directory with content
- the following DLLs:
  - Qt5Core(d).dll
  - Qt5Widgets(d).dll
  - Qt5Network(d).dll
  - Qt5Gui(d).dll

The "(d)" is because the debug-build needs the DLLs with "d" (eg.: Qt5Cored.dll) and the release-build needs the DLLs without "d" (eg.: Qt5Core.dll)

## GO_Client
Consists of some Multiplayer Config Files and the needed GO.dll.
The GO.dll is injected into the GothicMod.exe right after the game start by GO_Launcher.

Build Artifact is created on push into master.

## GO_Server
The Gothic Online server that handles the network communication with the clients.

Build Artifact is created on push into master.
