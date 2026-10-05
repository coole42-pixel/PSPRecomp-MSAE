# MotorStorm: Vulkan renderer (Windows) and Android build — plan

Status (2026-10-05): phases 2 and 3 are done for Windows. See [the Vulkan
renderer](VULKAN_RENDERER.md). Its pixel path is tier A (fragment shader interlock),
and it matches or beats D3D12 on the race benchmark. The renderer was added as a
second backend behind `motorstorm_gpu.hpp` instead of the phase-1 split, and the
point geometry shader is still used (desktop only). Phases 4–8 (other pixel tiers,
platform layer, Android) are not started.

## 1. What the repo looks like today

### Renderer seam
- `host/motorstorm_gpu.hpp` is already API-neutral: `GpuDraw`, `GpuVertex`, `GpuTexture`, `GpuVertexJob` and about 30
  free functions (`gpu_submit`, `gpu_sync`, `gpu_end_list`, `gpu_present`, `gpu_capture`, feedback/transfer queries…).
  `motorstorm_ge.cpp`, `motorstorm_hle.cpp` and the tests talk only to that header; none include D3D12.
- `host/motorstorm_gpu.cpp` (3,200 lines, ~375 D3D12 references) is the only D3D12 backend. It mixes portable logic
  (surface tracking, texture cache and keys, readback/publish bookkeeping, feedback snapshots, upload arena
  sizing, post settings) with D3D12 calls. `gpu_present(…, void *window, …)` takes an HWND.
- `host/motorstorm_gpu.hlsl` (933 lines, 20 entry points) is compiled offline by `fxc` to SM 5.1 headers.

### How the pixel pipeline works (the main porting constraint)
The PSP framebuffer and depth buffer are **packed `uint` structured buffers written from the pixel shader through
rasterizer-ordered views** (`RasterizerOrderedStructuredBuffer<uint> colorTarget : u0`, `depthTarget : u1`).
Blending (all six equations, fixed factors, double alpha), depth/alpha/colour tests, stencil kept in alpha, and bit
write masks all run in shader code. No fixed-function blending or depth is used. This is what makes the output
byte-exact against the software renderer (524 byte-compare cases in `motorstorm_gpu_tests`).

- Vulkan has the same feature: `VK_EXT_fragment_shader_interlock`. DXC's SPIR-V backend maps ROVs to it: a ROV
  becomes the matching RW type, and `OpBegin/EndInvocationInterlockEXT` plus `PixelInterlockOrderedEXT` are added
  automatically (DXC `docs/SPIR-V.rst`, checked through Context7). So **the existing HLSL can compile to SPIR-V
  mostly as it is.**
- NVIDIA and Intel desktop drivers expose interlock. AMD support depends on the driver, so it has to be checked on
  real hardware. **Most Android GPUs (Mali, many Adreno) do not expose it.** That is the main Android risk. See §4.

Other shader features to map:
- `SV_ClipDistance0/1`: needs the `shaderClipDistance` feature.
- `PointGS` is a geometry shader. Geometry shaders are optional on mobile (missing on Mali), so it gets replaced
  with vertex-pulled point quads.
- 8 static samplers become immutable samplers. Root constants become push constants. Compute shaders port
  directly.

### Windows-only code outside the renderer
| Area | File | Today | Portable replacement |
|---|---|---|---|
| Window/UI thread, fullscreen, keyboard, GDI fallback | `motorstorm_window.cpp` | Win32 HWND | Keep Win32 on Windows; SDL3 window on Android |
| Audio | `motorstorm_audio.cpp` | WASAPI + MMCSS (avrt) | SDL3 audio stream or AAudio on Android |
| Frame pacing | `motorstorm_pacing.cpp` | waitable timers, `timeBeginPeriod` | `std::chrono` + `clock_nanosleep`; optional Android Frame Pacing (Swappy) |
| Texture packs (PNG) | `motorstorm_textures.cpp` | WIC | stb_image (header-only) |
| Controllers | `motorstorm_controller.cpp` | SDL3 + XInput fallback | SDL3 only (already supports Android) |
| Entry point/console | `main.cpp` | Win32 console, DPI | `SDL_main` on Android |
| Movies | `../vcs/host/vcs_media_decoder.cpp` | prebuilt x64 FFmpeg DLLs | arm64 FFmpeg `.so` built with only the needed decoders |
| Vendored SDL3 | `third_party/SDL3` | x64 `.dll/.lib` only | build SDL3 from source for Android (CMake + its Java glue) |
| Shader compiler | CMake | `fxc` (Windows SDK) | DXC with `-spirv` (Vulkan SDK) |
| Linker | CMake | `/STACK:64MB`, `/DELAYLOAD` | guest thread made with an explicit 64 MB pthread/SDL stack |

### Core runtime and generated code
- `src/` and `include/psprecomp/` are almost portable. They already have `__GNUC__/__clang__` branches.
- **Performance trap:** the AOT fast-path macros in `guest_memory.hpp` (`PSPRECOMP_AOT_OFFSET`, `_READ_OK`, …)
  exist only under `_MSC_VER`. Clang falls back to member calls. On Android (clang) those calls would happen on about
  a third of all translated instructions, so the macro path has to be enabled for clang as well.
- The 644 generated units are plain C++ (`goto`, `__builtin_bit_cast`) and assert a little-endian host, which arm64
  is, so they compile for aarch64. Expect long NDK build times. Keep the `/Ob0`-equivalent `-O2 -fno-inline`
  experiment open, because inlining hurt on MSVC.
- Guest memory is 32 MiB and there are no x86 intrinsics in core/host.

### Toolchain on this machine
- Present: Android SDK (platforms 34–37), NDK 27.0, 27.2 and 28.2, SDK CMake 3.22.1, JDK 25, LLVM, CMake.
- Missing: **Vulkan SDK** (DXC with SPIR-V, validation layers, `vulkaninfo`). Also, JDK 25 may be newer than the
  Android Gradle Plugin accepts, so a JDK 17/21 for Gradle may be needed. Check when the Gradle project is
  created.

## 2. Goals and non-goals
- **Goal A:** a Vulkan renderer on Windows, selected with `[graphics] renderer = vulkan`, that matches D3D12 byte
  for byte on the GPU test suite and gets close to its race performance. D3D12 stays the default. Both backends
  coexist.
- **Goal B:** an arm64 Android APK that runs MotorStorm on the Vulkan backend, with controller and touch input,
  audio and movies.
- Non-goals for now: HDR, Android x86, 32-bit ARM, OpenGL ES, bundling game data. The user supplies
  `EBOOT_DECRYPTED.BIN` and `disc0`. The shipped INI stays at the stock look (per the existing enhancement
  decisions).

## 3. Phases

### Phase 0: prerequisites and device facts (small)
1. Install the Vulkan SDK (DXC, validation layers, `vulkaninfo`, glslang).
2. Pick the target Android device(s). For each, record from `vulkaninfo`/gpuinfo:
   `fragmentShaderPixelInterlock`, `rasterizationOrderColorAttachmentAccess` (EXT/ARM),
   `fragmentStoresAndAtomics`, `shaderClipDistance`, `geometryShader`, `timelineSemaphore`, max storage buffer
   range, and BC/ASTC support. These facts decide which pixel tier (§4) Android uses.
3. Write a small `vk_probe` tool, like `tools/dx12_ge_probe_main.cpp` in VCS, that prints the same list on both
   platforms.

### Phase 1: renderer abstraction, no behaviour change (medium)
1. Split `motorstorm_gpu.cpp` into:
   - `gpu_common.{hpp,cpp}`: API-neutral parts (surface/target tracking, texture cache keys and eviction, publish
     reasons and counters, constant-block packing, post-settings plumbing, widescreen and output-size state).
   - `gpu_d3d12.cpp`: the D3D12 backend, behind an internal `GpuBackend` interface of virtual calls or a function
     table.
   - `motorstorm_gpu.cpp`: thin dispatch that keeps the public `motorstorm_gpu.hpp` unchanged, so the GE, HLE and
     tests are untouched.
2. Replace `void *window` with a small `PresentTarget` struct (HWND on Windows, `SDL_Window*`/`ANativeWindow*` on
   Android).
3. Extend `[graphics] renderer` to `d3d12 | vulkan | software | auto`, plus the existing env override
   `PSPRECOMP_MOTORSTORM_RENDERER`.
4. Gate: every existing test, plus `validate-renderer.ps1` and `bench-race.ps1`, gives identical results.

### Phase 2: shared shader source for SPIR-V (small to medium)
1. Keep one `motorstorm_gpu.hlsl`. Add `[[vk::binding(n, set)]]` and `[[vk::push_constant]]` annotations, or use
   DXC `-fvk-{b,t,u,s}-shift`, so one source serves both backends.
2. CMake step: DXC `-spirv -fspv-target-env=vulkan1.2 -O3` per entry point, generating
   `motorstorm_spv_<entry>.h`. It runs alongside the `fxc` step. Android builds run it on the host.
3. Replace `PointGS` with points expanded in `VertexCS`/the vertex shader, as two triangles per point. Use this
   path on D3D12 too, to keep one code path, and confirm it with the point test cases.
4. Make a variant of the pixel shader for each pixel tier (§4) with a define (`MS_PIXEL_INTERLOCK`,
   `MS_PIXEL_ATTACHMENT`, `MS_PIXEL_FIXED`).

### Phase 3: Windows Vulkan backend, interlock tier (large; the core of Goal A)
Libraries: **volk** (loader) and **Vulkan Memory Allocator**, both vendored and MIT-licensed. Vulkan 1.2 baseline
with timeline semaphores, synchronization2 and dynamic rendering (1.3 or the extension where available).

Port in this order. Each step is verified before the next:
1. Instance, device and queue selection. Prefer a discrete GPU, require interlock for this tier, and reject
   software ICDs like the D3D12 path rejects WARP. Win32 surface from the existing HWND. FIFO swapchain, mailbox
   when allowed. Present a cleared frame.
2. Descriptor layout that mirrors the D3D12 root signature (one bindless-style set for textures plus push
   constants). Upload arena as a persistently mapped host-visible ring. Timeline semaphore in place of
   `ID3D12Fence`. Command-buffer slots like `CommandSlot`.
3. Draw path: vertex/point/line pipelines, interlock pixel shader writing packed colour/depth storage buffers,
   scissor, clip distances. Gate: the `motorstorm_gpu_tests` byte compare passes with `--vulkan`.
4. Texture decode/mip compute (`DecodeCS`, `DecodeTargetCS`, `MipCS`), texture cache, CLUT, streaming textures,
   texture-pack replacement uploads.
5. Feedback snapshots, `gpu_transfer_from_target`, overlay composition, deferred readback, and `publish_readbacks`
   through host-visible readback buffers.
6. GPU vertex processing (`VertexCS`).
7. Present path: Expand/Resolve, the 1×–8× raster scale, FXAA/SSAA, the post chain (`PostResolveCS`, `DebandCS`,
   `PostPS`, …) on a separate queue when the device has one, timestamp queries for the post report, and
   `gpu_capture`/debug capture.
8. Validation-layer clean run, including synchronization validation. `validate-renderer.ps1 -Renderer vulkan` and
   `bench-race.ps1` A/B against D3D12.

Exit criteria: the 524 GPU byte-compare cases pass, a full race passes the validate-renderer run with zero software
draws, and race throughput is within about 10% of D3D12 on the RTX 5060.

### Phase 4: pixel tiers for GPUs without interlock (large; needed for most Android GPUs)
| Tier | Requirement | How it works | Accuracy |
|---|---|---|---|
| A: interlock | `fragmentShaderPixelInterlock` | Direct port of the ROV shader (Phase 3) | byte-exact |
| B: ordered attachments | `rasterizationOrderColorAttachmentAccess` (EXT or ARM) | Packed colour and depth as `R32_UINT` colour attachments, read with `subpassLoad` and written as outputs inside one render pass. Raster-order guarantees make it the tile-memory equivalent of ROV, and fast on tilers | byte-exact expected |
| C: fixed function | none | RGBA8 colour + D24S8/D32S8, Vulkan blend states (dual-source where present), alpha/colour test with `discard`, stencil-in-alpha tricks, approximations for blend modes Vulkan cannot express (the PPSSPP Vulkan backend is the reference design) | approximate |

- Tier B is the intended Android path. Phase 0 tells whether the target device has it.
- Tier C is a safety net. It needs its own known-differences list and visual A/B captures, not byte compares.
- Selection is automatic (A → B → C), with `[graphics] vulkan_pixel_path = auto|interlock|attachment|fixed` for
  testing.
- Tier B can also be tested on Windows (NVIDIA exposes the EXT), so it can be developed and byte-compared on this
  machine before any phone is involved.

### Phase 5: platform layer (medium)
1. Interfaces in `host/platform/`: window/surface, input, audio, timing, paths, image decode. The Win32
   implementations wrap the code that already exists. The Android implementations use SDL3.
2. Replace WIC with stb_image on both platforms, so the texture tests run anywhere.
3. Enable the AOT fast-path macros for clang (`guest_memory.hpp`, `runtime.hpp`). Benchmark clang-cl on Windows
   first to measure the effect without needing a phone.
4. Create the guest/emulation thread with an explicit 64 MB stack instead of relying on `/STACK`.
5. Make the remaining MSVC-isms in host code portable (`gmtime_s` is already guarded; audit `motorstorm_hle.cpp` and
   `motorstorm_bootstrap.cpp` while building with clang).
6. Gate: a **Linux or clang-cl build** of the core and host (minus Win32-only files) compiles warning-clean.

### Phase 6: Android app (large)
1. `profiles/motorstorm/android/`: Gradle project, AGP with `externalNativeBuild` pointing at the existing CMake,
   arm64-v8a only, minSdk 29 (Android 10, where 64-bit devices generally have Vulkan 1.1), targetSdk 36.
2. SDL3 built from source as part of the CMake build, plus its `SDLActivity` Java glue. The app is a thin
   `MotorStormActivity extends SDLActivity`.
3. FFmpeg for arm64 as `.so` files, built only with the decoders/demuxers the PMF movie path uses (LGPL, dynamic
   linking as on Windows). MediaCodec is an alternative if FFmpeg size or licensing becomes a problem.
4. Game data: on first launch, ask the user to choose their dump folder with the Storage Access Framework, then copy
   or point at it under the app-specific storage (`Android/data/<pkg>/files/PSP_DATA`). `motorstorm_bootstrap.cpp`
   already searches `PSP_DATA/EBOOT_DECRYPTED.BIN` and `PSP_DATA/disc0`, so only the base directory changes. The INI
   is written there from the template on first run. Saves go there too.
5. Lifecycle: surface lost on pause → pause the guest clock and audio and destroy the swapchain; on resume →
   recreate the swapchain and continue. Handle rotation (landscape only) and display cutouts.
6. Input: SDL3 gamepads (already supported) plus an on-screen touch overlay mapped to the PSP pad. The overlay is
   drawn by the present pass on top of the game image.
7. Audio: SDL3 audio stream (AAudio underneath) with the existing audio-reserve frame pacing logic.

### Phase 7: Android performance (ongoing)
- The CPU will likely be the bottleneck (AOT code on ARM, single-thread speed). Measure guest-time/wall-time like
  the existing race bench.
- Defaults for Android: 1× or 2× resolution, FXAA off, `[enhancements]` off, deferred readback on (readbacks stall
  tiled GPUs hard), texture packs off.
- Keep render passes long on tilers. Tier B avoids load/store round-trips. Use `LAZILY_ALLOCATED` memory for
  transient attachments.
- Consider `-O2` vs `-O3` and inlining levels for the generated corpus on clang. PGO is a later option.
- Thermal throttling: test 10+ minute races, not short benches.

### Phase 8: tests and CI
- `motorstorm_gpu_tests --vulkan` (opt-in `PSPRECOMP_MOTORSTORM_VULKAN_TESTS`, like the existing D3D12 hardware
  option). Add per-tier runs: `--vulkan --pixel-path=attachment`.
- `validate-renderer.ps1 -Renderer vulkan` and `bench-compare.ps1` for D3D12 vs Vulkan.
- Android: an `adb`-driven smoke script (install, push test data, launch, collect logcat and captured frames) that
  mirrors `run.ps1`.

## 4. Risks
| Risk | Impact | Mitigation |
|---|---|---|
| Target phone has neither interlock nor ordered-attachment access | Only tier C, with approximate blending | Check in Phase 0 before Android work starts; choose the device accordingly |
| Generated AOT code too slow on ARM | Under full speed | Clang fast-path macros (Phase 5.3), compiler-flag sweep, frame skip as a last resort |
| Per-list GPU→guest readbacks on tilers | Stalls | Deferred readback, feedback kept on the GPU, measure publish waits (`GpuReport::publishes`) |
| AMD desktop without interlock | Windows Vulkan falls back to tier B/C | D3D12 stays the default on Windows |
| `motorstorm_gpu.cpp` split regresses D3D12 | Visual or perf regressions | Phase 1 is a pure refactor gated by byte compares and benches |
| NDK compile time and memory for 644 units | Slow iteration | Ninja with a job cap like `PSPRECOMP_MOTORSTORM_MP_JOBS`, ccache |
| Gradle/AGP vs JDK 25 | Build fails | Pin JDK 17/21 for Gradle |

## 5. Suggested order and rough size
1. Phase 0 (days)
2. Phase 1 (about 1 week)
3. Phase 2 (a few days)
4. Phase 3 (several weeks): **Windows Vulkan is usable here**
5. Phase 4, tier B (1–2 weeks, developed and byte-checked on Windows)
6. Phase 5 (about 1 week, can overlap Phase 3)
7. Phase 6 (2–3 weeks)
8. Phase 7 (ongoing)
9. Phase 4, tier C only if a target device needs it.

## 6. Open decisions
- Which Android device(s) are the target? This decides tier B vs C.
- Should Vulkan become the default on Windows eventually, or stay opt-in?
- Android input: controller-only first, or the touch overlay from day one?
- Android game-data flow: copy the dump into app storage, or read it in place through SAF?
