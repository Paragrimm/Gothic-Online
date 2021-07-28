# Gothic Online
Server Gothic Online 0.4.6a for Gothic 1.

More: 
- http://gothic-online.com.pl
- https://tydinc.github.io/GothicOnline/

# How to Build
You need Qt (x86/32Bit) installed in order to build the launcher!
See: https://www.qt.io/download-qt-installer
Afterwards please make sure to set your installed Qt version in the visual studio project settings.
(Visual Studio Qt Tools required)

# Solutions
## GO_Launcher

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

### Improvements
- Language saved in Config

## GO_Client
Consists of some Multiplayer Config Files and the needed GO.dll.
The GO.dll is injected into the GothicMod.exe right after the game start by GO_Launcher.

### Improvements
- German Keyboard Layout (almost complete)
- Several Translations

Build Artifact is created on push into master.

## GO_Server
The Gothic Online server that handles the network communication with the clients.

Build Artifact is created on push into master.
