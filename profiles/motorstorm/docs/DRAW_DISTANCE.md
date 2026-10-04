# Less pop-in, render distance and 8x resolution

`[graphics]` in `MotorStormNative.ini`:

```ini
less_pop_in = true        ; default
render_distance = normal  ; default: the game's own distances
resolution = 8            ; optional: 3840x2176
```

`render_distance` accepts `low` (0.75x), `normal` (1x), `high` (1.5x),
`ultra` (2x), `max` (4x) or a multiplier from 0.5 to 8 (`3`, `2.5x`).
The launcher equivalents are `run.ps1 -RenderDistance max -LessPopIn on|off -Resolution 8`
and the environment options are `PSPRECOMP_MOTORSTORM_RENDER_DISTANCE`,
`PSPRECOMP_MOTORSTORM_LESS_POP_IN=0|1` and `PSPRECOMP_MOTORSTORM_RESOLUTION=8`.

## What pops in

Found by decompiling the relocated race image (IDA, RAM snapshot taken in a
scripted race at guest 130 s):

- The track loader (`0x0882D830..0x0882DA3C`) loads `Track.PSP_LANDSCAPE_MAIN`,
  `Scenery`, `Road` and `Global` models. The scenery is one scene node with one
  big mesh, drawn whole with per-triangle frustum culling only. The race camera
  (global pointer `0x08A78F8C`; fov `+0x80`, near `+0x84` = 0.5, far `+0x88` =
  4096) reaches past the track's bounds, so terrain and the track never pop.
- Props (signs, banners, rocks, fences, crowd pieces) are scene nodes (vtable
  `0x08A80678`) drawn by `0x089228D4`. Nodes with flag `0x04000000` call
  `0x08922220`, which measures the distance from the camera position
  (camera `+0x70`) to the node (`+0x90`) every frame:
  - below the split (`+0xD8`, s16) the node is hidden when the near limit
    (`+0xD4`) is positive and the distance is below it;
  - otherwise it is hidden when the far limit (`+0xD6`) is positive and the
    distance is beyond it.
  The node's alpha (`+0xDC`) then moves toward that target (`+0xE0`) by 1/16
  per frame; when the limit in use is even it jumps there at once. The 60 fps
  mode halves the fade time to about 0.27 s.
- Nodes with flag `0x40000000` are LOD groups: four s16 limits
  (`+0xD4..+0xDA`) select the child LOD (`+0xD3`), nothing beyond the last.

In the scripted benchmark race the snapshot holds 107 distance-faded props with far
limits of 65-375 units (most 97, 129 and 151) and near limits of 0; 16 of them
were visible. Six limits are even (96, 128), so those props switch instantly.
No LOD groups were present in that race.

Vehicles and riders swap between their own LOD0-3 models through other code;
that is not changed here.

## How it is changed

`update_draw_distance` (`host/motorstorm_hle.cpp`, pure math in
`host/motorstorm_draw_distance.hpp`) runs with the race-scene check, like the
widescreen camera patch, and only edits guest data:

- A rolling scan of user RAM (256 KiB per displayed frame, a full pass in
  about 1.6 s at 60 fps) finds nodes by their vtable and flags, so props loaded
  at any time are found without a stall.
- **Render distance** multiplies near, far and split (all four LOD limits of an
  LOD group), clamped to the 16-bit range. Without less pop-in the original
  parity is kept, so the game's own fade/instant choice is unchanged.
- **Less pop-in** makes every limit odd (always the fading path), extends the
  far limit by a fade band (a fifth of the distance, at least 8 units) and
  replaces the time fade with a distance fade: props are fully opaque up to
  their (scaled) original limit and fade out across the band; a near limit
  fades in across the band past it, so LOD counterparts cross-fade. Each frame
  the alpha is stored one game step (1/16) away from the wanted opacity, on the
  side opposite the game's target, so the game's own update lands exactly on
  it (`motorstorm_config_tests` checks this against a port of the game's step).
  The opacity reaches zero one unit inside the limit, so camera movement
  between the write and the game's test cannot flash a prop at the edge.
- Outside the countdown/race scenes, or when both settings are at their
  original values (`less_pop_in = false`, `render_distance = normal`), the
  original limits are written back and nothing is touched.

Partially faded props use the game's own translucent queue, the same path its
original fade uses.

## Verification

Scripted race (`tools/bench-race.ps1 -FixedClock`, 2x/FXAA, guest 120-130 s,
RAM snapshot and frames at the end):

| Setting | Props drawn | Mid-fade | Far limits (most common) |
| --- | ---: | ---: | --- |
| original (`less_pop_in=false`, `normal`) | 16 / 107 | 0 | 97, 129, 151 |
| default (`less_pop_in=true`, `normal`) | 19 / 107 | 5 | 117, 155, 181 (fade bands) |
| `max` + less pop-in | 98 / 107 | 6 | 467, 621, 727 |

The log reports `draw distance: 107 distance-switched scene node(s)`. Frame
differences against the original are confined to distant props near the
horizon (rocks and banners appear with `max`); the HUD, vehicles and terrain are
identical. The default frames differ only where a prop is mid-fade.

Cost: race benchmark at 1x, unthrottled (about 5x real time), two runs each:
`guest_per_wall` 5.17/4.98 original, 4.97/4.86 default, 4.95/4.82 `max`; the
run-to-run spread is as large as the difference.

## 8x resolution

`resolution = 8` renders at 3840x2176 (twice 4x per axis). The renderer already
used an integer scale everywhere; only the INI, environment parser and launcher
scripts limited it to 1-4. `motorstorm_gpu_tests` now runs its resolve,
feedback, detail-retention, edge-filter and presentation checks at 8x in all
four AA modes, and a game race at 8x/FXAA produced 3840x2176 captures with no
renderer errors (RTX 5060 Laptop GPU, 1.33x real time at the original 30 fps
pacing in the unthrottled benchmark). SSAA at 8x rasterizes at 5760x3264
(SSAA2x) or 7680x4352 (SSAA4x) and needs a lot of GPU memory and time; FXAA or
None is the practical choice at 8x.
