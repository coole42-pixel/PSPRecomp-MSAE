using System.IO;
using System.Text.Json;

namespace MotorStormLauncher.Core;

public enum HostReach { LocalNetwork, Internet, RoomServer }

/// <summary>Launcher preferences, stored as JSON in %APPDATA%\MotorStormLauncher\settings.json.</summary>
public sealed class LauncherSettings
{
    public const int DefaultPort = 47900; // same default as the Android launcher

    public string GamePath { get; set; } = "";
    public string IsoPath { get; set; } = "";
    public string DiscPath { get; set; } = "";
    public string EbootPath { get; set; } = "";
    public string TexturePackPath { get; set; } = "";
    public Dictionary<string, string> RuntimeOptions { get; set; } = new();
    public string Nickname { get; set; } = "";
    public string HostInvite { get; set; } = "";
    public HostReach Reach { get; set; } = HostReach.LocalNetwork;
    public int HostPort { get; set; } = DefaultPort;
    public string PublicAddress { get; set; } = "";
    public string RoomServer { get; set; } = "";
    public string LastJoinCode { get; set; } = "";
    public bool Fullscreen { get; set; }
    public bool JoinTab { get; set; }

    private static string Folder =>
        Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.ApplicationData), "MotorStormLauncher");
    private static string FilePath => Path.Combine(Folder, "settings.json");
    private static readonly JsonSerializerOptions Json = new() { WriteIndented = true };

    public static LauncherSettings Load()
    {
        try
        {
            if (File.Exists(FilePath))
                return JsonSerializer.Deserialize<LauncherSettings>(File.ReadAllText(FilePath)) ?? new();
        }
        catch (Exception e) when (e is IOException or JsonException or UnauthorizedAccessException) { }
        return new();
    }

    public void Save()
    {
        try
        {
            Directory.CreateDirectory(Folder);
            File.WriteAllText(FilePath, JsonSerializer.Serialize(this, Json));
        }
        catch (Exception e) when (e is IOException or UnauthorizedAccessException) { }
    }

    /// <summary>Letters, digits, space, _ and - only, at most 24 characters (as on Android).</summary>
    public static string CleanNickname(string? text)
    {
        var clean = new string((text ?? "").Where(c => char.IsAsciiLetterOrDigit(c) || c is ' ' or '_' or '-').ToArray()).Trim();
        return clean.Length > 24 ? clean[..24] : clean;
    }
}
