# Crash-recovery pulse: compact attachment rendering

2026-10-08. Android/Vulkan follow-up to [the depth-reuse optimization](CRASH_RECOVERY_TRANSLUCENCY.md).

**Status: COMPLETE — crash-recovery pulse rendering fix, 2026-10-08.** Implemented, validated and installed; the user confirmed that the fix looks complete. The intended translucent pulse is preserved. Sustained 60 FPS and audio pacing remain separate performance work.

## Cause and change

The earlier optimization retained native depth, but each car mesh still switched between native RGBA8 rendering and packed R32 stencil rendering. In the captured pulse window there are 62 recovery draws per translucent frame. They caused 30 hardware-to-ordered and 30 ordered-to-hardware transitions, 31 color packs, and repeated full-image color restoration. Opaque frames have two transitions in each direction and three color packs.

The recovery shader now reads framebuffer alpha directly from the compact RGBA8 input attachment. It uses the original fragment code, integer screen blend, stencil operation, masks, alpha/color tests, fog, and face rejection. It also uses the original vertex shader: this depth-independent pass must not alter clipping based on an irrelevant guest window depth. There is no early stencil discard; texture filtering retains the original quad helper invocations and derivatives.

Both the recovery reader and its unconditional framebuffer-alpha stencil writer participate in rasterization-order attachment access. The hardware pipeline cache key distinguishes those writers from ordinary draws. This matters on the tested Adreno/Turnip driver: flagging only the recovery reader produced incorrect translucent colors; flagging neighboring stencil writers preserves the reference pixels. The ordinary pipelines keep their existing ordering flags.

The compact pass uses GENERAL layout with the same image as color and input attachment. Its external dependencies include input-attachment reads. No native stencil mirror is introduced. Native depth, CPU coherence, texture snapshots, and later ordered consumers retain the existing authority rules.

The classifier only permits the observed EQUAL 128/255, KEEP/KEEP/REPLACE, FIX-white/ONE_MINUS_SRC_COLOR recovery signature on 8888 targets without a depth dependency. Feedback without a snapshot, soft particles, HUD tagging, extended color, other stencil signatures, and incompatible surfaces retain the original route. `PSPRECOMP_MOTORSTORM_RECOVERY_ATTACHMENT_DISABLE=1` selects the preceding implementation for comparisons.

IDA Pro inspection of the accepted EBOOT's `sub_139864` confirms that the guest emits stencil enable, reference/mask, operations, and alpha write-mask commands from its existing render-state globals. Those guest commands and the pulsing behavior are unchanged.

Implementation: [routing](../host/motorstorm_mobile.hpp), [Vulkan passes and pipeline keys](../host/motorstorm_gpu_vulkan.cpp), [shared fragment code](../host/motorstorm_gpu.hlsl), [Android shader build](../android/app/src/main/cpp/shaders.cmake).

The API setup follows Khronos's [rasterization-order attachment access documentation](https://github.khronos.org/Vulkan-Site/features/latest/features/proposals/VK_EXT_rasterization_order_attachment_access.html) and [dependency scopes](https://docs.vulkan.org/refpages/latest/refpages/source/VkPipelineColorBlendStateCreateFlagBits.html). Context7 was unavailable in this tool session.

## Validation

Validation artifacts are retained under [out/android/recovery-attachment](../../../out/android/recovery-attachment).

- Android shader/native/APK compilation passes.
- Host classifier tests cover the recovery capability, shader face rejection, unavailable depth, other stencil states, depth consumers, 16-bit targets, feedback, particles, HUD tags and extended color.
- The desktop Vulkan regression suite passes all 524 pixel-exact blend/stencil/depth/mask/clear fixtures, feedback, transfers, presentation and resize. It does not exercise the Android compact path; device replay comparisons are the separate gate.
- Eleven existing benchmark/pulse analysis tests pass.
- [compare_recovery_captures.py](../tools/android/compare_recovery_captures.py) requires each complete color image to match one complete reference, with exact raw depth and frame metadata. It never combines pixels from different references. Pillow is required.

On OnePlus 12/CPH2573, Turnip Adreno 750, fixed 3x/60 with the existing collision input replay, all ten complete images at race frames 1000, 1515, 1607, 1613, 1619, 1625, 1631, 1637, 1643 and 1649 match a complete reference replay image. All 11,750,400 depth words and guest-frame metadata in that window match every reference. This includes alternating opaque and translucent vehicle frames. [Strict comparison](../../../out/android/recovery-attachment/final-recovery-pixel-comparison.json), [captures](../../../out/android/recovery-attachment/captures-scoped-order).

The separate startup-fade capture at frame 300 does not match the available complete reference images, despite exact depth and frame metadata. Reference replays also differ from each other at this frame. It is not included in the crash-window parity claim. The [unfiltered eleven-frame comparison](../../../out/android/recovery-attachment/scoped-order-pixel-comparison.json) retains that failure; no per-pixel reference mixing or tolerance was used.

The bounded, capture-excluded trace window 8034–8088 contains 20 translucent and 27 opaque frames. [Before trace](../../../out/android/bench/recovery-attachment-reference/1791432050-1541), [after trace](../../../out/android/bench/recovery-attachment-scoped-order/1791433396-1061).

| Mean per frame | Before translucent | After translucent | Before opaque | After opaque |
| --- | ---: | ---: | ---: | ---: |
| Color packs | 31 | 3 | 3 | 3 |
| Depth packs | 2 | 2 | 2 | 2 |
| HW to ordered | 30 | 2 | 2 | 2 |
| Ordered to HW | 30 | 2 | 2 | 2 |
| GE GPU ms | 86.1703 | 41.1169 | 29.3160 | 29.1104 |
| Color pack GPU ms | 20.4773 | 1.5986 | 1.5307 | 1.4371 |
| Tiny-query CPU wait ms | 57.7053 | 29.8222 | 31.8460 | 23.1632 |

Tracing perturbs execution, so these values attribute the removed work rather than establish untraced performance. Recovery still draws all 62 passes per translucent frame; no effect, resolution, frame or simulation step is skipped. The unflagged-writer, early-discard, and broad all-pipeline candidates are retained as diagnostic artifacts rather than accepted builds.

## Untraced performance

The final same-APK, fixed 3x/60, paced/audio-on OFF/ON pair completed, with 3600 measured race frames per run and tracing/captures disabled. Both analyses have zero integrity errors, zero skipped/superseded frames, 3600 displayed frames, identical total draw counts and matching input/frame windows.

| Metric | Before | After |
| --- | ---: | ---: |
| Wall time (ms) | 97000 | 91387 |
| Wall FPS | 37.1135 | 39.3927 |
| Frame p95 (ms) | 74.2008 | 42.2538 |
| Frame p99 (ms) | 79.3446 | 51.4888 |
| Color packs | 25561 | 10799 |
| Depth packs | 7206 | 7206 |
| Switches in each direction | 21968 | 7206 |
| Total draws | 3316819 | 3316819 |
| CPU coherence wait (ms) | 48037.5 | 43424.3 |
| GPU work p95 (ms) | 41.2571 | 29.2695 |
| Audio underruns | 2793 | 2911 |
| Audio device dry | 0 | 0 |

Frame p95 improved 43.1%; average throughput improved 6.1%. This is one paired device measurement with thermal snapshots, not a temperature-normalized estimate. Audio underruns rose 4.2% in this pair; its cause is not established. Both runs still fail sustained 60 FPS/audio acceptance. Completion applies to the crash-pulse conversion stall, not the broader frame-rate target.

Artifacts: [before](../../../out/android/bench/recovery-attachment-final-off/1791433659-1139), [after](../../../out/android/bench/recovery-attachment-final-on/1791433879-1634), [before analysis](../../../out/android/recovery-attachment/final-off-analysis.log), [after analysis](../../../out/android/recovery-attachment/final-on-analysis.log). Benchmark APK SHA-256: `7D8C111FBE110F51114591FD1176B43E0E9607065151C644C903A894F28A577D`.

## Delivered build

[MotorStorm-recovery-fix.apk](../../../out/android/recovery-attachment/MotorStorm-recovery-fix.apk) is installed on the device. SHA-256: `E36E9E7817075EB83269AD9D9DD8E3F0347E309F2B2D8EFD102988FC18A2559D`; [installed hash](../../../out/android/recovery-attachment/installed-apk-sha256.txt) matches. The delivery build adds a cache-prewarming guard that skips recovery pipelines when the diagnostic override disables their input attachments; the measured race shaders and routing are unchanged. [Build log](../../../out/android/recovery-attachment/build-delivery.log), [disabled-cache startup](../../../out/android/recovery-attachment/disabled-cache-startup.log), [default startup](../../../out/android/recovery-attachment/default-startup.log).
