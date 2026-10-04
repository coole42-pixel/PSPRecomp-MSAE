# Frame pacing at 60 fps

Verified 2026-10-04. Companion to [60 fps performance](PERFORMANCE_60FPS.md).

## Cause and fix

Audio backpressure held the average speed at 60 fps, but the frame limiter
was disabled whenever audio was enabled. WASAPI releases queued PCM on its
device periods, so the guest produced alternating short and long frames.
The presenter could replace an early snapshot while waiting for the display.

Visible frames now use absolute wall-clock deadlines derived from guest time,
with audio enabled or disabled. The wait happens before publishing the frame
to the window. Short delays do not shift subsequent deadlines; a delay over
100 ms reanchors the clock to avoid a prolonged fast-forward after loading.
The high-resolution timer is checked against the deadline again after waking.
The GE and presenter threads retain their independent queues.

Audio must still prebuffer. The limiter starts when the PCM queue reaches
three quarters of its configured capacity. If loading drains it below one
quarter, frame waits pause until the reserve has refilled, then the display
clock reanchors. This preserves the audio reserve and avoids toggling pacing
at every device wake. Muted playback uses the same frame deadlines directly.
Headless and explicitly unthrottled runs retain their throughput behavior.

## Race measurements

Normal boot, menus and Festival race, RTX 5060 Laptop GPU, 4x/FXAA, texture
replacements and enhancements enabled. The same recorded input and isolated
savedata were used. Both runs rendered exactly 1,500 frames and GE lists over
guest 115.007228-140.006192 seconds.

| Host frame delivery | Before | Fixed, with audio reserve |
| --- | ---: | ---: |
| Wall FPS | 59.983 | 60.003 |
| Median frame | 18.141 ms | 16.669 ms |
| 95th percentile | 20.620 ms | 17.080 ms |
| 99th percentile | 21.826 ms | 17.233 ms |
| Maximum frame | 24.912 ms | 24.965 ms |
| Wall time | 25.007 s | 24.999 s |

The fixed race window recorded **zero audio underruns and zero device-dry
events**. The whole boot/menu/race run recorded two underruns outside that
window. The maximum frame still reflects an occasional hitch. Recurring
uneven cadence is reduced; loading and host scheduling can still delay a frame.

Muted playback also held 60.002 fps: 600 frames over a 10-second race window,
16.672 ms median and 17.257 ms at the 99th percentile. Evidence:
`out/motorstorm/bench/smooth-muted.*`.

These timings measure host frame delivery at DrawSync, not physical scanout.
Evidence: `out/motorstorm/bench/smooth-before.*` and `smooth-reserve.*`.
The earlier `smooth-after.*` trial omitted audio prebuffering; it is not the
shipped implementation.

## Display refresh

At a fixed 144 Hz refresh, 60 fps must alternate between holding a frame for
two and three refreshes. Vsync cannot make that an even display cadence.
For 60 fps, use a supported 60 Hz or 120 Hz mode, or a display with working
variable refresh. The game's exclusive fullscreen settings can request 60 Hz:

```ini
[graphics]
fps = 60
vsync = true

[window]
fullscreen = true
fullscreen_mode = exclusive
fullscreen_refresh = 60
```

Exclusive mode applies while the game has focus. Alt+Tab leaves it. If the
output refuses exclusive mode, the log reports a borderless fallback.
The existing user INI was backed up before setting `fullscreen_refresh = 60`;
the checked-in default still preserves the desktop refresh.

## Verification and reproduction

All seven registered CTest suites passed, along with the hardware GPU,
hardware profile and hardware window tests. The GPU suite passed its 524
pixel-exact cases and filtering, feedback, transfer, presentation and resize
checks. Configuration tests cover early audio wakes, late frames, loading
stalls, clock resets and audio reserve hysteresis, including a short custom
audio queue.

`bench-race.ps1 -Paced` enables the normal limiter instead of the default
throughput mode. Reports now include audio underrun and device-dry counts
for the measured window, excluding startup and loading before it.

```powershell
powershell -NoProfile -File profiles/motorstorm/tools/bench-race.ps1 -Name pacing-audio -Resolution 4 -Antialiasing FXAA -Fps 60 -Window -Audio -Paced
powershell -NoProfile -File profiles/motorstorm/tools/bench-race.ps1 -Name pacing-muted -Resolution 4 -Antialiasing FXAA -Fps 60 -Window -Paced -EndUs 125000000
```
