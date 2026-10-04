# MotorStorm performance ideas

A backlog of ways to make the native build faster, smoother and lighter, based
on the profiling done for the Anguta Glacier work (see
[PERFORMANCE_RACE_BENCH.md](PERFORMANCE_RACE_BENCH.md), round 3). Gains are
estimates unless a measurement is quoted; each idea should be benchmarked with
the race window before it is kept.

## Where the time goes now

With the GE thread, an Anguta Glacier race frame at 4x / FXAA / 60 fps splits
across two threads (measured before the split, per frame):

| Work | Thread | ms/frame |
| --- | --- | ---: |
| Game code (recompiled guest + HLE) | CPU | ~9.3 |
| GE vertex decode (incl. lighting) | GE | ~3.4 |
| GE draw submission (convert, textures, constants, recording) | GE | ~5.0 |
| GPU sync: fence waits + readback publish | GE | ~3.0 |
| Present, audio wait | CPU | ~0.3 |

The frame is now bounded by `max(CPU, GE)` instead of their sum: median
16.2 ms, but p99 is 25 ms and the worst frame 190 ms. The GE thread (~11 ms)
and the CPU thread (~9 ms + list building) both have only a few milliseconds of
headroom, so heavier scenes, 120 fps or slower PCs will hit the limit again.

---

## 1. GE thread (rendering emulation)

### 1.1 Decode vertices on the GPU instead of the CPU — **done (round 4)**
`VertexCS`: +10 % at 4x (now GPU-bound); CPU vertex decode 12.1 s → 1.4 s per
minute of racing. See PERFORMANCE_RACE_BENCH.md, round 4.
`decode_vertex` + `light_vertex` were 16 % of the old main thread (~3.4 ms).
~92,000 vertices per frame are decoded on the CPU into `GpuVertex` and copied
into the upload arena, although 86 % of draws already transform on the GPU.
Upload the raw PSP vertex bytes once and decode them in the vertex shader from
the VTYPE (position/normal/UV/colour/weight formats, morph, skinning). Keep the
CPU path for through-mode and the rare formats.
- Gain: most of 3.4 ms on the GE thread, plus less upload bandwidth.
- Risk: medium-high; must stay bit-exact with the CPU path (the GPU tests
  already compare pixels). Per-VTYPE shader permutations or a branchy shader.

### 1.2 Cache decoded static geometry
Track geometry, cars and props are drawn from the same guest addresses every
frame and never change. Cache the decoded vertex buffer by
`(address, vtype, count, index range, content hash)` and reuse the GPU buffer.
The existing vertex cache only works within one draw.
- Gain: most of the decode cost for static meshes even without 1.1.
- Needs cheap invalidation: hash only on first use per list, or track writes to
  the source pages (the page-protection code from the GE-thread experiments is a
  starting point).

### 1.3 Pipeline the GE thread itself — **deferred: would not help at 4x**
Measured after 1.1 and 1.4: the GPU bounds 4x (1.37x at 4x vs 1.84x at 2x) and
the GE thread is only ~60 % busy. Worth revisiting for 2x and below.
Split the GE thread into a *front end* (command parsing, vertex decode, texture
hashing) and a *back end* (D3D12 recording, uploads, syncs) connected by a
queue. They currently run back to back (~3.4 + 5 ms).
- Gain: GE time drops toward `max(front, back)`, about 5-6 ms.
- Complication: `gpu_feedback_available` and `gpu_sync_texture` query renderer
  state on the front end; mirror the surface state there or drain the queue at
  those points.

### 1.4 Remove the last mid-frame GPU wait (CLUT from a render target) — **done (round 4)**
Palettes and textures drawn in the current list are read on the GPU; mid-list
syncs went from 2,818 to 3 per run.
Once per frame the game renders 16 colours into `041BF000` and loads them as
the palette of a 4-bit texture at `041BD000`, and that texture is itself in a
render target. Each occurrence flushes and waits for the GPU (~2.5 ms, 2,821
per run), reads back every target and clears the per-list texture cache.

A first attempt only moved the palette to the GPU. It produced the brown box
behind the BOOST gauge because the *texture* still forced a sync, after which
the palette target was no longer "drawn in this list". A working version needs
both on the GPU: decode the CLUT-indexed texture directly from the resolved
target (a feedback path for indexed formats), with the palette copied from its
target in command order.
- Gain: ~2.5 ms per frame on the GE thread, plus fewer re-hashed textures.

### 1.5 Smaller per-draw constants
Every draw writes a 1,248-byte `Constants` block, including all 256 GE command
words, into the upload arena (~700 draws ≈ 0.9 MB per frame). Split the
constants into rarely-changing state (lighting, matrices, texture environment)
and per-draw values, upload a block only when it changes, and use root
constants for the small per-draw part.
- Gain: less `gpu_prepare`/`memcpy` time and upload bandwidth; maybe 0.5-1 ms.

### 1.6 Cheaper texture identification
`gpu_texture` hashes the full content of each texture the first time it is used
in a list, and every readback publish clears the per-list key cache, so
textures are re-hashed after each sync. Options:
- Keep the per-list key cache across publishes for textures outside render
  targets (a publish only changes target memory).
- Hash a sparse sample plus a generation counter, and do a full hash only when
  the sample changes or on a timer.
- Skip hashing for addresses known to hold static data (loaded from disc and
  never written since).

### 1.7 Lazier, smaller readback publishing
`publish_readbacks` copies every drawn target to guest memory at each list
boundary (~1.1 ms per frame) and compares it byte by byte with its shadow.
- Use `memcmp` / wide compares and merge only differing blocks.
- Convert 16-bit targets with SIMD instead of a per-pixel loop.
- Publish only the target (or page range) the CPU actually touches. The VRAM
  hook currently publishes everything on the first access.
- Most frames, nothing on the CPU reads the framebuffer. Measure how often the
  CPU-access publishes (4,168 per run) need the data at all.

### 1.8 Let the GPU run further ahead
The list-start publish still waits for the previous frame's GPU work (952 waits,
1.5 s per run). Allow one more frame in flight: keep two readback generations
and publish frame N-1 only when the CPU or a texture read needs it.

### 1.9 GPU-side cost at 4x resolution
Going from 4x to 2x raised the old single-thread speed from 0.79x to 0.89x, so
GPU work is visible too. Ideas:
- The ROV (rasterizer-ordered view) path with a per-draw barrier is expensive.
  Use a fast path with normal render targets and depth testing for opaque draws
  that need no PSP-exact blending, logic ops or stencil, and keep ROV for the
  rest.
- Tune `PSPRECOMP_MOTORSTORM_GPU_CHUNK_DRAWS` (draws per submitted chunk)
  against the GPU timeline.
- Profile with PIX (GPU captures work without the debug layer) to find
  expensive draws, overdraw-heavy particles and resolve passes.
- Dynamic resolution: drop from 4x toward 3x or 2x while the GPU is the
  bottleneck, keeping the HUD sharp.

---

## 2. CPU thread (game code)

### 2.1 Specialise VFPU instructions at code-generation time
The sampler shows the VFPU helpers near the top:
`write_vfpu_vector_with_destination_prefix`, `read_vfpu_matrix`,
`execute_vfpu_compare3`, `apply_vfpu_source_prefix`, `vfpu_vector_lane_index`
and `eat_vfpu_prefixes`. Prefix state and register layout are usually known
statically at each call site, so the recompiler can emit direct float
operations on fixed lanes instead of generic helper calls.
- Gain: potentially a large share of the ~9 ms game time (VFPU-heavy physics
  and matrix code).

### 2.2 Smaller stack frames and selective inlining in the generated code
The corpus is built at `/Ob0` because inlining blew up the huge per-unit stack
frames (stack overflow at `/Ob1`). Ideas:
- Emit fewer single-use temporaries (the `tv` spill slots) so frames shrink.
- Split very large guest functions into several C++ functions.
- Then re-enable inlining just for the hot accessors (`__forceinline` is
  ignored at `/Ob0`).

### 2.3 Profile-guided optimisation (PGO)
Train an instrumented build on a scripted race (the navigation input scripts
already reach Anguta Glacier) and rebuild with `/GENPROFILE` → `/USEPROFILE`.
PGO helps exactly this kind of large, branchy generated code: hot/cold layout
and branch ordering.
- Cost: build time. Try the host code first, then the corpus.

### 2.4 Floating-point helper calls
`fdclass`, `isnan<float>`, `sqrt`, `powf`, `fabs` and `ldexp` show up as real
calls. Use compiler intrinsics / SSE (`_mm_sqrt_ss`) in the generated code
where results stay bit-exact. `/fp:fast` is not an option without
validation, because the PSP's FPU behaviour must be preserved.

### 2.5 Replace hot guest functions with native code
Identify the hottest guest functions (`recomp_unit_0316`, `0308`, `0286`,
`0105`, `0042` and their callers in the sampler output) and check whether they
are library routines: `memcpy`/`memset`/`strcpy`, matrix multiply, quaternion
math, sorting, decompression. Replace them with native implementations behind
the same calling convention, as PPSSPP does with its function replacements.
- Gain: varies; library routines can be 5-20x faster natively.

### 2.6 HLE call overhead
`invoke_import_cached` and the import lambdas sit above most of the frame.
Check the per-call cost of hot imports such as `sceKernelCpuSuspendIntr`,
`sceGeListUpdateStallAddr` and `sceKernelPollEventFlag`, and remove `getenv`
calls from hot paths (`getenv` showed up in the profile; e.g.
`PSPRECOMP_MOTORSTORM_SOFTGE_DIAG` is read on every list).

### 2.7 Audio work off the CPU thread
Check how much SAS mixing and ATRAC decoding run synchronously on the guest
thread. Mixing ahead on a worker thread (bounded by the guest's buffer
semantics) would take it off the critical path.

---

## 3. Smoothness (p99 and worst frames)

### 3.1 Find the 190 ms hitches
The p99 is 25 ms and the worst frame is 190-230 ms. Log any frame over 33 ms
with its section breakdown and causes: texture uploads, texture-pack
replacements loaded (BC7 decode), new pipeline states, readback waits.

### 3.2 Pre-warm at loading screens
At the "loading" screen before a race, decode and upload the track's textures
and pack replacements, and build every pipeline state the race uses, instead
of doing it during the first laps.

### 3.3 Pipeline state cache
Serialise D3D12 pipeline libraries (`ID3D12PipelineLibrary`) to disk so later
launches don't compile PSOs on first use.

### 3.4 Texture-pack streaming budget
Bound the replacement uploads per frame (time-sliced) so a burst of pack loads
spreads over several frames instead of stalling one.

---

## 4. Configuration-level options

- A "performance" preset: 3x resolution, FXAA, enhancements off, `dynamic_fps
  = true`, for weaker laptops.
- An automatic choice at first launch: run a short benchmark and pick
  resolution and AA.
- Laptop power: request the high-performance GPU (already done) and the
  high-performance power scheme while racing, and warn when running on battery.

---

## 5. Measurement and tooling

- **Per-track benchmarks:** turn the navigation input scripts used for Anguta
  Glacier into `tools/bench-track.ps1 -Track <name>`, with fixed race windows
  per track and modes at 60 fps, 4x.
- **Per-frame CSV:** write each frame's CPU time, GE time, GPU time and waits
  so spikes can be plotted.
- **Regression guard:** run the race benchmark in CI or before each merge, and
  fail when `guest_per_wall` or p99 regresses beyond noise.
- **Sampler automation:** a script that builds with
  `PSPRECOMP_MOTORSTORM_HOST_SYMBOLS=ON`, runs `tools/sampler` over a race
  window and prints the top self/inclusive functions per thread.

---

## Suggested order

| Priority | Idea | Why |
| --- | --- | --- |
| 1 | 3.1 hitch logging | Cheap; tells us what the p99 frames are |
| 2 | 1.4 CLUT/feedback sync | ~2.5 ms of GE wait, a known single cause |
| 3 | 1.2 static geometry cache | Big decode saving, contained change |
| 4 | 2.1 VFPU specialisation | Main lever for the CPU thread |
| 5 | 1.3 GE front/back split | Doubles GE headroom |
| 6 | 1.1 GPU vertex decode | Largest win, largest change |
| 7 | 2.3 PGO | Broad gain for build-time cost only |
| 8 | 1.7 / 1.8 publishing | Steady ~1-2 ms |
| 9 | 3.2 / 3.3 pre-warm, PSO cache | Smoother first laps |
