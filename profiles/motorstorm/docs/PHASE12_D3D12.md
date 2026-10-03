# MotorStorm native D3D12 rendering

Implemented and verified 2026-10-02, after the Phase 12 correctness fixes.

Subsequent changes restore the vehicle preview and add 1×–4× rendering, FXAA and SSAA4x. See [the current preview/resolution implementation and evidence](PREVIEW_RESOLUTION.md); the initial verification and native-resolution limits below record the earlier build.

## Launch and selection

```powershell
./profiles/motorstorm/run.ps1                     # hardware D3D12, normal startup
./profiles/motorstorm/run.ps1 -Renderer software  # software reference
./profiles/motorstorm/run.ps1 -Renderer auto      # software fallback if hardware is unavailable
```

`PSPRECOMP_MOTORSTORM_RENDERER=d3d12` selects hardware in diagnostic runs as well. Explicit `d3d12` fails with an explanation if initialization fails; `auto` reports a fallback. Hardware adapter selection prefers the high-performance DXGI adapter, requires rasterizer ordered views (ROVs), and excludes software/WARP adapters. The current Windows machine uses the NVIDIA GeForce RTX 5060 Laptop GPU.

## Implementation

The VCS reference was `profiles/vcs/host/ge_gpu_backend_dx12.cpp`, its `GeGpuDrawDescriptor`/`GeGpuHardwareTransform` contract, native GE frontend, direct swapchain presenter and `tools/dx12_ge_probe_main.cpp`. MotorStorm uses an independent backend in `host/motorstorm_gpu.cpp` and `motorstorm_gpu_shader.inc`; it does not inherit VCS-specific configuration, cloud/HDR postprocessing or its limited fixed-function blend variants.

- GE commands, vertex layouts, palette latching, morphing, skinning, lighting and texture-coordinate generation retain the verified MotorStorm frontend. Non-through positions reach the vertex shader in model space. World/view/projection multiplication, homogeneous clipping, viewport projection and fog run on the GPU. Matrix composition happens once per draw on the CPU.
- D3D12 rasterizes points, lines, triangle lists/strips/fans and sprite rectangles. A ROV pixel shader implements PSP packed framebuffer/depth writes, stencil stored in framebuffer alpha, alpha/color/depth tests, all six blend equations, independent RGB fixed factors, double-alpha factors, clear channel selection and bit write masks. Texture filtering retains four-bit PSP bilinear fractions and integer texture-function arithmetic.
- Default-heap framebuffer/depth resources stay resident throughout a GE submission. Unswizzled direct-color framebuffer feedback takes ordered GPU snapshots, including self-feedback; sampling a snapshot never races writes to its source. Paletted/swizzled or otherwise incompatible feedback uses an explicit synchronization boundary and the existing texture decoder. Texture resources have content keys, mip chains, bounded caches and fence-safe descriptor reuse.
- A mapped upload arena stages attributes, constants, textures and guest framebuffer updates. Resource transitions and UAV barriers order drawing/copying/sampling. Fences protect allocator reuse and readback. GE synchronization publishes packed pixels/depth to guest memory before callbacks and CPU access; block transfers synchronize before reading GPU output.
- The native window presents through a D3D12 flip-discard swapchain, with resizing and CPU-only framebuffer updates handled. GDI remains available for software rendering and early frames without a GPU target. Window shutdown releases GPU work before destroying the HWND and retains final rendering counters.

Microsoft documentation consulted through Context7: [resource barriers and fences](https://learn.microsoft.com/en-us/windows/win32/direct3d12/using-resource-barriers-to-synchronize-resource-states-in-direct3d-12), [rasterizer ordered views](https://learn.microsoft.com/en-us/windows/win32/direct3d12/rasterizer-order-views), and [shader resource bindings](https://learn.microsoft.com/en-us/windows/win32/direct3d12/resource-binding-in-hlsl).

## Verification

Build:

```powershell
cmake --build out/motorstorm --config Release --target MotorStormNative motorstorm_profile_tests motorstorm_gpu_tests
ctest --test-dir out/motorstorm -C Release --output-on-failure
out/motorstorm/bin/Release/motorstorm_profile_tests.exe --d3d12
out/motorstorm/bin/Release/motorstorm_gpu_tests.exe
./profiles/motorstorm/tools/validate-renderer.ps1 -Name d3d12-verified -Window
```

- All three standard CTest suites pass. The complete profile suite also passes with `--d3d12`, including hardware-rendered point/transform, bone/morph, lighting, CLUT, filtering, stencil, projected UV and shadow cases.
- `motorstorm_gpu_tests` compares all color/depth bytes against software for 524 cases spanning four framebuffer formats, blend factors/equations, stencil operations/tests, reversed depth, clear channels, alpha/color tests, bit masks and both culling directions. Same-list framebuffer feedback and transfer coherence, direct presentation and swapchain resize also pass, with GPU draws and zero software raster draws asserted.
- `out/motorstorm/d3d12/d3d12-verified/native.log` and 33 framebuffer captures prove normal startup through real saved-profile loading, readable menus/Festival selection, race countdown, acceleration/steering, pause at guest 78 s, resume at 81 s and continued racing. Splatter artwork and the corrected soft vehicle shadows remain. Exit 4 is the requested 2800-GE diagnostic limit, with zero scheduler deadlocks and no runtime fault.
- The live run rendered **1,253,506 GPU draws**, **919,745 hardware-transform draws**, **161,690,480 vertices**, **91,703 GPU feedback draws**, and **2,802 swapchain presents**, with **zero software raster draws**. There were 3,058 GE queue submissions and 201 feedback readbacks. Guest time 94.635 s completed in 73.069 s wall time. This is an end-to-end run, not a general FPS benchmark.
- The initial coherent implementation needed 100,411 submissions and 85,949 feedback readbacks for the same sequence. GPU feedback snapshots and native line rendering removed that bottleneck. Native-resolution capture examples: `frame_25.png` countdown, `frame_27.png` race, `frame_28.png` pause, `frame_33.png` continued gameplay; `montage.png` collects representative screens.

The executable alias `MotorStormNativePhase12.exe` is rebuilt from the same target as `MotorStormNative.exe`. To register the hardware suites with CTest on a suitable machine, configure `PSPRECOMP_MOTORSTORM_GPU_TESTS=ON`.

## Limits

This backend currently renders at PSP framebuffer resolution. Vertex decoding, morphing, skinning and lighting still run on the CPU; the GPU performs the camera transforms and rasterization. GE sync still reads back guest-visible framebuffer/depth writes for correctness. It does not claim full PSP pixel equivalence or add upscaling, MSAA, HDR or asynchronous guest-memory tracking. The optional `PSPRECOMP_MOTORSTORM_D3D12_DEBUG=1` requires the Windows Graphics Tools/debug layer, which is absent on this machine; validation here used real hardware readback and functional comparisons rather than that layer.
