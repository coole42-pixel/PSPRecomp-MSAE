# Android development build

Current APK boots the native game using the imported MrPurple T30 driver and the
new ordered-attachment pixel path. **Race performance and release acceptance are
still pending.** Driver import, selection and Vulkan initialization are implemented. System is the
initial default. Custom driver binaries are never APK assets.

## Game settings

The Android preset is 2x internal resolution (960x544), original 30 fps, low
draw distance, PSP texture filtering, and render scale Off. FXAA, enhanced
filtering, object fading, extra race effects, sharpening, color correction,
soft particles and controller vibration default to Off. Audio stays enabled.
Menus, movies and races fill the display; wide menus/movie art is stretched.

The scrollable settings panel exposes resolution, 30/60 fps, adaptive frame
rate, FXAA, filtering, draw distance, object fading, fixed/dynamic render scale,
dynamic minimum/maximum, upscaler sharpness, race effects, audio and vibration.
Settings apply next launch. Reset defaults restores the graphics preset while
preserving game files, imported drivers and audio preference. Version 2 of the
graphics preference migration applies this preset once to existing installs.

### Frame generation (ZeroFG)

*Settings > Frame generation in races (ZeroFG)* shows a generated frame between
every two real race frames: Off (default), Zero (best image) or ReallyZero
(cheaper). *Frame generation picture size* (1280/1600/1920 px wide) trades
sharpness for GPU time. Best with the original 30 fps on a 60 Hz or faster
display; it adds about one game frame of input latency, only affects races, and
needs a Vulkan 1.3 driver with synchronization2 (the log says
`[FRAMEGEN] unavailable` otherwise). Full usage notes, INI keys and how to read
the `[FRAMEGEN]` log lines: [docs/FRAME_GENERATION.md](../docs/FRAME_GENERATION.md).

Touch controls can be disabled in Game settings. The overlay contains Start,
Select, shoulders, D-pad, face buttons and a floating analog stick; the duplicate
pause/menu buttons have been removed. The stick captures its initial finger,
stays active beyond the ring, uses a circular physical range and returns to
neutral on release, pause, hide or resize. Independent fingers can press buttons
while steering.

Connecting a controller alone leaves the overlay visible. The first controller
button press or axis movement beyond its deadzone hides it and releases touch
input. It stays hidden while that controller is connected; disconnecting restores
it if the touch-controls setting is enabled. Screen touches do not reveal a hidden
overlay or activate invisible controls. The supplied `branding/applogo.png` is
the launcher icon, with density-specific legacy and adaptive resources.

Source alpha is used for pixel testing and RGB blending. Framebuffer alpha is
PSP stencil storage and ordinary color draws preserve it. Native Vulkan stencil
is experimental and opt-in; conditional operations use the ordered pixel path.

Toolchain verified on this machine: AGP 9.1.0, Gradle 9.3.1, JDK 25, SDK 36,
NDK 28.2.13676358, SDK CMake 3.22.1. Use `tools/android/build.ps1`.
This replaces the earlier proposed JDK 17/AGP 8.13 baseline because these
compatible newer components are already cached locally.

Install: `adb install -r app/build/outputs/apk/debug/app-debug.apk`.
Launch: `adb shell am start -n org.psprecomp.motorstorm/.LauncherActivity`.
Diagnostics: app external files `diagnostics/capabilities-{system,imported}.json`.

The driver ZIP importer enforces private paths, bounded extraction and arm64 ELF
metadata. These checks protect the import path; they do not validate driver
quality. Probe uses a separate process so a driver fault does not kill the launcher.
libadrenotools requires extracted native hook libraries (`useLegacyPackaging`).

Game import will extract the selected ISO and accept a user-supplied decrypted
EBOOT, matching its SHA-256 against the corpus input. Automatic decryption was
removed from scope at the user's request on 2026-10-05.

SDL3 source: release 3.4.18, tar.gz SHA-256
`9c75cf16330322c217dedd2e0609f1124f1b54b8633e763467b4684d0f4334a3`.
Download was authorized by the user. Set `-PsdlSource=/absolute/SDL3-3.4.18` if
it is outside the local `out/android/deps` default. The native library and Java
glue are built from that same source directory (zlib license).

Development FFmpeg dependency currently points at the local reference's LGPL
arm64 FFmpeg archives; `MOTORSTORM_FFMPEG_ROOT` overrides this path. They are
libavcodec 57 (legacy decode API), so the shared MIT media decoder contains an
API compatibility branch. Public distribution still needs a reproducible pinned
FFmpeg build, notices and the required LGPL relinking materials. No PPSSPP core
or PRX decryption code is compiled into the game.

## Multiplayer (private rooms)

*Multiplayer* in the launcher races friends in the game's own **Ad-hoc** mode over Wi-Fi or the internet, with
the traffic encrypted by an invite code. One player chooses **Host a room** (a code is generated; copy or share it),
the others choose **Join a room** and enter it. Add a *room server* (host:port, run `psp_net_rendezvous` anywhere with
a public UDP port) so players find each other by code and NAT is handled, or - on one Wi-Fi network - enter the host's
LAN address shown in the dialog (the host's port is 47900). Press Play, then in the game open
Wreckreation > Multiplayer > Adhoc and choose Create Game (host) or Join Game.

Notes: keep the code private (it is the room's key). With multiplayer off the Adhoc menu simply declines to connect.
Some phones (observed on a Xiaomi/HyperOS device) block per-app network access by default; if the log says
`cannot open UDP socket: Connection refused`, enable network access for the app in the system settings.
Status and limits: [MULTIPLAYER_PLAN.md](../../../MULTIPLAYER_PLAN.md).
