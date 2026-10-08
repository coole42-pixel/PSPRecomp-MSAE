# Android crash-recovery translucency stutter

**Status: COMPLETE, 2026-10-08 — user confirmed the crash-pulse fix looks complete.** [Compact attachment recovery rendering](RECOVERY_ATTACHMENT_FIX.md) removes the remaining per-mesh color conversions and preserves the pulsing effect. The measurements below describe the preceding depth-only optimization; sustained 60 FPS/audio acceptance remains separate work.

2026-10-08, HEAD `049018f`, inherited working-tree changes retained. GOALS.md was not edited or advanced. The final optimization is enabled by default on Android and limits native-depth reuse to the observed recovery pass. The translucent effect remains exact and visible.

## Cause and implementation

Frame 8036 is opaque; frame 8042 is translucent. The recovery draw targets 8888 color `0x04098000` and depth `0x04130000`. Its GE state is:

| State | Value |
| --- | --- |
| Stencil enable | 1 |
| Stencil test DC | `0xFF8002`: EQUAL, reference 128, mask 255 |
| Stencil ops DD | `0x020000`: KEEP / KEEP / REPLACE |
| Blend DF | `0x1A`: ADD, source FIX white, destination ONE_MINUS_SRC_COLOR |
| Source fixed color E0 | `0xFFFFFF` |
| Depth test | disabled |
| Depth write mask | 1 (masked) |
| Alpha/stencil write mask | 0 |

`classify_ge_draw()` correctly rejects conditional framebuffer-alpha stencil to the ordered route. Preceding vehicle geometry uses ALWAYS/REPLACE and native depth writes; the pair repeats across vehicle meshes. The translucent half has 30 hardware-to-ordered and 30 ordered-to-hardware transitions/frame, versus two in each direction during the opaque half.

The expensive transition is hardware native D16 -> full-image depth staging copy -> PackDepthCS -> R32 attachment load -> ordered recovery draw -> PSLoad rewriting identical native depth. Recovery tests stencil but does not consume depth. Tiny CPU queries subsequently wait behind this conversion chain; their own GPU extraction is tiny.

The final code defers packing only for this recovery stencil/blend signature, with valid native depth and no depth/HUD write. It retains native depth authority through the ordered pass, then restores only color on one return to hardware. A per-surface marker prevents reuse from spreading to unrelated effects. A later ordered depth consumer ends the existing pass, orders its R32 stores before the reload, and materializes current native depth. Geometry writes, depth tests/clears, HUD high-bit writes, CPU reads and transfers retain exact dependencies. Native render-pass depth dependencies and resource lifetimes remain intact.

`PSPRECOMP_MOTORSTORM_RECOVERY_DEPTH_REUSE=0` selects the original path for comparisons. Windows keeps its prior default. The broader `PRESERVE_READONLY_DEPTH` experiment remains disabled by default. Native stencil remains disabled. No shader operation, draw ordering, translucency, resolution, audio, guest memory result, timestep or frame skipping was changed.

Implementation: [dependency predicates](../host/motorstorm_mobile.hpp), [authority, switching, packing and restoration](../host/motorstorm_gpu_vulkan.cpp).

## Frame-aligned attribution

`PULSE_TRACE=1` (full prefix `PSPRECOMP_MOTORSTORM_`) records at most four million racing draws to draw-state.csv, with frame/guest time/list/draw, route/reject reason, targets, stride/format, stencil test/ops, blend factors/fixed colors, depth state and alpha mask. GPU timestamps surround packs and restoration and retain the originating frame. Tiny-query waits use host monotonic time. GPU and host clocks must not be subtracted from each other. Conversion intervals are children of GE time and must not be added to GE again.

The initial [goals12 evidence](GOALS_1_2_EVIDENCE.md) and [full trace](../../../out/android/bench/pulse-diagnostic/1791413163-1318) established the burst. The paired visual traces below use blink frames 8034-8088, excluding the eight capture-perturbed frames. There are 20 translucent and 27 opaque samples in each. Translucent runs include 8040-8045, 8052-8057, 8064-8069 and 8076-8081. Each translucent frame has 62 recovery draws; opaque frames have none.

| Traced mean/frame | Before translucent | After translucent | Before opaque | After opaque |
| --- | ---: | ---: | ---: | ---: |
| Color packs | 31 | 31 | 3 | 3 |
| Depth packs | 30 | 2 | 2 | 2 |
| HW -> ordered | 30 | 30 | 2 | 2 |
| Ordered -> HW | 30 | 30 | 2 | 2 |
| GE GPU (ms) | 148.7139 | 89.6717 | 31.3176 | 31.5328 |
| Color pack GPU (ms) | 21.4265 | 21.55 | 1.6402 | 1.6326 |
| Depth pack GPU (ms) | 32.3569 | 2.1177 | 2.0912 | 2.1475 |
| Tiny-query GPU (ms) | 0.0668 | 0.0258 | 0.0238 | 0.0487 |
| Tiny-query CPU wait (ms) | 95.381 | 58.6595 | 46.2444 | 36.9146 |
| Restoration GPU, combined (ms) | 17.367 | 9.185 | 1.637 | 1.775 |

Timestamp tracing serializes intervals and perturbs execution. These are attribution measurements, not performance claims. Opaque GE/pack costs are nearly unchanged; the depth cost collapses specifically during translucency. Color conversion and exact ordered work remain expensive.

Trace artifacts: [reference](../../../out/android/bench/pulse-visual-reference-repeat/1791415192-2042), [scoped candidate](../../../out/android/bench/pulse-scoped-visual/1791415676-1688), [reference summary](../../../out/android/crash-pulse/reference-pulse-summary.json), [candidate summary](../../../out/android/crash-pulse/scoped-pulse-summary.json). Each trace directory includes pulse-frame-costs.csv and draw-state.csv. Analyzer: [analyze_pulse.py](../tools/android/analyze_pulse.py). Capture exclusions: 8036,8042,8048,8054,8060,8066,8072,8078.

## Final paired fixed 3x/60 benchmark

Same APK, OnePlus 12/CPH2573 (a496a6ec), Turnip Adreno 750, paced target 60, fixed 3x/raster_half=6, audio enabled, same input, 3600 measured race frames/run. Tracing and captures disabled. OFF then default ON; the first ON launch stalled before racing and was excluded and retried. Both successful analyses have zero integrity errors, no skipped/superseded frames, and matching hardware/ordered draw and vertex counts.

| Metric | Before | After | Change |
| --- | ---: | ---: | ---: |
| Wall time (ms) | 114942 | 100331 | -12.71% |
| FPS | 31.3202 | 35.8811 | +14.56% |
| Guest/wall | 0.522 | 0.598 | +14.56% |
| p95 frame (ms) | 127.017 | 76.4031 | -39.85% |
| p99 frame (ms) | 142.573 | 81.5865 | -42.78% |
| Color packs | 25561 | 25561 | unchanged |
| Depth packs | 21968 | 7206 | -67.20% |
| HW -> ordered switches | 21968 | 21968 | unchanged |
| Ordered -> HW switches | 21968 | 21968 | unchanged |
| Hardware opaque draws | 2548589 | 2548589 | unchanged |
| Hardware alpha draws | 652396 | 652396 | unchanged |
| Ordered draws | 115834 | 115834 | unchanged |
| CPU publications | 5 | 5 | unchanged |
| CPU coherence wait (ms) | 65880.2 | 51193.6 | -22.29% |
| Tiny-query wait (ms) | 65827.6 | 51144.6 | -22.31% |
| Tiny-query wait count | 3844 | 4223 | +9.86% |
| Tiny-query GPU total (ms) | 50.2747 | 54.2173 | +7.84% |
| Audio underruns | 2851 | 2997 | +5.12% |
| Audio device dry | 0 | 0 | unchanged |
| GPU mean (ms/frame) | 26.515 | 22.236 | -16.14% |
| GPU p95 (ms/frame) | 71.591 | 42.655 | -40.42% |
| GPU p99 (ms/frame) | 97.306 | 46.244 | -52.48% |

GPU work sums originating-frame GE, vertex, query and presentation/post phases, excluding conversion child intervals. Artifacts: [before](../../../out/android/bench/pulse-scoped-off/1791415912-356), [after](../../../out/android/bench/pulse-scoped-on-retry/1791416772-789), [machine comparison](../../../out/android/crash-pulse/scoped-final-comparison.json). Thermal-before/after snapshots are in both directories; frequencies were not locked. This is a measured pair, not a temperature-normalized population estimate.

Regressions/limits: audio underruns rose 2851 -> 2997 (+5.12%); tiny-query wait count rose 3844 -> 4223 (+9.86%) while aggregate query wait fell 22.31%. Their causes are not established by this pair. Audio device dry stayed zero. Stable 60 FPS acceptance still fails: guest/wall remains below real time, displayed p95 exceeds 18.5 ms, and underruns persist. This reduces the recovery stall; it does not eliminate it or establish full-lap/full-race acceptance.

## Correctness and visual evidence

The replay uses stock startup inputs and held accelerator from guest time 109000000 through 360000000. It reproduces collisions/recovery, not a normally driven lap. [Local input](../../../out/android/lap-review/drive-input.txt), device lap-profile-input.txt, both verified SHA-256 `F2D14113673C22E1E3D4FB6E0971F3DE30CF0BFDB18698C03CA74C5BA9985F37`.

Eleven captures at race frames 300,1000,1515,1607,1613,1619,1625,1631,1637,1643,1649 match frame/guest-time metadata and all 12,925,440 raw depth words against both reference replays. Every complete candidate color image is byte-exact to a complete reference image: ten match the first reference, one matches the repeat. No per-pixel mixing or tolerance was used. The reference itself has small brightness variation at three frames; geometry/depth and recovery state align deterministically. [Comparison data](../../../out/android/crash-pulse/scoped-pixel-comparison.json).

| Frame | State | Reference | Final candidate |
| --- | --- | --- | --- |
| 8036 | Opaque | [image](../../../out/android/crash-pulse/captures-off/1607_base.png) | [image](../../../out/android/crash-pulse/captures-scoped/1607_base.png) |
| 8042 | Translucent | [repeat reference](../../../out/android/crash-pulse/captures-reference-repeat/1613_base.png) | [image](../../../out/android/crash-pulse/captures-scoped/1613_base.png) |
| 8048 | Opaque | [image](../../../out/android/crash-pulse/captures-off/1619_base.png) | [image](../../../out/android/crash-pulse/captures-scoped/1619_base.png) |
| 8054 | Translucent | [image](../../../out/android/crash-pulse/captures-off/1625_base.png) | [image](../../../out/android/crash-pulse/captures-scoped/1625_base.png) |

Vehicle translucency, HUD, terrain, particles/exhaust, shadows and top-left coverage were inspected in these frames. [Information menu](../../../out/android/crash-pulse/candidate-menu.png) was inspected. MPEG decode logs exist; movie pixel parity and optional Android post/HUD-tag variants were not separately captured. HUD-tag dependencies are excluded from the optimization and covered by host predicate tests.

Host config/dependency tests cover recovery matching, other stencil effects, later depth consumers, masked/unmasked geometry, disabled tests, HUD high-bit writes, and color/depth clears. The final Vulkan suite passes 524 pixel-exact blend/stencil/depth/mask/clear fixtures plus feedback, transfers, scaled output, presentation and resize. Coherence fixtures pass at 1x/3x with queries, writes, mirrors and snapshot-ring reuse. Ten existing benchmark-analysis tests and the new frame-join/capture-exclusion test pass.

Logs: [config](../../../out/android/crash-pulse/config-scoped-tests.log), [Vulkan suite](../../../out/android/crash-pulse/gpu-scoped-full-tests.log), [coherence](../../../out/android/crash-pulse/coherence-scoped-tests.log), [benchmark parser](../../../out/android/crash-pulse/bench-analysis-tests.log), [pulse parser](../../../out/android/crash-pulse/pulse-analysis-tests.log). Desktop Vulkan does not execute Android ROAA/hardware switching; Android replay comparisons provide that separate gate.

## Rejected/failed runs and remaining risk

- The broad read-only-depth candidate improved timings but changed framing/lighting. It is rejected and remains off by default. [Failed color comparison](../../../out/android/crash-pulse/pixel-comparison.json), [rejected performance data](../../../out/android/crash-pulse/final-comparison.json). The final scoped marker fixes the scope of the optimization without adopting that experiment.
- pulse-paired-off collection failed because bench.sh changed while Bash was reading it; excluded.
- pulse-capture-off had no images because the original hook required optional post processing; repeated with the diagnostic-only export hook enabled independently of post processing. No effects were enabled to capture.
- [First scoped ON launch](../../../out/android/bench/pulse-scoped-on/1791416207-315) stalled at guest time 101285559 in a guest pthread mutex wait before racing. It had zero ordered draws/path switches and no recovery work. [Retained diagnostics](../../../out/android/crash-pulse/pre-race-mutex-stall.txt). Its cause remains unresolved; the retry completed. Inherited scheduler code was preserved.

## Build and reproduction

Installed [scoped-candidate.apk](../../../out/android/crash-pulse/scoped-candidate.apk), SHA-256 `0FA7E4C27893F35B23899147989F655647794B4229DD470283EF1C76CAF14029`. [Device APK hash](../../../out/android/crash-pulse/installed-apk-sha256.txt) matches. Build log: [scoped-final-build.log](../../../out/android/crash-pulse/scoped-final-build.log).

Use the existing bench.sh with label, resolution 3 and duration 60. Both paths use `PSPRECOMP_MOTORSTORM_INPUT_SCRIPT=/sdcard/Android/data/org.psprecomp.motorstorm/files/lap-profile-input.txt`. For the reference add `PSPRECOMP_MOTORSTORM_RECOVERY_DEPTH_REUSE=0,PSPRECOMP_MOTORSTORM_PRESERVE_READONLY_DEPTH=0`. The candidate uses defaults. Analyze each directory with analyze_bench.py --accept-60; an integrity pass is distinct from 60 FPS acceptance.

No commit/push, Windows INI edit, cleanup/reset of inherited changes or GOALS.md transition was performed.
