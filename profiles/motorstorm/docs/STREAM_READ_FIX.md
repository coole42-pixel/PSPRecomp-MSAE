# Soundtrack-boundary file-read crash

Verified 2026-10-03 after a report of a crash on lap 2 of the first race at 4x resolution.

The saved crash report records a null host read (`0xC0000005`) on guest
`StreamThread`, UID 3, at import PC `0x08A5B264`. That import is
`sceIoReadAsync` (`0xA0B5A7C2`). The last logged archive reads reach
`108312576 + 3322800 = 111635376`, the end of the soundtrack asset.
Original evidence is preserved in `out/motorstorm/lap2-crash-original`.

The shared synchronous/asynchronous read helper skipped `stream.read` for a
zero-byte request, but still used `stream.gcount()`. That count remains from
the preceding nonempty read. Copying that many bytes from the new empty
vector dereferences its null data pointer. A synthetic asynchronous read
after a 17-byte read reproduces the access violation before the repair
(`zero-read-before.txt`, exit `0xC0000005`). This is consistent with the
reported crash; the original report does not contain the read arguments.

Zero-byte reads now return zero immediately after descriptor and buffer
validation. They leave guest memory and the file position untouched, and
the asynchronous wrapper publishes a normal zero-byte completion result.
The regression covers synchronous and asynchronous calls, destination
preservation, unchanged position and one-time consumption of the async result.
All three standard CTest suites pass after the repair.

The rebuilt native executable also completed a headless 4x/None run through
guest time 360.011232 seconds. Its 115-to-360-second benchmark window rendered
7350 frames and 7350 GE lists; the run crossed a soundtrack transition,
reported zero scheduler deadlocks and stopped only at the requested benchmark
limit. GPU output/raster dimensions were 1920x1088 with zero software draws.
Playback was disabled for throughput, but ATRAC decoding and guest streaming
remained active. This was automated driving, not an exact replay of the
reported second lap. Evidence is `out/motorstorm/bench/lap2-zero-read-fixed-4x.*`.

Both staged executables have SHA-256
`F230764E9C14FE508353EFBDEA4D33B3D76579E33D97890909FC7CD6C518D2D3`.
Launch with `./profiles/motorstorm/run.ps1 -Resolution 4`.
