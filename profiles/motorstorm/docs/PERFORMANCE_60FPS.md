# 60 fps performance, audio and presentation (2026-10-03)

The INI default became `fps = 60`, which doubles the guest work per real
second. On the reference laptop (RTX 5060 Laptop GPU) at the user settings
(4x, FXAA, visible window) the race ran at 0.85x real time: slow motion, and
audio underruns because guest audio arrives late. This round removed the
stalls that kept the CPU and GPU waiting on each other and on the display.

## Measurements

`tools/bench-race.ps1 -Resolution 4 -Antialiasing FXAA -Window` (race window
115-140 s guest, profiling on, audio off, unthrottled). Guest/wall above 1.0
is headroom over real time.

| Build | 30 fps (`-Fps original`) | 60 fps (`-Fps 60`) |
| --- | ---: | ---: |
| Before | 14.76 s, 1.69x | 29.43 s, 0.85x |
| After | 11.18 s, 2.24x | 22.58 s, 1.11x |

Live check with audio, 60 fps, 4x/FXAA, 45 s of racing: guest/wall 1.0005,
0 audio underruns, no frame-rate fallback, 10 dropped presentations.

Rendering is unchanged: under `-FixedClock` the 16 CPU and GPU frame dumps at
GE 3300-3510 are byte-identical between the new default path and the strict
`PSPRECOMP_MOTORSTORM_GPU_SYNC_READBACK=1` path, and the new build in strict
mode is byte-identical to the build before the CPU changes. All 8 test suites
(including the 524 pixel-exact GPU cases) pass.

## Changes

- **Separate present queue.** A flip-model `Present` waits on its queue for
  a free back buffer at vblank. On the GE queue that wait stalled every later
  GE chunk and capped emulation at the monitor refresh (both 30 and 60 fps runs
  topped out at ~60 presented frames per second). The GE queue now only copies
  the displayed target into a 3-entry snapshot ring; a second queue that owns
  the swap chain scales/filters from the snapshot and presents, synchronized by
  GPU-side fence waits. `Present` itself runs on a presenter thread; a frame is
  dropped (`skipped_presents` in the log) only if the presenter stays busy for
  3 ms or every snapshot is still queued.
- **Deferred GE readback.** The end of a GE list submits its readback copies
  without waiting. Pixels are published to guest memory when something needs
  them: the next list, transfers, software draws, captures, or the first guest
  load/store to VRAM (a one-shot `GuestMemory` VRAM access hook). The game's CPU
  code does read and write the framebuffer between frames; the hook keeps that
  exact. The GPU tail of each frame now overlaps the next frame's guest CPU work.
- **No CPU wait after Present; dedicated present command slot.** Presenting
  previously waited for the GPU to go idle and reused GE ring slot 0.
- **Lighting setup cache.** `light_vertex` recomputed every light's parameters
  from GE commands per vertex; they are now rebuilt only when a lighting
  command or the view matrix changes (same expressions, bit-identical output).
- **VFPU helpers out of line.** 26 non-template `AllegrexContext` VFPU helpers
  moved to `src/allegrex_context.cpp`. Generated units are compiled at `/Ob0`,
  so in-class bodies were emitted there with every `std::array` subscript as a
  call, and the linker could keep those copies.
- **Smaller items.** Bulk VRAM reads for feedback snapshots instead of a slow
  per-texel load; diagnostic environment switches read once instead of per
  frame / GE list / audio block.

## Pacing and audio

- **`dynamic_fps = true`** (INI `[graphics]`): if guest time falls below 95% of
  real time for two consecutive seconds of play, the game drops to the retail
  30 fps pacing instead of running in slow motion, and returns to the target
  when the measured load leaves headroom (back-off 10 s, doubling after a quick
  relapse). Loading screens (few presented frames) are ignored. The switch
  rescales the game's timestep globals and keeps `sceDisplayGetVcount`
  continuous.
- **Audio disabled:** audio backpressure was the only real-time pacing, so
  `[audio] enabled = false` ran the game ~1.7x too fast. A wall-clock limiter
  now holds the visible game to real time when audio is off.
  `PSPRECOMP_MOTORSTORM_UNTHROTTLED=1` disables it (the bench scripts set it).
- Audio backpressure time is counted as idle time for the governor
  (`audio_blocked_us`).

## Frame cadence follow-up (2026-10-04)

The limiter now also runs with audio enabled and waits before publishing a
frame, using absolute host deadlines. Audio backpressure alone held the average
at 60 fps but delivered frames unevenly. See [frame pacing](FRAME_PACING.md)
for measurements, verification and the display refresh settings.
