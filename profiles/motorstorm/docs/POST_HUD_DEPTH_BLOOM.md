# HUD protection and depth snapshots

The post chain keeps the race HUD ungraded when `[enhancements] hud_ungraded = true`.
Through-mode HUD pixels receive a tag in bit 16 of the depth word. `DepthResolveCS`
copies the live depth words to output resolution; post shaders dilate the HUD mask
by one pixel to protect filtered edges. HUD tags also survive debanding.

The depth snapshot is used only for HUD protection. Camera reconstruction, scene
depth snapshots and bloom passes have been removed. See [current effects and
presets](POST_EFFECTS.md) for supported controls and validation.
