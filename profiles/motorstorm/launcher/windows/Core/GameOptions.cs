using System.IO;

namespace MotorStormLauncher.Core;

public sealed record GameOption(string Key, string Label, string[] Values,
                                string Section, string IniName, string DefaultValue)
{
    public string DisplayValue(string value) => Values.SequenceEqual(new[] { "1", "0" })
        ? value.ToLowerInvariant() switch { "1" or "true" or "yes" or "on" => "On", "0" or "false" or "no" or "off" => "Off", _ => value }
        : value.ToLowerInvariant() switch
        {
            "d3d12" => "D3D12", "vulkan" => "Vulkan", "fxaa" => "FXAA", "ssaa2x" => "SSAA2x",
            "ssaa4x" => "SSAA4x", "psp" => "PSP", "wasapi" => "WASAPI", "waveout" => "WaveOut",
            "original" => "Original (30 FPS)", _ => value.Length > 0 ? char.ToUpperInvariant(value[0]) + value[1..] : value,
        };
}

public static class GameOptions
{
    public static readonly GameOption[] All =
    [
        new("SKIP_INTRO", "Skip intro (start at Press Start)", ["1", "0"], "game", "skip_intro", "0"),
        new("RENDERER", "Renderer", ["d3d12", "vulkan", "auto", "software"], "graphics", "renderer", "d3d12"),
        new("RESOLUTION", "Internal resolution (PSP multiples)", ["1", "2", "3", "4", "6", "8"], "graphics", "resolution", "4"),
        new("AA", "Anti-aliasing", ["none", "fxaa", "ssaa2x", "ssaa4x"], "graphics", "antialiasing", "fxaa"),
        new("FPS", "Frame rate", ["original", "30", "60", "90", "120", "144", "240"], "graphics", "fps", "60"),
        new("DYNAMIC_FPS", "Fall back to 30 FPS when needed", ["1", "0"], "graphics", "dynamic_fps", "1"),
        new("VSYNC", "VSync", ["1", "0"], "graphics", "vsync", "1"),
        new("TEXTURE_FILTER", "Texture filtering", ["psp", "enhanced"], "graphics", "texture_filtering", "psp"),
        new("WIDESCREEN", "Widescreen", ["auto", "psp"], "graphics", "widescreen", "auto"),
        new("RENDER_DISTANCE", "Render distance", ["low", "normal", "high", "ultra", "max"], "graphics", "render_distance", "normal"),
        new("LESS_POP_IN", "Smooth prop transitions", ["1", "0"], "graphics", "less_pop_in", "1"),
        new("POST", "Race visual enhancements", ["1", "0"], "enhancements", "enabled", "0"),
        new("WINDOW_SCALE", "Window size (PSP multiples)", ["1", "2", "3", "4", "6", "8"], "window", "scale", "2"),
        new("FULLSCREEN_MODE", "Fullscreen mode", ["borderless", "exclusive"], "window", "fullscreen_mode", "borderless"),
        new("AUDIO", "Music and sound", ["1", "0"], "audio", "enabled", "1"),
        new("AUDIO_API", "Audio output", ["wasapi", "waveout"], "audio", "api", "wasapi"),
        new("CONTROLLER", "Game controllers", ["1", "0"], "controller", "enabled", "1"),
        new("RUMBLE", "Controller rumble", ["1", "0"], "controller", "rumble", "1"),
        new("TEXTURE_REPLACE", "Texture replacements", ["1", "0"], "textures", "replace", "1"),
        new("TEXTURE_BUDGET_MB", "Texture pack memory budget (MB)", ["256", "512", "1024", "2048", "4096"], "textures", "budget_mb", "1024"),
    ];

    /// <summary>Read display values from the same INI the selected native executable uses.</summary>
    public static Dictionary<string, string> DefaultLabels(string? exePath)
    {
        var values = All.ToDictionary(o => o.Key, o => o.DefaultValue);
        if (!string.IsNullOrWhiteSpace(exePath))
        {
            try
            {
                string section = "";
                foreach (string line in File.ReadLines(Path.Combine(Path.GetDirectoryName(exePath)!, "MotorStormNative.ini")))
                {
                    string text = line.Split(';', '#')[0].Trim();
                    if (text.StartsWith('[') && text.EndsWith(']')) { section = text[1..^1].Trim().ToLowerInvariant(); continue; }
                    int equals = text.IndexOf('=');
                    if (equals < 0) continue;
                    string name = text[..equals].Trim(), value = text[(equals + 1)..].Trim();
                    var option = All.FirstOrDefault(o => o.Section == section && o.IniName.Equals(name, StringComparison.OrdinalIgnoreCase));
                    if (option is not null && value.Length > 0) values[option.Key] = value;
                }
            }
            catch (Exception ex) when (ex is IOException or UnauthorizedAccessException) { }
        }
        return All.ToDictionary(o => o.Key, o => $"Default ({o.DisplayValue(values[o.Key])})");
    }
}
