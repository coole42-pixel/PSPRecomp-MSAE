# Steady game speed and audio on Android (frame skipping, audio ring)

## Why audio crackled

Game logic, input and audio all run in guest time, and guest time advances one
frame per displayed frame. When drawing takes longer than a game frame, the guest
runs below real time: slow motion, and an audio device that is fed less than it
plays. On the Redmi Pad Pro (Adreno 710, imported Turnip) the 2x race measured
**0.75x guest speed, 22.6 fps and 691 underruns in 40 s**. GPU work (about 40 ms
a frame) and VRAM readback waits held the guest back.

## What changed

- **Frame skipping** (`[graphics] frame_skip = auto`, default in the Android app):
  at each flip, if guest time trails the wall clock by more than a quarter of a
  frame, the next race frame's draws are skipped (at most two in a row) and that
  frame is not presented. The GE still runs every state command; PRIM draws only
  advance the vertex/index pointers. Menus, loading and movies are never skipped.
  Code: `FrameSkipGovernor` (`motorstorm_pacing.hpp`), `decide_frame_skip` in
  `motorstorm_hle.cpp`, `software_ge_set_skip_draws` in `motorstorm_ge.cpp`.
  Settings: the *Skip race frames when the game falls behind* toggle; log lines
  `[FRAMESKIP] skipped N of M race frames`.
- **Audio ring** (`motorstorm_audio_ring.hpp`): the SDL callback drains a ring the
  guest fills. Below about 70 ms it consumes up to 5 % slower (a small pitch dip
  instead of a gap); when it runs dry it fades the last sample out instead of
  cutting, waits for a 46 ms reserve and fades back in. Tests:
  `tests/motorstorm_audio_ring_tests.cpp`.

## Measured on the Redmi Pad Pro (40 s scripted race)

| Setting | Guest speed | Wall fps | Underruns |
| --- | ---: | ---: | ---: |
| 2x, 30 fps, no frame skipping | 0.753 / 0.776 | 22.6 / 23.3 | 691 / 336 |
| 2x, 30 fps, frame skipping | 0.996 | 29.9 | 3 |
| 2x, 30 fps, skipping and audio ring | 1.001 | 30.0 | 1 |
| 3x, 30 fps | 0.986 | 29.6 | 7 |
| 2x, 60 fps | 0.78 | 46.9 | 193 |

About 30 % of 2x race frames are skipped at this GPU load, so the picture updates
about 21 times a second while game speed and audio stay at real time.

## Limits

- 60 fps at 2x is not sustainable on this GPU: the limit of two skipped frames in
  a row is reached, and guest speed stays near 0.78.
- Skipped frames show the previous picture; heavy scenes look less smooth, not
  slower. The remaining fix is less GPU time per frame.
- **Frame generation does not fit on the Pad right now.** With the GPU saturated,
  ZeroFG's frame is ready in time for almost no frame (0 of 79 at 2x), so the
  presenter now turns it off for the session after a few seconds
  (`[FRAMEGEN] disabled: ...`) instead of wasting GPU time. It did run on an
  Adreno 750 phone with GPU headroom.
