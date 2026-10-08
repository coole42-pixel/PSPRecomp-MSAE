# MotorStorm PSPRecomp: a concrete path to Android 5x / 60 FPS

**Reviewed:** 2026-10-06. **Target:** OnePlus 12, Snapdragon 8 Gen 3 / Adreno 750, imported Turnip driver. **Code:** `motorstorm/60fps-performance`, commit `5210bff`, including the current working-tree rendering and settings changes.

## The answer

The strongest route is to make the Android renderer keep its color and depth images resident on the GPU, let ordinary draws and the common exact blend/stencil draws use those same images, and present the completed color image directly. Guest-format buffers should be produced only when a real guest memory access or format reinterpretation requires them.

That changes the expensive core of the current implementation. CPU compiler tuning can follow, but it will not remove the high-resolution framebuffer conversions that are currently built into each race frame.

**I would prioritize a resident RGBA8 + D16 Android rendering path, compact ordered color shaders for the remaining race effects, direct image presentation, and demand-driven VRAM synchronization.** Keep the existing packed renderer as the correctness reference and fallback. Extend the existing game runtime rather than rewriting the simulation.

5x / 60 FPS is an engineering target, not an outcome demonstrated by the existing measurements. The following plan identifies the work that can plausibly get there and the measurements that decide whether it has succeeded.

## 1. What the current core actually does

The execution chain is:

```text
Recompiled Allegrex game code
  -> HLE scheduling, guest memory and GE list production
  -> MotorStorm GE command decoding and draw/texture/vertex preparation
  -> Vulkan command recording and GPU vertex decoding
  -> fixed-function draws or ordered PSP pixel operations
  -> framebuffer resolution/readback bookkeeping
  -> presentation snapshot, conversion, scaling and Android presentation
```

The game logic is already compiled to native ARM64 code. The renderer still implements the PSP graphics pipeline, including framebuffer aliasing, feedback, stencil stored in color alpha, unusual blend factors and guest reads of GPU-produced memory.

The optimization must preserve those behaviors while changing how resources are represented and when work is performed. Removing them would repeat the dark overlay, alpha and highlight regressions.

Several useful facilities already exist: a GE worker, GPU vertex decoding and batched vertex jobs, compact hardware color/depth attachments, texture caching, pipeline caching/prewarming, deferred publication, Android performance hints and mailbox presentation. Improve their boundaries and resource ownership; do not count their introduction as new work.

## 2. The measured workload to attack

Use the corrected [50-second race benchmark](out/android/corrected-race-benchmark.txt), rather than the superseded native-stencil benchmark in the handoff. It contains 1,500 frames at 2x and original 30 FPS.

| Current work | Average per race frame |
|---|---:|
| Vulkan draws | 605.24 |
| Ordered pixel draws | 35.46 |
| Stencil rejection | 18.46 |
| Target-size rejection | 16.00 |
| Double-alpha blend rejection | 1.00 |
| Hardware/ordered transitions, both directions combined | 6.00 |
| Color pack dispatches | 3.00 |
| Depth pack dispatches | 4.00 |
| Framebuffer buffer synchronizations | 6.00 |
| Render-pass endings | 12.77 |

The recorded CPU scopes include approximately **7.42 ms/frame for GE submission**, **2.41 ms for command recording**, **1.10 ms for preparation**, and **1.26 ms for textures**. These scopes overlap/nest; adding them together would misrepresent frame time.

A single full-screen fallback can cost more than many small geometry draws. Capture state frequencies together with affected pixel area and GPU phase timings, rather than optimizing rejection counts alone.

At 5x, the visible PSP image is **2400 x 1360**. The game's 512 x 296 scene allocation becomes **2560 x 1480**. One RGBA8 copy of that allocation occupies about **15.2 MB**; a full read-and-write pass moves about **30.3 MB**, or **1.82 GB/s at 60 FPS** before compression, overdraw and depth traffic. This is arithmetic explaining the size of the work to remove, not a measured bandwidth or speedup prediction.

Relative to 2x / 30 FPS, 5x / 60 FPS represents **12.5 times the primary raster-pixel workload**. CPU execution and total frame time do not necessarily scale by that factor.

## 3. Establish a real 5x / 60 FPS target first

### Add explicit fixed 5x support

Fixed 5x is currently blocked by several configuration checks:

- `GameSettings.java:36` accepts resolution values only through 4.
- `LauncherActivity.java:90` offers only 1x through 4x, plus automatic display matching.
- `motorstorm_config.cpp:100` accepts 1-4 or 8.
- `motorstorm_gpu_vulkan.cpp:3559` parses 1x-4x or 8x.

Automatic display matching can already calculate 5x. Expose it as a consistent fixed choice and verify the actual scene extent and `raster_half=10` with AA off. A launch argument containing `resolution=5` must not silently select another value.

Keep the shipped 2x low/off preset. Add 5x / 60 as a selectable target profile with dynamic resolution and frame-rate fallback disabled during acceptance measurements. SGSR or a reduced scene resolution would not satisfy a fixed 5x claim.

### Keep the existing simulation patch

The 60 FPS timestep/flip-interval patch already exists in `motorstorm_frame_rate.hpp:7` and `motorstorm_hle.cpp:1444`. Preserve it and validate race timers, physics, animation and audio. Faster presentation alone does not produce 60 new game frames.

### Repair the measurement boundary

`motorstorm_gpu_vulkan.cpp:5816` combines opportunistically retired GE chunk timestamps with averaged presentation timings. That is not a reliable, frame-tagged critical-path measurement. `hw_pack_ns` measures CPU recording time, not GPU pack execution.

Assign a frame ID to GE work, conversion, feedback copies, presentation and fence completion. Record actual CPU work, queue waiting, GPU execution, unique completed game frames, unique presented frames, and skipped/superseded frames. The current driver log reports a **single Vulkan queue**: GE and presentation work share its budget. Adding a presenter thread does not make that GPU work concurrent.

Use fixed 1x, 2x, 3x, 4x and 5x runs at target 60 to separate resolution-dependent GPU cost from CPU submission and simulation cost. Existing locked 30 FPS results do not prove 60 FPS headroom.

## 4. Replace the costly framebuffer architecture

### A. Remove mandatory materialization at every GE list end

**Confirmed, high priority.** `motorstorm_gpu_vulkan.cpp:4393`, `finish_list()`, resolves every dirty surface and records a native readback copy. Deferred publication postpones the wait and CPU copy, but the GPU conversions and copies have already been recorded.

Introduce explicit ownership for each guest physical memory range:

- Which GPU image/version contains the newest color or depth?
- Which CPU-written bytes are newer than that image?
- Which alias, texture, palette, transfer or CPU read needs those bytes?
- What rectangle/range actually needs conversion?

End a GE list by submitting required work and retaining the GPU images. On a real guest read, produce the required native-format region directly from the authoritative image, then publish it. On a guest write, invalidate/update overlapping image regions. A native-format CPU read can still be necessary; it should not require packing the entire 5x framebuffer first.

Start with a histogram of actual guest framebuffer reads and writes. Keep the existing shadow comparison and strict synchronization fallback until every access path is covered. A global VRAM hook that publishes every pending target is insufficient for the final design.

### B. Present the resident RGBA8 image directly

**Confirmed, high priority.** Current presentation packs color into a buffer and copies a scaled snapshot (`VK:5774`). `record_present_texture()` then converts the packed snapshot in compute and copies it into another RGBA8 image (`VK:5194`). A hardware-rendered color image is already RGBA8.

Present a completed image version directly, or make one image snapshot when its lifetime cannot otherwise be protected. Synchronize with timeline values and prevent the next guest frame from overwriting an image still being sampled. Preserve rotation, fullscreen coverage, bounded queue depth and movie/CPU-written framebuffer fallback.

The normal race presentation path should be:

```text
completed RGBA8 image -> one fullscreen sample/resolve to swapchain -> present
```

Its counters should show no mandatory `PackColorCS`, packed-buffer snapshot, `PresentConvertCS`, or intermediate buffer-to-image conversion solely for presentation.

### C. Share compact attachments between fast and exact race draws

**Confirmed bottleneck; proposed implementation requires eligibility checks.** The current hardware-to-ordered transition packs compact images into R32 buffers/attachments. Returning to hardware restores them with a full-screen `PSLoad` (`VK:2687`, `VK:4179`). Eliminating that representation switch is more valuable than forcing every draw into fixed-function blending.

Implement an Android exact color shader that reads and writes the resident **RGBA8 color attachment**, with the existing native **D16 depth attachment**. Use ordered color attachment access for same-pixel blend/stencil reads. This extension already underpins the selected renderer, but its color, depth and stencil capabilities are separate: color support must not be treated as proof of ordered depth support. [Khronos feature definition](https://docs.vulkan.org/refpages/latest/refpages/source/VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT.html).

The observed remaining stencil signature is `NOTEQUAL / KEEP / KEEP / REPLACE` in the [corrected renderer log](out/android/corrected-renderer.log). The first compact variant should accept it only when:

1. The target is RGBA8888 and native depth coverage/interpolation is valid.
2. Depth writes are disabled.
3. Stencil-fail and depth-fail operations both KEEP existing alpha.
4. No HUD depth tag or soft-particle depth modification is needed.
5. Any neighboring-pixel framebuffer texture read has a separately valid snapshot.

For that variant, native read-only depth testing can reject fragments early. The shader reads RGBA8, reconstructs integer bytes, performs the masked stencil comparison and exact RGB blend, then writes the correctly masked stencil replacement into alpha. Fixed-function blending is disabled for this exact shader. Ordinary draws continue using hardware blending/depth against the same resident images.

Add input-attachment usage to the compact image and compatible pipeline/subpass descriptions (`VK:2738`). Preserve the ordering flags required by the [Khronos ordered attachment proposal](https://docs.vulkan.org/features/latest/features/proposals/VK_EXT_rasterization_order_attachment_access.html). Confirm actual depth-write and mask states before assuming all 18.46 stencil draws/frame qualify.

Use the same exact color route for the one double-alpha draw/frame when its depth behavior qualifies. Capture its complete blend equation and factors first. Dual-source blending is an optional alternative only after proving support and the exact expression; it does not automatically solve arbitrary doubled destination-alpha blending. [Vulkan blend-factor rules](https://docs.vulkan.org/spec/latest/chapters/framebuffer.html#framebuffer-blending).

Keep the generic packed fallback for operations outside these conditions, particularly stencil-conditioned depth writes and non-KEEP failure mutations. Prefer bounded conversion of the affected region where possible.

**Do not enable the experimental native stencil switch unchanged.** Its separate stencil storage still does not provide a complete framebuffer-alpha synchronization solution.

### D. Eliminate the 16 size-mismatch fallbacks per frame

**Confirmed.** The rejection remains at `VK:4028`, and the hardware framebuffer still uses the full color extent at `VK:2765`.

Use a framebuffer/render area covered by the required attachments and the draw's actual scissor. A larger depth attachment is valid; unequal dimensions alone need not force ordered rendering. For draws with no depth/stencil side effects, use a suitable dummy depth target or color-only pass. Keep rejection where required coverage genuinely exceeds an attachment. [Vulkan framebuffer extent requirements](https://docs.vulkan.org/refpages/latest/refpages/source/VkFramebufferCreateInfo.html).

This is an early, bounded change that should remove the measured `reject_target_size_mismatch` category before the larger resource rewrite.

## 5. Make passes and feedback fit a mobile GPU

Build a small dependency plan over GE draw packets, targets, textures and transfers. Preserve transparent draw order and guest-visible completion events.

- **Feedback:** `VK:1848` already samples compact sources directly when safe. Self-feedback still copies full images. Copy the sampled/dirty rectangle with filter margins, and reuse a snapshot across tiled screen copies only when all strips must read the same pre-effect image. Neither a new copy per strip nor a stale snapshot across different effects is correct.
- **Submission boundaries:** the default chunk limit is 512 draws (`VK:421`, `VK:4388`), below the measured average frame's 605 draws. Replace arbitrary draw-count breaks with dependency, arena-capacity and latency boundaries. A higher limit is a useful experiment, not the final dependency model.
- **Clears:** recognize genuine full GE clears and use attachment clear load operations where their masks/coverage allow it. Avoid a full-screen restoration pass when the previous contents are about to be overwritten.
- **Stores and barriers:** derive them from subsequent consumers. Do not discard depth that a later GE operation needs. Narrow broad memory barriers only after resource dependencies are explicit.
- **Keep useful exact operations local:** fixed-function and ordered color shaders should share a compatible render pass where supported and measured beneficial. A subpass arrangement can reduce external-memory traffic, but actual merging/tile retention depends on the driver. [Khronos subpass sample](https://docs.vulkan.org/samples/latest/samples/performance/subpasses/README.html), [attachment load/store guidance](https://docs.vulkan.org/samples/latest/samples/performance/render_passes/README.html).

## 6. Reduce work after the framebuffer round trips are removed

### Draw submission and constants

At the current draw count, 60 FPS means roughly **36,000 draw calls per second**. Build immutable draw packets containing state, resource dependencies and vertex/index slices. Merge compatible adjacent packets; do not reorder transparency or feedback. Split the current large `Constants` block (`VK:530`) into shared state and small per-draw values, uploading only changed state. Consider indexed per-draw data or multidraw only where feature support and ordering allow it.

### Textures and geometry

The persistent decoded texture cache still hashes texture contents on first use each list: `GE:1697`, with list-cache clearing at `GE:2922`. Track RAM/VRAM write generations, including mip and CLUT ranges, so unchanged textures reuse their keys.

This requires coverage of AOT fast stores, regular stores, HLE copies, writable pointers, GE transfers and GPU publication. `guest_memory.hpp:86` contains direct fast stores. Adding a cache while missing those writes would create stale textures. Preserve content hashing as a fallback until invalidation coverage is proven.

Cache raw vertex uploads and static decoded geometry with equally complete invalidation. GPU-decoded vertices can depend on bones, morph weights, lighting and UV generation; address alone is not a safe cache key. The current indexed path decodes through the highest referenced index (`GE:1958`), so sparse indices can cause unnecessary work. Avoid CPU UV scans when no active feature needs the bounds.

### Shaders and target resolution policy

Generate a bounded set of variants for the frequent observed material states: opaque modulation, alpha test, fog, feedback and compact exact blending. Keep early-depth rejection for eligible opaque draws and late depth behavior where discard/depth-write semantics require it. Extend the existing pipeline cache and prewarming rather than introducing another cache.

Keep world geometry and final scene color at 5x. Intermediate palette/lookup images need not automatically become 5x. Classify known low-frequency effect targets by their actual use and preserve their intended sampling. Any lower-resolution bloom/effect optimization must retain the 5x base scene; downscaling the final world image and upscaling it is not this target. Validate aliasing and effect coverage across scene transitions.

## 7. CPU, compiler and sustained performance

After profiling the revised renderer, evaluate Android production fast paths, ARM64 profile-guided optimization, ThinLTO, code layout and selective inlining. The Android AOT build currently uses `-O2 -g0`; the root production-fastpath option is not wired into the independent Android build (`android/app/src/main/cpp/CMakeLists.txt:29`, `include/psprecomp/runtime.hpp:155`). These are candidates, not established large gains.

Use sampling to identify hot guest/HLE routines before adding native replacements. Preserve scheduler preemption, callback ownership, virtual time and the existing 60 FPS timestep patch. Broad fast-math changes or removing memory guards could change physics, graphics or synchronization.

Android performance hints already exist (`android_platform.cpp:68`). Improve reporting to reflect actual work and, where supported/useful, include the GE worker. Sustain the target on a warm device; assess thermal headroom rather than relying on a short cold run. [Android ADPF guidance](https://developer.android.com/games/optimize/adpf).

## 8. Implementation order and completion gates

| Step | Deliverable | Gate before moving on |
|---|---|---|
| 1 | Fixed 5x plumbing and frame-tagged CPU/GPU metrics | Actual 5x extents and unique ~60 FPS simulation/presentation can be measured; scale/fps fallback off |
| 2 | Correct target-extent handling | The measured 16 mismatch rejections/frame disappear without missing HUD, depth or screen effects |
| 3 | Direct resident-image presentation | Packed snapshot/conversion work disappears from the hardware race present path; image lifetime and movies remain correct |
| 4 | Compact exact RGBA8 color route | Eligible stencil/double-alpha draws share resident attachments; no full color/depth packing solely for those transitions |
| 5 | Demand-driven VRAM coherence | Readbacks/conversions correspond to traced real consumers; no unconditional all-target list-end materialization |
| 6 | Dependency-based passes, feedback and packets | Fewer pass breaks, bounded snapshot traffic and lower CPU record cost, with matching effect/stencil output |
| 7 | Shader/texture/vertex specialization and measured compiler work | Improvements survive demanding tracks and warm-device runs |

Aim for approximately **12-14 ms of total GPU work per game frame**, including presentation on the single queue, to leave margin within the roughly 16.7 ms deadline. Measure CPU execution and GE submission separately and ensure the whole frame's dependency path meets that deadline; separate CPU/GPU budgets cannot simply be added or assumed to overlap.

Acceptance should require complete races and a **20-30 minute sustained session** at fixed 5x and target 60, real-time guest progression, stable physics/audio, and no automatic reduction to 30 FPS or a lower render scale. Inspect frame-time tails and unique presented frames, not just an average FPS label. Preserve fullscreen menus, correct alpha/stencil, shadows, particles and feedback effects.

If 1x / 60 fails after these changes, address the measured CPU/submission bottleneck. If 1x / 60 passes but 5x / 60 fails, use the resolution sweep and phase timings to target remaining pixel/bandwidth/overdraw cost. If only long sessions fail, the remaining constraint is sustained thermal capacity. These are different follow-up paths; the measurements should choose one.

## 9. Scope, evidence and remaining uncertainty

This was a read-only review with three independent slices: Vulkan resources/presentation, runtime/pacing/configuration, and GE textures/vertices/submission. Important findings were checked against current source and existing benchmark/log artifacts. No code, device configuration or performance tests were changed for this report.

Four high-priority blockers are confirmed: missing fixed-5x/reliable-60 measurement plumbing, compulsory list-end framebuffer materialization, presentation conversion round trips, and costly hardware/ordered representation transitions. Four medium-priority opportunities are confirmed: arbitrary chunk boundaries/broad dependencies, per-draw packet/constants overhead, repeated texture hashing, and repeated vertex upload/decode work. The amount each change will save remains unmeasured.

Current official Vulkan and Android documentation was checked. Context7 tools were unavailable in this session, so the external references use official documentation directly.

Open measurements: how many conditional stencil draws qualify for the compact route; the true 5x GPU phase costs; required guest readback ranges; driver tile retention with mixed pipelines; batchable draw fraction; and warm-device headroom. The existing baseline covers one race workload, not every track or weather/effect combination. A promise of 5x / 60 FPS before those gates pass would be unsupported.

### Source key

Line references above identify the reviewed working-tree snapshot:

- **VK:** [motorstorm_gpu_vulkan.cpp](profiles/motorstorm/host/motorstorm_gpu_vulkan.cpp)
- **GE:** [motorstorm_ge.cpp](profiles/motorstorm/host/motorstorm_ge.cpp)
- [Pixel classifier](profiles/motorstorm/host/motorstorm_mobile.hpp) and [GPU shaders](profiles/motorstorm/host/motorstorm_gpu.hlsl)
- [Guest memory](include/psprecomp/guest_memory.hpp), [runtime](include/psprecomp/runtime.hpp), [frame-rate plan](profiles/motorstorm/host/motorstorm_frame_rate.hpp) and [HLE](profiles/motorstorm/host/motorstorm_hle.cpp)
- [GameSettings](profiles/motorstorm/android/app/src/main/java/org/psprecomp/motorstorm/GameSettings.java), [LauncherActivity](profiles/motorstorm/android/app/src/main/java/org/psprecomp/motorstorm/LauncherActivity.java), [configuration parser](profiles/motorstorm/host/motorstorm_config.cpp), [Android platform](profiles/motorstorm/android/app/src/main/cpp/android_platform.cpp) and [Android CMake](profiles/motorstorm/android/app/src/main/cpp/CMakeLists.txt)
- [Corrected benchmark](out/android/corrected-race-benchmark.txt), [renderer log](out/android/corrected-renderer.log), [Android performance journal](PERFORMANCE_ANDROID.md) and [handoff](HANDOFF.md)
