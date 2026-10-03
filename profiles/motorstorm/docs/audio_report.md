# MotorStorm music repair

Verified 2026-10-02. This supersedes the unverified root-cause hypothesis in
earlier local research notes. The preview/resolution work
in [PREVIEW_RESOLUTION.md](PREVIEW_RESOLUTION.md) remains the rendering baseline.

## Root cause and repair

The local AudioOutput2 implementation already refuses busy release with
`0x80268002` and preserves the reservation. Movie cleanup at `0x0893CB78`
returns success after early movies drain; the later background movie cleanup
returns `0x80268002` while output remains busy (`music-fixed-verified/console.txt`,
return address `0x0893CB80`). Regression tests also cover both cases. The
research report's release hypothesis is falsified for this checkout; changing
it again would not repair the music.

The ATRAC shim ignored encoder priming and synthesis delay. The soundtrack's
eight-byte `fact` chunk declares 2048 priming samples, and ATRAC3+ adds 368
synthesis-delay samples. PSP-visible decoding therefore starts with **1680
samples**, followed by 2048-sample frames. Previously it always returned 2048.
This behavior was checked against PPSSPP's
[frame alignment](https://github.com/hrydgard/ppsspp/blob/master/Core/HLE/AtracCtx.cpp)
and [delay constants](https://github.com/hrydgard/ppsspp/blob/master/Core/Util/AtracTrack.h).

MotorStorm's overlap routine at `0x08929330` treats touching endpoints as
overlap. With full-sized initial output, the producer becomes stuck at write
offset 8192 with an 8192-byte pending copy. All consumer positions (0, 8192,
16384) overlap that pending range under the guest's test. The first buffered
audio is repeatedly attenuated by CoreWithMix until almost silent.

An earlier host workaround added `0x40` to every guest `StreamStream` consume
signal (`0x20`). Disassembly at `0x0892DFC4–0x0892DFD8` proves that `0x40`
branches directly to `0x0892E028`, **skipping the pending PCM copy** at
`0x0892DFF8–0x0892E004`. This made decoder counters advance while the ring
remained stale. `0x40` is a suspension/handoff signal, not permission to refill.

Changes:

- `host/motorstorm_atrac.cpp`: parse priming offsets, discard priming PCM,
  return the remainder of the encoded frame after trimming, and retain exact
  sample positioning when restarting loops. Loop coordinates are normalized
  from RIFF sample coordinates to playable sample coordinates.
- `host/motorstorm_hle.cpp`: remove both name-specific `StreamStream` signal
  expansions. Event flags now deliver exactly the guest's bits. Optional
  `PSPRECOMP_MOTORSTORM_TRACE_MUSIC=1` records output peaks, gates, gains and
  consumer offsets once per guest second.
- `tests/motorstorm_profile_tests.cpp`: regress exact consume/stop event bits;
  optional real-asset tests compare 256 consecutive decoded frames to native
  PCM, including priming, first-frame sample count, loop restart and EOS.

## Verified stream-to-output path

The addresses below come from the local decrypted EBOOT disassembly and
`generated/generated_unit_0009.cpp`, rather than the research prompt's guesses.

| State or operation | Location and owner |
| --- | --- |
| Decoder PCM staging | `0x08BEB0C0` in the measured run; stream object `+0x4C` is loaded at `0x0892DB70`; StreamThread |
| Decoder call | `0x0892DDC0`, buffer argument from `sp+0x34`, returned sample count at `sp+0x38` |
| Music ring | `0x08AADF00`, 24576 bytes; StreamThread copies staging PCM via `0x08928E64` |
| Producer write position | StreamThread `s0`; advanced by returned samples × 4; wraps at `0x6000` |
| Consumer block position | `0x08AB3F04`; SoundThread advances by 8192 and wraps at 24576 |
| Consumer grain position | `0x08AB3F08`; advances by 1024 bytes (256 stereo frames), resets at 8192 |
| Mix gates | `0x08AB3F10 != 0` and stream object `+0x54 == 0`, checked at `0x0892B7BC–0x0892B7D8` |
| Music gain | **`0x08AA14FC`**, loaded at `0x0892B7E0`; the report's `0x08AB537C` is not the gain used here |
| Fade gain | `0x08AB3F0C`, loaded at `0x0892B7EC` |
| Music/SFX combination | Wrapper call `0x0892B814` → `0x08A49BF8` → `sceSasCoreWithMix`; gain is `4096 × music gain × fade gain` |
| Final output | `0x0892B878`, continuation `0x0892B880`; ring grain submitted through Output2 at volume `0x8000` |
| Ring-consumed event | `0x0892B8BC` posts `0x20`; producer wakes, refreshes its read position and retries the copy |

The soundtrack uses CoreWithMix's existing PCM input; it does not need a SAS
PCM voice. Baseline traces show enabled=1, busy=0, music gain=0.8, fade=1.0 and
advancing consumer positions. The staging decoder peak reaches 31670 while
SAS input peaks remain 0–4. After the repair, the same path carries changing
music PCM with output peaks in the thousands.

## Validation

All three standard CTest suites pass. The optional `--atrac` and
`--audio-output` profile checks also pass, covering consecutive real soundtrack
PCM, loop trimming/EOS and Windows playback buffer reuse/volume.

The matching normal-startup captures are:

- Baseline: `out/motorstorm/d3d12/music-diagnosis/capture.wav`.
- Repaired: `out/motorstorm/d3d12/music-restored/capture.wav`.

Both reach menus, vehicle selection, racing, steering and pause/resume using
the existing input/save path. No movie/boot scene skip or forced gain is used.
The repaired run reaches guest time 94.518557 s, with zero scheduler deadlocks,
zero dropped audio frames and zero audio errors. Exit 4 is the requested
2800-GE diagnostic limit.

WAV measurements use eight-second windows, stereo PCM16 at 44100 Hz, and
2048-frame blocks (including the final partial block):

| Capture offset | Baseline RMS / unique blocks | Repaired RMS / unique blocks |
| --- | --- | --- |
| 48 s | 1.74 / 4 of 173 | 8328.31 / 173 of 173 |
| 64 s | 1.74 / 4 of 173 | 8365.39 / 173 of 173 |
| 80 s | 1854.09 / 152 of 173 | 8053.22 / 173 of 173 |

The final rebuilt executable also passes the longer 4000-GE run under
`out/motorstorm/d3d12/music-fixed-verified/`. It reaches guest time
**134.869364 s** (139.2878005 s wall time), including the track restart and
background movie cleanup, with zero scheduler deadlocks, dropped audio frames
or audio errors. All 2898 queued playback buffers complete. The 134.559637 s
WAV retains music: windows at 104 s and 120 s measure RMS 8420.65 and 8837.05,
respectively, each with all 173 blocks distinct. Machine-readable measurements
are in `audio-metrics.json` beside that capture. Exit 4 is the requested
4000-GE limit, not a fault.

The baseline race window contains sound effects, so its nonzero RMS alone is
not evidence of soundtrack playback. The menu windows and the traced ring
PCM establish the repaired music path independently.

Reproduce:

```powershell
cmake --build out/motorstorm --config Release --target MotorStormNative motorstorm_profile_tests
ctest --test-dir out/motorstorm -C Release --output-on-failure
out/motorstorm/bin/Release/motorstorm_profile_tests.exe --atrac out/motorstorm/atrac-cache/FE_98902016.at3
out/motorstorm/bin/Release/motorstorm_profile_tests.exe --audio-output

$env:PSPRECOMP_MOTORSTORM_AUDIO='1'
$env:PSPRECOMP_MOTORSTORM_TRACE_MUSIC='1'
$env:PSPRECOMP_MOTORSTORM_AUDIO_CAPTURE='out/motorstorm/d3d12/music-check/capture.wav'
./profiles/motorstorm/tools/validate-renderer.ps1 -Name music-check -StopAfterGe 4000
```

Normal launch remains `./profiles/motorstorm/run.ps1`; music is enabled by
default. `-Mute` still explicitly silences playback.

## Limits

The real-asset regression targets the measured MotorStorm ATRAC3+ fixture;
it is optional because game assets are not part of portable tests. ATRAC3
delay handling and extended RIFF loop offsets are implemented but not validated
against separate ATRAC3/extended-loop assets. Exact loop restart decodes from
the beginning to recover synthesis history, so nonzero loop starts can cost
more than a container seek. The existing full-file decoder cache and simplified
guest stream-buffer accounting remain separate compatibility limits.
