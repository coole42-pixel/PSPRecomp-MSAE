# SDL3 3.4.18

Universal game-controller input and rumble for MotorStorm (see
[controller and keyboard input](../../docs/CONTROLLER_INPUT.md)).

- Source: official release `SDL3-devel-3.4.18-VC.zip` from
  <https://github.com/libsdl-org/SDL/releases/tag/release-3.4.18>,
  SHA-256 `78d84602ae616cfe26b33a73b7d3b9b6b56e8a6650e53d92c9c6ca938f747acd`.
- Contents kept: `include/SDL3` (without the OpenGL/EGL/test headers),
  `lib/x64/SDL3.lib` (import library), `bin/SDL3.dll` (x64) and `LICENSE.txt`.
- Licence: zlib (`LICENSE.txt`); the build copies it beside the executable as
  `SDL3.LICENSE.txt` together with `SDL3.dll`.

The game links SDL3 with `/DELAYLOAD:SDL3.dll` and loads the DLL from its own
folder at startup. If the DLL is missing or older than 3.2.0, controllers fall
back to XInput (Xbox-compatible pads only) instead of failing to start.

To update, replace these files from a newer `SDL3-devel-*-VC.zip` and record
its version and checksum here.
