# Vehicle preview and configurable rendering

Verified 2026-10-02, following the initial hardware D3D12 implementation.

The launcher/executable now default to the user's 4x/SSAA4x preference through the documented
`MotorStormNative.ini`. The measurements below retain their stated historical
resolution. See [current build and fullscreen controls](../README.md).

Music playback is now repaired and verified separately. See
[the audio root cause, fix and captured evidence](audio_report.md). The fix
restores PSP ATRAC first-frame trimming and removes the event-flag workaround
that discarded decoded PCM; normal launch enables music by default.

## Vehicle preview root cause

Submission 1780 contains the preview model: draws 83 onward render the buggy's parts with reversed depth testing. Earlier 2D menu panels disable depth testing but leave the depth mask writable. The software reference and D3D12 pixel shader incorrectly kept writing their depth values, hiding the model behind the UI's depth.

Normal depth writes now require **both** depth testing enabled and the depth write mask enabled. Depth-clear primitives still honor the clear-depth bit independently. This is a generic GE rule, not a vehicle-specific draw override. It agrees with the state rule in [PPSSPP's software pixel-function setup](https://github.com/hrydgard/ppsspp/blob/master/GPU/Software/FuncId.cpp#L75).

The new assertion that depth-disabled UI preserves the depth buffer fails before the change and passes after it. The actual selection screen now shows the complete Jester BB-XS buggy, including wheels and shadow:

- Native: `out/motorstorm/d3d12/preview-fixed/frame_21.png`.
- 4× with SSAA4x: `out/motorstorm/d3d12/preview-4x-ssaa/frame_21_gpu.png`.

The earlier D3D12 verification did not catch the absent preview. Its software-reference comparisons inherited the same depth-write error; the vehicle screen is now an explicit acceptance capture.

## Resolution and anti-aliasing

```powershell
./profiles/motorstorm/run.ps1 -Resolution 2 -Antialiasing FXAA
./profiles/motorstorm/run.ps1 -Resolution 4 -Antialiasing SSAA4x -Scale 4
```

| Resolution | Output dimensions | SSAA4x raster dimensions |
| --- | --- | --- |
| 1× | 480×272 | 960×544 |
| 2× | 960×544 | 1920×1088 |
| 3× | 1440×816 | 2880×1632 |
| 4× | 1920×1088 | 3840×2176 |

`None` rasterizes at the selected output resolution. `FXAA` applies directional edge filtering at that resolution. `SSAA4x` rasterizes at twice the output width and height, then averages four color samples per output pixel. These are actual GPU rendering resolutions; changing the window size alone only scales presentation. Defaults remain 1×/None. Environment equivalents are `PSPRECOMP_MOTORSTORM_RESOLUTION=1..4` and `PSPRECOMP_MOTORSTORM_AA=none|fxaa|ssaa4x`.

Guest VRAM retains the PSP's original addresses, dimensions, strides and packed pixel formats. GPU compute shaders expand CPU updates into scaled surfaces and resolve guest-visible color/depth writes. Stencil/alpha and depth select a sample instead of averaging stencil values. Content comparisons preserve high-resolution GPU detail after guest readback; actual CPU changes reload the corresponding surface. GPU feedback snapshots retain their scaled detail, including padded texture regions and 3× wrapping with dimensions that are not powers of two. Existing alias switching and transfer synchronization remain active.

Point primitives expand into a correctly scaled pixel quad through a geometry shader. Color/depth resources, viewport and scissor scale together. Texture assets remain their original PSP resolution. Higher resolutions naturally change edge coverage and mip footprints; the exact native-reference profile tests pin 1×/None, while scaled behavior is validated separately.

Framebuffer captures now include `frame_N_gpu.ppm`, which uses the selected output dimensions and the same AA shading as presentation. The original `frame_N.ppm` remains a guest framebuffer dump for comparison.

## Validation

- Three standard CTest suites pass; `motorstorm_profile_tests --d3d12` passes at its explicit native reference resolution.
- `motorstorm_gpu_tests` passes the original 524 native comparisons and the depth-disabled UI regression. All **12 resolution/AA combinations** also pass the 516 aligned-rectangle blend/stencil/depth/clear/mask comparisons, framebuffer feedback/transfer checks, output dimension checks, detail-retention checks, subpixel edge filtering checks and direct presentation. Triangle edge coverage is intentionally tested as a resolution-dependent result.
- `preview-4x-ssaa/native.log` records 1920×1088 output and 3840×2176 rasterization, 57,298 GPU draws, 5,222 GPU feedback draws and zero software raster draws. The vehicle selection is visibly repaired.
- `multires-2x-fxaa/native.log` covers normal startup, saved-profile loading, vehicle preview, racing, steering and pause/resume through guest time 94.635 s. It reports **1,253,521 GPU draws**, **919,745 GPU transform draws**, **2,802 swapchain presents**, and **zero software raster draws**, with zero scheduler deadlocks. Output/raster size is 960×544 with FXAA. Wall time was 73.967 s. Exit 4 is the requested 2800-GE diagnostic limit.
- GPU captures `frame_21_gpu.png`, `frame_27_gpu.png`, `frame_28_gpu.png` and `frame_33_gpu.png` under `out/motorstorm/d3d12/multires-2x-fxaa` show the restored preview, race, pause and continued driving.

Build/test commands remain in [the D3D12 document](PHASE12_D3D12.md). To reproduce the 4× preview:

```powershell
./profiles/motorstorm/tools/validate-renderer.ps1 -Name preview-4x-ssaa -StopAfterGe 1860 -RenderAfterGe 1680 -Resolution 4 -Antialiasing SSAA4x
```

This adds FXAA and supersampling, not MSAA. SSAA4x increases fragment work and memory use; it is optional. Native PSP aspect ratio is retained, so 4× output is 1920×1088. Rendering and guest-memory synchronization still use the existing explicit GE fences; this does not add asynchronous memory tracking or high-resolution replacement textures.
