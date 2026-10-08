# MotorStorm multiplayer: what the game actually does

Findings from static analysis of `EBOOT_DECRYPTED.BIN`, the import table
(`analysis/report_imports.csv`) and the generated call sites. Nothing here comes from
running the game's multiplayer menus (that has not been done); everything marked
**hypothesis** is untested.

## 1. Which game, which online systems

Strings in the EBOOT identify **MotorStorm: Arctic Edge** (`UCES01250`, `UCUS98743`).
It contains **two separate multiplayer back ends**:

| Back end | Evidence | Status |
|---|---|---|
| **Sony infrastructure online ("Medius")** | `motorstormpsp.muis.online.scee.com`, `MediusBeginSessionFailed`, `MediusMatchTypeHostGame`, `MediusMatchTypeJoinSpecified`, `MediusNumGameWorldsPerLobbyWorldExceeded`, `unityOnline/src/unityHostResolver.cpp`, `Network_CommunityManager.cpp`, `Network_RankingsConfigTagModule.cpp`, `Network_SVOTagModule.cpp`, UPnP IGD strings, HTTP, `LobbyMenu`, `lobbyListFilter`, `JoinGameMenu`, `CreateJoinMenu`; imports `sceNetInet` (18), `sceNetResolver` (5), `sceNetApctl` (6) | Servers are shut down. Recovering this means writing a Medius **server** (lobby, world, matchmaking, rankings) for an undocumented binary protocol. Not attempted; out of scope for this milestone. |
| **Ad-hoc (local wireless)** | imports `sceNetAdhoc` (6), `sceNetAdhocctl` (5), `sceUtilityNetconf*` (4); `Adhoc` string; netconf called with `action = 2` | Self-contained, needs no server. This is the recoverable path and what the transport/HLE target. |

The hard conclusion for feasibility: **private internet races are achievable by tunnelling
the game's ad-hoc mode, not by reviving its online mode.**

## 2. Import inventory

NID -> name mapping comes from the public PSP SDK/firmware NID tables (recalled, not copied
from any emulator source). Names marked ✔ are additionally corroborated by the argument
shapes at the call sites; others are by NID table only.

### sceNet (4) -- units 0364 (init), 0487
| NID | Name | Evidence |
|---|---|---|
| 0x39AF39A6 | sceNetInit | ✔ first call of the init routine |
| 0x281928A9 | sceNetTerm | in the same unit as Init (shutdown routine) |
| 0x0BF0A3AE | sceNetGetLocalEtherAddr | ✔ `a0` = stack buffer, result then fed to `PdpCreate` as the MAC |
| 0x89360950 | sceNetEtherNtostr | same unit as above (MAC to text) |

### sceNetInet (18), sceNetResolver (5)
Only `sceNetInetInit` (0x17943399) and `sceNetResolverInit` (0xF3370E61) are called in the
init routine (✔ order: Net, Inet, Resolver, Apctl). The remaining sockets/DNS functions
belong to the Medius back end and are left **unregistered**: if the guest reaches them the
run stops with the usual `[HLE MISSING]` diagnostic instead of faking a network.

### sceNetApctl (6)
Init 0xE2F91F9B ✔ (`a0=0x6000` stack size, `a1=48` priority), AddHandler 0x8ABADD51 ✔,
DelHandler 0x5963991B, GetInfo 0x2BEFDF23, Disconnect 0x24FE91A1, Term 0xB3EDD0EC.
`sceNetApctlConnect` is **not** imported: the infrastructure connection is made by the
netconf dialog (`action = 0`).

### sceNetAdhocctl (5)
Init 0xE26F226E ✔ (`a0=0x2000`, `a1=48`, `a2` = pointer to a product struct), AddHandler
0x20B317A0 ✔ (`a0` = handler function in the game at 0x08970F68, `a1` = 0), DelHandler
0x6402490B, Disconnect 0x34401D65, Term 0x9D689E13.
**Not imported:** `Connect`, `GetState`, `GetPeerList`, `GetNameByAddr`, `Scan`,
`CreateEnterGameMode`. The game therefore does not manage the group through Adhocctl
calls; it learns state only from the registered handler and the netconf dialog.

### sceNetAdhoc (6) -- PDP only
| NID | Name | Call-site decoding |
|---|---|---|
| 0xE1D621D7 | sceNetAdhocInit | no arguments |
| 0x6F92741B | sceNetAdhocPdpCreate | ✔ `(mac*, port u16, rcvbuf = 65523, 0)`; `mac*` = value from `sceNetGetLocalEtherAddr` |
| 0x7F27BB5E | sceNetAdhocPdpDelete | `(id, 0)` |
| 0xABED3790 | sceNetAdhocPdpSend | ✔ `(id, dstMac*, port u16, data*, len u16, timeout = 0, nonblock = 1)`; the 6-byte MAC is copied to the stack first; packet struct holds dst MAC @+12, port @+20, length @+22, payload @+28 |
| 0xDFE53E03 | sceNetAdhocPdpRecv | ✔ `(id, srcMac* out, port* out, buf*, len* in/out, timeout = 0, nonblock = 1)` |
| 0xC7C1FC57 | sceNetAdhocGetPdpStat | ✔ two-call pattern: probe size with `buf = 0`, then `sp -= size` and fetch |

**No PTP, no matching library, no game mode.** All game traffic is unicast/broadcast PDP
datagrams, always polled non-blocking.

### sceUtilityNetconf (4)
InitStart 0x4DB1E739 ✔, GetStatus 0x6332AA39, Update 0x91E70E35, ShutdownStart 0xF88155F6.
At the InitStart call site (unit 0364, ~line 1254) the game builds the parameter block so
that `action @+0x30 = 2` and `adhocparam @+0x34` points into the same object when its mode
argument is 1; otherwise `action = 0`. That matches the public SDK
`pspUtilityNetconfData` (`PSP_NETCONF_ACTION_CONNECT_ADHOC = 2`, `CONNECTAP = 0`), so the
game uses the stock adhoc connection dialog (which on hardware lets the user create or join
a group) rather than its own UI.

## 3. Game network init sequence (always the same routine)

```
sceUtilityLoadModule x6      (NET_COMMON .. NET_SSL; already answered by the existing loader HLE)
sceNetInit
sceNetInetInit
sceNetResolverInit
sceNetApctlInit(0x6000, 48)      sceNetApctlAddHandler(handler)
sceNetAdhocInit
sceNetAdhocctlInit(0x2000, 48, product)   sceNetAdhocctlAddHandler(0x08970F68, 0)
...later...  sceUtilityNetconfInitStart(param)  (adhoc: action = 2)
             sceNetGetLocalEtherAddr -> sceNetAdhocPdpCreate -> PdpSend/PdpRecv polling
...teardown  sceNetApctlDisconnect, sceNetAdhocctlDisconnect, ...
```

Until now none of these imports were registered, so single-player never reached them
(the first one would stop the run with `[HLE MISSING]`).

## 4. How the HLE maps this (implemented, `host/motorstorm_net_hle.cpp`)

* Opt-in: `PSPRECOMP_MOTORSTORM_NET=host|join`. Absent => nothing registered, behaviour
  and performance identical to before.
* A group is a private room (invite code). Host assigns nothing: every console picks a
  random locally-administered MAC up front (the game reads it before the group exists) and
  the host only checks uniqueness. Topology is a star: the host routes joiner-to-joiner and
  broadcast PDP traffic.
* PDP rides the reliable ordered channel by default (the game has no visible retransmit
  layer); `PSPRECOMP_MOTORSTORM_NET_UNRELIABLE=1` switches it. Datagrams up to 65519 bytes
  (the PSP maximum) are supported through fragmentation.
* `sceUtilityNetconf` (adhoc) completes when the room is actually established, writes
  result 0, and delivers `CONNECT` to the registered Adhocctl handler
  (`handler(flag, error, arg)`). Losing the host delivers `DISCONNECT`. An infrastructure
  request (`action = 0`) fails the dialog with a generic utility error instead of hanging.
* Every import logs its arguments and result (budgeted: first 6 calls, then every 1000th)
  under the `NET` log category -- this is the main tool for the next investigation step.

## 5. What is still unknown (needs a real run of the multiplayer menus)

1. The game's own PDP protocol: ports, packet formats, discovery (hypothesis: a periodic
   broadcast `hello` that peers answer, because `Adhocctl` peer-list calls are not
   imported), tick rate, payload sizes.
2. Whether race state is lockstep (needs identical timing) or replicated; this decides how
   much latency/jitter the game tolerates and whether the reliable channel helps or hurts.
3. The exact error codes the game expects from `PdpRecv` when empty (we return the SDK
   "would block" value) and from the netconf dialog on failure.
4. Whether the adhoc dialog flow in the game expects an intermediate `SCAN` event.
5. Which menu entry leads to the adhoc path versus the Medius online path (the strings
   `CreateJoinMenu`, `JoinTypeMenu`, `ConfigureConnection`, `SetConnectionType` suggest the
   user picks a connection type there).
6. Whether PSP-side determinism (floating point, timing) is preserved across Windows and
   Android hosts: untested until two instances reach a race.

## 6. How to take the next step

```
set PSPRECOMP_MOTORSTORM_NET=host
MotorStormNative.exe            # prints the invite code; logs 'NET ...' lines
# on the second machine/instance:
set PSPRECOMP_MOTORSTORM_NET=join
set PSPRECOMP_MOTORSTORM_NET_INVITE=XXXX-...
set PSPRECOMP_MOTORSTORM_NET_PEER=<host-ip>:<port>     (or _SERVER=<rendezvous>)
```

Then navigate to the multiplayer menu in both and read the `NET` trace: it records the
exact order, arguments and sizes of every ad-hoc call, which answers items 1-5 above.

## 7. Observed in the first real run (2026-10-09, two instances, direct transport)

PDP, port 3659 on both sides (`PdpCreate(mac, 3659, 65523, 0)`), all polled non-blocking.

| Packet | Dir | Size | First bytes | Meaning (hypothesis) |
|---|---|---|---|---|
| lobby query | joiner broadcast | 160 | `c3 81 9c 00 00 19 9a 00` | "who is hosting?" repeated while in the Join Game Lobby |
| game description | host unicast | 476 | `c3 81 d8 01 00 1a` | name / track / laps / mode / slots shown in the lobby list |
| keepalive | both, broadcast | 6 | `cd 81 02 00 02 20` | presence heartbeat |
| session hello/ack | unicast | 18 | `7f 8b 0c 50 xx xx` | per-session ids (two 16-bit ids appear, e.g. 6c2d / 9b7c) |
| join request / accept | unicast | 19 / 35 | `c4 81 0f 00` / `c4 81 1f 00` | joining a listed game |
| state exchange | unicast | 743, 815 | `7f cb 01 00 ...` | player/vehicle/ready info |
Race traffic follows after the countdown.  A 160-byte discovery packet reaches the host byte-for-byte, so the
star-topology relay does not alter payloads.

What is now known: the game's ad-hoc mode is *client/server by role* (a host creating a game, joiners
listing and joining it), lobby discovery is broadcast PDP, and no PTP/matching is involved.
Still unknown: the packet format fields (only first bytes decoded), the race tick rate/size, whether the race is
lockstep, desync handling, and what the game does on packet loss.
