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
./profiles/motorstorm/build.ps1
./profiles/motorstorm/run.ps1
./profiles/motorstorm/run.ps1 -Fullscreen
./profiles/motorstorm/run.ps1 -Resolution 2 -Antialiasing FXAA
./profiles/motorstorm/run.ps1 -Resolution 4 -Antialiasing SSAA4x -Scale 4
```

`build.bat` is the Command Prompt / double-click wrapper for the same build.
The Release executable is `out/motorstorm/bin/Release/MotorStormNative.exe`.
Run `build.ps1 -Tests -GpuTests` for framework, configuration, window and hardware
renderer checks; hardware tests require a D3D12 ROV GPU. `-Jobs 1..16` controls
compiler workers (default 4). `-BuildDirectory` selects another build tree.

The executable reads `MotorStormNative.ini` beside it. Defaults are **4x internal
resolution, FXAA, windowed presentation and audio enabled**. The INI explains
every option and includes commented debug examples for tracing, timing, frame
dumps and bounded runs. Both the executable and launcher honor edited settings;
explicit launcher arguments or `PSPRECOMP_*` environment options override them.
`--config <path>` selects another INI, with relative paths based on its directory.

**F11 or Alt+Enter** toggles borderless fullscreen on the current monitor.
`[graphics] widescreen = auto` (default) expands the horizontal gameplay view
to match wider windows and 16:9, 21:9 or 32:9 monitors. Vertical field of view
stays the same and the HUD retains its proportions in a centred safe area.
Menus, movies and narrower windows retain the PSP aspect ratio. Set
`widescreen = psp` to keep the original gameplay view as well. Escape returns to the
original window size; Escape in windowed mode or Alt+F4 closes the game.
Set `[window] fullscreen = true` for fullscreen startup, or use `run.ps1 -Fullscreen`.

Rebuilds preserve your edited INI and update `MotorStormNative.default.ini` with
the latest sample. `build.ps1 -ResetConfig` restores the sample after backing up
your existing settings. The template is [config/motorstorm.ini](config/motorstorm.ini).
See [build/configuration/fullscreen verification](docs/BUILD_CONFIGURATION_FULLSCREEN.md)
for the native tests and game-run evidence.
See [SSAA performance and audio recovery](docs/PERFORMANCE_AUDIO_SSAA.md) for
the current quality-preserving optimization, frame comparisons and audio checks.
See [widescreen and post effects](docs/WIDESCREEN_POST.md) for the implementation
and validation of the aspect and image-effect fixes.
See [remaining post effects and debug presets](docs/POST_EFFECTS.md) for the
supported enhancements and the cleaned native/full-debug configurations.

The launcher selects hardware D3D12 rendering. It requires a D3D12 GPU with rasterizer ordered views. Use `-Renderer software` for the software reference or `-Renderer auto` to allow a reported software fallback. `-Bringup` enables historical scene skips for diagnostics; normal play leaves it off.

`-Resolution` selects actual internal rendering: 1 = 480×272, 2 = 960×544, 3 = 1440×816, 4 = 1920×1088. `-Antialiasing` accepts `None`, `FXAA` or `SSAA4x`. SSAA4x renders a 2×2 sample grid per output pixel and costs more GPU work. `-Scale` controls the window size independently. These are PSP aspect-ratio resolutions; 4× is 1920×1088, rather than a cropped 1080p frame. Software rendering remains native-resolution.

`[graphics] fps` in the INI (or `run.ps1 -Fps`) sets the frame rate. The default is 60. `original` keeps the retail 30 fps pacing (20 fps in heavier scenes). Values from 30 to 240 replace the game's vblank interval and its timestep (the setter at `0x0891BF0C`), so the simulation runs at real speed. Movies stay at their own 29.97 fps. 30 and 60 keep the PSP's 60 Hz vblank; any other value runs the virtual display at that rate. If the PC cannot simulate that many frames per second, the game runs in slow motion. `tools/bench-race.ps1` and `tools/validate-renderer.ps1` default to `-Fps original` so their results stay comparable with the 30 fps baselines.

`dynamic_fps = true` (the default) drops to the original 30 fps pacing while the PC cannot hold the target, instead of slow motion and audio gaps, and returns to the target when it can. A wall-clock limiter spaces visible frames evenly with audio enabled or disabled. See [frame pacing](docs/FRAME_PACING.md) for the smoothness fix and refresh-rate settings, and [docs/PERFORMANCE_60FPS.md](docs/PERFORMANCE_60FPS.md) for the presentation and readback changes and measurements. GE lists render on their own thread while the game keeps running, as on the PSP (`PSPRECOMP_MOTORSTORM_GE_THREAD=0` disables it). Vertices of 3D draws are processed on the GPU (`PSPRECOMP_MOTORSTORM_GPU_VERTICES=0` restores the CPU path); see [docs/PERFORMANCE_RACE_BENCH.md](docs/PERFORMANCE_RACE_BENCH.md).

Texture packs: `tools/extract-textures.ps1` extracts every texture from the disc files (no game run) as `<hash>_<w>x<h>.png`. Upscaled copies (or BC7 DDS from `tools/pack-textures.ps1`) placed in `textures/replace` beside the executable replace them in game, at any resolution, loaded in the background. See [docs/TEXTURE_PACKS.md](docs/TEXTURE_PACKS.md).

The vehicle-selection preview is repaired in both renderers. See [preview fix and resolution validation](docs/PREVIEW_RESOLUTION.md).

The race HUD/camera dropout caused by truncated large GE lists is repaired in both renderers. See [the fix and recorded-drive verification](docs/HUD_CAMERA_FIX.md).

Zero-byte file reads at soundtrack boundaries no longer reuse a stale byte count and crash. See [the lap-2 crash investigation and 4x sustained-run validation](docs/STREAM_READ_FIX.md).

The generated corpus uses 4 KiB units emitted with `--builtin-accessors`, which made the race benchmark 37% faster with identical frames. Regenerate it with `psp_recomp <EBOOT> --auto profiles/motorstorm/generated 0x08804000 4096 --builtin-accessors`; see [the race benchmark page](docs/PERFORMANCE_RACE_BENCH.md#round-2-2026-10-03-generated-code-layout).

See [D3D12 implementation and verification](docs/PHASE12_D3D12.md) and [verified correctness fixes](docs/PHASE12_FIXES.md). The generated corpus and game files must already be present as described by the profile's existing configuration.
