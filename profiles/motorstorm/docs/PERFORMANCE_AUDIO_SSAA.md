# SSAA performance and audio recovery

Measured 2026-10-03 on the local RTX 5060 Laptop GPU build. The requested
quality setting is retained: 4x output, SSAA4x, 1920x1088 output and
3840x2176 rasterization. The active user INI is preserved; the default sample
and built-in fallback now use this setting too.

## Changes

- Ordinary textures use RGBA8 UNORM storage and native GPU bilinear samplers.
  Sampling coordinates still quantize to PSP four-bit fractional weights.
  Integer output correction preserves the original truncation at boundaries.
  Framebuffer feedback and non-power-of-two textures retain the manual path.
  Texture storage remains four bytes per pixel; mip selection, packed
  framebuffer arithmetic and supersampling are unchanged.
- Repeated callback entry/return messages follow `trace_imports`, avoiding
  unconditional formatting, console writes and log flushes during normal play.
  Callback delivery and guest scheduling are unchanged.
- The audio feeder registers with Windows MMCSS's Audio task at high priority,
  with the previous thread-priority fallback if registration is unavailable.
  Five-millisecond ramps at real underrun/recovery boundaries reduce sudden
  transitions between the last PCM sample and silence. Healthy PCM is
  unchanged, and no frames are discarded or time-stretched to hide slow play.
- INI-enabled performance timers are initialized after applying configuration,
  fixing the earlier static-initialization dependency on environment variables.

## Throughput measurements

The frozen baseline and candidate use the same scripted race, isolated save,
fixed guest clock, visible window, resolution and AA. Audio is off to expose
throughput rather than device backpressure. Every window renders 750 frames
and 750 GE lists over 25 guest seconds. No builds or tests overlap these runs.

| Pair | Baseline wall | Candidate wall | Reduction |
| --- | ---: | ---: | ---: |
| Initial | 23.721 s | 22.851 s | 3.67% |
| Captured frames | 23.931 s | 23.056 s | 3.66% |
| Repeat | 32.703 s | 31.514 s | 3.64% |

The later pair slowed substantially on this machine on both binaries,
including CPU time outside the renderer. Cross-session absolute numbers
are therefore not attributed to the code change; the paired improvement
remains about 3.6%. Reports are `ssaa-baseline-*` and `ssaa-sampler-*` under
`out/motorstorm/bench/`.

## Correctness and audio checks

The expanded GPU suite passes 9,216 exact RGBA interpolation/wrap/clamp
comparisons, the existing 524 packed blend/stencil/depth/mask cases, feedback
and transfer checks, and all 12 resolution/AA combinations. All eight CTest
suites pass. The real-device `--audio-output` regression passes, including
starvation, recovery, buffer reuse, volume and no dropped samples. Pure ramp
tests verify stereo fade boundaries and unchanged healthy PCM.

All nine captured race files (CPU, displayed CPU and GPU RGB frames at GE
3400, 3650 and 3900) are SHA-256 identical to the baseline. Evidence directories
are `out/motorstorm/perf-audio/baseline-frames` and `sampler-frames`.

The original user's completed-race session logged 413 underruns, a 140762 us
maximum gap and 230400 filler frames. The short baseline audio benchmark did
not reproduce those gaps, so it cannot establish an underrun reduction.

Early-depth and alternate LOD shader experiments did not show a reliable
throughput improvement and were reverted before the final sampler build.

## Extended audio run and limits

The final normal-clock, visible-window run reached 360.011232 guest seconds,
including a soundtrack transition. Its 115-to-360-second race window rendered
7350 frames / GE lists at the retained 4x/SSAA4x setting. There were no runtime
faults, scheduler deadlocks, dropped PCM frames or device errors, and MMCSS was
active. However, the window took 323.310 wall seconds (0.758x real time), and
the full run recorded 889 underruns with a maximum 276273 us gap. This remains
a sustained throughput problem, not a solved audio starvation issue. These
counts are not comparable to the user's different completed-race drive and
do not establish an underrun reduction. Ramps smooth the discontinuities but
do not make an under-real-time renderer generate missing audio samples.

The profile attributes 111.695 s of that window to GPU fence waits and
103.299 s to guest/HLE/parsing/scheduling outside the measured renderer scopes.
The scene and machine conditions still need more throughput for uninterrupted
playback at this quality. A separate high-QoS / performance-CPU-set experiment
did not improve the repeatable window (32.828 s versus 31.514 s for the sampler
candidate) and was reverted rather than changing scheduling without evidence.
Evidence is `audio-ssaa-final-long.*` and `ssaa-high-qos-r1.*` under the bench
directory. The original input and savedata were not modified.
