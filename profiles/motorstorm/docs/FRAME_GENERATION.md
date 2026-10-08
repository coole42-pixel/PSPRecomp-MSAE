# Frame generation (ZeroFG, Android)

Races on Android can show a generated frame between every two real frames, so
the original 30 fps is displayed as 60. The engine is
[ZeroFG](https://github.com/hy300leosquizz-ctrl/ZeroFG) 1.0 (Apache-2.0, in
`third_party/zerofg`; see `third_party/zerofg/NOTICE-PSPRecomp.md`). Windows
builds ignore the setting.

## Usage

**In the app:** Settings, then *Frame generation in races (ZeroFG)*:

| Choice | INI value | Meaning |
| --- | --- | --- |
| Off (default) | `off` | Every frame is shown as the game makes it. |
| Zero | `zero` | The full engine: the best generated image. |
| ReallyZero | `reallyzero` | The same engine with half the fine passes; cheaper for weaker GPUs. |

*Frame generation picture size* (`frame_generation_width`: 1280, 1600 or 1920)
is the width of the picture ZeroFG works on. The height follows the screen's
aspect. Larger is sharper and slower. Changes apply on the next launch.

**In an INI** (`[graphics]`):

```ini
frame_generation = zero
frame_generation_width = 1280
```

**One-off from adb** (debug builds): `--es env PSPRECOMP_MOTORSTORM_FRAMEGEN=zero`
(and `PSPRECOMP_MOTORSTORM_FRAMEGEN_WIDTH=1600`).

### Recommended setup

- Use it with **Frame rate: Original (30 fps)** on a display that refreshes at
  60 Hz or more. With *60 fps* the game would be shown at 120, which needs a
  120 Hz display.
- Start with `zero` at 1280. If the race slows down, try `reallyzero`.
- It needs a Vulkan 1.3 GPU driver with `synchronization2` and extended storage
  image formats (Turnip on Adreno 750 has both). Otherwise the log says
  `[FRAMEGEN] unavailable` and the game runs normally.

### What to expect

- **One game frame of extra input latency** (about 33 ms at 30 fps): the
  generated frame needs the *next* real frame, so each real frame is shown a
  frame later than without frame generation.
- Only **races** use it. Menus, pause, loading and movies show every frame as it
  comes.
- Real frames are never delayed or dropped for a generated one. If the next real
  frame is already waiting, or the GPU has not finished the generated frame, it
  is skipped (`skipped`/`late` in the log).
- The race is drawn at the picture size first and then scaled to the screen, so
  the game's own upscaler (SGSR) works at that size.

### Checking it works

`MotorStorm.log` (or `MotorStormAndroid.log` in benchmarks) shows:

```
[FRAMEGEN] requested: zero, picture 1280 px wide
[FRAMEGEN] ready: Zero at 1280x560
[FRAMEGEN] real=461 generated=454 skipped=3 late=4 interval_ms=33.3
```

`generated` close to `real` is the goal. Many `late` frames mean the GPU cannot
keep up: use `reallyzero`, a smaller picture, or a lower game resolution.

## How it works

1. The present pass draws each race frame into a small offscreen image whose
   size ZeroFG accepts (64 cells across, a multiple of four rows of the same
   square cells: 1280x560 on a 2.2:1 screen).
2. ZeroFG records motion estimation and the midpoint frame between the previous
   and the current real image into the same command buffer.
3. The presenter shows R(n-1) when frame n arrives, waits half the measured game
   frame time, shows S(n-1, n), and shows R(n) when n+1 arrives. Pacing is a
   timed wait because the Android swapchain is MAILBOX.

Code: `FrameGen`, `present_snapshot_fg`, `framegen_display` and
`framegen_show_generated` in `host/motorstorm_gpu_vulkan.cpp`.

## Needs GPU headroom

Frame generation only helps when the GPU has time to spare. On the Redmi Pad Pro
(Adreno 710) the game already uses all of it, so generated frames are almost never
ready in time (0 of 79 at 2x). After a few seconds the presenter logs
`[FRAMEGEN] disabled: ...` and shows real frames only. On an Adreno 750 phone it
generated about 98 % of frames. See [frame skipping and audio](FRAME_SKIP_AUDIO.md).

## Not done yet

- On-device timing comparison with and without it (GPU cost per frame).
- The ZeroFG optional fast paths (half precision, subgroup, cubic): the device
  only enables the two features ZeroFG requires, so the portable forms run.
- A dedicated high-priority queue for ZeroFG (INTEGRATION.md section 6).
