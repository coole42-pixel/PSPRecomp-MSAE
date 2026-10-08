# MotorStorm: Arctic Edge launcher (Windows)

A WPF launcher for single player and private multiplayer rooms. It hosts or joins with one
**join code** that also works with the Android launcher (format: `../../docs/MULTIPLAYER_JOIN_CODE.md`).

## Build

```powershell
./build.ps1                 # -> out/motorstorm/bin/Release/MotorStormLauncher.exe (needs .NET 10 Desktop Runtime)
./build.ps1 -SelfContained  # same place, no runtime needed on the other PC (~150 MB)
./build.ps1 -Tests          # also run the checks in tests/
```

The launcher finds `MotorStormNative.exe` next to itself, in parent folders, or in
`out/motorstorm/bin/Release` of the repository; "Change…" picks it by hand. Settings live in
`%APPDATA%\MotorStormLauncher\settings.json`.

## Racing

1. **Host:** Host a race › choose who's racing › Start Hosting. The join code is copied.
   * *Same Wi-Fi:* the code carries this PC's LAN address and port (default 47900).
   * *Internet:* forward UDP 47900 on the router to this PC; "Detect" fills in the public address
     (asks api.ipify.org, only when pressed). Does not work behind mobile-data/CGNAT.
   * *Room server:* everyone uses the same `psp_net_rendezvous` server (hole punching, relay fallback).
   * "Allow through firewall" adds an inbound UDP rule for the game (asks for administrator rights).
2. **Join:** Join a race › paste the code or the whole invite message › Join Race.
   Android players: Multiplayer › Paste join code. An Android host's "Share join code" pastes here.
3. In both games: Wreckreation › Multiplayer › Ad-hoc › Create Game (host) / Join Game.

The status strip follows the game's `[NET]` log lines (the launcher pins the log to
`MotorStormNative.log` next to the game with `PSPRECOMP_MOTORSTORM_LOG`): room open, player joined,
connected to host, lost connection. "Show log" lists them.

## Files

| | |
|---|---|
| `Core/InviteCode.cs`, `Core/JoinCode.cs` | invite codec and join-code parser (same as Android) |
| `Core/GameSession.cs` | finds, starts and watches the game; environment per role |
| `Core/NetworkInfo.cs`, `Core/LauncherSettings.cs` | LAN/public address, saved preferences |
| `MainWindow.xaml`, `Theme.xaml`, `SnowField.cs` | UI |
| `tests/` | console checks; `join`/`norm` stdin modes for diffing with the Java parser; `smoke` starts a real host and joiner |

`MotorStormLauncher.exe --screenshot out.png [join]` renders the window to a PNG and exits.
