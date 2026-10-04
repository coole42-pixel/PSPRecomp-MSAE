# Widescreen and post effects

`[graphics] widescreen = auto` is the default for D3D12. It uses the client
dimensions, including borderless/exclusive fullscreen and window resizing.
Wider windows increase horizontal field of view while retaining vertical FOV.
The HUD keeps its original proportions in a centred PSP-sized safe area.
Menus, loading screens, movies and windows narrower than 480:272 keep the
original aspect. `widescreen = psp` or
`PSPRECOMP_MOTORSTORM_WIDESCREEN=psp` disables the correction.

The correction applies to display-sized 480/512-stride, 272-row VRAM targets
while the guest is in its countdown/race scene. Clip X is corrected before
homogeneous clipping, so geometry beyond the PSP frustum can enter the view.
Through-mode UI coordinates and partial scissors are centred and compressed
by the same ratio; presentation reverses that compression. Clears and
full-frame overlays continue to cover the complete image. Smaller offscreen
targets retain the original GE coordinates. Each snapshot carries the aspect
used to render it, preventing a resize from stretching an older frame.

The raster/output sample counts selected by `resolution` and `antialiasing`
remain unchanged. Consequently an ultrawide view distributes the same number
of horizontal samples over a wider view. The software reference renderer
keeps PSP rendering and presentation.

The post fixes are:

- Golden calibration includes its saturation, outset matrix and channel
  clamp, matching GPU luminance rather than stopping after the look's power.
- Synthetic HDR input receives a smooth shoulder above half of AgX's upper
  scene range. High peak/exposure settings approach that range rather than
  hard-clipping at its log-domain limit. Default mid grey and bright snow
  calibration are retained.
- Debanding and dithering use the same transition fade as the other effects.
  Zero fade reproduces the original image exactly.

Validation uses the actual GPU shading through `PostCaptureCS`, which shares
`postShade` with `PostPS`. Diagnostic calls allocate private scratch buffers
and do not change runtime settings. Tests cover all three AgX looks at peaks
1, 2, 6 and 16, CPU/GPU grey-ramp agreement, un-clipped neutral highlights,
all-effects and deband-only zero-fade identity, and active effects changing
pixels. Widescreen GPU fixtures cover 16:9, 21:9 and 32:9, preserved object
proportions, additional visible geometry, HUD positions/scissors, full-frame
overlays, menus and the PSP opt-out. Existing resolution/AA and guest pixel
tests remain in the GPU suite.

A scripted game run with isolated saves completed a 145-second guest window
(4,350 frames) after entering the race scene. Live visual inspection through
Computer Use could not run because its native pipe was unavailable. The
widescreen aspect checks above are GPU fixtures rather than a visual audit
of every track, vehicle or race effect.
