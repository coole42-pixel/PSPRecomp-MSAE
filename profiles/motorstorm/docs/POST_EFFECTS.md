# Race enhancements and debug presets

The D3D12 renderer retains colour precision/debanding, linear-light colour correction,
CAS sharpening, HUD protection and soft particles. The `[enhancements] enabled`
switch gates these enhancements; menus, loading screens and movies keep the original image.
Tone mapping, colour grading LUTs, bloom, ambient occlusion, depth haze, speed blur,
eye adaptation and lens finishing have been removed from the configuration and renderer.
Old keys are reported as unknown and ignored.

## Configuration presets

- `config/MotorStormNativeClean.ini` preserves the supported settings from the user's
  `out/motorstorm/bin/Release/MotorStormNative.ini`: D3D12, 4x resolution, FXAA,
  enhanced filtering, 60 fps, dynamic FPS off, automatic widescreen, exclusive
  fullscreen, WASAPI, the `textures_bc7` replacement directory and 4192 MB budget.
- `config/MotorStormFullDebug.ini` uses the same gameplay settings and enables verbose
  import/filesystem/controller/music/ATRAC/display/scheduler tracing, profiling,
  PC sampling, D3D12 validation and stack scanning. It dumps textures, records raw
  audio and writes a RAM snapshot on shutdown. Both display buffers are captured
  every GE submission; the most recent 120 numbered slots are recycled continuously.
  It does not stop the session after a fixed number of GE lists.
- `config/diagnostics-full.ini` enables the same diagnostics plus every race enhancement
  (including soft particles) so all post paths run. It stays windowed so the D3D12 debug
  layer and a debugger remain usable, keeps dynamic FPS off so slowdowns appear in the
  profile, and writes its log, RAM/audio captures and `diagnostics/` dumps under its own names.

Builds stage these presets beside the executable and preserve edited copies.
Select a staged preset with `profiles/motorstorm/run.ps1 -Config
out/motorstorm/bin/Release/MotorStormNativeClean.ini` (or `MotorStormFullDebug.ini`),
or copy the chosen preset to `MotorStormNative.ini` beside the executable.
Relative texture/capture paths resolve against the selected INI, so use the staged
copies beside the executable to retain the texture-pack location. Explicit launcher
flags and environment variables take precedence over INI settings.

Full debugging is expensive and generates large logs, texture dumps and audio files.
`d3d12_debug` requires the Windows Graphics Tools debug layer. Audio capture is
44.1 kHz stereo signed 16-bit raw PCM. Targeted guest-PC/draw inspection remains
available through the existing environment options when a specific address/draw is known.

## Verification

Configuration tests validate both presets and diagnostic environment mappings.
Post tests verify the remaining controls, master switch and warnings for removed keys.
GPU tests verify debanding, sharpening/colour correction, exact zero-fade identity,
HUD protection and agreement between asynchronous and reference post shading.
