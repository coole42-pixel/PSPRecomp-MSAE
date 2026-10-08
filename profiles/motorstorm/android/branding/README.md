# Launcher artwork

`applogo.png` is the exact image supplied by the user on 2026-10-07.
The app manifest uses `@mipmap/ic_launcher` for its normal and round icons.

Legacy PNGs are 48, 72, 96, 144 and 192 pixels for mdpi through xxxhdpi.
Adaptive foregrounds are 108 dp canvases with the artwork centered at 72 dp,
leaving space for launcher masks and motion. The background matches the source
image's black outer corners. All sizes use Lanczos resampling of the original;
the artwork and lettering are unchanged.
