# Race performance and audio stability

Verified 2026-10-02 against the normal race path with `tools/race-throughput-input.txt`
(an extended variant of the Phase 12 script that reaches the full Festival race).

## Symptom

- The game slows down once a race starts, and audio underruns/crackles.
- A long interactive session at 4× output + SSAA4x logged
  `[AUDIO] underruns=148 longest_gap_us=3612876` and
  `[GE] D3D12 ... output=1920x1088 raster=3840x2176 AA=2`.

## Measurement facility

`PSPRECOMP_MOTORSTORM_PROFILE=1` enables opt-in wall-clock section timers
(`host/motorstorm_perf.hpp`) and prints one line at shutdown:

```
[PROFILE] wall_ms=... ge_decode_ms=... ge_convert_ms=... texture_ms=...
          gpu_prepare_ms=... gpu_record_ms=... ge_submit_ms=... gpu_sync_ms=...
          gpu_fence_ms=... gpu_readback_ms=... present_ms=... audio_wait_ms=...
          sections_ms=... other_ms=...
```

`other_ms` is guest execution, HLE, GE command parsing and scheduling.

## Heavy-race profile (1×, no AA, headless, guest 168.7 s / 5000 GE lists)

| Section | before | after |
| --- | ---: | ---: |
| total wall | 83.0 s | 72.4 s |
| texture state/content hashing | 8.7 s | 4.2 s |
| GPU draw submission (`ge_submit`) | 17.9 s | 12.8 s |
| GPU fence + readback (`gpu_sync`) | 18.3 s | 12.8 s |
| guest/HLE/parse remainder | 42.4 s | 41.9 s |

The race segment (guest 113 s → 166 s) runs at ~1.28× real time at 1×/None,
so audio pacing holds it near real time. At 4×/SSAA4x the same content takes
142.7 s wall and `gpu_fence_ms=79237` — the GPU raster pass is 56 % of the run
and the race segment drops to ~0.6× real time, which is what produces the
under-runs and slow motion.

## Changes

- `host/motorstorm_gpu.cpp`
  - Removed the redundant per-draw `SetGraphicsRootSignature` and the
    `OMSetRenderTargets(0, ...)` no-op.  A short-lived per-draw binding cache was
    tried and then removed: caching color/depth UAVs and feedback SRVs by GPU
    virtual address can bind a stale resource after D3D12 reuses a released
    allocation, which can drop geometry and HUD layers for a frame.  The cache
    saved well under 1 % of wall time, so correctness wins.
- `host/motorstorm_ge.cpp`
  - `hash_bytes` now mixes 64 bits per iteration and the texture content key
    is computed from 16 KiB stack chunks instead of a full-size heap copy;
    both run per list per unique texture state.
  - The CLUT hash is computed once in `LOADCLUT` instead of re-hashing 1 KiB on
    every textured draw.
  - Per-draw vertex/triangle vectors are reused thread-local buffers.
- `host/motorstorm_audio.cpp`
  - The waveOut feeder thread runs at `THREAD_PRIORITY_HIGHEST`.
  - A starved device is kept alive with silence instead of
    `waveOutPause`/`waveOutRestart` cycles.  The first silence block counts as
    one underrun and `longest_gap_us` now measures until real PCM resumes;
    `[AUDIO]` reports `silent_frames`.  This removes the click/re-acquire
    pattern at the cost of an explicit silent stretch when the guest is late.
- `tests/motorstorm_profile_tests.cpp`
  - `--audio-output` asserts the new contract: starving keeps `playing`,
    injects silence, a thin queue resumes real PCM without a reserve wait and
    no frames are dropped.

## Reproduction

```powershell
$env:PSPRECOMP_MOTORSTORM_PROFILE='1'
$env:PSPRECOMP_MOTORSTORM_AUDIO='0'
$env:PSPRECOMP_MOTORSTORM_INPUT_SCRIPT='profiles/motorstorm/tools/race-throughput-input.txt'
$env:PSPRECOMP_MOTORSTORM_STOP_AFTER_GE='5000'
$env:PSPRECOMP_MOTORSTORM_SAVEDATA='out/motorstorm/phase12/fixes/test-stick-v2'
$env:PSPRECOMP_MOTORSTORM_LOG='out/motorstorm/perf/native.log'
out/motorstorm/bin/Release/MotorStormNative.exe
```

## Guidance

- 4× output with SSAA4x is a 64-sample supersample per PSP pixel
  (`raster=3840x2176`).  On the measured laptop GPU the race becomes
  GPU-bound; choose 1×/None or 2×/FXAA for gameplay and keep SSAA4x for
  capture/diagnostics.
- The 1× race path is now limited by recompiled guest execution and the
  `other_ms` bucket, not by GE submission or audio.  Round 2 cut `other_ms`
  by about half by changing the generated-unit layout (4 KiB units with
  builtin accessors); see [the race benchmark page](PERFORMANCE_RACE_BENCH.md#round-2-2026-10-03-generated-code-layout).

## Intermittent missing vehicles/HUD

A short-lived per-draw D3D12 binding cache (kept only inside one command list)
was removed after a report of vehicles and the HUD disappearing for a frame
with a shifted camera.  The cache compared color/depth/feedback resources by
GPU virtual address, and D3D12 can reuse a released allocation's address, which
can bind a stale target after surface or snapshot churn.  The cache saved under
1 % of wall time, so it is gone; all per-draw bindings are recorded again.

An earlier investigation compared the reported frames against a deliberate crash test
(`out/motorstorm/input-crash.txt`, throttle plus hard steering into the
roadside). That test reproduced a similar sequence through the game's wreck camera;
it does not establish the cause of HUD/camera changes without an impact.
The emulator plays it fully: HUD hides, the camera detaches and follows the
tumbling vehicle, `PRESS ○ TO RESPAWN` appears, and the game auto-respawns and
restores the HUD after a few seconds.  `out/motorstorm/crash-repro/montage_a.png`
and `montage_b.png` record the whole sequence.  Wrecks are triggered by impact
damage (including AI contact), falling off the track, or holding boost until the
engine overheats.  If the camera changes *without* a tumble or respawn prompt,
capture it with the rolling dump below.

The 2026-10-03 report specifically occurs while accelerating after the first turn,
without a collision or respawn prompt. The command parser's silent 65,536-command
cutoff has now been repaired and regression-tested; see [the HUD/camera fix](HUD_CAMERA_FIX.md).
`PSPRECOMP_MOTORSTORM_TRACE_CALLS=0x0881764C,0x088FE33C,0x088FE5A4,0x088FE618,0x088FE84C`
now records the camera selector together with player flags, vehicle state, recovery
state, stationary-frame counter and position. This distinguishes guest camera
transitions from an incorrect rendered view. The optional
`PSPRECOMP_MOTORSTORM_INPUT_SCRIPT_LIVE_AFTER` timestamp (guest microseconds)
hands scripted menu navigation back to the live controller for an exact manual
reproduction; zero or an unset value retains fully scripted input. These diagnostics
help distinguish complete frames and genuine game-state transitions.

If the fault recurs, capture the last frames with the rolling dump:

```powershell
$env:PSPRECOMP_MOTORSTORM_FRAME_DUMP='1'
$env:PSPRECOMP_MOTORSTORM_FRAME_DUMP_EVERY='1'
$env:PSPRECOMP_MOTORSTORM_FRAME_DUMP_ROLLING='1'
$env:PSPRECOMP_MOTORSTORM_FRAME_DUMP_COUNT='120'
$env:PSPRECOMP_MOTORSTORM_FRAME_DUMP_DIR='out/motorstorm/last-frames'
```

The newest 120 CPU and GPU frames stay in that directory; the `frame_N_gpu.ppm`
files show the GPU output actually presented.  Note whether the fault follows a
crash: MotorStorm hides the HUD and detaches the camera for its crash/respawn
sequence, which can look like this when the emulator is running slowly.

## Limits

- The section timers add measurable overhead when enabled; they are off by
  default and are diagnostic only.
- `gpu_sync` still fences once per GE list before publishing GPU results to
  guest memory; deferred `sceGeDrawSync` publication is not implemented.
  Draw recording and GPU rasterization do overlap now (see below).
- The repeatable 25-second race benchmark and the chunked submission results
  are tracked in [the race benchmark page](PERFORMANCE_RACE_BENCH.md).

## Overlapped GE submission (2026-10-03)

`host/motorstorm_gpu.cpp` now records each GE list into 128-draw chunks across
three command slots. Finished chunks execute without waiting, so GPU
rasterization overlaps the next chunk's vertex decode and command recording,
and only the final fence in `gpu_sync` still blocks before the readback
publishes pixels. On the 25-second race benchmark this lowers wall time by
12.7 % (22.28 s → 19.44 s) and the measured section cost by 27.9 %, with the
guest work unchanged (750 frames / 750 GE lists) and all GPU parity tests
passing. Tuning and raw measurements: [PERFORMANCE_RACE_BENCH.md](PERFORMANCE_RACE_BENCH.md).
