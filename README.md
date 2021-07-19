# Gothic Online
Server Gothic Online 0.4.6a for Gothic 1.

moar: http://gothic-online.com.pl

# How to Build
Add the following dependencies for Squirrel and Zengin.
Since I'm no C++ developer, this could be cleaned up!

Squirrel:
- Relevant for: GO_Client, GO_Server
- Add the following path to: Include, External Includes, Library
- {PathToRepo}\Shared\Squirrel\include

Zengin:
- Relevant for: GO_Client
- Add the following path to: Include, External Includes, Library
- {PathToRepo}\GO_Client\zengin

# Solutions
## GO_Launcher
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