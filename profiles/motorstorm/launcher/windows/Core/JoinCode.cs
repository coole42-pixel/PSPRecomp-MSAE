using System.Net;
using System.Net.Sockets;
using System.Text.RegularExpressions;

namespace MotorStormLauncher.Core;

public enum JoinRoute { Direct, RoomServer }

/// <summary>
/// One string a player can paste to join a room (format in docs/MULTIPLAYER_JOIN_CODE.md):
///   INVITE                       invite only; the joiner still needs an address
///   INVITE@192.168.1.20:47900    connect straight to the host (LAN, or a forwarded port)
///   INVITE@room=1.2.3.4:3478     find the host through a rendezvous server
/// The same parser exists on Android (JoinCode.java). Parsing searches free text, so a whole
/// shared chat message works as input.
/// </summary>
public sealed record JoinCode(string Invite, JoinRoute Route, string? Address)
{
    public const string RoomPrefix = "room=";

    private static readonly Regex Token = new(
        @"(?<![0-9A-Za-z])(?<inv>[0-9A-Za-z]{4}(?:[- ]?[0-9A-Za-z]{4}){5}[- ]?[0-9A-Za-z]{2})(?![0-9A-Za-z])" +
        @"(?:\s*@\s*(?<room>room=)?(?<addr>\[[0-9A-Fa-f:.]+\]:\d{1,5}|[A-Za-z0-9.\-]+:\d{1,5}))?",
        RegexOptions.CultureInvariant);

    public override string ToString() =>
        Address is null ? Invite : $"{Invite}@{(Route == JoinRoute.RoomServer ? RoomPrefix : "")}{Address}";

    public static JoinCode? Parse(string? text)
    {
        if (string.IsNullOrWhiteSpace(text)) return null;
        JoinCode? inviteOnly = null;
        foreach (Match m in Token.Matches(text))
        {
            string? invite = InviteCode.Normalize(m.Groups["inv"].Value);
            if (invite is null) continue;
            string address = m.Groups["addr"].Value;
            if (!m.Groups["addr"].Success || !ValidAddress(address))
            {
                inviteOnly ??= new JoinCode(invite, JoinRoute.Direct, null);
                continue;
            }
            return new JoinCode(invite, m.Groups["room"].Success ? JoinRoute.RoomServer : JoinRoute.Direct, address);
        }
        return inviteOnly;
    }

    /// <summary>host:port, ip:port or [ipv6]:port with a port of 1-65535.</summary>
    public static bool ValidAddress(string? text)
    {
        if (text is null) return false;
        var m = Regex.Match(text, @"^(?:\[(?<h6>[0-9A-Fa-f:.]+)\]|(?<h>[A-Za-z0-9.\-]+)):(?<p>\d{1,5})$");
        if (!m.Success || !int.TryParse(m.Groups["p"].Value, out int port) || port < 1 || port > 65535) return false;
        if (m.Groups["h6"].Success)
            return IPAddress.TryParse(m.Groups["h6"].Value, out var a) && a.AddressFamily == AddressFamily.InterNetworkV6;
        string host = m.Groups["h"].Value;
        return host.Length > 0 && !host.StartsWith('.') && !host.StartsWith('-');
    }

    /// <summary>
    /// The native layer accepts only numeric addresses (NetAddr::parse), so names are resolved
    /// here, preferring IPv4. Returns ip:port / [ipv6]:port, or null when the name does not resolve.
    /// </summary>
    public static async Task<string?> ResolveAsync(string address, CancellationToken ct = default)
    {
        if (!ValidAddress(address)) return null;
        int split = address.LastIndexOf(':');
        string host = address[..split].Trim('[', ']'), port = address[(split + 1)..];
        if (IPAddress.TryParse(host, out var ip)) return Format(ip, port);
        try
        {
            var all = await Dns.GetHostAddressesAsync(host, ct);
            var pick = all.FirstOrDefault(a => a.AddressFamily == AddressFamily.InterNetwork)
                       ?? all.FirstOrDefault(a => a.AddressFamily == AddressFamily.InterNetworkV6);
            return pick is null ? null : Format(pick, port);
        }
        catch (SocketException) { return null; }
    }

    private static string Format(IPAddress ip, string port)
    {
        if (ip.IsIPv4MappedToIPv6) ip = ip.MapToIPv4();
        return ip.AddressFamily == AddressFamily.InterNetworkV6 ? $"[{ip}]:{port}" : $"{ip}:{port}";
    }

    /// <summary>True for loopback / RFC 1918 / link-local / CGNAT / IPv6 ULA hosts (same-network play).</summary>
    public static bool IsLocalAddress(string? address)
    {
        if (address is null) return false;
        int split = address.LastIndexOf(':');
        if (split <= 0 || !IPAddress.TryParse(address[..split].Trim('[', ']'), out var ip)) return false;
        if (IPAddress.IsLoopback(ip)) return true;
        if (ip.AddressFamily == AddressFamily.InterNetworkV6)
            return ip.IsIPv6LinkLocal || ip.IsIPv6UniqueLocal || ip.IsIPv6SiteLocal;
        byte[] b = ip.GetAddressBytes();
        return b[0] == 10 || (b[0] == 172 && b[1] >= 16 && b[1] <= 31) || (b[0] == 192 && b[1] == 168) ||
               (b[0] == 169 && b[1] == 254) || (b[0] == 100 && b[1] >= 64 && b[1] <= 127);
    }
}
