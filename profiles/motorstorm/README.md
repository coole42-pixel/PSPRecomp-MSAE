# MotorStorm: Arctic Edge

Windows native PSP recompilation profile. Normal startup uses the real profile/title/menu path and savedata service.

Place your decrypted executable at `profiles/motorstorm/game/EBOOT_DECRYPTED.BIN`
and your extracted disc tree at `profiles/motorstorm/game/disc0/`, with
`PSP_GAME/` directly inside it. Game files and saves are ignored by Git.
The checked-in generated corpus targets executable SHA-256
`bfb677677c939aa6cf99fc97120d7345c9361b77125115338ed479fd1d7c4c16`.

Build with Visual Studio 2022, CMake 3.20 or newer and a C++20 compiler. The
profile shares the bundled FFmpeg libraries under `profiles/vcs/third_party/ffmpeg`;
their LGPL notice is documented in [the dependency notices](../vcs/THIRD_PARTY.md).

```powershell
cmake -S . -B out/motorstorm -DPSPRECOMP_PROFILE=motorstorm
cmake --build out/motorstorm --config Release --target MotorStormNative
./profiles/motorstorm/run.ps1
./profiles/motorstorm/run.ps1 -Resolution 2 -Antialiasing FXAA
./profiles/motorstorm/run.ps1 -Resolution 4 -Antialiasing SSAA4x -Scale 4
```

The launcher selects hardware D3D12 rendering. It requires a D3D12 GPU with rasterizer ordered views. Use `-Renderer software` for the software reference or `-Renderer auto` to allow a reported software fallback. `-Bringup` enables historical scene skips for diagnostics; normal play leaves it off.

`-Resolution` selects actual internal rendering: 1 = 480×272, 2 = 960×544, 3 = 1440×816, 4 = 1920×1088. `-Antialiasing` accepts `None`, `FXAA` or `SSAA4x`. SSAA4x renders a 2×2 sample grid per output pixel and costs more GPU work. `-Scale` controls the window size independently. These are PSP aspect-ratio resolutions; 4× is 1920×1088, rather than a cropped 1080p frame. Software rendering remains native-resolution.

The vehicle-selection preview is repaired in both renderers. See [preview fix and resolution validation](docs/PREVIEW_RESOLUTION.md).

The race HUD/camera dropout caused by truncated large GE lists is repaired in both renderers. See [the fix and recorded-drive verification](docs/HUD_CAMERA_FIX.md).

Zero-byte file reads at soundtrack boundaries no longer reuse a stale byte count and crash. See [the lap-2 crash investigation and 4x sustained-run validation](docs/STREAM_READ_FIX.md).

The generated corpus uses 4 KiB units emitted with `--builtin-accessors`, which made the race benchmark 37% faster with identical frames. Regenerate it with `psp_recomp <EBOOT> --auto profiles/motorstorm/generated 0x08804000 4096 --builtin-accessors`; see [the race benchmark page](docs/PERFORMANCE_RACE_BENCH.md#round-2-2026-10-03-generated-code-layout).

See [D3D12 implementation and verification](docs/PHASE12_D3D12.md) and [verified correctness fixes](docs/PHASE12_FIXES.md). The generated corpus and game files must already be present as described by the profile's existing configuration.
