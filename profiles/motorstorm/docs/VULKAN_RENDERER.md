# MotorStorm Vulkan renderer (Windows)

Implemented and verified 2026-10-05. Phase 3 of the [Vulkan/Android plan](VULKAN_ANDROID_PLAN.md).

The Vulkan renderer is a second backend for the same GE renderer contract as
[the D3D12 renderer](PHASE12_D3D12.md) (`host/motorstorm_gpu.hpp`). It shares the
D3D12 shaders, produces the same packed PSP pixels, and costs less CPU per draw.
D3D12 stays the default.

## Use

```powershell
./profiles/motorstorm/run.ps1 -Renderer vulkan        # or [graphics] renderer = vulkan in the INI
./profiles/motorstorm/tools/bench-race.ps1 -Name vk -FixedClock -Renderer vulkan
```

- Requirements: the Vulkan loader (`vulkan-1.dll`, installed with every GPU driver)
  and a Vulkan 1.3 GPU with push descriptors and pixel-ordered fragment shader
  interlock (`VK_EXT_fragment_shader_interlock`, the ROV equivalent). NVIDIA and Intel
  drivers expose it; AMD depends on the driver. `renderer = vulkan` fails with the
  reason if no GPU qualifies (the log lists every rejected adapter).
- Every `[graphics]` option works as on D3D12: resolution 1×–8×, None/FXAA/SSAA2x/SSAA4x,
  `texture_filtering`, widescreen, vsync, texture packs and the race `[enhancements]`.
  Exclusive fullscreen is not implemented; `fullscreen_mode = exclusive` falls back to
  borderless, with a log line.
- Diagnostics (environment):
  - `PSPRECOMP_MOTORSTORM_VK_VALIDATION=1` enables `VK_LAYER_KHRONOS_validation` when it
    is installed (Vulkan SDK). Messages go to the console and log.
  - `PSPRECOMP_MOTORSTORM_VK_DRAW_BARRIERS=1` separates every GE draw with a barrier,
    like D3D12 does (see below). It is for A/B checks only.
  - `PSPRECOMP_MOTORSTORM_GPU_CHUNK_DRAWS` and `PSPRECOMP_MOTORSTORM_GPU_COMMAND_SLOTS`
    tune submission exactly as on D3D12.

## Build

`PSPRECOMP_MOTORSTORM_VULKAN` (CMake, default ON) builds the backend.
`motorstorm_gpu.hlsl` is compiled twice:
- by fxc to DXBC for D3D12 (unchanged);
- by DXC to SPIR-V (`motorstorm_spirv_<entry>.h`).

The Windows SDK's dxc has no SPIR-V code generation. CMake therefore uses
`$VULKAN_SDK/Bin/dxc.exe`, or `MOTORSTORM_DXC`, or by default downloads the
official DXC v1.9.2609 release (SHA-256 pinned) into `<build>/_deps`. No Vulkan SDK
is needed to build or run.

Vendored headers: [Vulkan headers 1.4.321](../third_party/vulkan/README.md) and
[Vulkan Memory Allocator 3.4.0](../third_party/vma/README.md), both permissive and
kept beside the profile. The loader is runtime-loaded (`VK_NO_PROTOTYPES`).

## Design

| D3D12 renderer | Vulkan renderer |
| --- | --- |
| Root signature: CBV, root UAV/SRV views, two SRV tables | Set 0 is a push-descriptor set (`VK_KHR_push_descriptor`) written per draw or dispatch. Same register-to-binding layout via `[[vk::binding]]` in the HLSL. |
| 8 static samplers | Set 1: 8 immutable samplers, bound once per command buffer |
| `RasterizerOrderedStructuredBuffer` colour/depth targets | `globallycoherent RWStructuredBuffer` plus one explicit `OpBegin/EndInvocationInterlockEXT` pair (`PixelInterlockOrderedEXT`) around the packed read-modify-write |
| UAV barrier after **every** draw | Consecutive draws share one attachment-less dynamic rendering pass with **no** barriers. Interlock orders the per-pixel critical sections across draws in primitive order; coherent accesses make each draw's writes visible to the next. |
| Resource-state transitions around copies/compute | One full memory barrier before any non-draw command that follows a write; image layout barriers for textures |
| `ID3D12Fence` per queue | Timeline semaphores (GE and present) |
| Command allocator/list ring, VertexCS pre-list | Command pool per slot with a main and a vertex pre-pass command buffer, submitted together |
| Present queue + async compute post queue, presenter thread | Second queue of the graphics family (shared with a mutex on single-queue devices); post chain recorded ahead of the present draw; same presenter thread and snapshot ring |
| Flip-discard swapchain, vsync / tearing | FIFO when vsync is on; IMMEDIATE (else MAILBOX) when off. Per-image present semaphores; acquire semaphores reused only after their submission completed. |

Shader changes (shared by both backends):
- `PS` runs every target-independent test first: bounds, culling, shading, alpha test,
  fog, colour test. The packed read-modify-write is then `pixelUpdate()`, called once
  per invocation between the interlock begin and end. Every invocation reaches the
  pair in uniform control flow, as SPIR-V requires; a failed test skips the update
  instead of returning. The fxc bytecode semantics are unchanged.
- DXC's automatic ROV lowering is not used: it scattered begin/end pairs over the early
  returns and omitted the capability.
- Derivatives are written `ddx_coarse`/`ddy_coarse`, which is what fxc already emitted
  for `ddx`/`ddy` (D3D12 PS bytecode verified byte-identical).
- SPIR-V build flags: `-HV 2018` (fxc's vector `?:` semantics), `-fvk-invert-y` (VS,
  PointGS, PresentVS), `-fvk-use-dx-position-w` (PS). Points use `VSPoint` (no flip)
  because `PointGS` flips.
- `MipCS` no longer divides by a zero alpha sum on the unused side of a vector `?:`.
  That is harmless on D3D but undefined behaviour in SPIR-V; it is the bug described
  under Verification.

## Verification

All on the NVIDIA GeForce RTX 5060 Laptop GPU.

- **CTest, 15 suites pass**, including the new `motorstorm_gpu_vulkan_tests`,
  `motorstorm_profile_vulkan_tests`, `motorstorm_window_vulkan_tests` and
  `motorstorm_gpu_backend_parity`. Configure with `PSPRECOMP_MOTORSTORM_GPU_TESTS=ON`
  (`build.ps1 -GpuTests`).
- `motorstorm_gpu_tests --vulkan`: all 524 pixel-exact blend/stencil/depth/mask/clear
  cases (both cull directions) pass. So do:
  - GPU texture-decode parity and 9216 bilinear fraction/wrap/clamp comparisons;
  - feedback and transfer coherence, 32-bit colour, post/HUD/soft-particle pixels;
  - every resolution × AA mode, swapchain presentation and resize.
- `motorstorm_gpu_tests --compare-backends`: 64 scenes of random sub-pixel Gouraud,
  bilinear, mipmapped, alpha-tested and blended triangles render to **identical guest
  pixels** on D3D12 and Vulkan, with PSP and enhanced filtering (0 of 65536 pixels differ).
- New check `enhanced_mip_texels` (both backends): enhanced filtering samples the
  alpha-weighted GPU mip chain exactly.
- **Race frames.** Fixed-clock benchmark window with frame dumps (`FRAME_DUMP*`
  recipe in [the race benchmark page](PERFORMANCE_RACE_BENCH.md)). Same guest frames on
  both renderers: identical draw, vertex, feedback-draw and publish counts, and zero
  software draws.
  - With `texture_filtering = psp`, about 0.2% of pixels differ (177–293 of 130,560,
    max delta 30). These are triangle-edge pixels from last-bit vertex rounding between
    the two shader compilers. D3D12 alone is deterministic run to run.
  - With `enhanced` filtering or texture packs, hardware anisotropic `SampleGrad`
    results differ by a few levels on detailed textures. That filtering is
    implementation-defined and documented as not PSP exact.
- **Bug found by this comparison and fixed.** With original textures and enhanced
  filtering, Vulkan drew the transparent parts of spectator billboards as white boxes
  and car shadows as black quads. Cause: the `MipCS` division by zero above (the
  NVIDIA SPIR-V compiler exploited the undefined behaviour and produced opaque
  transparent texels). Texture packs had hidden it in normal play.
- Windowed run (`validate-renderer.ps1 -Renderer vulkan -Window`): boot, movies and menus
  through 2800 GE lists with 2801 presents, 0 skipped. Captures match D3D12 apart from
  animation phase (that tool does not fix the guest clock).
- `PSPRECOMP_MOTORSTORM_VK_DRAW_BARRIERS=1` gives byte-identical race frames to the
  barrier-free default. That confirms the interlock ordering across draws.

## Performance

`bench-race.ps1 -FixedClock` (the 25-second Festival race window, 750 guest frames,
throughput mode, audio off). Five interleaved runs per renderer, alternating order.
Values are medians:

| Setting | Renderer | Wall ms | GE submit ms | GPU fence wait ms | Frame p99 ms |
| --- | --- | --- | --- | --- | --- |
| 1×, None | D3D12 | 5371 | 2122 | 159 | 9.1 |
| 1×, None | Vulkan | 5369 | 2013 | 188 | 9.2 |
| 4×, FXAA | D3D12 | 5928 | 2917 | 1257 | 11.9 |
| 4×, FXAA | Vulkan | **5567 (−6%)** | **2050 (−30%)** | 1128 | **9.4** |

- At 1× both renderers are limited by guest CPU emulation, so wall time ties. Vulkan
  still spends about 10% less CPU in the renderer: recording −30%, prepare −10%,
  readback −15%. Total process CPU time was identical (about 20 s) in a separate probe.
- At 4×/FXAA the GPU work matters. The barrier-free draw pass and cheaper submission
  make Vulkan 6% faster, with a much better p99.

## Limits and follow-ups

- Exclusive fullscreen and the D3D12 debug-layer switch have no Vulkan equivalent
  here; borderless fullscreen and `VK_VALIDATION` cover them.
- GPUs without fragment shader interlock (most Android GPUs, some AMD drivers) are
  rejected. The attachment-based and fixed-function pixel tiers are phase 4 of the
  [plan](VULKAN_ANDROID_PLAN.md).
- The present path takes the post chain on the present queue instead of a separate
  async compute queue. Post timings are reported as on D3D12 when profiling is on.
- No pipeline cache is needed: there are 4 GE pipelines, 2 presentation pipelines and
  13 compute pipelines, all created at startup.
