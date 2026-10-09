using System.ComponentModel;
using System.Diagnostics;
using System.IO;
using System.Runtime.InteropServices;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Interop;
using System.Windows.Media;
using System.Windows.Media.Animation;
using System.Windows.Media.Imaging;
using System.Windows.Threading;
using Microsoft.Win32;
using MotorStormLauncher.Core;

namespace MotorStormLauncher;

public partial class MainWindow : Window
{
    private readonly LauncherSettings settings = LauncherSettings.Load();
    private string? gamePath;
    private GameSession? session;
    private Role sessionRole;
    private bool ready;
    private string? clipboardCode;

    public MainWindow()
    {
        InitializeComponent();
        SourceInitialized += (_, _) => ApplyWindowStyle();
        StateChanged += (_, _) => Root.Margin = WindowState == WindowState.Maximized ? new Thickness(7) : new Thickness(0);
        Activated += (_, _) => CheckClipboard();
        Closing += OnClosing;
        Loaded += (_, _) => StartAmbientAnimation();
        LoadState();
        ready = true;
        RefreshAll();
        _ = RefreshFirewallStateAsync();
    }

    // ------------------------------------------------------------------ state
    private void LoadState()
    {
        gamePath = GameSession.FindGame(settings.GamePath);
        NicknameBox.Text = settings.Nickname.Length > 0 ? settings.Nickname : LauncherSettings.CleanNickname(Environment.UserName);
        FullscreenSwitch.IsChecked = settings.Fullscreen;
        if (InviteCode.Normalize(settings.HostInvite) is not { } invite)
        {
            settings.HostInvite = InviteCode.Generate();
            SaveSettings();
        }
        else settings.HostInvite = invite;
        if (settings.HostPort is < 1024 or > 65535) settings.HostPort = LauncherSettings.DefaultPort;
        PortBoxLan.Text = PortBoxNet.Text = settings.HostPort.ToString();
        PublicAddressBox.Text = settings.PublicAddress;
        ServerBox.Text = settings.RoomServer;
        var lan = NetworkInfo.LanAddresses();
        LanAddressBox.ItemsSource = lan.Count > 0 ? lan : new[] { "No network found" };
        LanAddressBox.SelectedIndex = 0;
        (settings.Reach switch
        {
            HostReach.Internet => ReachInternet,
            HostReach.RoomServer => ReachServer,
            _ => ReachLan,
        }).IsChecked = true;
        JoinCodeBox.Text = settings.LastJoinCode;
        (settings.JoinTab ? JoinTab : HostTab).IsChecked = true;
    }

    private void RefreshAll()
    {
        if (!ready) return;
        bool joining = JoinTab.IsChecked == true;
        HostPanel.Visibility = joining ? Visibility.Collapsed : Visibility.Visible;
        JoinPanel.Visibility = joining ? Visibility.Visible : Visibility.Collapsed;
        LanOptions.Visibility = ReachLan.IsChecked == true ? Visibility.Visible : Visibility.Collapsed;
        InternetOptions.Visibility = ReachInternet.IsChecked == true ? Visibility.Visible : Visibility.Collapsed;
        ServerOptions.Visibility = ReachServer.IsChecked == true ? Visibility.Visible : Visibility.Collapsed;
        FirewallRow.Visibility = ReachServer.IsChecked == true ? Visibility.Collapsed : Visibility.Visible;

        GameTitle.Text = gamePath is null ? "Game not found" : "Game ready";
        GamePathText.Text = gamePath ?? $"Locate {GameSession.ExeName}";
        GameDot.Fill = (Brush)FindResource(gamePath is null ? "WarningBrush" : "SuccessBrush");

        RefreshHostCode();
        RefreshJoinResult();
        bool idle = session is null;
        SettingsButton.IsEnabled = idle;
        SoloButton.IsEnabled = idle && gamePath is not null;
        HostButton.IsEnabled = idle && gamePath is not null;
        JoinButton.IsEnabled = idle && gamePath is not null && CurrentJoinTarget() is not null;
    }

    private HostReach Reach =>
        ReachInternet.IsChecked == true ? HostReach.Internet : ReachServer.IsChecked == true ? HostReach.RoomServer : HostReach.LocalNetwork;

    private string? LanAddress => LanAddressBox.SelectedItem is string s && JoinCode.IsLocalAddress(s + ":1") ? s : null;

    /// <summary>The code friends paste, for the current "who's racing" choice.</summary>
    private JoinCode HostJoinCode()
    {
        string invite = settings.HostInvite;
        int port = settings.HostPort;
        return Reach switch
        {
            HostReach.LocalNetwork when LanAddress is { } ip => new JoinCode(invite, JoinRoute.Direct, $"{ip}:{port}"),
            HostReach.Internet when JoinCode.ValidAddress($"{PublicAddressBox.Text.Trim()}:{port}") =>
                new JoinCode(invite, JoinRoute.Direct, $"{PublicAddressBox.Text.Trim()}:{port}"),
            HostReach.RoomServer when JoinCode.ValidAddress(ServerBox.Text.Trim()) =>
                new JoinCode(invite, JoinRoute.RoomServer, ServerBox.Text.Trim()),
            _ => new JoinCode(invite, JoinRoute.Direct, null),
        };
    }

    private void RefreshHostCode()
    {
        var code = HostJoinCode();
        JoinCodeText.Text = code.ToString();
        int port = settings.HostPort;
        JoinCodeNote.Text = Reach switch
        {
            HostReach.LocalNetwork when code.Address is null => "No local network address found — connect to Wi-Fi or Ethernet.",
            HostReach.LocalNetwork => "Works for PCs and Android phones on the same Wi-Fi or router. The code is the room password.",
            HostReach.Internet when code.Address is null => "Add your public address (Detect) so friends know where to connect.",
            HostReach.Internet => $"Forward UDP port {port} on your router to {LanAddress ?? "this PC"}. Hosts on mobile data or CGNAT can't be reached this way — use a room server.",
            HostReach.RoomServer when code.Address is null => "Enter the room server everyone will use (host:port).",
            _ => "Players find you by the code through the server; it punches through NAT and relays if it has to.",
        };
        FirewallHint.Text = firewallAllowed ? $"Windows Firewall allows UDP {port}" : $"Windows Firewall may block players on UDP {port}";
    }

    // ------------------------------------------------------------------ join side
    /// <summary>Parsed code plus the address actually used (from the code or the manual field).</summary>
    private JoinCode? CurrentJoinTarget()
    {
        var code = JoinCode.Parse(JoinCodeBox.Text);
        if (code is null) return null;
        if (code.Address is not null) return code;
        string manual = ManualAddressBox.Text.Trim();
        bool room = manual.StartsWith(JoinCode.RoomPrefix, StringComparison.OrdinalIgnoreCase);
        if (room) manual = manual[JoinCode.RoomPrefix.Length..];
        return JoinCode.ValidAddress(manual) ? code with { Address = manual, Route = room ? JoinRoute.RoomServer : JoinRoute.Direct } : null;
    }

    private void RefreshJoinResult()
    {
        string text = JoinCodeBox.Text.Trim();
        var parsed = JoinCode.Parse(text);
        ManualAddress.Visibility = parsed is not null && parsed.Address is null ? Visibility.Visible : Visibility.Collapsed;
        var target = CurrentJoinTarget();
        if (text.Length == 0)
            SetJoinResult("", "MutedTextBrush", "Waiting for a join code",
                "The host gets it from their launcher (Windows) or the Multiplayer screen (Android).");
        else if (parsed is null)
            SetJoinResult("", "ErrorBrush", "That isn't a join code",
                "A code looks like XXXX-XXXX-XXXX-XXXX-XXXX-XXXX-XX@address. Ask the host to copy it again.");
        else if (target is null)
            SetJoinResult("", "WarningBrush", "Room code OK — the host's address is missing",
                "Ask the host for the full join code, or type their address below.");
        else
        {
            string room = $"Room {target.Invite[..4]}…{target.Invite[^2..]}";
            string how = target.Route == JoinRoute.RoomServer
                ? $"Through room server {target.Address}"
                : JoinCode.IsLocalAddress(target.Address)
                    ? $"Directly to {target.Address} · same network"
                    : $"Directly to {target.Address} · over the internet";
            SetJoinResult("", "SuccessBrush", $"{room} — ready to join", how);
        }
    }

    private void SetJoinResult(string icon, string brush, string title, string detail)
    {
        JoinResultIcon.Text = icon;
        JoinResultIcon.Foreground = (Brush)FindResource(brush);
        JoinResultTitle.Text = title;
        JoinResultDetail.Text = detail;
        JoinResult.BorderBrush = brush == "SuccessBrush" ? (Brush)FindResource("SuccessBrush") : (Brush)FindResource("GlassBorderBrush");
    }

    private void CheckClipboard()
    {
        try
        {
            string? text = Clipboard.ContainsText() ? Clipboard.GetText() : null;
            var code = JoinCode.Parse(text);
            bool show = code?.Address is not null && code.Invite != settings.HostInvite &&
                        JoinCode.Parse(JoinCodeBox.Text)?.ToString() != code.ToString();
            clipboardCode = show ? text : null;
            ClipboardBanner.Visibility = show ? Visibility.Visible : Visibility.Collapsed;
        }
        catch (COMException) { }
    }

    // ------------------------------------------------------------------ launching
    private async void Host_Click(object sender, RoutedEventArgs e)
    {
        string? server = null;
        if (Reach == HostReach.RoomServer)
        {
            if (!JoinCode.ValidAddress(ServerBox.Text.Trim())) { ShowToast("Enter the room server as host:port"); return; }
            server = await JoinCode.ResolveAsync(ServerBox.Text.Trim());
            if (server is null) { ShowToast($"Can't find the room server {ServerBox.Text.Trim()}"); return; }
        }
        var code = HostJoinCode();
        CopyText(code.ToString());
        Launch(new LaunchPlan(Role.Host, settings.HostInvite, Server: server, HostPort: settings.HostPort,
                              Nickname: NicknameBox.Text, Fullscreen: FullscreenSwitch.IsChecked == true),
               "Room open · join code copied — in game: Wreckreation › Multiplayer › Ad-hoc › Create Game");
    }

    private async void Join_Click(object sender, RoutedEventArgs e)
    {
        var target = CurrentJoinTarget();
        if (target?.Address is null) return;
        JoinButton.IsEnabled = false;
        string? resolved = await JoinCode.ResolveAsync(target.Address);
        if (resolved is null) { ShowToast($"Can't find {target.Address}"); RefreshAll(); return; }
        settings.LastJoinCode = JoinCodeBox.Text.Trim();
        var plan = target.Route == JoinRoute.RoomServer
            ? new LaunchPlan(Role.Join, target.Invite, Server: resolved, Nickname: NicknameBox.Text, Fullscreen: FullscreenSwitch.IsChecked == true)
            : new LaunchPlan(Role.Join, target.Invite, Peer: resolved, Nickname: NicknameBox.Text, Fullscreen: FullscreenSwitch.IsChecked == true);
        Launch(plan, "Connecting — in game: Wreckreation › Multiplayer › Ad-hoc › Join Game");
    }

    private void Solo_Click(object sender, RoutedEventArgs e) =>
        Launch(new LaunchPlan(Role.Solo, Fullscreen: FullscreenSwitch.IsChecked == true), "Game running · single player");

    private void Launch(LaunchPlan plan, string status)
    {
        if (gamePath is null || session is not null) return;
        if (settings.EbootPath.Length > 0 && !File.Exists(settings.EbootPath))
        { ShowToast("Selected EBOOT is missing — update Game files & settings"); return; }
        if (settings.DiscPath.Length > 0 && !File.Exists(Path.Combine(settings.DiscPath, "PSP_GAME", "PARAM.SFO")))
        { ShowToast("Selected disc data is missing — import the ISO again"); return; }
        if (settings.TexturePackPath.Length > 0 && !Directory.Exists(settings.TexturePackPath))
        { ShowToast("Selected texture pack folder is missing — update Settings"); return; }
        plan = plan with { Settings = settings };
        settings.Nickname = LauncherSettings.CleanNickname(NicknameBox.Text);
        SaveSettings();
        try
        {
            session = GameSession.Start(gamePath, plan);
        }
        catch (Exception ex) when (ex is Win32Exception or InvalidOperationException or IOException)
        {
            SetStatus($"Couldn't start the game: {ex.Message}", "ErrorBrush", false);
            return;
        }
        sessionRole = plan.Role;
        LogBox.Clear();
        session.LogLine += line => Dispatcher.BeginInvoke(() => OnGameLog(line));
        session.Exited += code => Dispatcher.BeginInvoke(() => OnGameExited(code));
        StopButton.Visibility = Visibility.Visible;
        LogToggle.Visibility = plan.Role == Role.Solo ? Visibility.Collapsed : Visibility.Visible;
        SetStatus(status, "FrostBrush", true);
        RefreshAll();
    }

    private void OnGameLog(string line)
    {
        LogBox.AppendText(line + Environment.NewLine);
        LogBox.ScrollToEnd();
        string msg = line.StartsWith("[NET] ") ? line[6..] : line;
        if (line.StartsWith("[CRASH]") || line.StartsWith("[FATAL]")) SetStatus("The game hit an error — see the log", "ErrorBrush", false);
        else if (msg.StartsWith("NET HLE disabled:")) SetStatus("Multiplayer couldn't start: " + msg[17..].Trim(), "ErrorBrush", false);
        else if (msg.StartsWith("NET HLE enabled") && sessionRole == Role.Join) SetStatus("Looking for the host… in game: Ad-hoc › Join Game", "FrostBrush", true);
        else if (msg.Contains("joined group")) SetStatus("Connected to the host ✓ — pick their game in Join Game", "SuccessBrush", true);
        else if (msg.Contains("peer joined:")) SetStatus($"{Nick(msg) ?? "A player"} joined your room ✓", "SuccessBrush", true);
        else if (msg.Contains("peer left")) SetStatus("A player left the room", "WarningBrush", true);
        else if (msg.Contains("lost connection to host")) SetStatus("Lost the connection to the host", "ErrorBrush", false);
    }

    private static string? Nick(string msg)
    {
        int i = msg.IndexOf("nick=\"", StringComparison.Ordinal);
        if (i < 0) return null;
        int j = msg.IndexOf('"', i + 6);
        return j > i + 6 ? msg[(i + 6)..j] : null;
    }

    private void OnGameExited(int code)
    {
        session = null;
        StopButton.Visibility = Visibility.Collapsed;
        if (code == 0 || code == -1) SetStatus("Game closed", "MutedTextBrush", false);
        else SetStatus($"The game stopped (exit code {code}) — see the log", "ErrorBrush", false);
        LogToggle.Visibility = LogBox.Text.Length > 0 ? Visibility.Visible : Visibility.Collapsed;
        RefreshAll();
    }

    private void SetStatus(string text, string brush, bool live)
    {
        StatusText.Text = text;
        StatusText.Foreground = (Brush)FindResource(brush == "MutedTextBrush" ? "SubtleTextBrush" : "TextBrush");
        StatusDot.Fill = (Brush)FindResource(brush);
        StatusGlow.Color = ((SolidColorBrush)FindResource(brush)).Color;
        StatusGlow.BeginAnimation(System.Windows.Media.Effects.DropShadowEffect.OpacityProperty,
            live ? new DoubleAnimation(0.2, 1, TimeSpan.FromSeconds(0.9)) { AutoReverse = true, RepeatBehavior = RepeatBehavior.Forever } : null);
        if (!live) StatusGlow.Opacity = 0;
    }

    // ------------------------------------------------------------------ handlers
    private void Tab_Changed(object sender, RoutedEventArgs e)
    {
        if (!ready) return;
        settings.JoinTab = JoinTab.IsChecked == true;
        SaveSettings();
        RefreshAll();
        if (settings.JoinTab) CheckClipboard();
    }

    private void Reach_Changed(object sender, RoutedEventArgs e)
    {
        if (!ready) return;
        settings.Reach = Reach;
        SaveSettings();
        RefreshAll();
    }

    private void HostField_Changed(object sender, RoutedEventArgs e)
    {
        if (!ready) return;
        settings.PublicAddress = PublicAddressBox.Text.Trim();
        settings.RoomServer = ServerBox.Text.Trim();
        SaveSettings();
        RefreshAll();
    }

    private void Port_Changed(object sender, TextChangedEventArgs e)
    {
        if (!ready || sender is not TextBox box) return;
        if (int.TryParse(box.Text, out int port) && port is >= 1024 and <= 65535)
        {
            settings.HostPort = port;
            SaveSettings();
            var other = box == PortBoxLan ? PortBoxNet : PortBoxLan;
            if (other.Text != box.Text) other.Text = box.Text;
            _ = RefreshFirewallStateAsync();
        }
        RefreshAll();
    }

    private void JoinCode_Changed(object sender, TextChangedEventArgs e) => RefreshAll();
    private void Nickname_Changed(object sender, TextChangedEventArgs e) { }

    private void Fullscreen_Click(object sender, RoutedEventArgs e)
    {
        settings.Fullscreen = FullscreenSwitch.IsChecked == true;
        SaveSettings();
    }

    private void Paste_Click(object sender, RoutedEventArgs e)
    {
        try { if (Clipboard.ContainsText()) JoinCodeBox.Text = Clipboard.GetText().Trim(); }
        catch (COMException) { ShowToast("The clipboard is busy — try again"); }
    }

    private void UseClipboard_Click(object sender, RoutedEventArgs e)
    {
        if (clipboardCode is not null) JoinCodeBox.Text = clipboardCode.Trim();
        ClipboardBanner.Visibility = Visibility.Collapsed;
    }

    private void CopyCode_Click(object sender, RoutedEventArgs e)
    {
        var code = HostJoinCode();
        CopyText(code.ToString());
        ShowToast(code.Address is null ? "Room code copied — friends will also need your address" : "Join code copied");
    }

    private void CopyMessage_Click(object sender, RoutedEventArgs e)
    {
        var code = HostJoinCode();
        CopyText(
            "Race me in MotorStorm: Arctic Edge!\n" +
            $"Join code: {code}\n\n" +
            "Windows: open the launcher > Join a race > paste this message.\n" +
            "Android: Multiplayer > Paste join code.\n" +
            "Then in the game: Wreckreation > Multiplayer > Ad-hoc > Join Game.");
        ShowToast("Invite message copied — paste it into any chat");
    }

    private void NewCode_Click(object sender, RoutedEventArgs e)
    {
        settings.HostInvite = InviteCode.Generate();
        SaveSettings();
        RefreshAll();
        ShowToast("New room code — the old one no longer works");
    }

    private async void DetectPublic_Click(object sender, RoutedEventArgs e)
    {
        DetectText.Text = "…";
        string? ip = await NetworkInfo.PublicAddressAsync();
        DetectText.Text = "Detect";
        if (ip is null) { ShowToast("Couldn't detect the public address"); return; }
        PublicAddressBox.Text = ip;
    }

    private void BrowseGame_Click(object sender, RoutedEventArgs e)
    {
        var dialog = new OpenFileDialog
        {
            Title = "Locate MotorStormNative.exe",
            Filter = "MotorStorm (MotorStormNative.exe)|MotorStormNative*.exe|Programs (*.exe)|*.exe",
        };
        if (gamePath is not null) dialog.InitialDirectory = Path.GetDirectoryName(gamePath);
        if (dialog.ShowDialog(this) != true) return;
        gamePath = dialog.FileName;
        settings.GamePath = gamePath;
        SaveSettings();
        RefreshAll();
    }

    private void Settings_Click(object sender, RoutedEventArgs e)
    {
        if (new SettingsWindow(settings) { Owner = this }.ShowDialog() == true)
            ShowToast("Game files and settings saved — applied on the next launch");
    }

    private void Stop_Click(object sender, RoutedEventArgs e) => session?.Kill();

    private void LogToggle_Click(object sender, RoutedEventArgs e)
    {
        bool show = LogBox.Visibility != Visibility.Visible;
        LogBox.Visibility = show ? Visibility.Visible : Visibility.Collapsed;
        LogToggle.Content = show ? "Hide log" : "Show log";
    }

    // ------------------------------------------------------------------ firewall
    private bool firewallAllowed;
    private string FirewallRuleName => $"MotorStorm Arctic Edge multiplayer (UDP {settings.HostPort})";

    private async Task RefreshFirewallStateAsync()
    {
        string name = FirewallRuleName;
        bool exists = await Task.Run(() =>
        {
            try
            {
                using var p = Process.Start(new ProcessStartInfo("netsh", $"advfirewall firewall show rule name=\"{name}\"")
                {
                    UseShellExecute = false, CreateNoWindow = true, RedirectStandardOutput = true,
                });
                if (p is null) return false;
                p.StandardOutput.ReadToEnd();
                p.WaitForExit(4000);
                return p.ExitCode == 0;
            }
            catch (Win32Exception) { return false; }
        });
        firewallAllowed = exists;
        FirewallText.Text = exists ? "Allowed" : "Allow through firewall";
        RefreshAll();
    }

    private async void Firewall_Click(object sender, RoutedEventArgs e)
    {
        if (firewallAllowed || gamePath is null) return;
        string args = $"advfirewall firewall add rule name=\"{FirewallRuleName}\" dir=in action=allow protocol=UDP " +
                      $"localport={settings.HostPort} program=\"{gamePath}\" enable=yes";
        try
        {
            using var p = Process.Start(new ProcessStartInfo("netsh", args) { UseShellExecute = true, Verb = "runas", WindowStyle = ProcessWindowStyle.Hidden });
            if (p is not null) await p.WaitForExitAsync();
        }
        catch (Win32Exception) { ShowToast("Firewall change cancelled"); return; }
        await RefreshFirewallStateAsync();
        ShowToast(firewallAllowed ? "Firewall rule added" : "The firewall rule wasn't added");
    }

    // ------------------------------------------------------------------ chrome & polish
    private void Minimize_Click(object sender, RoutedEventArgs e) => WindowState = WindowState.Minimized;
    private void Close_Click(object sender, RoutedEventArgs e) => Close();

    private void OnClosing(object? sender, CancelEventArgs e)
    {
        settings.Nickname = LauncherSettings.CleanNickname(NicknameBox.Text);
        SaveSettings();
        // The game keeps running if the launcher closes; nothing to clean up.
    }

    private bool capturing; // screenshot mode never touches the saved settings or the clipboard

    private void SaveSettings()
    {
        if (!capturing) settings.Save();
    }

    private void CopyText(string text)
    {
        if (capturing) return;
        for (int attempt = 0; attempt < 5; attempt++)
        {
            try { Clipboard.SetText(text); return; }
            catch (COMException) { Thread.Sleep(40); }
        }
    }

    private readonly DispatcherTimer toastTimer = new() { Interval = TimeSpan.FromSeconds(2.6) };

    private void ShowToast(string text)
    {
        ToastText.Text = text;
        Toast.BeginAnimation(OpacityProperty, new DoubleAnimation(1, TimeSpan.FromMilliseconds(160)));
        toastTimer.Stop();
        toastTimer.Tick -= HideToast;
        toastTimer.Tick += HideToast;
        toastTimer.Start();
    }

    private void HideToast(object? sender, EventArgs e)
    {
        toastTimer.Stop();
        Toast.BeginAnimation(OpacityProperty, new DoubleAnimation(0, TimeSpan.FromMilliseconds(400)));
    }

    private void StartAmbientAnimation()
    {
        var ease = new SineEase { EasingMode = EasingMode.EaseInOut };
        AuroraAMove.BeginAnimation(TranslateTransform.XProperty,
            new DoubleAnimation(-70, 90, TimeSpan.FromSeconds(16)) { AutoReverse = true, RepeatBehavior = RepeatBehavior.Forever, EasingFunction = ease });
        AuroraBMove.BeginAnimation(TranslateTransform.XProperty,
            new DoubleAnimation(60, -80, TimeSpan.FromSeconds(21)) { AutoReverse = true, RepeatBehavior = RepeatBehavior.Forever, EasingFunction = ease });
        AuroraA.BeginAnimation(OpacityProperty,
            new DoubleAnimation(0.35, 0.65, TimeSpan.FromSeconds(7)) { AutoReverse = true, RepeatBehavior = RepeatBehavior.Forever, EasingFunction = ease });
    }

    [DllImport("dwmapi.dll")]
    private static extern int DwmSetWindowAttribute(IntPtr hwnd, int attribute, ref int value, int size);

    private void ApplyWindowStyle()
    {
        var hwnd = new WindowInteropHelper(this).Handle;
        int dark = 1, round = 2; // DWMWA_USE_IMMERSIVE_DARK_MODE, DWMWA_WINDOW_CORNER_PREFERENCE = DWMWCP_ROUND
        _ = DwmSetWindowAttribute(hwnd, 20, ref dark, sizeof(int));
        _ = DwmSetWindowAttribute(hwnd, 33, ref round, sizeof(int));
    }

    /// <summary>--screenshot out.png [join]: renders the window to a PNG and exits (used to check the design).</summary>
    public void CaptureAndExit(string path, bool join, bool options = false)
    {
        capturing = true;
        if (join)
        {
            JoinTab.IsChecked = true;
            JoinCodeBox.Text = "Race me!\nJoin code: " + new JoinCode(InviteCode.Generate(), JoinRoute.Direct, "192.168.1.20:47900");
        }
        Snow.Count = 140;
        Window target = this;
        if (options)
        {
            target = new SettingsWindow(settings) { Owner = this };
            target.Show();
        }
        var timer = new DispatcherTimer { Interval = TimeSpan.FromSeconds(1.5) };
        timer.Tick += (_, _) =>
        {
            timer.Stop();
            var surface = (FrameworkElement)target.Content;
            var bmp = new RenderTargetBitmap((int)surface.ActualWidth, (int)surface.ActualHeight, 96, 96, PixelFormats.Pbgra32);
            bmp.Render(surface);
            var png = new PngBitmapEncoder();
            png.Frames.Add(BitmapFrame.Create(bmp));
            using (var fs = File.Create(path)) png.Save(fs);
            Application.Current.Shutdown();
        };
        timer.Start();
    }
}
