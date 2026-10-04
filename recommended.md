# MotorStorm: Arctic Edge: recommended graphical enhancements

Scope: the modern shader section only (`[enhancements]`, `[graphics]`, `motorstorm_gpu.hlsl`,
`motorstorm_post.*`). Nothing in the repo was changed except this file.

Sources read: `report.md`, `docs/WIDESCREEN_POST.md`, `docs/TEXTURE_PACKS.md`,
`docs/PERFORMANCE_AUDIO_SSAA.md`, `progress/PHASE12_GRAPHICS.md`, the profile README,
`config/motorstorm.ini`, all of `motorstorm_gpu.hlsl`, `motorstorm_post.hpp`, and the
snapshot/post/present code in `motorstorm_gpu.cpp`. I did not run the game, so anything
about how a scene *looks* is inferred from code and docs and is marked **verify**.

---

## Status (updated after Phase 1)

| # | Item | Status |
|---|---|---|
| R2 | Keep the HUD out of the grade | **Done** (`hud_ungraded`, on). Design changed: the race framebuffer is 8888, so the tag lives in the unused upper half of the depth word, not in the colour word. |
| R1 | Bloom | **Done** (`bloom`, off by default; about 0.24 ms GPU on the async queue). |
| R4 | Depth snapshot | **Done** as the foundation (taken today when `hud_ungraded` is on); AO and atmosphere build on it. |
| R5-R12 | AO, atmosphere, HDR output, soft particles, motion blur, auto exposure, vehicle lighting | Not started. |

Details, measurements and the tests: `profiles/motorstorm/docs/POST_HUD_DEPTH_BLOOM.md`.

**New finding for R9 (widescreen).** The race framebuffer is 512x296, and widescreen is gated on a 272-row
target, so in a measured race it never applied. Details in the doc above.

---

## 1. What the modern shader path is today

| Stage | What it does | Where |
|---|---|---|
| Raster | PSP-exact fixed-function pipeline in a pixel shader with ROV read-modify-write on packed 16-bit colour (plus a 32-bit colour extension in the high bits) and a 16-bit depth buffer | `PS` |
| Resolve | SSAA2x / SSAA4x area resolve, or FXAA, in `displayShade` | `outputPixel`, `displayShade` |
| Post (race only) | `PostResolveCS` to half-float RGB, `DebandCS`, then `PostColorCS`: CAS sharpen, colour correct, SDR to HDR expansion, AgX, 3D LUT, dither | async compute queue |
| Present | Fit to window, 8-bit `R8G8B8A8_UNORM` back buffer | `PostPresentPS` |
| Textures | BC7 pack with 8x aniso, optional enhanced filtering and GPU mip generation for originals | `sampleReplacement`, `sampleEnhanced` |

Four facts about this design drive every recommendation below.

1. **The post chain sees only colour.** No depth, normals, motion vectors or material
   information reach it. This is why the stack so far is purely colour-space work
   (tone map, LUT, sharpen, deband).
2. **Post is free for the emulation thread.** It runs on its own async queue and the
   snapshot copy is the only GE-queue cost. New screen-space effects fit this model
   without touching guest timing or the readback path. `report.md` shows the machine is
   GPU-fence-bound at SSAA4x (111 s of fence waits in the 245 s window), so cost
   still matters. Prefer effects at output resolution (1920x1088), not at raster
   resolution (3840x2176).
3. **The pipeline already reads depth in the pixel shader.** `PS` reads `depthTarget` for
   the depth test. Anything that needs scene depth *during* a draw (soft particles)
   needs no new plumbing. Anything that needs it *after* the frame needs a depth
   snapshot (see R4).
4. **There is a bright-end signal nothing consumes.** `expandSdr` lifts white to
   `hdr_peak = 6.0`, but the only consumer is AgX, which rolls it straight back down.
   That expanded range is exactly what bloom and HDR output are built to use.

---

## 2. Recommendations, ranked

Effort: S = a day or less, M = a few days, L = a week or more.
Risk is the risk to PSP-exact guest behaviour and the frame-hash tests.

| # | Enhancement | Visual payoff | Effort | Risk |
|---|---|---|---|---|
| R1 | Bloom and glare from the expanded HDR range | High | S-M | None |
| R2 | Keep the HUD out of the grade | High (verify) | S-M | Low |
| R3 | HDR10 / scRGB output | High on HDR displays | M | None |
| R4 | Depth snapshot into the post chain (enabler for R5-R8) | Enabler | M | Low |
| R5 | Screen-space ambient occlusion (GTAO) | High | M | None |
| R6 | Depth-based atmosphere: aerial perspective, sky glow, sun shafts | High on Arctic maps | M | None |
| R7 | Soft particles (snow spray, dust, mud) | Medium-high | M | Medium |
| R8 | Camera motion blur | Medium | M-L | None |
| R9 | Widescreen follow-ups: culling pop-in, horizontal sample density | High if affected (verify) | M-L | Medium |
| R10 | Auto exposure with a safe range | Medium | M | None |
| R11 | Cheap lens finishing: vignette, grain, chromatic aberration | Low-medium | S | None |
| R12 | Per-pixel vehicle lighting | High on cars | L | High |

### R1. Bloom and glare from the expanded HDR range (start here)

**Why.** `hdr_peak = 6.0` already produces scene-referred light above 1.0, then AgX
compresses it away. The look of snow glare, chrome, headlights, the sun and specular
sparkle on vehicles comes from letting that excess bleed into the surrounding pixels.
It is the single biggest "modern" cue missing.

**How.**
- Insert a pass between `DebandCS` and `PostColorCS`, working on the half-float buffers
  already allocated for that chain.
- Take the linear, expanded image (`toLinear` then `expandSdr`, the same math `postColor`
  uses), subtract a threshold (about 1.0 to 1.5 in scene units), and run a
  dual-filter (Kawase) downsample chain of 4 to 5 levels then an upsample chain.
- The current buffers are structured buffers, not textures. Mip-style chains work fine
  with a buffer per level and a pitch constant; the existing `MipCS` already shows the
  pattern.
- Add the result before tone mapping inside `postColor`, scaled by `bloom_strength`.
  AgX then rolls the sum off naturally.
- INI: `bloom = true`, `bloom_strength = 0.15`, `bloom_threshold = 1.0`, `bloom_radius`.
- Add a `bloom_gain` term to `agx_mid_grey_gain` calibration or verify the mid-grey
  invariant still holds; bloom must not lift the average brightness of dark scenes.

**Cost.** Roughly 0.3 to 0.6 ms at 1920x1088 on this class of GPU (verify with the
existing `post_gpu_ns` timestamps, which already time the three post stages).

**Watch for.** Bright snow fills the whole frame. A fixed threshold would bloom the
entire ground. Use a soft knee, or compute the threshold relative to local average
luminance, or tie it to R10.

### R2. Keep the HUD out of the grade

**Why.** I found no HUD exclusion anywhere in the post path. `postColor` runs on the whole
snapshot, and the HUD is drawn into the same framebuffer in through mode. If that is how
it behaves in game, then white HUD text goes through `expandSdr`, AgX, the punchy look,
the LUT, CAS and bloom (once R1 lands). Text and icons get slightly dimmed, shifted in
hue and haloed. **Verify** with a frame dump (`frame_dump = true`) compared with
`enabled = false`.

**How (cheap and low-risk).**
- The 32-bit colour extension already tags pixels: bit 31 marks "extended", bits 28-29
  hold the format, and the dropped low bits sit in 16 to 27 at most (4444). **Bit 30 is
  unused in every format.** Set it in `packFrame` for draws in through mode
  (`mode.y == 0`, not `clearing`), and have the post resolve carry it into a one-bit mask
  (for example the sign bit of the stored half-float alpha or a fourth half in the buffer).
- `postColor` then returns `original` for flagged pixels (or blends by the mask).
- Because the low 16 bits are untouched, guest readback and every existing exactness
  test are unaffected. The only caveat is 8888 targets, where the extension is bypassed
  (`unpackColor` returns `c` for format 3); if the race target is 8888, store the flag in
  a separate small mask buffer instead.
- Soft HUD edges: use the mask as a 0 or 1 value at raster resolution, then average it in
  the resolve so the edge pixels blend between graded and ungraded.

**Alternative.** Draw the HUD to a separate target. That is more invasive, because the
guest controls the framebuffer.

### R3. HDR10 / scRGB output

**Why.** The swap chain is `DXGI_FORMAT_R8G8B8A8_UNORM`, so everything is squeezed to SDR
at the very end, and the AgX tone curve is doing the squeezing. The pipeline already
has scene-referred light with a defined peak. On an HDR monitor, snow glints, headlights
and the sun can actually be brighter than white.

**How.**
- Add `[graphics] hdr_output = auto | off | hdr10 | scrgb`. Query
  `IDXGIOutput6::GetDesc1` for the colour space and max luminance. Fall back to SDR
  automatically.
- `R10G10B10A2_UNORM` + `DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020` (HDR10), or
  `R16G16B16A16_FLOAT` + scRGB (`G10_NONE_P709`). scRGB is simpler (linear, BT.709
  primaries, 1.0 = 80 nits).
- In `PostColorCS`, keep the AgX look and mid-grey calibration for SDR white, then for
  HDR run the tone map to a higher output ceiling (for example paper white at 200 nits,
  peak from the monitor's reported max). The 3D LUT stays SDR-referred, so apply it
  to the SDR-range part only, or bypass it in HDR.
- **Gamut and transfer (added after a Context7 check of Microsoft's D3D12HDR sample).**
  The sample renders in linear Rec.709, and its present shader converts to Rec.2020 and
  applies the ST.2084 (PQ) curve to `result * (standardNits / 10000)` for HDR10. Our
  `PostPresentPS` would do the same: AgX output must be linearized first (it is currently
  display-encoded), converted Rec.709 to Rec.2020, scaled by paper white / 10000, then PQ
  encoded. For scRGB the sample simply passes linear values through. My first draft
  omitted the gamut conversion; HDR10 without it would oversaturate.
- The sample builds one present PSO per swap-chain bit depth (8, 10, 16 bit), and the
  render-target format is part of the PSO. Our single `post_present_pipeline` therefore
  needs variants (`R8G8B8A8`, `R10G10B10A2`, `R16G16B16A16_FLOAT`), recreated when the
  format changes.
- The 10-bit and float formats also remove the final 8-bit quantization, so the
  dither in `postDither` can be skipped in HDR modes.
- Leave menus, movies and the loading screen in SDR. Mapping them into HDR needs
  explicit handling (paper-white scaling) so they do not look washed out.

**Note.** F11 / exclusive fullscreen paths (`fullscreen_mode = exclusive`) need the
colour space set after each swap-chain recreation (`SetColorSpace1`). That fits the S4
swap-chain recreation work in `report.md`.

### R4. Depth snapshot into the post chain (enabler)

**Why.** SSAO, atmosphere, motion blur, depth of field, soft shadows and any
depth-aware sharpening all need scene depth after the frame is complete. `gpu_present`
copies only the colour surface into `frame.image` (`motorstorm_gpu.cpp`, around
line 2510).

**How.**
- Track which depth buffer the displayed colour surface was drawn with (`draw.depthbuffer`
  and `draw.depth_stride` are in `GpuDraw`; the surface lookup code at 1530 already matches
  them).
- At present time, on the GE queue next to the colour copy, run a small compute resolve
  that reads the `uint` depth buffer at raster resolution and writes the depth at
  **output** resolution. Store it as two 16-bit values packed per 32-bit word in a
  structured `uint` buffer, like every other buffer in this renderer. Microsoft's
  descriptor docs (via Context7) say a structured-buffer view must use
  `DXGI_FORMAT_UNKNOWN` with a non-zero `StructureByteStride`, so a typed `R16_UINT`
  view would need a separate view type and gains nothing here. Use the nearest sample for SSAA and
  the minimum (closest) depth for FXAA/none, so edges do not bleed.
- Linearize in post: the PSP depth is `z = clip.z / w * viewportScale.z + viewportCenter.z`
  (see `VS`). Capture the projection constants (`clipRows`, `viewportScale`,
  `viewportCenter`) of the main 3D scene's draws into the `PresentFrame` so the post can
  recover view-space depth.
- Mark sky and "no geometry" by `z == 65535`.

**Limits.**
- The depth is 16-bit and non-linear. At race distances precision falls off quickly, so
  effects should be limited to near and mid range, or use a bilateral filter that
  tolerates the steps.
- **Verify** the depth buffer is valid at the moment of the flip. If the game renders
  reflections or shadow maps into the same depth surface after the main pass, the
  snapshot would need to be taken at the end of the main 3D pass rather than at flip.
  A frame dump of the depth surface at a few `frame_dump_every` points will settle this.
- Memory: 1920x1088 x 2 bytes x 3 snapshot slots is about 12 MB. Negligible.

### R5. Screen-space ambient occlusion (GTAO)

**Why.** The game's only grounding cue is the baked blob shadow quads (draw 1063 in
`PHASE12_GRAPHICS.md`, a 32x64 alpha mask drawn with `0xCC000000`). Contact shadows under
vehicles, around rocks, in ruts and under bridges are missing. This is cheap and very
visible in a racing game with a lot of terrain.

**How.** After R4: half-resolution GTAO (or XeGTAO) on the linearized depth, 8 to 12
slices, a bilateral blur, then multiply into the *linear* light before bloom and tone
mapping. Limit the world radius (about 1 to 2 m equivalent) because of the 16-bit depth.
Fade it out with distance and for sky.

**Cost.** About 0.5 to 1 ms at half-res 1920x1088.

**Watch for.** Normals are reconstructed from depth, which can band on large flat snow
planes. Use a quality normal reconstruction (3 neighbour taps with the smallest
gradient) and a small depth bias. Keep the strength modest, around 0.5. Over-darkening
the hard-lit PSP textures looks dirty.

### R6. Depth-based atmosphere: aerial perspective, sky glow, sun shafts

**Why.** Arctic tracks have long sight lines. The game's fog is a per-vertex factor with a
fixed fog colour (`C(0xcf)`), so it cannot carry directional scattering. With depth,
the post can add a sun-tinted haze that is stronger toward the sun and stronger with
distance, plus a soft sun glow and optional shafts. This helps depth separation
between mountain layers more than any texture work will.

**How.**
- Aerial perspective: `scatter = 1 - exp(-k * linearDepth)`, tint blended toward a sky colour
  sampled from the top of the frame, or toward a per-scene constant.
- Sun position: the cleanest source is the guest's own light direction register or
  sky draw matrices. Failing that, a screen-space bright-region centroid in the sky
  mask (`z == 65535`) gives a workable sun point with no game knowledge.
- Shafts: radial blur toward that sun point, masked to sky + far depth, strength by
  how much the sun is in frame.

**Watch for.** A fixed global colour will look wrong across Arctic, desert and forest
scenery. Drive the tint from the frame itself (sky region average) or add per-track
INI overrides. Apply this *before* tone mapping so it stays consistent with bloom.

### R7. Soft particles (snow spray, dust, mud)

**Why.** Spray and dust billboards cut hard lines where they meet the ground. `PS` already
reads `depthTarget[depthIndex]` for depth testing, so softening needs no snapshot.

**How.** For a blended draw with depth test on and depth write off, compute
`fade = saturate((sceneZ - z) / softness)` and scale `s.a` (or the blend source factor
input) by it before blending. Gate it behind a flag in `render.w` (bit 2) and only
while racing, in the same way `color_depth = 32` is gated, so the exactness tests and
non-race frames stay bit-identical.

**Risk.** This changes guest-visible colour (it is written back to VRAM and read back by
the game for feedback textures). Gate it as above and confirm that `replaced_draws` and
the frame hashes for non-race scenes are unchanged. 16-bit depth means `softness` is
in raw z units. Calibrate it per scene scale, or normalize by the draw's `viewportScale.z`.

### R8. Camera motion blur

**Why.** Speed feel. A racing game at 60 fps benefits a lot from a per-pixel blur that
follows camera motion.

**How.** With R4's linear depth, reproject each pixel with the previous frame's
view-projection and blur along the screen-space delta (a short, clamped 8 to 12 tap
kernel). Obtain the camera matrix from the main scene's `model_to_clip` for static world
draws (store current and previous in `PresentFrame`).

**Limits.** This is camera-only. Vehicles and particles have their own motion and
would blur incorrectly or smear, so mask them out (the depth snapshot alone can't tell
them apart: **verify** whether vehicle draws can be tagged by a distinct texture or
`model_to_clip` signature). A cheap fallback is a mild radial blur at the screen edges.
The pause menu, loading and replay cuts must reset the previous matrix to avoid a one-frame
smear. The existing fade-in (`update_post_fade`) is a good place to hook that.

### R9. Widescreen follow-ups (verify first)

Two issues are visible in the docs rather than in the code.

1. **Pop-in at the sides.** `WIDESCREEN_POST.md` says clip X is widened before homogeneous
   clipping, so geometry the PSP frustum would have clipped can enter the view. That fixes
   *GPU* clipping. It cannot restore objects the *guest* CPU already culled with the PSP
   field of view (scenery sectors, props, vehicles' LOD). The doc states the checks are
   GPU fixtures, "rather than a visual audit of every track, vehicle or race effect".
   **Verify** at 21:9 or 32:9 by looking for objects appearing at the screen edges while
   turning. If it happens, the fix is on the guest side (widen the frustum constants the
   culling code reads), not in the shader.
2. **Horizontal sample density.** The raster size is unchanged and the widened view
   spreads the same horizontal samples over a larger field. At 16:9 this is a mild
   difference, but at 21:9 horizontal density is about 25% lower than vertical, and at
   32:9 about half. Ultrawide users will see softer horizontal detail. The fix is an
   aspect-aware horizontal raster extent. It touches `raster_extent` and the surface
   stride logic, which is why this is M-L. Skip it if you are on a 16:9 panel.

### R10. Auto exposure with a safe range

**Why.** AgX with a fixed `exposure` treats a dark tunnel and a bright snowfield the same.
A slow eye-adaptation step gives tunnels, shaded forest and open snow each their own
exposure.

**How.** A luminance histogram or a log-average over a downsampled half-float image
(the bloom chain from R1 gives you this for free), smoothed over about 1 to 2 s, clamped to
a narrow range (for example plus or minus 1 EV). Feed it into `postF(3)`.

**Watch for.** Snow-dominated frames will read as very bright, and an unclamped system will
darken them and look dull. Keep the clamp tight, center-weight the metering, and reset on
scene change.

### R11. Lens finishing (optional, taste)

All of these are single-pass changes in `postColor` and cost almost nothing.
- Vignette, 5 to 10% strength.
- Film grain, luminance-weighted, tied to the existing `random()`. Low strength helps hide
  residual banding better than the dither alone.
- Chromatic aberration, edge-weighted, 0.3 to 0.6 px. Easy to over-do.
- A larger radius "clarity" pass (a 5x5 or 9x9 local-contrast step) to complement CAS, which
  has a 3x3 footprint.

Expose them as separate INI switches so people can keep the image clean.

### R12. Per-pixel vehicle lighting (large, higher risk)

**Why.** Lighting is currently PSP vertex lighting computed on the CPU in the GE frontend
(the header says the frontend "still decodes ... lighting"). Vehicles and riders show
Gouraud-lit highlights that look flat at 4x. Moving the lighting equation to the pixel
shader (per-pixel normal, specular, plus a Fresnel rim from the sky colour) is the most
visible possible upgrade to the cars.

**Cost and risk.** It requires passing normals through `GpuVertex` and the vertex
declaration, replicating the PSP lighting model in HLSL, and applying it only to draws
with lighting enabled (only 76 draws in the captured frame, which keeps the cost
small). It must stay behind a flag so the PSP-exact path and the tests remain
bit-identical. I would do this after R1 to R6. A vehicle mask for R8 comes with it.

---

## 3. Things I would not do

- **TAA.** There are no motion vectors, so vehicles and particles would ghost. At
  3840x2176 SSAA4x the image is already cleaner than temporal accumulation would make it,
  and the game's own timestep (30/60 fps switching, T1/T2) makes frame history
  unreliable. If you move off SSAA4x for performance, SSAA2x plus FXAA is the less risky
  middle ground that already exists.
- **Screen-space reflections.** 16-bit depth and no normal buffer make them noisy, and
  the PSP content has no roughness data. Not worth the cost.
- **Depth of field in gameplay.** It fights the readability of a racing game. At most a
  photo mode or a replay camera.
- **Texture-pack normal/PBR maps.** The pack replaces colour only and the game's
  lighting is per-vertex. A PBR material layer only makes sense after R12, and only for
  vehicles.
- **Putting anything expensive in the raster pass.** `report.md` and
  `PERFORMANCE_AUDIO_SSAA.md` already show fence waits dominating at SSAA4x. Keep new
  work on the async post queue at output resolution.

---

## 4. Suggested order

1. **R2 then R1.** R2 first, so bloom never touches the HUD. Both are post-only and need no
   depth. Each can ship on its own INI switch.
2. **R4.** The depth snapshot, with a debug capture so the 16-bit buffer can be inspected.
3. **R5, R6.** AO and atmosphere on top of it. These are where the image changes most.
4. **R3.** HDR output, once the final colour chain is stable.
5. **R7, R8, R10.** The remaining effects that need depth or history.
6. **R9.** Verify first; fix only if the pop-in or density issue is real on your display.
7. **R11, R12.** Taste items and the large lighting change last.

## 5. Context7 verification log

Checked against Microsoft documentation via Context7 (`/microsoft/directx-graphics-samples`
and `/websites/learn_microsoft_en-us_windows_win32_direct3d12`). Three lookups, one per
concept.

| Claim in this file | Result |
|---|---|
| HDR10 uses a float scene buffer, Rec.709 to Rec.2020, then ST.2084 with a paper-white scalar | **Confirmed** by the D3D12HDR sample's present shader. R3 now includes the gamut step I had left out. |
| scRGB is a linear pass-through on an `R16G16B16A16_FLOAT` swap chain | **Confirmed** (the sample's linear display curve, 16-bit swap-chain option) |
| 8, 10 and 16-bit swap chains need their own present PSO | **Confirmed** (the sample selects a PSO per bit depth). Added to R3. |
| Structured buffer views use `DXGI_FORMAT_UNKNOWN` and a stride | **Confirmed**. R4 now packs depth into the existing structured `uint` buffers. |
| Timestamp queries work on compute queues and use `EndQuery` only | **Confirmed**. The existing async `post_queue` timing is valid, and new buckets (bloom, depth resolve, AO) can use the same pattern. Ticks must be divided by the per-queue frequency in floating point. |
| Barrier pattern UAV to SRV state around post passes | Consistent with the documented transition pattern. The code already does this. |
| `IDXGIOutput6::GetDesc1`, `SetColorSpace1`, `SetHDRMetaData` and the colour-space enum names | **Confirmed from your local copies** (`windows-win32-api-_direct3ddxgi.pdf`, `windows-win32-direct3darticles.pdf`, and `examples/DirectX-Graphics-Samples/Samples/Desktop/D3D12HDR`). Details and one reversal: see the next section. |

### What the local DXGI docs and samples added

- **Do not call `SetHDRMetaData`.** The DXGI reference warns that Windows does not
  guarantee the metadata reaches the monitor and monitors handle it inconsistently. It
  recommends tone-mapping into the range `IDXGIOutput6::GetDesc1` reports
  (`DXGI_OUTPUT_DESC1`: `MinLuminance`, `MaxLuminance`, `MaxFullFrameLuminance`, primaries,
  `ColorSpace`). R3 should therefore drive its output ceiling from those fields and
  never set metadata. This reverses my earlier mention of it.
- **The only two supported HDR pairings** (comment in `D3D12HDR.cpp`): FP16 with
  `DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709` (scRGB, linear, 1.0 = 80 nits), and
  `R10G10B10A2` with `DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020` (HDR10).
- **Order of calls** in the sample: `CheckColorSpaceSupport`, require
  `DXGI_SWAP_CHAIN_COLOR_SPACE_SUPPORT_FLAG_PRESENT`, then `SetColorSpace1`. It re-runs that
  after every `ResizeBuffers`, so our swap-chain resize path (`resize swapchain` in
  `motorstorm_gpu.cpp`) must do the same.
- **Detecting HDR**: pick the output whose desktop rectangle overlaps the window most
  (do not use `GetContainingOutput`), call `GetDesc1`, and treat
  `ColorSpace == G2084_NONE_P2020` as "HDR on". If `IDXGIFactory::IsCurrent()` is false,
  recreate the factory first. Re-check on window move and `WM_DISPLAYCHANGE`, because the
  window can be dragged from an HDR to an SDR monitor.
- **scRGB scaling**: in HDR mode Windows treats 1.0 as 80 nits, so SDR "paper white"
  of about 200 nits is a multiplier near 2.5. Make paper white an INI value
  (`hdr_paper_white_nits`).
- **Reusable maths**: `color.hlsli` in the sample has the Rec.709 to Rec.2020 matrix,
  its inverse, and `LinearToST2084`. They are MIT licensed; copy with the licence header.
- **MiniEngine** (same repo, MIT) has working reference shaders for bloom (with a
  shimmer filter that suppresses lone bright pixels), a 256-bin log-luminance histogram
  exposure adaptation, SSAO, and motion blur. Its SSAO linearizes depth as
  `1 / (ZMagic * depth + 1)`. The PSP's screen z is also affine in `1/w`, so our depth
  can be converted to that form once the projection is known. Its motion blur needs
  a per-pixel velocity buffer, which this renderer does not have, so R8 stays camera-only.

Everything else in this file is algorithm design or repo analysis, so I did not look it up.

## 6. Process notes

- Add each effect as its own `[enhancements]` switch, defaulting off until reviewed, in the
  same style as `sharpening`, `lut` and `color_correction`. `enabled = false` should still
  restore the original image exactly.
- Extend the existing GPU tests rather than writing a separate harness. `PostCaptureCS`
  shares `postShade` with the real path, so the same pixel-readback approach
  (`gpu_debug_post`) covers bloom, AO and the HUD mask. Keep the zero-fade identity
  test for every new effect: fade 0 must return the original pixels exactly.
- Post timing (`post_gpu_ns`) currently has three buckets (resolve, deband, colour).
  Add buckets for bloom, depth resolve and AO so costs are visible per effect on the
  RTX 5060 Laptop.
- Keep new effects out of menus, loading and movies, as the current effects do (they
  fade with `racing`).
- Compare against the reference frame hashes in `report.md` for non-race frames. Anything
  that touches `PS` (R2's flag bit, R7) can break them; anything post-only cannot.
