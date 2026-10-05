# HANDOFF — MotorStorm Vulkan renderer session (2026-10-05)

Read this once before touching the MotorStorm renderer. It assumes no access to the
previous conversation. Labels used: **[confirmed]** verified in this session by
running code or reading source; **[assumption]** believed but not verified;
**[hypothesis]** an idea to test; **[unfinished]** not done.

---

## 1. What we are doing

- **Project:** PSPRecomp, a static recompiler for PSP games, with the profile
  *MotorStorm: Arctic Edge* (`profiles/motorstorm`). The game runs natively on
  Windows: AOT-generated C++ for the guest code, plus an HLE host and a GE
  (PSP GPU) renderer.
- **Overall user goal:** a Vulkan renderer and, later, an Android build.
- **Session goal (set with `/goal`):** "use context7 and ppsspp for reference knowledge
  (`C:\Users\Admin\Documents\examples\ppsspp`) and make a windows vulkan renderer
  giving similar or more performance than d3d12 first."
- **Result:** **[confirmed]** the goal is achieved. A working Windows Vulkan backend
  matches D3D12 at 1× and is about 6% faster at 4×/FXAA. All tests pass.
- **Repo and branch:** `C:\Users\Admin\Documents\PSPRecomp`, branch
  `motorstorm/60fps-performance`, HEAD `ee82dbf` (controller input commit). Remote fork:
  `https://github.com/coole42-pixel/PSPRecomp-MSAE`.
- **Machine [confirmed]:**
  - 13th Gen Intel Core i7-13645HX, 15.7 GB RAM.
  - NVIDIA GeForce RTX 5060 Laptop GPU.
  - Windows 11 Pro 10.0.28000.
  - VS 2022 (MSBuild 17.14), CMake.
  - Android SDK at `C:\Users\Admin\AppData\Local\Android\Sdk`: NDK 27.0.12077973,
    27.2.12479018 and 28.2.13676358; platforms 34–37; SDK CMake 3.22.1.
  - JDK 25 (may be too new for the Android Gradle Plugin).
  - No Vulkan SDK installed.

## 2. Status of the work tree

All session work is committed locally as one commit on `motorstorm/60fps-performance`
("MotorStorm: Vulkan renderer for Windows", parent `ee82dbf`). It is **not pushed**;
do not push unless the user asks. The user's own installed INI
(`out/motorstorm/bin/Release/MotorStormNative.ini`) was **not** modified and must never
be edited by an agent. Only advise changes to it.

Files in that commit (status before committing):
```
 M profiles/motorstorm/CMakeLists.txt
 M profiles/motorstorm/README.md
 M profiles/motorstorm/config/motorstorm.ini          (comments only; default renderer still d3d12)
 M profiles/motorstorm/host/motorstorm_config.cpp     (accepts renderer = vulkan)
 M profiles/motorstorm/host/motorstorm_gpu.cpp        (dispatch to Vulkan; GpuReport api)
 M profiles/motorstorm/host/motorstorm_gpu.hlsl       (shared shader changes, see §4)
 M profiles/motorstorm/host/motorstorm_gpu.hpp        (GpuReport::api field)
 M profiles/motorstorm/host/motorstorm_hle.cpp        (summary line prints gpu.api)
 M profiles/motorstorm/run.ps1, tools/bench-race.ps1, tools/validate-renderer.ps1 (ValidateSet += vulkan)
 M profiles/motorstorm/tests/motorstorm_gpu_tests.cpp (--vulkan, --compare-backends, mip check)
 M profiles/motorstorm/tests/motorstorm_profile_tests.cpp (--vulkan)
 M profiles/motorstorm/tests/motorstorm_window_tests.cpp  (--vulkan)
?? profiles/motorstorm/docs/VULKAN_ANDROID_PLAN.md   (plan; status line updated)
?? profiles/motorstorm/docs/VULKAN_RENDERER.md       (design/verification/benchmarks doc)
?? profiles/motorstorm/host/motorstorm_gpu_vulkan.cpp / .hpp  (the backend, about 3,300 lines)
?? profiles/motorstorm/host/motorstorm_vma.cpp       (VMA implementation unit)
?? profiles/motorstorm/host/motorstorm_vulkan_api.hpp (runtime-loaded Vulkan function table)
?? profiles/motorstorm/third_party/vulkan/  (Vulkan headers 1.4.321 + README)
?? profiles/motorstorm/third_party/vma/     (vk_mem_alloc.h 3.4.0 + README)
```
Repository files use LF in the index (`git ls-files --eol` showed `i/lf w/lf`). Keep LF.

## 3. What was done, in order

1. **Analysed the repo and wrote the plan** at `profiles/motorstorm/docs/VULKAN_ANDROID_PLAN.md`:
   phases 0–8, pixel tiers A/B/C, Android platform layer, risks and open decisions.
   **[unfinished]** The plan's open decisions were never answered: target Android
   phone, whether Vulkan should become the Windows default, touch overlay vs
   controller-only, Android game-data flow.
2. **Implemented the Windows Vulkan backend** (plan phases 2–3):
   - CMake fetches DXC.
   - The HLSL is annotated for SPIR-V.
   - A new backend mirrors the D3D12 one function by function.
   - Dispatch goes through the existing public `gpu_*` API.
3. **Tests added and passed:**
   - All 524 pixel-exact cases on Vulkan.
   - Profile and window suites on Vulkan.
   - A new cross-backend parity test.
   - A new enhanced-filtering mip check.
4. **Benchmarked** with interleaved fixed-clock race runs (results in §6).
5. **Found and fixed a real shader bug** (MipCS undefined behaviour on SPIR-V). It was
   discovered by comparing race frames with texture packs off (§5).
6. **Wrote docs:** `docs/VULKAN_RENDERER.md`, README and INI notes, the plan status line,
   and third-party READMEs.
7. **Analysed the user's research reports:**
   - `C:\Users\Admin\Documents\examples\PSPRecomp_MSAE_Research.md` (accuracy + Vulkan
     research brief).
   - `C:\Users\Admin\Downloads\deep-research-report.md` (performance report; analysis in §8).

## 4. Vulkan renderer design (as built) [confirmed]

- **Selection:**
  - `[graphics] renderer = vulkan`, or `PSPRECOMP_MOTORSTORM_RENDERER=vulkan`, or
    `run.ps1 -Renderer vulkan`.
  - `gpu_initialize()` in `motorstorm_gpu.cpp` sets `use_vulkan`. Every public `gpu_*`
    function then routes through `MOTORSTORM_VULKAN_ROUTE(...)` to
    `motorstorm::vulkan::*`.
  - Shared setters (racing, deferred readback, publish guard, output size, guest
    widescreen) are forwarded with `MOTORSTORM_VULKAN_FORWARD`.
  - `gpu_shutdown(false)` keeps `use_vulkan` so the final `gpu_report()` still shows the
    Vulkan counters. `gpu_shutdown(true)` resets it.
  - `GpuReport::api` is "D3D12" or "Vulkan"; the HLE exit summary prints it.
- **Requirements (device selection rejects others and logs why):**
  - Vulkan 1.3; `VK_KHR_swapchain`, `VK_KHR_push_descriptor`,
    `VK_EXT_fragment_shader_interlock` (`fragmentShaderPixelInterlock`).
  - Features: `fragmentStoresAndAtomics`, `shaderClipDistance`, `geometryShader`,
    `timelineSemaphore`, `dynamicRendering`.
  - Optional: `VK_KHR/EXT_line_rasterization` (Bresenham lines = D3D aliased lines),
    `depthClamp`, `samplerAnisotropy`, `textureCompressionBC`.
- **Loader:** `vulkan-1.dll` is loaded at runtime (`VK_NO_PROTOTYPES`); functions are
  listed by the X-macros in `motorstorm_vulkan_api.hpp`. VMA gets its functions through
  `vkGetInstanceProcAddr`/`vkGetDeviceProcAddr` (`motorstorm_vma.cpp`).
- **Bindings:**
  - Set 0 is a **push-descriptor** set written per draw or dispatch, standing in for the
    D3D12 root views and tables:
    0 = b0 cbuffer `DrawState` (UBO, `sizeof(Constants)` = 1248),
    1 = u0 colorTarget, 2 = u1 depthTarget, 3 = t0 textureImage,
    4 = t1 presentColor, 5 = t2 feedbackImage, 6 = u2 computeOutput,
    7 = t3 replacementImage, 8 = t5 depthSnapshot.
  - Set 1 holds 8 immutable samplers (s0–s3 bilinear wrap/clamp combinations; s4–s7 the
    same with 8× anisotropy).
  - The HLSL uses `VK_BIND(slot, group)` macros, active only under `__spirv__`.
- **Draws:**
  - Consecutive GE draws share one **attachment-less dynamic rendering pass with no
    barriers between draws**. Ordering comes from pixel-ordered fragment-shader
    interlock plus `globallycoherent` target buffers.
  - Any non-draw command ends the pass and emits one full memory barrier if earlier
    commands wrote memory (`outside()`, `wrote()`, `image_layout()`).
  - D3D12 instead uses a UAV barrier after every draw. That difference is the main
    performance win.
  - `PSPRECOMP_MOTORSTORM_VK_DRAW_BARRIERS=1` forces a barrier per draw for A/B checks.
- **Synchronisation:**
  - Timeline semaphores for the GE queue and present queue.
  - A command pool per chunk slot, with a main command buffer plus a VertexCS pre-pass
    buffer, submitted together.
  - Upload arena: 64 MiB, persistently mapped. Allocation alignment is at least the
    storage/uniform offset alignment.
  - Transient buffers and images are freed only when `completed >= fence_value`.
- **Presentation:**
  - Second queue of the graphics family. On a single-queue device both threads share
    it under a mutex.
  - Presenter thread as on D3D12. FIFO when vsync is on; IMMEDIATE, else MAILBOX, when off.
  - Per-image render-done semaphores; acquire semaphores reused only after their
    submission completes.
  - Minimized windows are handled (zero `maxImageExtent`, as PPSSPP does).
  - The post chain is recorded on the present command buffer (no separate async
    compute queue).
  - Exclusive fullscreen is **not** implemented; it falls back to borderless with a log line.
- **Diagnostics:**
  - `PSPRECOMP_MOTORSTORM_VK_VALIDATION=1` enables the validation layer if installed
    (it is not installed on this machine).
  - `PSPRECOMP_MOTORSTORM_GPU_CHUNK_DRAWS` and `PSPRECOMP_MOTORSTORM_GPU_COMMAND_SLOTS`
    work as on D3D12.
- **Build:**
  - `PSPRECOMP_MOTORSTORM_VULKAN` (default ON).
  - DXC: `$VULKAN_SDK/Bin/dxc.exe`, else `MOTORSTORM_DXC`, else download
    `https://github.com/microsoft/DirectXShaderCompiler/releases/download/v1.9.2609/dxc_2026_09_29.zip`
    (SHA-256 `ad31b1fc8443175d204f77a611fdb3ef2ec42759bdc2f1167368de24a4a7e7f1`) into
    `<build>/_deps/dxc-v1.9.2609`.
  - Headers `motorstorm_spirv_<name>.h` with arrays `g_motorstorm_spirv_<name>`, built
    with `-spirv -HV 2018 -fspv-target-env=vulkan1.3 -O3`. Per-entry flags:
    `-fvk-invert-y` for VS, PointGS and PresentVS; `-fvk-use-dx-position-w` for PS;
    `VSPoint` is VS **without** invert-y, for the point pipeline, because PointGS flips.
  - Vulkan include paths and `MOTORSTORM_VULKAN=1` are applied **only to the renderer
    source files** (`set_property(SOURCE ...)`), never target-wide (see §7).
- **Shared HLSL changes (affect D3D12 too, verified safe):**
  - `PS` was split. Target-independent tests run first and set a `live` flag. Then
    `PS_INTERLOCK_BEGIN; if(live) pixelUpdate(...); PS_INTERLOCK_END;`. Every invocation
    hits begin/end exactly once, in uniform control flow.
  - Under fxc these macros are empty and the targets are ROVs; under SPIR-V the targets
    are `globallycoherent RWStructuredBuffer` with explicit interlock instructions
    (opcodes 5364/5365, capability 5378, execution mode 5366).
  - The macros must be **object-like** (`#define PS_INTERLOCK_BEGIN ...`): fxc rejects
    empty-parameter function-like macros.
  - `ddx`/`ddy` became `ddx_coarse`/`ddy_coarse`. D3D12 PS bytecode was verified
    byte-identical, because fxc already emitted the coarse instructions.
  - MipCS divides by `max(alpha,1u)` (bug fix, §5).
- **Docs:** `profiles/motorstorm/docs/VULKAN_RENDERER.md` has the full design table,
  verification and benchmarks.

## 5. Failures, bugs and dead ends (do not repeat)

- **Windows SDK `dxc.exe` has no SPIR-V code generation** ("SPIR-V CodeGen not
  available"). Use the GitHub release or the Vulkan SDK.
- **The DXC macro-parameter clash:** `#define VK_BIND(binding, set) [[vk::binding(binding,set)]]`
  substitutes the parameter inside `vk::binding`. Parameters were renamed `slot`, `group`.
- **DXC with the newer HLSL version** rejects vector `?:` ("condition ... must be
  scalar"). Use `-HV 2018`.
- **DXC's automatic ROV → interlock lowering is broken for this shader.** It scattered
  End/Begin pairs around early returns and omitted the capability. The SPIR-V validator
  failed with "EndInvocationInterlockEXT requires ... capability".
- **`discard` before the explicit interlock also fails.** DXC inserts End before each
  OpKill, ahead of Begin. The fix is the `live`-flag structure.
- **Target-wide compile definitions and include dirs triggered a full rebuild** of the
  644-unit generated corpus, taking tens of minutes. They are now source-scoped. If a
  corpus rebuild starts unexpectedly, check for target-wide flags.
- **The MipCS bug.**
  - Code: `uint3 rgb = alpha ? (weighted+alpha/2)/alpha : (plain+2)/4;` evaluates both
    sides, so `alpha == 0` is an integer division by zero. D3D tolerates it; it is
    undefined in SPIR-V.
  - NVIDIA's Vulkan compiler produced opaque white (`FFFFFFFF`) for fully transparent
    mip blocks instead of `00FFFFFF`.
  - Visible effect with `texture_filtering = enhanced` and original textures: spectator
    billboards drawn as white boxes, car shadows as black quads.
  - Texture packs (`[textures] replace = true`) hid it, because replacements cover those
    textures.
  - Fixed with `max(alpha,1u)`. Regression-tested by `enhanced_mip_texels` in
    `motorstorm_gpu_tests`.
- **The `precise` vertex-shader experiment was reverted.**
  - Change tried: precise dot products, plus CPU-computed `2/width` and `2/height` in a
    new `ndc` constant, which grew Constants to 1264 bytes.
  - It reduced PSP-filter race differences from about 177–293 to 34–104 pixels per frame
    but did not eliminate them.
  - It was reverted to keep D3D12's math and constants layout unchanged.
  - Residual differences are last-bit vertex rounding between fxc and DXC/driver
    compilers at triangle edges. Accepted as documented.
- **Disabling anisotropy in Vulkan did not change the enhanced-mode differences**, so the
  sampler was ruled out while chasing the MipCS bug.
- **The software renderer is not a usable frame oracle in the race bench.** Its frames
  land on different content (about 95% of pixels differ for both GPU backends equally).
- **Heredoc gotcha in this environment:** in the Bash tool, `\n` inside heredoc'd
  Python ended up as real newlines in C++ string literals and broke compilation. Use the
  Edit tool for C/C++ string literals.
- **MSBuild parallel flag:** `/m:4` through Git Bash gets path-mangled
  (`MSB1008: Only one project can be specified`). Use `cmake --build ... --parallel 4`.

## 6. Verification evidence and results [confirmed]

- **CTest:** 15/15 pass (`ctest --test-dir out/motorstorm -C Release`). Includes
  `motorstorm_gpu_tests`, `motorstorm_gpu_vulkan_tests`, `motorstorm_gpu_backend_parity`,
  `motorstorm_profile_vulkan_tests`, `motorstorm_window_vulkan_tests` and the D3D12
  profile/window suites. Requires `PSPRECOMP_MOTORSTORM_GPU_TESTS=ON` (already on in
  `out/motorstorm`; `build.ps1 -GpuTests` sets it).
- **`motorstorm_gpu_tests --vulkan`:**
  - 524 pixel-exact blend/stencil/depth/mask/clear cases, both cull directions.
  - Decode parity; 9,216 bilinear fraction checks.
  - Feedback/transfer coherence, post/HUD/soft-particle pixels.
  - All resolutions 1/2/3/4/8 × AA none/fxaa/ssaa2x/ssaa4x.
  - Swapchain presentation and resize.
  - Enhanced mip check: 0 of 196 texels wrong.
- **`motorstorm_gpu_tests --compare-backends`:** 64 random sub-pixel
  Gouraud/textured/mipmapped/alpha-tested/blended scenes. D3D12 vs Vulkan: **0 of 65,536
  pixels differ** with PSP filtering and with enhanced filtering.
- **Race frame parity** (fixed clock, frame dumps, texture packs off):
  - PSP filtering: 177–293 of 130,560 pixels differ (max delta 30), edge pixels only.
  - Enhanced filtering or packs: speckle differences from hardware anisotropic
    `SampleGrad`, which is implementation-defined and documented as not PSP-exact.
  - D3D12 vs D3D12 is deterministic run to run (one small region in a software-path frame aside).
  - Per-draw barriers forced on Vulkan gave **byte-identical** frames to the default,
    confirming the cross-draw interlock ordering assumption.
- **Windowed run:** `validate-renderer.ps1 -Renderer vulkan -Window` reached 2,800 GE
  lists with exit 4 (the intended stop), 2,801 presents and 0 skipped. Images were
  visually equal to D3D12; differences were animation phase only, because that tool
  does not fix the clock.
- **Final benchmark** (`bench-race.ps1 -FixedClock`, 25 s race window, 750 frames,
  audio off, 5 interleaved runs, medians):

| Setting | Renderer | Wall ms | ge_submit ms | gpu_fence ms | p99 ms |
|---|---|---|---|---|---|
| 1×, None | D3D12 | 5371 | 2122 | 159 | 9.1 |
| 1×, None | Vulkan | 5369 | 2013 | 188 | 9.2 |
| 4×, FXAA | D3D12 | 5928 | 2917 | 1257 | 11.9 |
| 4×, FXAA | Vulkan | 5567 | 2050 | 1128 | 9.4 |

  - At 1× both renderers are guest-CPU bound; total process CPU time was equal (about 20 s).
  - Laptop run-to-run noise is about ±300 ms on wall time. Always interleave runs and
    use medians.
- **Where time goes at 1× on D3D12** (one window of 5,049 ms):
  - Guest CPU ("other") about 2,900 ms (57%).
  - ge_submit 1,993 ms (gpu_prepare 672, gpu_record 284, texture 373).
  - gpu_readback 370 ms.
  - Publishes: 4,133, all at GE-list start; **0 triggered by CPU VRAM access**.
    Publish waits 1,338 times, about 467–498 ms.

## 7. Important facts, constraints and decisions

- **D3D12 stays the default renderer**, on purpose; the user never asked to switch.
- **No barriers between Vulkan draws** is a deliberate design decision, validated by A/B.
  Keep the env switch for regressions.
- **Provenance policy:** `docs/SOURCE_PROVENANCE.md` applies. PPSSPP is GPL; it was used
  only as a behavioural reference (e.g. minimized-window handling). No PPSSPP code was
  copied. Only the Khronos headers (Apache-2.0/MIT) and AMD VMA (MIT) were vendored
  from its `ext/` folder, with READMEs.
- **Memory/user preferences** from the auto-memory files: the shipped INI keeps the stock
  look (4×, FXAA, `[enhancements]` off); new effects stay off by default; verify visuals
  with captures, not only unit tests.
- **Shipped INI default** is `texture_filtering = psp`. The user's installed INI uses
  `texture_filtering = enhanced`, `resolution = 4`, `antialiasing = FXAA` and
  `[textures] replace = true`.
- **Benchmark recipe** (equal guest work per build):
  - Throughput: `powershell -File profiles/motorstorm/tools/bench-race.ps1 -Name X -FixedClock -Renderer vulkan|d3d12 [-Resolution 4 -Antialiasing FXAA]`.
  - Reports go to `out/motorstorm/bench/X.bench.txt`.
  - Frame equality: set `PSPRECOMP_MOTORSTORM_FRAME_DUMP=1`, `..._DUMP_AFTER_GE=3400`,
    `..._FRAME_DUMP_EVERY=250`, `..._FRAME_DUMP_COUNT=3`, `..._FRAME_DUMP_BOTH=1`,
    `..._FRAME_DUMP_DIR=<dir>`, then compare `frame_N_gpu.ppm`.
  - Use `PSPRECOMP_MOTORSTORM_TEXTURE_REPLACE=0` for the exact baseline.
  - Helper scripts live in the session scratchpad (`eq.ps1`, `vkonly.ps1`,
    `cpu-probe.ps1`) and may not survive. Recreate them from this recipe.
- **Useful env switches:** `PSPRECOMP_MOTORSTORM_GPU_VERTICES=0` (CPU vertex decode),
  `PSPRECOMP_MOTORSTORM_CPU_TEXTURE_DECODE=1`, `PSPRECOMP_MOTORSTORM_TEXTURE_FILTER=psp|enhanced`.
- **Build commands:**
  - `cmake -S . -B out/motorstorm`
  - `cmake --build out/motorstorm --config Release --target MotorStormNative motorstorm_gpu_tests --parallel 4`
  - The output executable is `out/motorstorm/bin/Release/MotorStormNative.exe`.
- **Game data** (user-owned, gitignored): `profiles/motorstorm/game/EBOOT_DECRYPTED.BIN`
  and `disc0`. Bench savedata: `out/motorstorm/phase12/fixes/test-stick-v2`.
- **External research files** (user-provided, outside the repo):
  - `C:\Users\Admin\Documents\examples\PSPRecomp_MSAE_Research.md`
  - `C:\Users\Admin\Downloads\deep-research-report.md`
  - PPSSPP source at `C:\Users\Admin\Documents\examples\ppsspp`
- **Auto-memory** (`C:\Users\Admin\.claude\projects\C--Users-Admin-Documents-PSPRecomp\memory\`):
  `motorstorm-vulkan-android-plan.md` was updated to "Windows Vulkan done, uncommitted"
  and is indexed in `MEMORY.md`.

## 8. Analysis of `deep-research-report.md` (performance report)

**Verified claims [confirmed]:**
- `finish_list()` eagerly copies every dirty surface back each list, while publication
  is deferred. This is true in both backends.
- Texture identification hashes twice, scans opacity separately and holds the manager
  mutex during the prefix hash (`motorstorm_textures.cpp` ~428–445, 511–513).
- Constants are 1,248 bytes per draw; the draw shaders use only **34 distinct GE
  commands**: 0x1d 0x1e 0x1f 0x21 0x22 0x23 0x24 0x27 0x9b 0xb8 0xc2 0xc6 0xc7 0xc8
  0xc9 0xca 0xcd 0xce 0xcf 0xd0 0xd3 0xd8 0xd9 0xda 0xdb 0xdc 0xdd 0xde 0xdf 0xe0 0xe1
  0xe7 0xe8 0xe9. The decode and post shaders reuse `commands[]` as palette and
  settings storage.
- D3D12 replacements create a committed texture plus staging buffer each.
- The 16,384-descriptor ceiling is D3D12 only.
- The CPU is i7-13645HX (the report could not confirm it).

**Correction:** the report claims only whole-function register caching failed. In fact
`tools/codegen_main.cpp:1877` says per-basic-block GPR/FPR caches were removed too. They
failed inside about 10,000-line functions from the old 128 KiB units. With the current
4 KiB units a retry is legitimate, but it is a re-test.

**Outdated by this session:** its Vulkan "hypothesis" section. Its claim that deleting
per-draw barriers is "incorrect" is disproved for Vulkan interlock by A/B evidence;
for D3D12 it remains untested.

## 9. Next steps, in priority order [unfinished]

1. **Push the commit, only when the user asks** (it is committed locally only).
2. **Lazy framebuffer readback copy (report #4)**, for both backends, behind a switch.
   - Measured upside about 15% at 1×: 370 ms readback CPU plus about 500 ms publish waits
     per 25 s window, with zero CPU-triggered publishes in the race.
   - Catch: `load_surface()` detects CPU writes by comparing guest bytes with
     `guest_shadow`. With lazy copies the guest bytes go stale, so write detection must
     move to the VRAM access hook.
   - Add counters: copied/requested bytes, reasons, waits.
   - Gate: 524-case suites, parity test, fixed-clock frame hashes with packs off.
3. **D3D12 per-draw UAV barrier removal experiment** [hypothesis]: Vulkan showed that
   cross-draw ordering via interlock holds. Check D3D12 ROV ordering and visibility
   rules (Context7 or Microsoft docs), try removing the barrier between consecutive
   draws behind a switch, then validate with the same gates and benchmark.
4. **Single-pass texture identification and a shorter mutex scope** (low risk). Hashes
   must stay bit-identical to the existing pack filenames.
5. **Slimmer draw constants** using the 34-command list. Verify with a debug mode that
   compares against the full array.
6. **Code-generation work** (report #1–3; then MSVC SPGO/PGO). This targets about 57% of
   wall time at 1× and carries the highest risk. Watch build RAM on the 16 GB machine and
   keep 4 KiB units.
7. **Android path** (plan phases 4–8):
   - Probe the target phone's features first: interlock vs
     `rasterizationOrderColorAttachmentAccess`.
   - Implement pixel tier B (ordered attachments); it can be developed on Windows NVIDIA
     first.
   - Platform layer (SDL3, stb_image instead of WIC).
   - Enable the AOT memory fast-path macros for clang (`guest_memory.hpp` currently
     enables them only under `_MSC_VER`).
   - Gradle project.
   - Answer the plan's open decisions with the user first.
8. **Optional Vulkan polish:**
   - Replace the point geometry shader (needed for Mali on Android).
   - Exclusive fullscreen.
   - Async compute post queue.
   - Persistent staging ring for replacements.
   - Optionally re-apply the `precise` VS change if closer D3D12 parity is ever required.

## 10. Do not

- Do not edit the user's installed INI; do not push or make new commits without being asked.
- Do not make Vulkan flags or includes target-wide (it rebuilds the whole corpus).
- Do not reintroduce `discard` or early returns before or inside the interlock section,
  or rely on DXC ROV lowering.
- Do not reintroduce integer division where the divisor can be zero on either side of a
  vector `?:` (SPIR-V undefined behaviour).
- Do not judge renderer parity with texture packs or enhanced filtering on. Use
  `TEXTURE_REPLACE=0` and `TEXTURE_FILTER=psp` with the fixed clock.
- Do not use the Windows SDK dxc for SPIR-V; do not copy PPSSPP (GPL) code.
- Do not trust single benchmark runs on this laptop; interleave and use medians.
- Do not assume Android GPUs support fragment shader interlock; most do not.
