# Automatic AOT generation performance

Measured on 2026-09-30, Windows x64, MSVC 19.44.35228 Release, 20 logical processors,
16.9 GB physical RAM. Benchmarks use the user's local MotorStorm decrypted executable;
automated tests use synthetic instructions and ELF files.

## Original pipeline

The complete generic `psp_recomp --auto` pipeline is in
[`tools/codegen_main.cpp`](../tools/codegen_main.cpp),
[`src/program_analysis.cpp`](../src/program_analysis.cpp), and
[`src/elf32.cpp`](../src/elf32.cpp):

| Stage | Work and ordering |
| --- | --- |
| ELF loading | Read and parse ELF headers, segments and sections. |
| Guest memory / relocations | Load guest segments, zero memory, apply PSP relocations; preserve unsupported relocation handling. |
| Imports | Find module info, scan import tables, collect import stub addresses. |
| Executable range discovery | Collect executable file-backed segment ranges, sorted by start address; address membership already uses binary search. |
| Initial function seeds | Scan executable words for direct JAL targets and include the runtime entry. |
| Global block starts | Scan branches/jumps and call return continuations into an ordered set. |
| Indirect targets | Propagate constants within blocks; scan up to 24 instructions from each LUI; scan relocated data and R_MIPS_32 sites for executable pointers. This discovers conservative pointer seeds, rather than resolving every dynamic JALR. |
| Per-function CFG | Traverse queued blocks in seed-address order. Labels, block entries, direct calls and indirect call sites are collected per function. Known seeds delimit straight-line traversal; the existing instruction cap remains 131,072. |
| Overlap / label aggregation | Union instruction labels and block entries; a hash map counts repeated block ownership. Overlapping functions retain their metadata. |
| Global entries | Merge seeds, CFG entries, discontinuities and unit boundaries; instructions are emitted once globally. |
| Unit partitioning | Partition sorted instruction/entry sets into fixed executable-address buckets (default 131,072 bytes). |
| Direct entry IDs | Assign the existing compact IDs in ascending entry-address order before emission. |
| Header generation | Publish cross-unit declarations in ascending bucket order. |
| C++ emission | Emit dispatch, basic blocks, guest instructions, delay slots, fixed chains, indirect dispatch and unit wrappers. This also performs instruction lowering. |
| Text lowering | Apply GPR, FPR, memory-view and VFPU text transformations in that order. |
| Unit output | Append registration code; compare existing output and publish completed files. |
| Registry / report | Emit imports and ordered unit registration; remove stale generated C++ files; publish `auto_codegen_report.json`. |

Originally, units ran serially and each complete source underwent repeated text passes
before writing. A whole unit, its lowered copies, the outer output stream, and an
existing file's complete contents could coexist in memory.

## Findings and incremental measurements

### MotorStorm's apparent stall was an infinite emission loop

The first unit reaches the JAL at `0x0880402C`, targeting import stub `0x08A5B18C`.
The import case emitted the guest PC assignment and `return`, then executed a host
`continue` inside the instruction loop without advancing PC. It kept appending the
same instruction forever. Increasing CPU time was therefore not evidence of useful
progress. This accounts for one busy core, growing RAM, and only the header appearing.

Instrumentation was added before the fix. A temporary diagnostic guard stopped after
65,536 repeated visits to the same PC: 0.703 s wall, 0.672 s CPU, 193.14 MiB peak
working set, zero C++ units and a 3,413-byte header. The guard was removed from the
final implementation. The fix uses `break` after emitting the import boundary;
the guest delay slot, link register write, PC assignment and return remain intact.
There is no completed unmodified MotorStorm run to assign a speedup ratio to.

### Replacing text inside a giant string was quadratic

With only the import loop corrected, the original serial pipeline completed in
46.772 s wall / 45.594 s CPU. Rounded per-unit timers summed to:

| Stage | Duration |
| --- | ---: |
| Seed discovery | about 0.10 s |
| CFG / overlap / label aggregation | about 0.27 s |
| Partition / direct entry IDs / header | about 0.14 s |
| C++ emission | 0.75 s |
| GPR lowering | **36.83 s** |
| FPR lowering | 0.85 s |
| Memory lowering | 0.63 s |
| VFPU lowering | 6.98 s |

GPR lowering repeatedly called `std::string::replace`. Each replacement could move
the remaining multi-megabyte suffix. FPR writes had the same pattern. Both now scan
the original text forward and append unchanged spans and replacements to a reserved
buffer. Nested parentheses, quoted characters, expression evaluation, zero-register
writes and defensive fallbacks retain the original behavior.

The first optimization (append buffers, chunked output and workers) measured 8.877 s
serial, 3.269 s with four workers and 2.644 s with 20. At that point VFPU passes were
the largest serial cost: 6.12 s in the instrumented serial run.

Regex patterns now compile once and are reused as immutable data. Each pattern has a
fixed helper prefix; `string::find` locates candidates and the same regex is matched
continuously at those positions. Chunks without that helper pass through unchanged.
Captures, replacement strings and pass order are preserved. This reduced the serial
run to 2.478 s.

At 20 workers, the next measurement showed 32.17 s of summed C++ emission durations
and 32.391 s process CPU, despite only 2.669 s wall. Hot locale-aware string streams
were replaced by a small text buffer with decimal `std::to_chars` insertion. This
reduced the next 20-worker sample to 1.219 s wall / 4.359 s CPU. These timings support
the stream change; the exact internal source of the stream contention was not
measured with a system profiler.

CFG sets already provide logarithmic membership; executable ranges use binary
search and ownership uses hashing. No quadratic vector scan, function containment
scan or pairwise overlap test was found in the measured path. CFG re-traversal across
overlapping functions remains intentional analysis work and was inexpensive here.

## New pipeline and synchronization

Analysis, partitioning, entry IDs and declarations finish before the worker pool
starts. The measured independent work is unit C++ emission, text lowering, registration
emission and file publication.

Shared immutable data consists of relocated guest memory, unit instruction/entry
sets, import stub addresses, direct entry IDs, file paths and compiled regex patterns.
Unit generation uses references to the instruction/entry sets, avoiding their former
copies. Each worker owns its text buffers, regex match state, output stream and result
slot. No runtime execution or guest memory mutation occurs in these workers.

[`parallel_work.hpp`](../include/psprecomp/parallel_work.hpp) creates a fixed number
of joinable workers, capped at the number of units. An atomic counter claims indexes.
Workers record timing, size and rewrite results only in their assigned slots. Atomic
status fields publish progress; the immutable start timestamp is published before
the first release store. The caller reads statuses with acquire loads.

One mutex protects complete log messages. A separate short pool mutex protects the
exception and worker-completion counters. Generation and file writes run outside
these mutexes. A worker exception stops further work claims, lets already running
tasks finish, joins all workers, and is rethrown on the caller. Thread construction
and monitoring exceptions also unwind through joinable thread ownership. There are
no detached threads or threads created per guest function.

`--jobs 1` runs work synchronously on the caller, retaining a serial debugging path.
CFG analysis remains serial because it took roughly 0.3 s in the initial measurement;
parallelizing it would increase complexity in a stage that did not cause the stall.

## Deterministic output and publication

Ordered maps/sets retain the existing canonical guest-address and bucket ordering.
Entry IDs and unit names are fixed before workers start. Units never append into a
shared source buffer. The caller aggregates indexed results and writes the registry
after every worker joins successfully; completion order cannot change declarations,
registration order, source contents or report counts.

Unit source is lowered in approximately 64 KiB chunks, split between complete emitted
statements. A statement, helper call and delay-slot/control-flow expansion stays
intact. Dispatch prologues and individual large statements may exceed this threshold;
it is a buffer target, not a strict allocation limit. An unusually long straight-line
block is also flushed periodically between instructions.

[`AtomicTextFile`](../tools/aot_output.hpp) writes to a sibling `.tmp`, checks writes,
flush and close, compares files in 64 KiB blocks and then renames. Windows uses
`MoveFileExW` with replacement; other platforms use same-directory filesystem rename.
Unchanged outputs retain their timestamps. Exceptions remove the temporary and
preserve an existing completed final file. Header, registry and report use the same
publication helper. A successful unit is published immediately.

This is atomic publication of individual files. Completed units remain after a later
failure; success registry/report publication and stale source cleanup do not run after
a worker fails. An existing registry/report can remain from the preceding successful
run, and the header is published before workers start. It is not a transaction over
the whole output directory. Concurrent generator processes must use different output
directories. Abrupt termination can leave `.tmp` files, but cannot expose a partly
written final C++ file; rerunning overwrites the temporary.

All 24 fresh MotorStorm files (21 units, header, registry and report) were SHA-256
identical to the minimally corrected original generator across jobs 1, 2, 4, 8, 20
and automatic selection. The final release runs were also compared across worker
counts. The existing report's rewrite counters describe output-directory history:
fresh directories compare identically, while an incremental rerun can change those
counters from 21/true to 0/false. Worker count and timings stay in logs, outside the
generated report.

## CLI and progress

```text
psp_recomp <ELF> --auto <generated_dir> [load_base_hex] [unit_span_bytes] [--jobs N]
psp_recomp <ELF> <functions.csv> <generated_manifest.cpp>
psp_recomp --help
```

`--jobs N` can precede or follow the optional positional numbers. Default and
`--jobs 0` select `std::thread::hardware_concurrency()`, falling back to one if it
returns zero. Explicit worker counts are positive or zero decimal integers. Workers
are capped at the number of units. Existing positional syntax and default load base
`0x08804000` / unit span `131072` are preserved. Manual generation retains its syntax.

Startup prints paths and requested workers; after analysis it prints runtime entry,
functions, unique blocks, labels, block occurrences including overlaps, repeated block
entries, indirect sites, planned units, actual workers and unit span. Each analysis
scan reports totals and duration. CFG progress counts completed functions, including
heartbeats during a long function traversal. Emission progress counts blocks because
automatic units merge overlapping function bodies.

Periodic progress is throttled to approximately one update per second, with completed
work, percentage, elapsed time and rate. ETA appears only after at least three seconds
and approximately 5% completion. Stage boundaries and unit completion always print.
Workers expose their current emission/lowering/output phase to the caller's monitor.
Unit completion prints the filename, megabytes, elapsed time and per-pass timings.

The final summary distinguishes total/generation wall time from summed worker stage
durations, which can exceed wall time and must not be added to it. Generation wall
time includes file output. Analysis, CFG/overlap, partition/header and final metadata
are measured serial durations. There are 126,988 discovered unique block entries but
126,998 registered PCs here: unit-boundary and discontinuity entries add ten.

MotorStorm command (run from the repository root):

```powershell
.\out\framework\Release\psp_recomp.exe .\profiles\motorstorm\game\EBOOT_DECRYPTED.BIN --auto .\profiles\motorstorm\generated --jobs 20
```

## Benchmarks

Input SHA-256:
`bfb677677c939aa6cf99fc97120d7345c9361b77125115338ed479fd1d7c4c16`.
Runtime entry `0x08804000`; 90,500 relocations, six unsupported; 343 imports;
18,166 functions; 533,203 unique instruction labels; 126,988 unique block entries;
196,896 block occurrences including overlaps; 5,503 indirect call sites.

All completed runs produced **21 units and 71,144,597 bytes** of output. The default
span was preserved. Optimized rows below show median wall/CPU time of three runs into
fresh directories and the maximum peak resident working set across those runs.
The minimally corrected original baseline is one run. Disk cache was warm;
measurements include process startup, generation, comparison and publication, not
compilation or execution of the generated game. No compiler/test runs overlapped
the final three-run matrix. Peak working set uses Windows' process peak counter;
CPU uses total user + kernel time. The harness polls at 20 ms.

| Pipeline | Workers | Wall (s) | CPU (s) | Peak RAM (MiB) | Units | Output (MB) |
| --- | ---: | ---: | ---: | ---: | ---: | ---: |
| Original + import loop fix | 1 | 46.772 | 45.594 | 193.52 | 21 | 71.145 |
| Optimized | 1 | 2.257 | 2.203 | 176.52 | 21 | 71.145 |
| Optimized | 2 | 1.581 | 2.328 | 177.91 | 21 | 71.145 |
| Optimized | 4 | 1.267 | 2.562 | 179.43 | 21 | 71.145 |
| Optimized | 8 | 1.211 | 3.078 | 182.04 | 21 | 71.145 |
| Optimized | 20 (hardware concurrency) | 1.068 | 4.391 | 188.59 | 21 | 71.145 |

| Workers | Wall samples (s) |
| ---: | --- |
| 1 | 2.234, 2.511, 2.257 |
| 2 | 1.581, 1.739, 1.579 |
| 4 | 1.229, 1.393, 1.267 |
| 8 | 1.091, 1.300, 1.211 |
| 20 | 1.068, 1.062, 1.199 |

On this machine, algorithmic changes give about **20.7x** lower wall time serially
against the loop-corrected baseline. Twenty workers give about **2.1x** improvement
over optimized serial generation, or **43.8x** against that baseline. These ratios
do not compare against the nonterminating unmodified generator. Four workers use
less aggregate CPU while approaching the 20-worker wall result. Choose based on
the host's measured throughput and CPU availability.

[`tools/benchmark_aot.ps1`](../tools/benchmark_aot.ps1) records wall time, CPU time,
peak RAM, exit status, output bytes and unit count in `measurements.jsonl`, with a
separate log per run. It has no Python dependency. Use fresh names for fresh-output
comparisons:

```powershell
foreach ($repeat in 1..3) {
    foreach ($jobs in @(1, 2, 4, 8, 20)) {
        .\tools\benchmark_aot.ps1 -Name "run-$jobs-$repeat" -ExtraArgs '--jobs', "$jobs"
    }
}
```

The harness accepts `-Exe`, `-InputElf`, `-OutputRoot`, `-Name`, `-TimeoutSeconds` and
`-ExtraArgs`. It stops at its timeout (default 300 s) or a 3 GiB peak working set.
Raw development logs and measurements are local under `out/aot-perf`, excluded from
source control. Tests and benchmark helpers do not distribute commercial game data.

## Regression validation

Release framework build and both framework CTest targets passed. The VCS profile
generator and all profile test targets built against the updated core; all six
CTest targets in the VCS test configuration passed:

- `psprecomp_tests`: existing runtime/analysis/manual/automatic tests plus job
  selection, jobs 1/4/20/0 byte equality, ordered manifests, invalid CLI arguments,
  caller-thread serial execution, worker exception propagation/joining, output
  replacement, unchanged timestamps and failed publication cleanup.
- `psprecomp_codegen_tests`: import JAL emitted once with its delay slot, nested and
  quoted GPR/FPR expressions, zero-register effects and fallbacks, regex candidate
  equivalence, integer/character formatting and streamed versus whole-unit lowering.
- `vcs_profile_tests`, `vcs_config_tests`, `audio_resampler_tests`,
  `vcs_bootstrap_paths_tests`: existing profile regressions.

`psp_analyze` was rerun on MotorStorm and reproduced all counts above;
`dump_function` decoded the offending import call and delay slot. The final command
also populated `profiles/motorstorm/generated` with the complete units. Runtime
interfaces and the checked-in VCS corpus were unchanged; VCS game boot was not tested
because its executable/assets were absent.

Build and test commands:

```powershell
cmake --build out/framework --config Release --parallel 4
ctest --test-dir out/framework -C Release --output-on-failure
cmake -S . -B out/aot-vcs-tests -DPSPRECOMP_PROFILE=vcs -DPSPRECOMP_MSVC_MP_JOBS=2
cmake --build out/aot-vcs-tests --config Release --target vcs_profile_tests vcs_config_tests audio_resampler_tests vcs_bootstrap_paths_tests vcs_recomp psprecomp_tests psprecomp_codegen_tests --parallel 4
Copy-Item profiles/vcs/third_party/ffmpeg/bin/*.dll out/aot-vcs-tests/bin/Release/
ctest --test-dir out/aot-vcs-tests -C Release --output-on-failure --timeout 60
```

The FFmpeg DLL step supplies existing profile dependencies to the separate test build.

## Remaining costs

After optimizing generation, serial seed discovery, CFG/overlap aggregation and
partitioning account for most of the roughly one-second 20-worker run. Ordered tree
allocation and retained per-function CFG metadata dominate the analysis memory
footprint. They are candidates for further indexing/compact representations only
after measurement on another corpus; changes must preserve seed-boundary traversal
and overlap metadata.

FPR reads still scan each bounded chunk with their original regex. Unit scheduling
can be imbalanced for other games, and units/header/registry still use some stream
formatting for metadata. Completed-file comparison costs a full read on incremental
runs. Filesystem throughput and antivirus inspection can dominate larger outputs.
Worker count scales buffers and stack use with active units; it does not multiply
the shared CFG. Compiling the generated C++ is a separate performance problem and
was not included in these generation benchmarks.

## Runtime speed of the generated code

Generation speed and the *runtime* speed of the emitted code are separate.
For corpora compiled without inlining (MSVC `/Ob0`, which also disables
`__forceinline`), `--builtin-accessors` emits raw register-file indexing,
`PSPRECOMP_AOT_*` memory macros (defined in `guest_memory.hpp`) and
`__builtin_bit_cast` instead of helper calls. The unit span bounds the size of
each unit-entry function and therefore its stack frame, which `__chkstk`
probes on every chained guest call. On MotorStorm, 4 KiB units plus
`--builtin-accessors` ran the race benchmark 37% faster than 128 KiB units, with
byte-identical frames; see
[`profiles/motorstorm/progress/PERFORMANCE_RACE_BENCH.md`](../profiles/motorstorm/progress/PERFORMANCE_RACE_BENCH.md#round-2-2026-10-03-generated-code-layout).
The option is off by default, and default output is unchanged.
