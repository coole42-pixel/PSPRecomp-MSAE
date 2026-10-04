# Race benchmark harness and results

Started 2026-10-03. Companion to [race performance and audio stability](PERFORMANCE_RACE.md),
which documents the first profiling round. This page tracks the repeatable
25-second race benchmark used to compare performance changes.

## Harness

`tools/bench-race.ps1 -Name <name>` runs the normal boot/menu/race path (no
scene skips), holds a 25-second window of actual Festival racing and stops the
guest exactly at the end of the window. It uses
`tools/race-throughput-input.txt`, the isolated `phase12/fixes/test-stick-v2`
savedata and audio off, so the run is throughput-limited instead of paced to
real time. One report pair per run:

- `out/motorstorm/bench/<name>.bench.txt` – window report (`[BENCH]` line and
  every section value).
- `out/motorstorm/bench/<name>.txt` – full console capture.
- `out/motorstorm/bench/<name>.log` – native log.

The guest-time window defaults to 115 s → 140 s (guest microseconds), inside
the race segment identified in `PERFORMANCE_RACE.md` (113 s → 166 s). The first
frame at or after the start opens the window; the first frame at or after the
end closes it, writes the report and stops the run with
`race benchmark window complete`. Because the input script is timed in guest
microseconds, every build performs the same guest work in the window: 750
frames and 750 GE list submissions at 30 guest fps. Only wall time and the
section split should move.

Section timers stay enabled (`PSPRECOMP_MOTORSTORM_PROFILE=1`) for both the
baseline and candidate builds. They add measurable overhead, but identically to
both sides of a comparison. `tools/bench-compare.ps1` prints a table across all
captured reports.

## Baseline (2026-10-03)

Build: `main` working tree, MotorStorm generated corpus at `/O2 /Ob0`,
`PSPRECOMP_AOT_PRODUCTION_FASTPATHS=OFF`,
`PSPRECOMP_AOT_ASSUME_NO_WRITE_WATCH=OFF`, hardware D3D12 at 1×/None,
headless, audio off. Report files `01-baseline-a/b/c`.

| Run | frames | GE lists | wall | guest/wall | sync | fence | submit | decode | texture | other |
| --- | ---: | ---: | ---: | ---: | ---: | ---: | ---: | ---: | ---: | ---: |
| 01-baseline-a | 750 | 750 | 20.98 s | 1.19 | 3.82 s | 3.48 s | 3.04 s | 2.10 s | 0.62 s | 12.02 s |
| 01-baseline-b | 750 | 750 | 23.83 s | 1.05 | 6.17 s | 5.82 s | 3.52 s | 2.10 s | 0.61 s | 12.04 s |
| 01-baseline-c | 750 | 750 | 23.72 s | 1.05 | 6.17 s | 5.82 s | 3.48 s | 2.11 s | 0.61 s | 11.95 s |

Run `a` was the first run after an idle period; runs `b` and `c` agree within
0.5 %, so they are the reference. The section costs that vary between them are
the two GPU-wait scopes (`gpu_sync`/`gpu_fence`), not the CPU work. `other_ms`
(guest execution, HLE, GE command parsing and scheduling) is the largest single
bucket at roughly half of wall time, but it is also the most stable.

Later runs on this machine showed enough run-to-run drift (GPU/CPU clocks and
thermal state) that cross-build comparisons use interleaved A/B runs of the
same executable instead of separate build sessions.

## Optimization 1: overlapped GE submission (`host/motorstorm_gpu.cpp`)

The D3D12 backend used to record one command list per GE list, execute it and
wait for the fence before the guest could continue, so CPU vertex decode +
command recording and GPU rasterization never overlapped. Draws are now
submitted in chunks: the current chunk is closed and executed without waiting
when a draw threshold is reached, recording continues into the next of three
command slots, and a slot is only waited on when it is reused. Execution order
on the single queue, the per-draw ROV barrier and the final readback are
unchanged; the final fence wait in `gpu_sync` still covers every submitted
chunk before guest memory is published.

The texture-cache epoch (`gpu_memory_epoch`) is no longer tied to the raw
submission counter: it advances only once per GE list when readback actually
publishes pixels, so mid-list chunk submissions do not discard per-list texture
keys.

Tuning with `PSPRECOMP_MOTORSTORM_GPU_CHUNK_DRAWS` (2 runs per size, same
binary), window wall time:

| Chunk draws | wall run 1 | wall run 2 | mean | sections mean |
| ---: | ---: | ---: | ---: | ---: |
| 64 | 19.41 s | 19.49 s | 19.45 s | 7.14 s |
| 128 | 19.46 s | 19.58 s | 19.52 s | 7.16 s |
| 192 | 19.67 s | 19.47 s | 19.57 s | 7.27 s |
| 256 | 19.39 s | 19.66 s | 19.53 s | 7.35 s |
| 512 | 20.47 s | 20.41 s | 20.44 s | 8.27 s |
| 1024 | 21.95 s | 21.91 s | 21.93 s | 9.78 s |

128 draws is the default; smaller chunks add submission overhead without
further gain. Interleaved A/B of the shipped binary (single submission mode is
still reachable by setting the override above the frame draw count):

| Mode | wall | guest/wall | sections | fence | other |
| --- | ---: | ---: | ---: | ---: | ---: |
| single submission | 22.35 / 22.21 s | 1.12 / 1.13 | 10.18 / 10.17 s | 4.26 / 4.26 s | 12.17 / 12.04 s |
| 128-draw chunks | 19.53 / 19.36 s | 1.28 / 1.29 | 7.39 / 7.29 s | 1.01 / — | 12.14 / 12.06 s |

Same 750 frames and 750 GE lists in every run. The change is **12.7 % faster
wall time and 27.9 % lower in-section cost** with guest execution (`other_ms`)
unchanged; the GPU fence wait drops from 5.8 s in the 01 baseline to about 1.0 s.

Correctness: `motorstorm_gpu_tests` passes all 524 pixel-comparison cases, the
feedback/transfer/depth regressions and all 12 resolution/AA combinations;
`ctest` passes 3/3. `RESULT: PASS`.

### Build flags evaluated

`PSPRECOMP_AOT_PRODUCTION_FASTPATHS=ON` plus
`PSPRECOMP_AOT_ASSUME_NO_WRITE_WATCH=ON` (the VCS production combination) were
built and benchmarked as `02-fastpaths-*`. Every CPU-side section was
unchanged within noise; the small wall difference was GPU-clock drift. The
flags stay ON because they match the intended production configuration, but
they are not credited with a MotorStorm gain.

## Optimization 2: generated-corpus inline level (evaluated, rejected)

The generated units default to `/O2 /Ob0`
(`PSPRECOMP_MOTORSTORM_INLINE_LEVEL=0`). Building them at `/Ob1` was tried as
`09-inline1-*`: the run reproducibly crashed with `0xC00000FD` (stack
overflow) at guest dispatch PC `0x088C4538` after a few seconds of racing, on
two attempts. Inlining expands the frames of the enormous generated unit
functions enough to overflow the 64 MiB process stack. The corpus is restored
to `/Ob0`; a larger inline level is not a viable MotorStorm configuration
without splitting the generated functions first. `RESULT: FAIL, reverted`.

## Round 2 (2026-10-03): generated-code layout

Optimization 1 left `other_ms` (guest execution, HLE, GE parsing) at ~12 s of a
~20 s window. This round profiled inside that bucket and changed how the AOT
corpus is generated and compiled. Result: **the 25-second race window runs
37% faster (20.6 s → 12.9 s wall, guest/wall 1.21 → 1.94), with byte-identical
rendered frames** (verification below).

### Profiling inside `other_ms`

ETW kernel sampling needs administrator rights, so a small out-of-process
sampler was written: [`tools/sampler/sampler.cpp`](../tools/sampler/sampler.cpp)
suspends each busy thread, captures its context, walks the stack with DbgHelp
and aggregates self/inclusive/caller tables. A symbol build used the same
flags plus `/Zi` and `/DEBUG /OPT:REF /OPT:ICF`. The sampler started 38 s into
the run (the window opens at ~36 s) and sampled 16 s of racing (7,139 samples,
one busy guest thread).

Top findings in the 21-unit baseline:

| Item | Share of samples |
| --- | ---: |
| `software_ge_execute_list` (inclusive) | 41.1 % |
| ... `decode_vertex` (incl. `light_vertex` 3.7 %) | 10.3 % |
| ... `gpu_submit` | 14.0 % |
| ... GPU fence waits (`wait_value`) | 10.2 % |
| `std::array<uint32_t,32>::operator[]` **self** | 5.5 % |
| `AotFastView::aot_load32` / `aot_store32` / `ram_offset_of_fast` / `read_le32` | ~6 % |
| `std::bit_cast`, `isnan`, `fdclass`, VFPU accessors | ~4 % |

`std::array::operator[]` was a real out-of-line call. The generated corpus is
compiled at `/Ob0`, which disables *all* inlining, including `__forceinline`
(the comment in `guest_memory.hpp` assumed it still applied). Every
`ctx.gpr[N]` (~50,000 per 128 KiB unit), every guest load (three nested
calls) and every `bit_cast` was a call.

### Root cause: 612 KB stack frames

Compiling one unit with `/FAs` showed the cost goes beyond the calls
themselves. The 128 KiB unit-entry function of `generated_unit_0009` reserves
**612,128 bytes** of stack (`mov eax, 612128; call __chkstk`). Almost all of it
is single-use spill slots: a 16 KiB unit's 85,440-byte frame declares 10,980
`tv` temporaries, each written once and read once around an out-of-line
helper call. Every chained guest call enters such a function, so `__chkstk`
touches about 150 pages per call, and the nested native stack (up to 48
chained levels) covers tens of megabytes. That also explains the earlier
`/Ob1` stack overflow: inlining grows these frames (16 KiB unit: 85 KB at
`/Ob0`, 230 KB at `/Ob1`/`/Ob2`).

Frame size scales with the guest span emitted per C++ function, so the fixes
are (a) smaller units and (b) emitting accesses that need no inlining.

### Change A: smaller generated units

`psp_recomp --auto <elf> <dir> 0x08804000 <unit_span_bytes>` already supports
any span, and the runtime registers units through a dense table. The current
generator reproduces the checked-in 128 KiB corpus byte-for-byte, so only the
partition changed. Corpora were built side by side with the new
`PSPRECOMP_MOTORSTORM_GENERATED_DIR` CMake cache variable.
`Runtime::kGeneratedUnitFastCapacity` was raised from 512 to 1024 for the
641-unit corpus; units past that table silently fall back to per-PC dispatch.

### Change B: `psp_recomp --builtin-accessors`

A new opt-in final lowering pass (`lower_builtin_hot_accessors` in
`tools/codegen_main.cpp`) rewrites the emitted text:

- `ctx.gpr[N]` / `ctx.fpr[N]` → `aot_gpr[N]` / `aot_fpr[N]`, raw pointers taken
  once per unit entry from `ctx.gpr.data()` / `ctx.fpr.data()`;
- `aot_mem.aot_{load,store}{8,16,32}(…)` → `PSPRECOMP_AOT_{LOAD,STORE}{8,16,32}(…)`,
  expression macros in `guest_memory.hpp` that perform the identical fast-path
  test (RAM window, read watch, `PSPRECOMP_AOT_ASSUME_NO_WRITE_WATCH`) on a
  per-entry `AotFastView::Raw` copy and call the original member function for
  every other case (VRAM, scratchpad, watches, out of range);
- `std::bit_cast<float|std::uint32_t>(…)` → `__builtin_bit_cast(…)`.

Generated addresses are register/constant arithmetic (no nested loads were
found in any corpus), so the macros' repeated address evaluation has no side
effects. Non-MSVC compilers honor `always_inline`, so there the macros expand
to the member calls. The option is off by default; without it, generator
output is byte-identical to before (verified). `codegen_lowering_tests`
covers the rewrite and checks the macros against the member functions,
including the VRAM slow path.

### A benchmark pitfall: the execution clock

The first span comparison produced different frames for different corpora,
and slightly different `guest_ms` values. Guest time advances 64 µs per 256
chained dispatches without an import (`starvation_tick`), and the unit
layout changes how many transfers are chained dispatches. Different corpora
therefore run on different guest timelines. That alone does not prove a
miscompile, and it also means equal guest time is not equal guest work.

`bench-race.ps1 -FixedClock` sets `PSPRECOMP_TIME_TICK_DISPATCHES=0`, so guest
time is purely event-driven. Under it, **every corpus below produced frames
byte-identical to the baseline** (CPU framebuffer, display buffer and GPU
output at GE submissions 3400, 3650 and 3900), and the baseline was
byte-identical with itself across runs. All corpus comparisons below use
`-FixedClock`, with interleaved rounds of the same binaries.

### Results (fixed clock, identical guest work, 3 interleaved rounds)

| Corpus | Units | wall mean (sd) | vs baseline | `other_ms` | guest/wall |
| --- | ---: | ---: | ---: | ---: | ---: |
| baseline: 128 KiB, `/Ob0` | 21 | 20526 (90) | — | 11802 | 1.22 |
| 16 KiB | 161 | 19447 (401) | −5.3 % | 11021 | 1.29 |
| 8 KiB | 321 | 16279 (175) | −20.7 % | 8122 | 1.54 |
| 16 KiB + builtin accessors | 161 | 16445 (192) | −19.9 % | 8278 | 1.52 |
| 8 KiB + builtin accessors | 321 | 14577 (318) | −29.0 % | 6732 | 1.72 |

Second and third series (fresh baseline in each):

| Corpus | wall mean (sd) | vs baseline | `other_ms` |
| --- | ---: | ---: | ---: |
| baseline | 20627 (28) | — | 11868 |
| 8 KiB + builtin | 14473 (144) | −29.8 % | 6774 |
| **4 KiB + builtin** | **12860 (120)** | **−37.7 %** | **5718** |
| baseline | 20515 (83) | — | 11834 |
| 4 KiB + builtin | 13284 (382) | −35.2 % | 5865 |
| 2 KiB + builtin (1282 units) | 13187 (138) | −35.7 % | 5808 |

The two changes stack, and the gain levels off at 4 KiB (2 KiB is within
noise of it). **4 KiB + builtin accessors is now the checked-in corpus**: 641
units, regenerated with

```powershell
out/framework/Release/psp_recomp.exe profiles/motorstorm/game/EBOOT_DECRYPTED.BIN --auto profiles/motorstorm/generated 0x08804000 4096 --builtin-accessors
```

Final verification of the shipped `out/motorstorm` build against the frozen
baseline binary: byte-identical frames under `-FixedClock`, all test suites
passing (`psprecomp_tests`, `psprecomp_codegen_tests`,
`motorstorm_profile_tests`, and the 524 pixel-exact `motorstorm_gpu_tests`
cases), then 3 interleaved rounds in each clock mode:

| Clock | baseline wall (sd) | final wall (sd) | change | `other_ms` | guest/wall |
| --- | ---: | ---: | ---: | ---: | ---: |
| fixed (`-FixedClock`, series 50) | 20654 (262) | 12975 (146) | **−37.2 %** | 11865 → 5719 | 1.21 → 1.93 |
| normal gameplay clock (series 51) | 20276 (224) | 12726 (276) | **−37.2 %** | 11689 → 5644 | 1.23 → 1.97 |

Under the normal clock the game still renders 750 frames per 25 guest seconds
(30 fps). Faster dispatch-driven guest time cost no frames.

Side effects: `MotorStormNative.exe` shrinks from 76.6 MB to 28.3 MB, and a
full Release build of the profile tree (core, tools, tests, 641 units at the
default `/MP4`) took 551 s on this machine.

### Evaluated and rejected

| Experiment | Result |
| --- | --- |
| 16 KiB units at `/Ob1` (unit 0149 at `/Ob0`) | 20005 ms vs 19288 ms at `/Ob0` (series 30): **slower**. Inlined helpers grow the frame from 85 KB to 230 KB. |
| 16 KiB units at `/Ob2` | MSVC never finished `generated_unit_0149` (stopped after ~35 min); `/Ob1` stalled on the same unit. |
| Host GE micro-changes: skip world-space transform when unlit, lazy specular view vector, `push_back` instead of `insert`, reuse the `load_surface` scratch buffer | Pixel-identical, but 20529 ms vs 20526 ms under the fixed clock (an earlier normal-clock series suggested −1.7 %, which did not reproduce). **Reverted.** |
| 32 KiB units (normal clock, series 31) | −6.8 %; superseded by smaller spans. |

### Reproduction

```powershell
# interleaved, fixed clock, alternate binary
powershell -File profiles/motorstorm/tools/bench-race.ps1 -Name 50-final-r1 -FixedClock -Executable out/motorstorm/bin/Release/MotorStormNative.exe
# compare a different corpus without touching the checked-in one
cmake -S . -B out/ms-variant -DPSPRECOMP_PROFILE=motorstorm -DPSPRECOMP_MOTORSTORM_GENERATED_DIR=<dir>
```

Frame equality: set `PSPRECOMP_TIME_TICK_DISPATCHES=0`,
`PSPRECOMP_MOTORSTORM_FRAME_DUMP=1`, `PSPRECOMP_MOTORSTORM_DUMP_AFTER_GE=3400`,
`PSPRECOMP_MOTORSTORM_FRAME_DUMP_EVERY=250`, `PSPRECOMP_MOTORSTORM_FRAME_DUMP_COUNT=3`,
`PSPRECOMP_MOTORSTORM_FRAME_DUMP_BOTH=1` and a per-binary
`PSPRECOMP_MOTORSTORM_FRAME_DUMP_DIR`, run the benchmark, and compare file hashes.

## Round 3 (2026-10-04): GE thread (Anguta Glacier at 60 fps)

Anguta Glacier (Festival, Arctic Trucks, 4x resolution, FXAA, enhancements on,
60 fps) ran at **0.79x real time (47 fps)**: about 21 ms per frame on the one
emulation thread, so the game slowed down and the audio device ran dry ~7,700
times per minute (crackling). A symbol build (`-DPSPRECOMP_MOTORSTORM_HOST_SYMBOLS=ON`,
host sources at `/Zi` plus a PDB with publics for the corpus) under
`tools/sampler` showed 61 % of the thread inside GE list execution (draw
submission 23.5 %, readback publishing and GPU fence waits 17 %, vertex decode
16 %).

A per-frame timeline showed why that could overlap: the game enqueues its list
at the start of the frame and releases it with two `sceGeListUpdateStallAddr`
calls by about +3 ms, then spends ~9 ms more on the CPU before
`sceGeDrawSync`. The emulator executed the whole list only at DrawSync.

**Change:** a GE thread executes each list in segments as the stall address
advances (`software_ge_execute_segment`, a resumable `execute_list`), exactly as
the PSP's GE renders while the CPU continues. `sceGeDrawSync` queues the rest,
waits, raises the callbacks from the executed interrupts and presents, as
before. Commands before the stall are final, so the GE never sees later CPU
writes. A CPU access to VRAM waits for the thread before publishing readbacks
(`gpu_set_publish_guard`). `PSPRECOMP_MOTORSTORM_GE_THREAD=0` restores the
original single-thread ordering.

Deferring execution past DrawSync was tried first and rejected: the game
rewrites the same display list immediately after DrawSync (the GE walked
half-written commands), and write-protecting the pages the list reads stalled
within 0.1 ms of every DrawSync.

| Anguta Glacier, 60 s race window | guest/wall | fps | frame p50 | audio device dry |
| --- | ---: | ---: | ---: | ---: |
| Before | 0.79 | 47.4 | 21.6 ms | 7,856 |
| GE thread | **1.00** | **60.0** | 16.2 ms | 97 |

Also in this round:

- GE block transfers whose source is a target drawn in the current list (the
  game copies a 17x17 block of the frame every frame, a sun visibility test)
  are snapshotted on the GPU at their place in the command stream and written
  to guest memory at the next publish, instead of flushing and waiting for the
  whole frame mid-list (`gpu_transfer_from_target`). Transfer syncs: 3,280 → 2.
- The 30 fps fallback governor counted texture uploads and texture-pack
  streaming as loading screens, so on tracks that stream continuously it
  ignored most race samples and fell back half a minute late. Only bursts count
  now (`loading_activity`), and the log reports the governor's samples.
- The log records readback publishes per trigger (draw, sync, list end, CPU
  VRAM access, list start) with their GPU waits, and the `[PROFILE]` breakdown.

Correctness: all 10 test suites pass (including `motorstorm_gpu_tests` pixel
comparisons); boot, menus, vehicle select and the race were checked from frame
captures with the GE thread active.
