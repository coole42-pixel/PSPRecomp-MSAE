# Standalone ATRAC3 / ATRAC3+ decoders

The Android build links an FFmpeg 3.x arm64 archive that was configured without
the `atrac3` and `atrac3p` decoders, so music (`.at3` streams) and movie audio
(PMF private stream) could not be decoded. These are FFmpeg's ATRAC3 and ATRAC3+
decoders, extracted to stand alone from libavcodec.

- Origin: PPSSPP `ext/at3_standalone` (README: "the atrac3/atrac3+ decoders from
  ffmpeg, extracted to be standalone from ffmpeg"), local checkout
  `53fae900997fd12ac0ef8f8d82d6f25390acbc29` under
  `C:\Users\Admin\Documents\examples\ppsspp`.
- License: every copied file carries the FFmpeg **LGPL-2.1-or-later** header
  (Maxim Poliakovski, Benjamin Larsson, Fabrice Bellard, Michael Niedermayer,
  Loren Merritt). `COPYING.LGPLv2.1` is FFmpeg's license text.
- Copied byte-for-byte; `SOURCE_SHA256.txt` lists the upstream hashes.
- Not copied: PPSSPP's `compat.cpp` (PPSSPP logging), `CMakeLists.txt`.
  `compat.cpp`, `ppsspp_config.h` and `Common/MemoryUtil.h` here are small
  replacements written for this profile.
- Used only by the Android build (`PSPRECOMP_AT3_STANDALONE`); Windows keeps its
  FFmpeg decoders. Distribution carries the same LGPL obligations as the
  statically linked FFmpeg archives (source and relinking materials).
