# MotorStorm Android runtime and settings launcher

Planning date: 2026-10-05. Status: implementation plan; no Android build or device
performance has been validated. Read alongside `HANDOFF.md` and
`VULKAN_RENDERER.md`. This document supersedes the Android recommendations in
`VULKAN_ANDROID_PLAN.md` where they differ.

## Implementation log (2026-10-05)

M0/build skeleton is installed on the real Pad. Java Android Views currently form
the small launcher; SDL3 is being integrated for the game activity. Existing
uncommitted Windows renderer changes are preserved. No game performance pass is
claimed. Toolchain actually built: AGP 9.1.0 / Gradle 9.3.1 / JDK 25 / SDK 36 /
NDK 28.2.13676358 / CMake 3.22.1, using local caches without SDK/NDK downloads.

Device: adb-authorized `8b6932b1`, model/codename dizi, Android 16/API 36,
5850328 KiB kernel-visible RAM (6 GB variant), 4096-byte OS pages.

| Measured capability | System Qualcomm | Imported MrPurple T30 |
|---|---|---|
| Device Vulkan API | 1.1.128 | 1.4.359 |
| Driver version (raw) | 2150002786 | 109060195 |
| Fragment pixel interlock | absent | absent |
| Ordered color attachment access | absent | present |
| Dynamic rendering | absent | present |
| Geometry/clip distance | present/present | present/present |
| fp16/int8 | present/present | present/present |
| Runtime arrays / sampled nonuniform indexing | present/present | present/present |
| Timeline semaphores | present | present |
| Minimal VkDevice creation | success | success |
| Surface present modes | MAILBOX, FIFO, shared demand/continuous | see captured JSON |
| Race CPU/GPU time / FPS | device create reaches programmable-lock, then `vkCreateGraphicsPipelines` returns -13 (`VK_ERROR_UNKNOWN`) before a frame. No race. | 2026-10-05 bench, guest 115.019s–155.020s, 1200 frames: wall 59187 ms, guest/wall 0.676, wall fps 20.27, frame p50 49.40 ms, p99 57.12 ms, max 59.37 ms. Chunk GPU time from timestamp queries on the last 1200 present rows averaged 11.0 ms. 1192/1200 frames (99.33%) had CPU frame time above 33.3 ms. Render scale stayed 1.0 because GPU time was under the 33.3 ms budget. |

Reports: `out/android/evidence/capabilities-system.json` and
`capabilities-imported.json`. Stock driver build: `0c393b63cf`,
`I94e2bd5684`, date 05/02/25, compiler EV031.36.08.33. The standalone probe's
present modes were null until an actual Android surface was supplied in the APK.

The user requested the latest release from MrPurple666/purple-turnip. GitHub's
latest tag was `vturnip_mrpurple_T30-toasted.adpkg` (2026-08-17), asset
`turnip_mrpurple_T30-toasted.adpkg.zip`, 3713730 bytes, SHA-256
`f65b2d3353fd4aa7190bb5426b94468e99ffea7a58a830bc0c4651db89353227`.
The release notes partially drop A710/A720 support, but initialization on this
Pad succeeded. That establishes neither rendering correctness nor performance.
The driver is imported into private files, outside the APK. System remains default
for new installs; the test explicitly selects the imported driver.

User data input: the supplied USA ISO is 870809600 bytes, contains encrypted
`~PSP` EBOOT tagged `0xd9160bf0`, and a BOOT.BIN without ELF magic. Per the user's
latest instruction, implement ISO extraction plus a user-provided decrypted
EBOOT picker. Keep only one compatibility check (SHA-256 against the AOT input):
`bfb677677c939aa6cf99fc97120d7345c9361b77125115338ed479fd1d7c4c16`.
Do not add a PRX decryptor or a second game-revision approval flow.

| Requested comparison / gate | Current result |
|---|---|
| Stock vs Turnip race performance | Not met. Turnip numbers are the row above. Stock Adreno 710 selects `programmable-lock` and fails pipeline creation with -13. No stock race. |
| Dynamic vs fixed / SGSR | Dynamic is implemented and was on for the Turnip bench. Scale stayed 1.0. SGSR 1 is in the Android present shader when the scale mode is not Off. No fixed-vs-dynamic A/B, because GPU time was not the limiter. |
| Rotation, cache, tile passes, fp16, descriptors, affinity, ADPF, thermal A/B | Not measured. Pre-rotation and FIFO were already on. No optimization was kept from an A/B. |
| Five-minute race / lifecycle / validation | Not run. The measured window is 40 guest seconds (59.2 s wall) on Turnip, with no validation layer and no app switch or rotation. |
| Twenty-minute race, 1% low <= 34 ms, late frames < 1% | Not met. Not run for 20 minutes. The 1200-frame window already has p99 57 ms and 99.33% of frames later than 33.3 ms. `ge_submit` was 46612 ms of the 59187 ms wall. |
| 60 fps / higher scale | Not attempted. The 30 fps gate failed. |

## Session 2026-10-06: fixes and race measurements (MrPurple T30, Redmi Pad Pro)

Root causes found on the device and fixed:

| Problem | Evidence | Fix |
|---|---|---|
| No music / movie audio | arm64 FFmpeg archive has no `atrac3`/`atrac3p` decoder (`llvm-nm`); log `ATRAC3+ decoder unavailable`, `[ATRAC] decoder could not open source` | FFmpeg's LGPL ATRAC3/3+ decoders vendored as `third_party/at3_standalone` (Android only, `PSPRECOMP_AT3_STANDALONE`); `[ATRAC] real ATRAC decoder` now opens |
| Stereo | 155 s capture of the PCM sent to AAudio: L/R correlation 0.8–0.9 in music, L−R RMS ≈ half the signal, 14 clipped of 13.6 M samples | Stereo confirmed; crackle came from underruns while the game runs below real time |
| Race never started | `[SAVEDATA] ... result=0x80110305 host_error="directory_iterator ... Permission denied [.../files/SAVEDATA]"`: folder created by `adb` (owner `shell`) | Launcher moves an unusable save folder aside and uses an app-owned one; benchmark saves live in app-private storage. Every earlier "race" benchmark had in fact never reached a race |
| Low resolution | INI was 1x (480×272) | "Full" = display-fitted multiple (5x on 2560×1600), menus/pause/movies always full; dynamic only while racing, windowed, one raster step at a time, never below native |
| DRS crash | SIGSEGV after `render scale 2/2 -> 1/2` | Sub-native rasters handled (native buffer, ResolveCS); DRS floor = native |
| Garbled frames after a scale change | presenter read with the live `raster_half` | Per-frame `raster_half`; SGSR and present sample the raster grid |
| App switch kills the game | `acquire swapchain image failed: -1000000000` (SURFACE_LOST) | Surface loss non-fatal; presentation rebuilt for the new `ANativeWindow`; lifecycle event watch pauses guest/audio |
| GE queue stalled behind vsync | single queue + FIFO; `present_ms` 88 s of 127 s | MAILBOX (+60 Hz frame-rate hint); `MOTORSTORM_ANDROID_PRESENT_MODE=fifo` for A/B |
| Back closed the game | — | Back = Start (pause menu) |
| Audio queue 0.1 s, no retry | — | 0.28 s queue like WASAPI, open retry, usage GAME, WAV capture (`audio_capture` extra) |

Race performance (scripted race window, 40 guest s, original 30 fps, audio on,
scale mode off; `tools/android/bench.sh`): **1x p50 58.8 ms (14.6 fps), 2x 96 ms,
3x 158 ms**. The 30 fps gate is **not met** at any resolution.

Attribution by on-device A/B (wall time; GPU timestamps proved unreliable on
T30, calibration 69 ns/tick measured vs 33 ns reported):
- The GPU is the limit (~80 % `gpubusy`); both main threads are ~25 % on-CPU.
- Skipping all GE draws: 36 ms (sysmem) / 33.3 ms (GMEM) — the rest fits the budget.
- Trivial pixel shader: 33.9 ms. **The cost is the ordered-attachment uber pixel
  shader**, not draw submission, vertices, passes or present: texturing ≈ 9 ms,
  attachment reads ≈ 10 ms, the remaining pixel pipeline ≈ 8 ms at 1x.
- No measurable effect: present pass (skipped entirely: no gain), ROAA flags,
  selective attachment loads (most race draws depth-test/blend; reverted), LRZ,
  UBWC, binning, deeper command queue.
- `TU_DEBUG=gmem`: 60.7 ms vs 72.6 ms but **one-frame black flashes** (2–5 per 8 s,
  `tools/android/flicker.py`); not enabled.

Kept optimizations (each with a switch): lazy attachment↔buffer ownership
(`PSPRECOMP_MOTORSTORM_LAZY_ATTACHMENTS`), sampled-rectangle snapshot reuse for
render-target textures (`..._SNAPSHOT_ROWS`, 31→18 copies/frame), RGBA8 texture
present (`..._PRESENT_TEXTURE`). They reduce pass breaks/copies; frame time is
bounded by pixel shading, so they matter more at 2x/3x than at 1x.

Next step required for 30 fps: a fixed-function path (hardware blend/depth on
RGBA8 + depth attachments) for the common PSP states, keeping the ordered path
only for states hardware cannot express — the approach mobile PSP emulators use.
That is renderer work, not tuning.

## Target and scope

User decisions:

- First device: **Redmi Pad Pro, Snapdragon 7s Gen 2**.
- Controls: **touch plus Bluetooth/USB controllers**.
- Game setup: **select a PSP ISO and extract it inside the app**.
- Deliverable: arm64 APK with a launcher to configure and run MotorStorm.

Xiaomi documents a 2560 x 1600, 16:10 display with refresh modes up to 120 Hz,
and 6/8 GB RAM variants. These establish layout and resource constraints, not
achievable game performance. The user's Android/HyperOS version, RAM variant,
Vulkan driver and extensions remain unknown. [Xiaomi specifications][xiaomi]

Success means full-speed, correctly paced gameplay with working saves, sound,
movies and both input methods. Initial performance gate: sustained original
30 fps at 1x over a 20-minute race. Evaluate 60 fps and 2x independently after
that passes. These are acceptance targets, not measured claims. A 120 Hz screen
does not justify running the guest simulation at 120 fps.

Keep D3D12 as the Windows default. Keep Windows configuration and behavior intact;
introduce an Android default template. Do not edit the user's installed Windows
INI, commit, or push as part of this plan.

## Findings from the current source

| Area | Confirmed state | Android consequence |
|---|---|---|
| Build | Profile CMake unconditionally finds FXC, links Windows libraries, uses x64 SDL/FFmpeg and creates desktop tools/tests | Android needs separate platform source/link/tool selection |
| GPU dispatch | `motorstorm_gpu.hpp` is portable; `motorstorm_gpu.cpp` contains dispatch and D3D12 | Extract the small dispatch seam; retain backend implementation rather than redesigning the whole renderer |
| Vulkan | Runtime loads `vulkan-1.dll`, creates Win32 surfaces, requires Vulkan 1.3, interlock, geometry shaders, clip distance and push descriptors | Loader, surface, capabilities and feature fallbacks must change |
| Pixels | Packed color/depth buffers are updated with ordered fragment interlock | Mobile compatibility is a renderer project, not just an NDK recompile |
| Generated code | Current tree contains 642 generated `.cpp` files; most guest spans are 4 KiB | Compile the existing corpus for arm64; count from its manifest, not the older handoff estimate |
| Guest memory | MSVC gets raw-access macros; other compilers use `always_inline` accessors with `memcpy` | Inspect ARM output before changing accessors; do not assume Clang incurs calls |
| Game loading | `src/elf32.cpp` rejects encrypted `~PSP`; bootstrap expects a decrypted ELF/PRX | ISO extraction and executable preparation are separate gates |
| Identity | Bootstrap logs executable SHA-256 but does not establish compatibility with the generated corpus | Add an enforced game revision manifest before allowing Play |
| Media | `motorstorm_atrac.cpp` uses the shared FFmpeg decoder for music as well as movies | Port FFmpeg early; MediaCodec alone will not replace ATRAC support |
| Input | Controller implementation owns a polling thread and consumes SDL events | Android needs a single SDL event owner for lifecycle, touch and controllers |

The previous plan's automatic DXC ROV lowering description is obsolete: the
working Vulkan shader uses explicit interlock and a live flag. Preserve that
structure and the transparent-mip division fix described in the handoff.

## Application architecture

Use a small **Kotlin launcher with Android Views**, and a **game activity derived
from SDL3's SDLActivity**. Build SDL3 from pinned source; keep its Java glue from
the same revision and subclass it rather than modifying upstream glue. SDL's
Android integration builds native main as a shared library. [SDL Android guide][sdl]

```text
LauncherActivity
  Home / Settings / Controls / Import / Diagnostics
  AppConfigRepository -> validated, versioned Android settings
  IsoImportWorker -> validated game installation + compatibility manifest
  GameActivity (SDLActivity, dedicated :game process)
    launch arguments -> immutable session configuration
    libmain.so -> existing AOT + core + HLE + portable platform adapters
      Vulkan -> Android surface -> present + touch overlay
      SDL audio -> decoded ATRAC / movie audio
      SDL events -> touch / gamepad / lifecycle state
```

The dedicated game process isolates native global state and crashes from the
launcher. On normal exit: flush saves, stop workers, release GPU/audio, then finish
the owned game session. Verify SDLActivity startup/exit behavior in this process;
each subsequent Play must start a clean runtime. Exchange launch arguments and a
small session-result file, not per-frame JNI calls.

Keep UI work off the game thread. The launcher does not render during play. The
native touch overlay uses the existing present pass, avoiding a separate Android
composition layer for every frame.

### Settings contract

Extend native configuration with a serializer and a typed settings description
(key, type, range, default, supported platform, apply mode). Expose that description
to the launcher so validation is not independently recreated in Kotlin.

Store a canonical Android INI and versioned launcher/touch metadata in app-specific
storage. Use native validation on load and before atomic temp-file replacement.
Generate an immutable session INI for each Play and pass its absolute path with
the existing `--config` argument. Native startup logs the effective configuration.
Pass absolute EBOOT, disc, save, texture and log roots; APK library directories and
the working directory are not data directories.

Production launcher launches must not inherit stale diagnostic environment
overrides. Clear the known override set in the game process before applying the
session configuration; allow deliberate overrides only in diagnostic builds.
Preserve the existing Windows INI/environment precedence.

For v1, settings changes apply on the next launch. Touch overlay visibility and
pause-menu actions may apply immediately through a synchronized input/UI command
queue. Do not promise live resolution, pixel-path or FPS changes until renderer
and timing reconfiguration are tested.

### Launcher screens

| Screen | Required functions |
|---|---|
| Home | Game identity and readiness, large Play button, Import ISO, Settings, last-session result |
| Graphics | Resolution 1/2/3/4x, None/FXAA, PSP/enhanced filtering, PSP/automatic aspect, draw distance, optional effects, texture pack budget |
| Performance | Original 30 / 60 with dynamic fallback, presets, optional FPS/frame-time overlay; resolution is separate from display size |
| Audio | Enable/mute; volume requires a new tested mixer gain, since it is not currently a native config option |
| Controls | Connected pad status, remapping, deadzone, trigger threshold, rumble; touch layout editor, size, opacity and reset |
| Game data | ISO import progress/cancel, supported revision, installation size, explicit reimport; savedata export/import |
| Diagnostics | Android/driver/capability report, selected pixel path, effective settings, local log export |

Use a two-pane layout on the tablet where space permits. Keep restart behavior
visible. Disable unavailable settings with a concise reason. Android should not
offer D3D12, XInput, WASAPI, Windows fullscreen modes, desktop window scale or
120/240 fps simulation presets. Pixel-path forcing belongs in developer diagnostics.

Proposed presets, to be calibrated on the actual tablet:

| Preset | Resolution | Timing | AA | Textures/effects |
|---|---|---|---|---|
| Battery / initial default | 1x | original 30 | None | PSP filtering, replacements off, effects off |
| Balanced | 2x | original 30 | None | same stock baseline |
| Performance | 1x | 60, dynamic fallback | None | same stock baseline |
| Custom | user selected | 30 or 60 | None/FXAA | bounded optional settings |

Keep normal draw distance and current compatible game fixes initially. A proposed
128 MiB replacement-texture budget applies only when replacements are enabled;
adjust from measured memory pressure. Keep SSAA and 8x out of first-release mobile
presets. Preserve original filtering/effects defaults for accuracy captures.

## ISO import and executable compatibility

Use the Android system document picker (`ACTION_OPEN_DOCUMENT`), retain a read
grant if later retries need it, and stream from the content URI. Do not treat
`content://` as a filesystem path. Providers may not give a seekable descriptor;
copy to a bounded local staging ISO in that case. Native gameplay reads the
extracted local files, not the SAF provider. [Android document access][saf]

Implement a bounded ISO9660 reader under this profile:

1. Validate volume descriptors, extents, directory records and file lengths.
2. Read `PSP_GAME/PARAM.SFO`; check title/disc revision against supported metadata.
3. Calculate extraction/staging space before beginning; show progress and cancel.
4. Extract `PSP_GAME` and relevant disc files into a staging `disc0` tree, with
   safe relative paths, integer overflow checks and quotas. Preserve names used
   by the existing game filesystem; handle ISO version suffixes consistently.
5. Prepare and validate the executable as described below.
6. Atomically publish a complete installation and manifest. Interrupted imports
   leave the previous installation and saves usable. Do not delete the source ISO.

First version accepts uncompressed ISO; CSO/CHD are separate work. Importing data
does not require regenerating AOT code on the device.

**Executable gate:** extraction alone cannot decrypt an encrypted `EBOOT.BIN`.
An extracted `BOOT.BIN` or EBOOT that is already a valid ELF is usable only if its
load layout and SHA-256 match the corpus's supported manifest. A title/disc ID
alone is insufficient. Derive the manifest from the executable used for this
corpus; validate again natively immediately before boot.

The current [source provenance policy](../../../docs/SOURCE_PROVENANCE.md) says:
"The repository does not contain an EBOOT/PRX decryption implementation" and places
executable preparation outside PSPRecomp. Accordingly, the immediately compatible
flow is **ISO import plus a conditional picker for the matching user-prepared
decrypted executable**. Do not label an encrypted ISO installation playable.

If fully automatic encrypted-ISO-only setup is required, make it an explicit
additional work item: evaluate an independently licensed, compatible profile-local
decryption dependency, record provenance and the changed policy, and validate its
output against the corpus manifest. No such dependency has been selected or
verified in this plan. Do not copy PPSSPP decryption code into MIT sources. This
decision does not block planning, launcher work, ISO extraction or device probing;
it does block claiming encrypted-ISO-only installation is complete.

Put settings/saves/manifests under durable app-specific storage and game assets
under an explicit app-specific asset root. Keep saves outside installation staging.
Document that uninstall removes app data; export saves through the system picker.
Never pack the user's ISO or executable into the APK.

## Mobile renderer strategy

### Probe before choosing the pixel path

First build a small arm64 capability APK, requiring no game files or AOT corpus.
Save a JSON report with OS build, ABI, runtime page size, Vulkan loader/device API,
GPU/driver IDs, device features/extensions, queue/present support and format limits.
Show the report in the launcher diagnostics screen later.

Probe interlock, EXT/ARM rasterization-order attachment access, timeline semaphores,
dynamic rendering/synchronization2 and their extension alternatives, push
descriptors, clip distance, geometry shaders, fragment storage operations,
anisotropy, attachment/input formats (`R32_UINT` especially), storage formats,
descriptor limits, storage-buffer range, queue count, alignment, memory budgets,
compression formats and swapchain modes. Select capabilities by queried support,
not Snapdragon marketing name or reports from another firmware.

| Path | Availability | Plan |
|---|---|---|
| A: interlock | queried ordered pixel interlock and needed storage features | Retain desktop packed-buffer path as an option; benchmark it on mobile |
| B: ordered attachments | queried EXT/ARM ordered color access and required integer attachment/input support | Preferred mobile accuracy candidate; implement and validate before assuming byte parity |
| C: conventional attachments | A/B unavailable or demonstrably too slow | Required compatibility branch in that case; fixed-function blending/depth/stencil plus carefully tested special cases |

Do not automatically pick A simply because it exists: ordered attachment access
may perform better on a tiler. Qualify candidates with tests and measurements.
Neither B support on the Windows NVIDIA GPU nor B support on the Redmi is proven.
If B cannot be tested on desktop, use the Android harness or another supporting
device; desktop implementation does not depend on assumed NVIDIA support.

### Ordered attachments require a new surface representation

Implement persistent packed-color and packed-depth images as integer color
attachments, also read as input attachments in a traditional render pass.
Enable the matching ordered-access subpass and pipeline flags. Reuse PSP integer
pixel math, and preserve existing color on killed/test-failed invocations. The
extension orders attachment access; it does not make arbitrary storage-buffer
writes ordered. [Khronos ordered attachment proposal][ordered]

Provide explicit image-to-buffer/buffer-to-image synchronization for guest VRAM
publication, initialization, feedback snapshots, transfer, capture, presentation
and soft-particle depth reads. Track which representation owns the latest data;
avoid duplicate conversions on every draw. Group compatible draws in long render
passes; end passes only for actual surface hazards or non-draw operations.

**Persistent guest color/depth targets cannot be transient-only or lazily allocated**:
they survive pass boundaries and are consumed by transfers/readback/sampling.
Use tile-local input access during the pass, retain STORE contents, and reserve
transient/lazy allocation for genuinely temporary attachments whose contents are
not needed afterward. Measure pass splitting and store/load bandwidth.

If path C is necessary, treat it as substantial renderer work with a documented
matrix for PSP blend equations/factors, stencil-in-alpha, write masks, logic ops,
feedback and tests. Implement accurate special passes for cases Vulkan fixed
function cannot express. Do not claim exact behavior for approximate cases or
call the existing packed-buffer shader a fallback without an ordering guarantee.
The software renderer remains a diagnostic reference, not a performance solution.

### Remove desktop feature assumptions

- Add Android Vulkan loading (`libvulkan.so`) and Android surface entry points,
  using SDL's supported Vulkan surface integration. Scope platform API tables and
  defines so Android never references Win32 functions/types.
- Start with a Vulkan 1.2-capable mobile contract, using needed 1.3 functionality
  through extensions when available. Keep desktop 1.3 shaders separate. Regenerate
  mobile SPIR-V for the negotiated baseline; lowering only the API version is
  insufficient. If the probe shows an older driver, decide the additional fence/
  render-pass compatibility work explicitly before widening support.
- B uses traditional render passes; remove dynamic-rendering requirements from
  that path. Validate present/post separately if they still use dynamic rendering.
- Replace point geometry shaders with vertex-expanded quads. Require neither
  geometry shaders nor desktop line extensions for the mobile path.
- Provide descriptor-pool/set fallback for absent push descriptors; keep immutable
  samplers. Gate anisotropy and compression; PNG/RGBA replacement loading must work
  when BC DDS uploads cannot.
- If clip distance is missing, implement/test the required clipping alternative;
  do not silently drop clipping. Make required-feature checks specific to each path.
- Check surface presentation support when selecting queues. Support a single
  graphics queue with the existing synchronization discipline.
- Implement persistent pipeline caches keyed by device, driver and shader ABI,
  invalidate incompatible blobs, and prewarm known pipelines during loading.

## Native build and platform work

Proposed reproducible baseline: arm64-v8a only, minSdk 29, compile/target SDK 36,
NDK **28.2.13676358** already reported installed, JDK **17**, AGP **8.13.2** and
Gradle **8.13**. AGP's official compatibility table supports this JDK/Gradle pair;
this is a pinned baseline, not a claim that it is the newest toolchain. Verify the
installed CMake/Ninja pair with the NDK before pinning it. [AGP compatibility][agp]

1. Root CMake: disable host analyzer/codegen executables and desktop tests for the
   Android app, but keep separate native unit-test targets available. Make core
   static objects position independent when linked into Android shared libraries.
2. Profile CMake: platform source/link lists; FXC, D3D12, WIC, WASAPI, delay-load and
   desktop packaging steps only on Windows. Android builds `main` shared and links
   Android log/dl libraries, SDL3 and arm64 media libraries.
3. Move GPU dispatch into a small portable source so the Android binary includes
   Vulkan and diagnostic software paths without pulling D3D12 source/dependencies.
4. Shader compilation runs on the **build host**, outside NDK target program search.
   Reuse the pinned SPIR-V-capable DXC download on Windows hosts; provide a pinned
   host-platform dependency on other build machines. A Vulkan SDK install is useful
   for diagnostics, but not a mandatory runtime/build prerequisite for this machine.
5. Build source SDL3 and use matching Java glue. Pin/hash dependencies; no floating
   branches. Scope shader includes and backend definitions to renderer sources.
6. Create platform adapters for window/surface, timing, input, audio, writable paths
   and image codec. Keep working Windows implementations behind the same seams.
   Replace WIC decode **and PNG encode** as needed with compatible portable image
   libraries; texture dumping uses both.
7. Build arm64 FFmpeg with only required demuxers, ATRAC3/ATRAC3+ and verified movie
   codecs, resampling and scaling. Preserve dynamic-link notices/source obligations
   and the repository's third-party provenance rules; audit the selected build.
8. Create the guest worker with an explicit initial 64 MiB stack and guard space,
   then measure high-water use before reducing it. SDL event/UI work has its own
   owner; guest/GE and presenter follow documented queue/resource ownership.

Use 16 KiB-compatible ELF and APK alignment for **every** shipped `.so`, including
SDL, FFmpeg and libc++ dependencies. NDK r28 provides aligned defaults, but prebuilts
and runtime page-size assumptions still need checks. Keep 4 KiB *guest code spans*
distinct from host OS memory pages. [Android page-size guidance][pages]

## Lifecycle, audio and controls

Native session states: Starting -> Running -> Pausing -> Paused -> Resuming ->
Running -> Stopping. Surface loss is an independent condition: retain guest state
and persistent GPU resources while quiescing presentation; recreate surface/
swapchain only when a usable surface returns. Handle out-of-date/suboptimal
swapchains, zero extents, rotation/resizing and device loss explicitly.

On background/focus loss, promptly neutralize input/rumble, pause guest scheduling
and virtual-clock progression, suspend audio, and stop presentation. SDL lifecycle
callbacks signal work to the owners instead of waiting for long GPU/guest tasks
inside a callback. On resume, reset pacing baselines before restarting to avoid
catch-up simulation/audio bursts. [SDL lifecycle integration][sdl]

Back opens a native pause menu with Resume, Settings (next launch), and Exit to
launcher. Keep the window lifecycle independent from the guest pause button.
Android process death restarts from normal savedata; live-state restoration is
outside v1. Test savedata durability separately from graceful shutdown.

SDL audio provides the Android output path. Keep the existing decoded/mixed audio
logic; callbacks consume a bounded PCM ring and perform no decoding, allocation or
blocking guest/GPU work. Handle device rate conversion, route changes and focus
loss. Bluetooth audio delay requires separate measurement.

Use one SDL event pump on the SDL-required owner thread. Remove controller-thread
event draining and subsystem-wide `SDL_Quit` ownership from the Android adapter.
Publish an input snapshot to guest polling. Touch uses stable finger IDs and
normalized safe-area coordinates; support simultaneous steering, accelerate,
brake and boost. Include D-pad, four face buttons, L/R, Start/Select and analog nub.
Release controls on cancellation, focus loss and disconnect. Digital inputs merge
by held state; define analog ownership as the last intentionally moved source
with a deadzone, avoiding idle touch canceling a physical stick. Touch layouts
have left/right-handed presets and can be edited without booting the game.

## Performance priorities and measurement

Establish on-device timing and correctness before changing hot paths. Report
simulation speed separately from displayed FPS: repeated frames do not prove
full-speed guest execution.

Priority order:

1. **ARM CPU:** inspect generated loads/stores and register access in assembly;
   compare current forced-inline accessors with an explicit raw-view experiment.
   Use alias-safe `memcpy`/bit operations, preserve read/write watches and VRAM
   hooks. Do not mechanically copy MSVC typed-pointer casts into Clang. Compare
   `-O2/-O3`, inlining and code size on the device; no blanket `-ffast-math` or
   disabling semantic checks. Keep 4 KiB corpus units and a 2-4 job build cap.
2. **Readback:** implement lazy copies behind a switch, distinguishing CPU reads,
   CPU writes, transfers and GPU feedback. Current one-shot VRAM hook does not
   provide write addresses/lengths, so extend the contract before using it for
   dirty-range ownership. Account for interpreter/HLE/bulk memory access too.
   Preserve the conservative path until parity passes; deferred publication alone
   does not eliminate eager per-list copies.
3. **Textures:** single-pass bit-identical identification, shorter mutex scope,
   persistent staging, bounded caches. Keep replacement filenames/hash compatibility.
4. **GPU bandwidth:** long B render passes, minimize packed/image conversions,
   full-frame readbacks, redundant post passes and surface store/reloads.
5. **Presentation:** FIFO and deliberate 30/60 pacing; evaluate Swappy at the
   presenter after correctness. Keep the guest simulation clock independent from
   display refresh and avoid two independent frame limiters. Swappy supports
   Vulkan pacing; integration is an optimization with its own A/B gate. [Swappy][swappy]
6. **Later tuning:** smaller draw constants, ARM-specific instruction selection,
   measured ThinLTO/PGO for selected targets. Do not disable write-watch behavior
   while relying on it for lazy readback correctness.

Per run collect guest dispatch/time, GE preparation/recording, GPU durations when
supported, publication reasons/bytes/waits, present frame-time p50/p95/p99,
simulation speed, audio underruns, RSS/native/GPU cache use and thermal state.
Use Perfetto/system tracing as available. Benchmark release builds with stock
textures, effects off and no tracing, with equivalent scripted race workloads.
Use instrumented builds separately for attribution.

Run short fixed-work throughput tests plus 20-minute interactive/race tests with
audio and both control methods. Compare cool starts and the final steady portion;
record battery/charging, ambient conditions and firmware. Gate default presets
on sustained results. A 60 fps budget is 16.67 ms; 30 fps is 33.33 ms. Attribute
misses before lowering resolution, since CPU limits will not be solved by pixels.

## Implementation sequence and acceptance gates

| Milestone | Concrete work | Exit gate |
|---|---|---|
| M0: device/toolchain proof | Minimal launcher + native probe APK, pinned Gradle/NDK, revision-manifest design | Install on Redmi; report real driver/features/page size; choose candidate pixel path and encrypted-executable flow |
| M1: portable native build | Platform CMake, dispatch seam, shared main, SDL input/window/timing, arm64 FFmpeg and image codecs | Arm64 compile/link; core tests on device; clear-frame/audio/input smoke; Windows regression suite |
| M2: usable setup/launcher | ISO staging/extraction, compatible executable validation, settings serializer/screens, touch editor, storage/saves | Import supported data, reject incompatible/encrypted inputs clearly; cancel/retry safe; settings round-trip; Play receives validated config |
| M3: mobile rendering | Point expansion, descriptor/feature fallbacks, selected A/B path or scoped C implementation, feedback/transfer/capture/present | Accuracy harness on target, real game captures, validation/synchronization clean runs; no accidental software fallback |
| M4: complete game session | Guest stack/thread integration, audio/music/movies, touch/pad merging, pause/resume/surface recovery and clean relaunch | Menu -> full race -> savedata -> exit -> relaunch; 20 background/resume cycles; disconnect/cancel checks; process-death recovery from saves |
| M5: sustained performance | ARM flag/accessor benchmarks, gated lazy readback/texture work, pipeline caching and pacing | 30 fps/full speed at 1x for 20 minutes on target with audio; publish 60 fps/2x results and choose defaults from evidence |
| M6: package and release readiness | Dependency notices, stripped APK plus retained native symbols, alignment checks and reproducible build instructions | Clean install/update, 4/16 KiB checks, saves/settings retained on update, compatibility diagnostics and local log export |

M1 and M2 are independent after M0; rendering work need not wait for launcher
polish. M3 must resolve mobile GPU compatibility before claiming a playable
Android port. This table describes dependencies; it does not authorize subagents
or parallel edits.

Validation details:

- Preserve the Windows 524-case GPU baseline, mip regression and cross-backend
  parity tests. Add per-pixel-path cases for points, clipping, stencil, masks,
  overlapping fragments, feedback and partial CPU VRAM reads/writes.
- Reuse the software pixel oracle for isolated scenes. For real races compare
  deterministic Vulkan desktop/mobile captures with packs off and PSP filtering;
  the handoff's software race path is not a synchronized frame oracle.
- B has byte-exact output as a target, not an established result. C needs explicit
  case coverage and known differences. Keep existing documented edge rounding
  tolerances separate from blending/visibility defects.
- Import tests cover truncated images, invalid extents/paths, wrong game/revision,
  encrypted executables, lack of space, cancellation and interrupted publication.
- Config tests cover invalid ranges, unsupported desktop keys, atomic writes,
  upgrades, preset changes and effective session values.
- Device tests cover controls held through background/disconnect, simultaneous
  fingers, Bluetooth/USB changes, surface recreation, save durability, audio route
  changes and repeated Play/Exit.
- The Android emulator is useful for UI/import/page-size testing; the Redmi is the
  performance and driver acceptance device.

### Proposed file map

```text
profiles/motorstorm/android/
  settings.gradle.kts, build.gradle.kts, gradle/wrapper/
  app/build.gradle.kts
  app/src/main/AndroidManifest.xml
  app/src/main/java/.../{LauncherActivity,GameActivity,AppConfigRepository,...}
  app/src/main/res/{layout,values,drawable}/
profiles/motorstorm/config/motorstorm.android.ini
profiles/motorstorm/host/platform/
  {platform_paths,platform_surface,platform_timing,...}.hpp
  android/{motorstorm_window_sdl,motorstorm_audio_sdl,motorstorm_input_sdl,...}.cpp
profiles/motorstorm/host/
  motorstorm_gpu_dispatch.cpp
  motorstorm_android_main.cpp
  motorstorm_android_bridge.{hpp,cpp}
  motorstorm_gpu_capabilities.{hpp,cpp}
  motorstorm_iso_import.{hpp,cpp}
  motorstorm_game_manifest.{hpp,cpp}
  motorstorm_touch.{hpp,cpp}
  motorstorm_config_schema.{hpp,cpp}
profiles/motorstorm/tools/android/{build,probe,smoke,bench}.ps1
```

Extend existing `motorstorm_gpu_vulkan.cpp`, shader, Vulkan API table, config,
bootstrap and test sources rather than cloning their implementation per platform.
Update root/profile CMake and guest-memory hooks only where the selected changes
require it. Add focused Android documentation and third-party notices with each
implemented milestone.

## First implementation step

Build **M0**, not the entire AOT corpus: a launcher shell and native Vulkan probe
APK for this Redmi. In the same milestone, derive the supported game manifest and
inspect whether this user's ISO contains a matching plaintext executable. These
facts determine the renderer scope and whether ISO-only setup requires additional
decryption work. Follow with M1/M2, then M3/M4; optimize only once the device can
run a reproducible race.

[xiaomi]: https://www.mi.com/global/product/redmi-pad-pro/specs/
[sdl]: https://github.com/libsdl-org/sdlwiki/blob/main/SDL3/README-android.md
[ordered]: https://github.com/KhronosGroup/Vulkan-Docs/blob/main/proposals/VK_EXT_rasterization_order_attachment_access.adoc
[saf]: https://developer.android.com/training/data-storage/shared/documents-files
[agp]: https://developer.android.com/build/releases/agp-8-13-0-release-notes
[pages]: https://developer.android.com/guide/practices/page-sizes
[swappy]: https://developer.android.com/games/sdk/frame-pacing
