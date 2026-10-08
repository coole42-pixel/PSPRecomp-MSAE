using System.Diagnostics;
using System.IO;
using System.Text;

namespace MotorStormLauncher.Core;

public enum Role { Solo, Host, Join }

/// <summary>What one game launch needs; turned into the PSPRECOMP_MOTORSTORM_* environment.</summary>
public sealed record LaunchPlan(Role Role, string? Invite = null, string? Peer = null, string? Server = null,
                                int HostPort = LauncherSettings.DefaultPort, string Nickname = "", bool Fullscreen = false)
{
    public Dictionary<string, string> Environment()
    {
        // Same base switches as profiles/motorstorm/run.ps1.
        var env = new Dictionary<string, string>
        {
            ["PSPRECOMP_MOTORSTORM_SOFTGE"] = "1",
            ["PSPRECOMP_MOTORSTORM_WINDOW"] = "1",
        };
        if (Fullscreen) env["PSPRECOMP_MOTORSTORM_FULLSCREEN"] = "1";
        if (Role == Role.Solo) return env;
        env["PSPRECOMP_MOTORSTORM_NET"] = Role == Role.Host ? "host" : "join";
        env["PSPRECOMP_MOTORSTORM_NET_INVITE"] = Invite ?? throw new InvalidOperationException("invite missing");
        if (Server is not null) env["PSPRECOMP_MOTORSTORM_NET_SERVER"] = Server;
        else if (Role == Role.Join) env["PSPRECOMP_MOTORSTORM_NET_PEER"] = Peer ?? throw new InvalidOperationException("host address missing");
        if (Role == Role.Host) env["PSPRECOMP_MOTORSTORM_NET_PORT"] = HostPort.ToString();
        string nick = LauncherSettings.CleanNickname(Nickname);
        if (nick.Length > 0) env["PSPRECOMP_MOTORSTORM_NET_NICK"] = nick;
        return env;
    }
}

/// <summary>Finds, starts and watches MotorStormNative.exe.</summary>
public sealed class GameSession
{
    public const string ExeName = "MotorStormNative.exe";

    private readonly Process process;
    private readonly string logPath;
    private readonly DateTime started = DateTime.Now;
    private readonly CancellationTokenSource stop = new();

    public event Action<string>? LogLine;
    public event Action<int>? Exited;
    public int ProcessId => process.Id;

    private GameSession(Process process, string logPath)
    {
        this.process = process;
        this.logPath = logPath;
        process.EnableRaisingEvents = true;
        process.Exited += (_, _) =>
        {
            // Let the tailer read the last lines, then report.
            Task.Delay(600).ContinueWith(_ => { stop.Cancel(); Exited?.Invoke(process.ExitCode); });
        };
        _ = Task.Run(TailLogAsync);
    }

    /// <summary>
    /// Looks next to the launcher, in its parent folders, and in the repository build output
    /// (out/motorstorm/bin/Release) found by walking up from the launcher.
    /// </summary>
    public static string? FindGame(string? preferred)
    {
        if (!string.IsNullOrWhiteSpace(preferred) && File.Exists(preferred)) return Path.GetFullPath(preferred);
        var dir = new DirectoryInfo(AppContext.BaseDirectory);
        for (int depth = 0; dir is not null && depth < 10; depth++, dir = dir.Parent)
        {
            foreach (string candidate in new[]
                     {
                         Path.Combine(dir.FullName, ExeName),
                         Path.Combine(dir.FullName, "out", "motorstorm", "bin", "Release", ExeName),
                     })
                if (File.Exists(candidate)) return candidate;
        }
        return null;
    }

    public static GameSession Start(string exePath, LaunchPlan plan)
    {
        var info = new ProcessStartInfo(exePath)
        {
            UseShellExecute = false,
            CreateNoWindow = true, // the game opens its own window; its console output also goes to the log file
            WorkingDirectory = WorkingDirectory(exePath),
        };
        foreach (var (key, value) in plan.Environment()) info.Environment[key] = value;
        // Pin the log (normally [logging] log_file in the INI) so the launcher knows which file to follow.
        string logPath = Path.ChangeExtension(exePath, ".log");
        info.Environment["PSPRECOMP_MOTORSTORM_LOG"] = logPath;
        // Never inherit a stale multiplayer setup from the launcher's own environment.
        if (plan.Role == Role.Solo)
            foreach (string key in info.Environment.Keys.Where(k => k.StartsWith("PSPRECOMP_MOTORSTORM_NET", StringComparison.OrdinalIgnoreCase)).ToList())
                info.Environment.Remove(key);
        var process = Process.Start(info) ?? throw new InvalidOperationException("the game did not start");
        return new GameSession(process, logPath);
    }

    /// <summary>The repository root when the exe is the in-tree build (what run.ps1 uses), else its folder.</summary>
    private static string WorkingDirectory(string exePath)
    {
        string dir = Path.GetDirectoryName(exePath)!;
        var repo = new DirectoryInfo(dir).Parent?.Parent?.Parent?.Parent; // out/motorstorm/bin/Release
        return repo is not null && Directory.Exists(Path.Combine(repo.FullName, "profiles", "motorstorm")) ? repo.FullName : dir;
    }

    public void Kill()
    {
        try { if (!process.HasExited) process.Kill(entireProcessTree: true); }
        catch (InvalidOperationException) { }
    }

    private async Task TailLogAsync()
    {
        long position = 0;
        var pending = new StringBuilder();
        while (!stop.IsCancellationRequested)
        {
            try
            {
                var fi = new FileInfo(logPath);
                // The game truncates its log on start; ignore the previous run's file until it does.
                if (fi.Exists && fi.LastWriteTime >= started.AddSeconds(-2))
                {
                    using var fs = new FileStream(logPath, FileMode.Open, FileAccess.Read, FileShare.ReadWrite | FileShare.Delete);
                    if (fs.Length < position) position = 0;
                    fs.Seek(position, SeekOrigin.Begin);
                    using var reader = new StreamReader(fs, Encoding.UTF8);
                    pending.Append(await reader.ReadToEndAsync());
                    position = fs.Length;
                    string text = pending.ToString();
                    int last = text.LastIndexOf('\n');
                    if (last >= 0)
                    {
                        foreach (string line in text[..last].Split('\n'))
                            if (Interesting(line.TrimEnd('\r'))) LogLine?.Invoke(line.TrimEnd('\r'));
                        pending.Clear().Append(text[(last + 1)..]);
                    }
                }
            }
            catch (IOException) { }
            catch (UnauthorizedAccessException) { }
            try { await Task.Delay(400, stop.Token); } catch (TaskCanceledException) { }
        }
    }

    private static bool Interesting(string line) =>
        line.StartsWith("[NET]") || line.StartsWith("[CRASH]") || line.StartsWith("[ERROR]") || line.StartsWith("[FATAL]");
}
