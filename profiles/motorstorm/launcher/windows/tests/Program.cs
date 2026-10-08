// Checks for the Windows launcher's codec and launch environment.
//   dotnet run -c Release            self checks
//   dotnet run -c Release -- norm    canonical invite (or INVALID) per stdin line
//   dotnet run -c Release -- join    parsed join code (or INVALID) per stdin line; a literal "\n" is a line break
// The norm/join modes take the same input as MultiplayerInviteTests.java so the Android and Windows
// parsers can be diffed line by line.
using MotorStormLauncher.Core;

if (args.Length >= 1 && args[0] is "norm" or "join")
{
    for (string? line; (line = Console.ReadLine()) is not null;)
    {
        if (args[0] == "norm") Console.WriteLine(InviteCode.Normalize(line) ?? "INVALID");
        else Console.WriteLine(JoinCode.Parse(line.Replace("\\n", "\n"))?.ToString() ?? "INVALID");
    }
    return 0;
}

// smoke <host-exe> <join-exe> [seconds]: start a host and a joiner through GameSession (as the launcher
// does) on loopback, print their [NET] log lines, stop both. Opens two game windows. The two exe paths
// must differ (each game writes <exe>.log next to itself).
if (args.Length >= 3 && args[0] == "smoke")
{
    string code = InviteCode.Generate();
    double seconds = args.Length >= 4 ? double.Parse(args[3]) : 40;
    var hostGame = GameSession.Start(args[1], new LaunchPlan(Role.Host, code, HostPort: 47911, Nickname: "SmokeHost"));
    await Task.Delay(3000);
    var joinGame = GameSession.Start(args[2], new LaunchPlan(Role.Join, code, Peer: "127.0.0.1:47911", Nickname: "SmokeJoin"));
    hostGame.LogLine += l => Console.WriteLine("host | " + l);
    joinGame.LogLine += l => Console.WriteLine("join | " + l);
    hostGame.Exited += c => Console.WriteLine($"host exited {c}");
    joinGame.Exited += c => Console.WriteLine($"join exited {c}");
    await Task.Delay(TimeSpan.FromSeconds(seconds));
    hostGame.Kill();
    joinGame.Kill();
    await Task.Delay(1500);
    return 0;
}

int failures = 0, checks = 0;
void Require(bool ok, string what)
{
    checks++;
    if (!ok) { failures++; Console.Error.WriteLine("FAIL: " + what); }
}

// ---- invite codec (same cases as MultiplayerInviteTests.java)
for (int i = 0; i < 1000; i++)
{
    string code = InviteCode.Generate();
    Require(code.Length == 32, "length " + code);
    Require(code == InviteCode.Normalize(code), "round trip " + code);
    Require(code == InviteCode.Normalize(code.ToLowerInvariant().Replace("-", " ")), "case/space tolerant " + code);
}
string zeros = InviteCode.Encode(new byte[16]);
Require(zeros == "0000-0000-0000-0000-0000-0000-00", "all-zero code: " + zeros);
Require(InviteCode.Normalize("OOOO-0000-IIII-LLLL-0000-0000-00") is not null, "O/I/L aliases");
Require(InviteCode.Normalize(zeros[..^1]) is null, "too short");
Require(InviteCode.Normalize(zeros + "0") is null, "too long");
Require(InviteCode.Normalize("U" + zeros[1..]) is null, "U is not in the alphabet");
Require(InviteCode.Normalize("0000-0000-0000-0000-0000-0000-0Z") is null, "non-zero padding bits rejected");
Require(InviteCode.Normalize(null) is null && InviteCode.Normalize("") is null, "null/empty");

// ---- join codes
string inv = InviteCode.Generate();
var direct = JoinCode.Parse(inv + "@192.168.1.20:47900");
Require(direct is { Route: JoinRoute.Direct, Address: "192.168.1.20:47900" } && direct.Invite == inv, "direct join code");
Require(direct?.ToString() == inv + "@192.168.1.20:47900", "direct round trip");
var room = JoinCode.Parse("Race me!\nJoin code: " + inv.ToLowerInvariant() + " @ room=rooms.example.com:3478\nThen...");
Require(room is { Route: JoinRoute.RoomServer, Address: "rooms.example.com:3478" } && room.Invite == inv, "room code inside a message");
Require(JoinCode.Parse(inv + "@[fd00::1]:47900")?.Address == "[fd00::1]:47900", "ipv6 address");
var bare = JoinCode.Parse(inv);
Require(bare is { Address: null } && bare.ToString() == inv, "invite only");
Require(JoinCode.Parse(inv + "@1.2.3.4:0") is { Address: null }, "port 0 falls back to invite only");
Require(JoinCode.Parse(inv + "@1.2.3.4:70000") is { Address: null }, "port out of range");
Require(JoinCode.Parse("hello world") is null && JoinCode.Parse(null) is null, "no code");
Require(JoinCode.Parse("X" + inv + "@1.2.3.4:5") is null, "code glued to other text is not a code");
Require(JoinCode.Parse(inv + "@10.0.0.2:47900 and " + InviteCode.Generate())?.Address == "10.0.0.2:47900", "first full code wins");
Require(JoinCode.IsLocalAddress("192.168.1.20:47900") && JoinCode.IsLocalAddress("10.1.2.3:1") && !JoinCode.IsLocalAddress("8.8.8.8:53"), "local address test");
Require(JoinCode.ResolveAsync("127.0.0.1:47900").Result == "127.0.0.1:47900", "numeric address resolves to itself");
Require(JoinCode.ResolveAsync("localhost:47900").Result is "127.0.0.1:47900" or "[::1]:47900", "host name resolves to an IP");

// ---- launch environment matches what motorstorm_net_hle.cpp reads
var host = new LaunchPlan(Role.Host, inv, HostPort: 47900, Nickname: "Ice <Racer>!").Environment();
Require(host["PSPRECOMP_MOTORSTORM_NET"] == "host" && host["PSPRECOMP_MOTORSTORM_NET_INVITE"] == inv, "host env");
Require(host["PSPRECOMP_MOTORSTORM_NET_PORT"] == "47900" && !host.ContainsKey("PSPRECOMP_MOTORSTORM_NET_PEER"), "host port");
Require(host["PSPRECOMP_MOTORSTORM_NET_NICK"] == "Ice Racer", "nickname cleaned");
var join = new LaunchPlan(Role.Join, inv, Peer: "192.168.1.20:47900").Environment();
Require(join["PSPRECOMP_MOTORSTORM_NET"] == "join" && join["PSPRECOMP_MOTORSTORM_NET_PEER"] == "192.168.1.20:47900" &&
        !join.ContainsKey("PSPRECOMP_MOTORSTORM_NET_PORT"), "join env");
var viaServer = new LaunchPlan(Role.Join, inv, Server: "1.2.3.4:3478").Environment();
Require(viaServer["PSPRECOMP_MOTORSTORM_NET_SERVER"] == "1.2.3.4:3478" && !viaServer.ContainsKey("PSPRECOMP_MOTORSTORM_NET_PEER"), "server env");
var solo = new LaunchPlan(Role.Solo, Fullscreen: true).Environment();
Require(!solo.Keys.Any(k => k.StartsWith("PSPRECOMP_MOTORSTORM_NET")) && solo["PSPRECOMP_MOTORSTORM_FULLSCREEN"] == "1", "solo env");
Require(LauncherSettings.CleanNickname(new string('a', 40)).Length == 24, "nickname length");

Console.WriteLine(failures == 0 ? $"LauncherTests passed ({checks} checks)" : $"LauncherTests: {failures} of {checks} checks failed");
return failures == 0 ? 0 : 1;
