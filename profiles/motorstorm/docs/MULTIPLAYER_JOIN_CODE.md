# Multiplayer join codes

A join code is one string that tells a player everything needed to join a private room. The
Windows launcher (`launcher/windows/Core/JoinCode.cs`) and the Android launcher
(`android/.../JoinCode.java`) both make and read it, so either platform can host for the other.

```
INVITE                         invite only - the joiner must still type an address
INVITE@192.168.1.20:47900      connect straight to the host (same Wi-Fi, or a forwarded UDP port)
INVITE@[fd00::1]:47900         same, IPv6
INVITE@room=1.2.3.4:3478       find the host through a psp_net_rendezvous server (punch, then relay)
```

* `INVITE` is the 26-character Crockford base32 room key, grouped in fours
  (`XXXX-XXXX-XXXX-XXXX-XXXX-XXXX-XX`). It is the room password: it keys the encryption.
  Lower case, spaces instead of dashes, and `O`/`I`/`L` for `0`/`1` are accepted.
* The address is `host:port`, `ip:port` or `[ipv6]:port`, port 1-65535. The game itself only
  accepts numeric addresses, so the Windows launcher resolves host names before starting the game.
  The Android launcher does not resolve names yet: use IP addresses there.
* Parsing searches free text, so a whole pasted chat message works. The first code with a usable
  address wins. A code whose address is malformed counts as invite only.
* Host port default: 47900 (both launchers).

How a code maps to the game's environment (`motorstorm_net_hle.cpp`):

| Code | Host | Joiner |
|---|---|---|
| `INVITE@ip:port` | `NET=host`, `NET_INVITE`, `NET_PORT=port` | `NET=join`, `NET_INVITE`, `NET_PEER=ip:port` |
| `INVITE@room=server` | `NET=host`, `NET_INVITE`, `NET_SERVER=server` | `NET=join`, `NET_INVITE`, `NET_SERVER=server` |

(all names are prefixed `PSPRECOMP_MOTORSTORM_`; `NET_NICK` carries the driver name.)

## Checks

* `launcher/windows/tests`: `dotnet run -c Release` (3027 checks: codec, parser, environment).
* `tests/MultiplayerInviteTests.java` now also covers `JoinCode`.
* Cross-check, 2026-10-09: 2788 generated lines (valid, mutated, in messages, bad ports, IPv6,
  room server) through `MultiplayerInviteTests join` and `LauncherTests join`: **0 differences**
  (790 with an address, 804 invite only, 1194 invalid). Invite normalisation: 0 differences on
  2788 lines. The Java invite codec was already cross-checked against the native one.
