# Portable image codecs

`stb_image.h` and `stb_image_write.h` vendored from nothings/stb revision
`2c980bb59875b0d32144a71867fbdebb2f77cd20` on 2026-10-05.
Source: https://github.com/nothings/stb/tree/2c980bb59875b0d32144a71867fbdebb2f77cd20

MIT/public-domain dual license, full license text retained in each header.

SHA-256:
- stb_image.h: `594c2fe35d49488b4382dbfaec8f98366defca819d916ac95becf3e75f4200b3`
- stb_image_write.h: `cbd5f0ad7a9cf4468affb36354a1d2338034f2c12473cf1a8e32053cb6914a05`

Only non-Windows builds use these codecs. Windows retains WIC. Android PNG
decode/encode enables texture pack loading, dumping and diagnostic captures.
