using System.Net;
using System.Net.Http;
using System.Net.NetworkInformation;
using System.Net.Sockets;

namespace MotorStormLauncher.Core;

public static class NetworkInfo
{
    /// <summary>
    /// Private IPv4 addresses of this PC, best first: adapters with a default gateway (the
    /// Wi-Fi/Ethernet the other players share) before virtual ones (Hyper-V, VPN, WSL).
    /// </summary>
    public static IReadOnlyList<string> LanAddresses()
    {
        var found = new List<(int score, string ip)>();
        try
        {
            foreach (var nif in NetworkInterface.GetAllNetworkInterfaces())
            {
                if (nif.OperationalStatus != OperationalStatus.Up) continue;
                if (nif.NetworkInterfaceType is NetworkInterfaceType.Loopback or NetworkInterfaceType.Tunnel) continue;
                var props = nif.GetIPProperties();
                bool gateway = props.GatewayAddresses.Any(g => g.Address.AddressFamily == AddressFamily.InterNetwork &&
                                                               !g.Address.Equals(IPAddress.Any));
                string name = (nif.Name + " " + nif.Description).ToLowerInvariant();
                bool virtualish = name.Contains("virtual") || name.Contains("vethernet") || name.Contains("hyper-v") ||
                                  name.Contains("vpn") || name.Contains("wsl") || name.Contains("vmware") ||
                                  name.Contains("virtualbox") || name.Contains("tailscale") || name.Contains("zerotier");
                foreach (var ua in props.UnicastAddresses)
                {
                    var ip = ua.Address;
                    if (ip.AddressFamily != AddressFamily.InterNetwork) continue;
                    string text = ip.ToString();
                    if (!JoinCode.IsLocalAddress(text + ":1") || text.StartsWith("169.254.") || IPAddress.IsLoopback(ip)) continue;
                    int score = (gateway ? 4 : 0) + (virtualish ? 0 : 2) +
                                (nif.NetworkInterfaceType is NetworkInterfaceType.Wireless80211 or NetworkInterfaceType.Ethernet ? 1 : 0);
                    found.Add((score, text));
                }
            }
        }
        catch (NetworkInformationException) { }
        return found.OrderByDescending(f => f.score).Select(f => f.ip).Distinct().ToList();
    }

    /// <summary>
    /// This network's public IPv4 address as seen from the internet (asks api.ipify.org; only
    /// called when the host presses "Detect"). Null on failure.
    /// </summary>
    public static async Task<string?> PublicAddressAsync(CancellationToken ct = default)
    {
        try
        {
            using var http = new HttpClient { Timeout = TimeSpan.FromSeconds(6) };
            string text = (await http.GetStringAsync("https://api.ipify.org", ct)).Trim();
            return IPAddress.TryParse(text, out var ip) && ip.AddressFamily == AddressFamily.InterNetwork ? text : null;
        }
        catch (Exception e) when (e is HttpRequestException or TaskCanceledException) { return null; }
    }
}
