# Build, INI defaults and fullscreen

Verified 2026-10-03.

The subsequent [performance/audio update](PERFORMANCE_AUDIO_SSAA.md) retains
the user's 4x/SSAA4x preference as the current default. The tests below record
the earlier 4x/FXAA fullscreen implementation.

`../build.ps1` configures and incrementally builds the Release executable with
bounded compiler concurrency and the current 4 KiB AOT corpus. `../build.bat`
wraps it for Command Prompt. Both entry points were exercised successfully.
`-Tests -GpuTests` builds and runs all eight framework/profile/configuration,
desktop-window and hardware-rendering suites.

The executable loads `MotorStormNative.ini` beside it, or the file selected by
`--config <path>`. The sample defaults to D3D12, 4x internal resolution, FXAA,
windowed presentation and audio enabled. Relative configured paths resolve
against the selected INI's directory. Existing environment overrides retain
precedence, and the launcher changes rendering options only when explicitly
requested. Invalid known INI values report the file and line.

The commented debug examples enable existing import/file/controller/music /
display traces, PC sampling, performance timers, D3D12 validation, frame dumps
and a bounded GE-list stop. False presence-based diagnostic settings remain
unset. Normal rebuilds preserve the user INI and publish the updated sample as
`MotorStormNative.default.ini`; `-ResetConfig` backs up and restores defaults.
An independent staging check verified that an edited INI retained its hash.

Fullscreen is borderless on the current monitor. F11 and Alt+Enter toggle it;
Escape restores windowed placement and Escape in windowed mode closes the game.
Alt+F4 also closes in either mode. Native tests verify monitor bounds, restored
style/position, held-key suppression, no PSP Start input from Alt+Enter,
configured fullscreen startup, restart and immediate-shutdown races. A hardware
test renders at 4x/FXAA through five presentations spanning fullscreen/windowed mode
without software fallback. Both GPU and GDI presentation preserve aspect ratio
with black bars on mismatched displays.

The default-INI game run completed 2800 GE lists / 2801 presents, decoded and
played audio with zero errors or underruns, and reported zero scheduler
deadlocks. The fullscreen-INI run reached actual racing and completed 5000 GE
lists / 5002 presents through guest time 168.703374 seconds. It recorded
1,544,157 GPU draws, 1,027,577 hardware-transform draws, zero software draws,
1920x1088 output/raster size, FXAA and zero scheduler deadlocks. Both runs
stopped at the requested diagnostic limits. The fullscreen run disabled
playback for throughput while retaining music decoding. Savedata was isolated.

Evidence: `out/motorstorm/build-script-validation.txt`,
`build-bat-validation.txt`, `fullscreen-hardware-validation.txt`,
`fullscreen-smoke/` and `fullscreen-race-smoke/`. The latter's GPU capture was
visually checked for the rendered player, track and race HUD. Live external UI
automation was unavailable because the Computer Use native pipe was absent;
keyboard/fullscreen checks used the native window regression executables.
