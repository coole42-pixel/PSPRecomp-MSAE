# Texture packs: extraction, upscaling and replacement

## Workflow

```powershell
# 1. Extract every texture from the disc files (no game run; ~10 s).
./profiles/motorstorm/tools/extract-textures.ps1            # -> bin/Release/textures/extracted
# 2. Upscale the PNGs with any tool. Keep each file's leading 16-digit hash;
#    suffixes such as _64x64 or _x4 are fine.
# 3. Pack them: BC7 DDS with mips when texconv.exe (DirectXTex) is available,
#    otherwise the images are copied as they are.
./profiles/motorstorm/tools/pack-textures.ps1 -Source D:/upscaled   # -> bin/Release/textures/replace
# 4. Start the game. [textures] replace = true is the default.
```

`dump-runtime-textures.ps1` complements the extractor: it plays the game with
dumping on and saves every texture actually drawn, including the ones the game
colours at runtime (see Coverage).

## Disc formats (reverse engineered)

- **PAK** (`FE.PAK`, `MAIN.PAK`): `"PAK "`, version 1; a table at 0x34 of
  `{name offset, data offset, size, size}` entries (data 2 KiB aligned); names
  follow the table, XOR `0xB5`, NUL terminated (`Data_PSP\StuffFiles\ATV01.stf`).
- **BBZL**: `"BBZL"`, u32 uncompressed size, 8 reserved bytes, zlib stream.
  Decompressed with the project's own raw-DEFLATE decoder.
- **STuF** (`.stf` resource bundles, `.PSP_LANDSCAPE_MAIN` track files) contain
  serialized texture objects: a 0x80-byte header with `0xCDCDCDCD` filler at
  +0x10/+0x48, size (+0x18), GE size log2 (+0x1C), GE format (+0x24, +0x4C),
  data/palette offsets and data size (+0x50..+0x58), row stride in bytes
  (+0x60). +0x14 is a self-pointer (object offset in its section + 0x38); the
  data/palette offsets are relative to that section. Pixels are swizzled
  CLUT4/CLUT8 with 8888 palettes. `.PSP_PTX_MAIN` files are single objects.

The disc holds 18,691 texture objects; 5,086 are unique.

## Identity

A texture is named by a 64-bit hash of its decoded colour, row by row, at the
GE texture width, finalized with the row count:

- **Same decoder.** The extractor calls the runtime's own GE texel decoder
  (`ge_decode_texture`), so offline and runtime agree bit for bit.
- **Colour only.** The game rewrites palette alpha at runtime (fades, generated
  alpha, load-time fix-ups), so alpha is not part of the identity.
- **Row prefixes.** A 512x296 image is drawn as a 512x512 GE texture whose
  extra rows are unrelated memory. The extractor names it by its 296 real rows.
  At runtime each newly decoded texture checks every row count against the pack
  index (a set lookup per row, only on a texture-cache miss), and uses the
  largest match. Non-power-of-two widths are covered the same way: the name
  carries the real size (`_96x96`), and the shader maps texture coordinates onto
  the covered area.

## Rendering

- **Colour from the pack, alpha from the game.** Alpha is the minimum of the
  pack's alpha and the game's runtime alpha, so fades and cut-outs keep working.
  A pack image with no alpha at all uses the game's alpha unchanged.
- **Filtering.** Linear filtering uses 8x anisotropic sampling over the pack
  image's own mip chain. The game's nearest/linear choice and wrap/clamp modes
  are kept. Any resolution or aspect ratio works.

## Performance

- **Indexing.** The replacement folder (any depth) is indexed once at startup;
  lookups never touch the disk.
- **Background decoding.** Images decode on two worker threads (WIC), which
  also build alpha-weighted box-filtered mips. Until a file is ready the
  original texture is drawn, so rendering never waits on I/O.
- **DDS.** BC1/BC2/BC3/BC7 and RGBA8 DDS upload directly with no decoding.
  BC7 uses 4x less video memory than PNG.
- **Uploads.** Each upload uses its own staging buffer, at most 96 MB per GE
  list (a level load cannot hitch one frame), and the staging memory is freed
  after the GPU fence.
- **Memory budget.** Replacements live in an LRU cache limited by `budget_mb`
  (default 1024); evicted images reload from disk when drawn again.

Measured with a 5,073-texture test pack in a race: 677,953 replaced draws, 285
uploads, 325 ms of total background decoding, and no change in frame pacing.

## Coverage

In a race recording, 193 of the 376 palettized textures drawn match an
extracted file exactly. Track terrain, scenery, menus and the HUD are
covered. Most remaining textures are vehicle liveries: their stored palettes
are placeholder colour ramps (the extractor puts those in `runtime_palette/`),
and the game draws them with palettes taken from other texture objects or
computed at runtime. Recovering those pairings needs the vehicle material
format. Until then, `dump-runtime-textures.ps1` captures them with the
correct colours, under the same naming scheme. Movie frames and
render-to-texture surfaces are generated at runtime and are not replaceable.
