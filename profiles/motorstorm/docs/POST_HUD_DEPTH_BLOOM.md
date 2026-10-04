# HUD mask, depth snapshot and bloom

Race-only additions to the `[enhancements]` post chain (see
[WIDESCREEN_POST.md](WIDESCREEN_POST.md) for the chain itself). All of them live
on the async post queue at output resolution, so the emulation thread never waits
for them.

## Defaults

The shipped INI now starts at **4x resolution with FXAA**. `hud_ungraded` is on
(it only matters while other effects are on); `bloom` is **off**.

| Option | Default | Meaning |
|---|---|---|
| `[graphics] antialiasing` | `FXAA` | was `SSAA4x` |
| `[enhancements] hud_ungraded` | `true` | the race HUD keeps the game's own colours |
| `[enhancements] bloom` | `false` | highlights glow into their surroundings |
| `[enhancements] bloom_strength` | `0.15` | 0.0 to 1.0 |
| `[enhancements] bloom_threshold` | `3.0` | scene brightness where glow starts (0.5 to 16) |

Environment equivalents: `PSPRECOMP_MOTORSTORM_POST_HUD_UNGRADED`,
`..._POST_BLOOM`, `..._POST_BLOOM_STRENGTH`, `..._POST_BLOOM_THRESHOLD`.

## What a race frame looks like (measured)

A diagnostic over a real race showed this draw order for the displayed target:
one depth clear, about 3,800 3D draws, then about 50 through-mode draws (the
HUD), nearly all with the depth test off. The framebuffer is **8888 (format 3)**,
**512 stride and 296 rows** (the game's scissor is 512x296), with a valid depth
buffer on every draw. So:

- the colour word has no spare bits (8888, alpha = stencil), and
- depth is cleared at the start of the frame, so at the flip it holds the whole
  scene.

## HUD mask

Through-mode draws (no hardware transform) are the HUD. While racing, with the
effects on and `hud_ungraded = true`, a through-mode draw that passes its tests
sets **bit 16 of the pixel's depth word** (`kHudTag`). The depth buffer is
a 32-bit word per pixel holding a 16-bit depth, and guest readback truncates to
16 bits, so:

- the game never sees the tag (a test checks guest depth memory is unchanged);
- every depth write replaces the tag, and the game's per-frame depth clear removes it.

The depth comparison masks the word to 16 bits. At present time `DepthResolveCS`
copies the depth words to output resolution (the raster sample nearest each
output pixel centre). `PostResolveCS` turns the tag into a mask (the tag of the
pixel or any of its 8 neighbours, so the one-pixel fringe from edge filtering
stays ungraded) and stores it in the free upper half of each pixel's blue word.
`DebandCS` leaves masked pixels alone and `postColor` returns the game's pixel for
them. Measured in a race: the white "RESET TO TRACK" text is 255 with the mask on
and about 228 to 242 with it off.

## Depth snapshot

The snapshot (`PresentFrame::depth_image`) is the foundation for the depth-based
effects planned next (ambient occlusion, atmosphere, motion blur). Today it is
taken only when `hud_ungraded` is on. It costs one small compute dispatch per
race frame on the GE queue and about 8 MB per snapshot slot at 4x.

## Bloom

`BloomExtractCS` takes the scene light the grade already computes (the expanded
SDR image times the AgX mid-grey gain), keeps what is above `bloom_threshold`
with a soft knee, and averages each 2x2 block with a shimmer filter (samples are
weighted by 1/(1+luma) so a lone bright pixel cannot flicker). `BloomDownCS`
and `BloomUpCS` run a five-level dual-filter pyramid (downsample: centre box
weighted 4 plus four diagonal boxes; upsample: 3x3 tent, averaged with the finer
level). The result is added to the scene light before colour correction and AgX,
so AgX rolls the sum off like any other highlight. HUD pixels are excluded as a
source.

- Needs `tonemapping = agx`; without it bloom switches itself off.
- Cost measured on the RTX 5060 Laptop at 1920x1088: about **0.24 ms** of GPU
  time per frame (all post passes together: about 1.1 ms, on the async queue).
- Method: Marius Bjorge, "Bandwidth-Efficient Rendering" (ARM, SIGGRAPH 2015),
  implemented here from the published description.

## Tests

- `motorstorm_gpu_tests`: HUD tag only on through-mode pixels, only while racing
  and with `hud_ungraded`, and never in guest memory; HUD mask keeps game colours
  and leaves distant pixels exactly as before; bloom brightens the surroundings
  of a highlight, changes nothing far away or without a highlight, matches the
  reference shader path, is fade-exact, never blooms the HUD, and switches off
  without AgX.
- `motorstorm_post_tests` / `motorstorm_config_tests`: the new INI keys, ranges,
  defaults and environment options.
- `build.ps1 -Tests` now also builds `motorstorm_post_tests`; it was missing from
  the script's target list, so that test could run from a stale binary.

## Found on the way: widescreen and the 296-row framebuffer

Widescreen (`widen`) is gated on `color.height == 272`, but the race
framebuffer is 296 rows. In a measured race, `display_target` was false for
every draw, so Hor+ widescreen and the centred HUD safe area did not apply in
races (at 16:9 the difference is under 1%; on 21:9 and 32:9 it matters). The GPU
widescreen tests use a 272-row scissor and cannot see this. Not changed here;
tracked as R9 in `recommended.md`.
