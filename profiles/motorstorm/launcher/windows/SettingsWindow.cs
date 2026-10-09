using System.IO;
using System.Windows;
using System.Windows.Controls;
using Microsoft.Win32;
using MotorStormLauncher.Core;

namespace MotorStormLauncher;

public sealed class SettingsWindow : Window
{
    private readonly LauncherSettings settings;
    private readonly TextBox iso = new(), disc = new(), eboot = new(), textures = new();
    private readonly TextBlock status = new() { TextWrapping = TextWrapping.Wrap, Margin = new Thickness(0, 12, 0, 12) };
    private readonly Dictionary<string, ComboBox> options = new();
    private readonly StackPanel content = new();
    private readonly List<string> imports = new();
    private bool importing;

    public SettingsWindow(LauncherSettings settings)
    {
        this.settings = settings;
        Title = "Game files & settings";
        Width = 700; Height = 760; MinWidth = 580; MinHeight = 480;
        WindowStartupLocation = WindowStartupLocation.CenterOwner;
        Background = new System.Windows.Media.SolidColorBrush(System.Windows.Media.Color.FromRgb(5, 12, 23));
        Foreground = (System.Windows.Media.Brush)FindResource("TextBrush");
        FontFamily = (System.Windows.Media.FontFamily)FindResource("BodyFont");
        var root = new DockPanel();
        var actions = new StackPanel { Orientation = Orientation.Horizontal, HorizontalAlignment = HorizontalAlignment.Right };
        var cancel = Button("Cancel", (_, _) => Close());
        var apply = Button("Save settings", Save);
        apply.Style = (Style)FindResource("IceButton"); apply.Height = 40; apply.Padding = new Thickness(20, 0, 20, 0);
        actions.Children.Add(cancel); actions.Children.Add(apply);
        DockPanel.SetDock(actions, Dock.Bottom); root.Children.Add(actions);
        DockPanel.SetDock(status, Dock.Bottom); root.Children.Add(status);
        root.Children.Add(new ScrollViewer { Content = content, VerticalScrollBarVisibility = ScrollBarVisibility.Auto });
        Content = new Border { Background = Background, Padding = new Thickness(24), Child = root };
        Heading("GAME FILES");
        Hint("Select an uncompressed PSP ISO to import its disc data, then select the matching decrypted EBOOT. Empty paths use the game's existing setup.");
        iso.Text = settings.IsoPath; disc.Text = settings.DiscPath;
        eboot.Text = settings.EbootPath; textures.Text = settings.TexturePackPath;
        PathRow("Game ISO", iso, ImportIso, true);
        PathRow("Extracted disc folder (contains PSP_GAME)", disc, (_, _) => PickFolder(disc));
        PathRow("Decrypted EBOOT (.BIN / .ELF)", eboot, (_, _) => PickFile(eboot));
        Heading("TEXTURE PACK");
        Hint("Choose an extracted pack folder containing hash-named PNG or DDS replacements. ZIP packs must be extracted first. Set Texture replacements to On to enable the pack.");
        PathRow("Texture pack folder", textures, (_, _) => PickFolder(textures));
        Heading("RUNTIME SETTINGS");
        Hint("Default uses the value shown from MotorStormNative.ini. Changes take effect on the next launch. Higher resolution and FPS require more GPU and CPU power; software rendering stays at PSP resolution.");
        var defaultLabels = GameOptions.DefaultLabels(GameSession.FindGame(settings.GamePath));
        foreach (var option in GameOptions.All)
        {
            var row = new Grid { Margin = new Thickness(0, 0, 8, 10) };
            row.ColumnDefinitions.Add(new ColumnDefinition());
            row.ColumnDefinitions.Add(new ColumnDefinition { Width = new GridLength(190) });
            row.Children.Add(new TextBlock { Text = option.Label, VerticalAlignment = VerticalAlignment.Center, TextWrapping = TextWrapping.Wrap, Margin = new Thickness(0, 0, 12, 0) });
            var combo = new ComboBox { MinHeight = 34 };
            combo.Items.Add(new ComboBoxItem { Content = defaultLabels[option.Key], Tag = "" });
            foreach (string value in option.Values)
                combo.Items.Add(new ComboBoxItem { Content = option.DisplayValue(value), Tag = value });
            combo.SelectedIndex = 0;
            if (settings.RuntimeOptions.TryGetValue(option.Key, out var saved))
                foreach (ComboBoxItem item in combo.Items) if ((string)item.Tag == saved) combo.SelectedItem = item;
            Grid.SetColumn(combo, 1); row.Children.Add(combo); content.Children.Add(row); options.Add(option.Key, combo);
        }
        content.Children.Add(Button("Reset runtime settings to game defaults", (_, _) => { foreach (var combo in options.Values) combo.SelectedIndex = 0; }));
        Closing += (_, e) => { if (importing) { e.Cancel = true; status.Text = "Please wait for the ISO import to finish."; } };
        Closed += (_, _) =>
        {
            foreach (string path in imports.Where(p => p != settings.DiscPath))
                try { Directory.Delete(path, true); } catch (IOException) { } catch (UnauthorizedAccessException) { }
        };
    }

    private static Button Button(string label, RoutedEventHandler click)
    {
        var button = new Button { Content = label, Style = (Style)Application.Current.FindResource("LinkButton"), Margin = new Thickness(8, 4, 0, 4), Padding = new Thickness(8) };
        button.Click += click; return button;
    }
    private void Heading(string text) => content.Children.Add(new TextBlock { Text = text, Style = (Style)FindResource("Caption"), Margin = new Thickness(0, 16, 0, 8) });
    private void Hint(string text) => content.Children.Add(new TextBlock { Text = text, Style = (Style)FindResource("Hint"), Margin = new Thickness(0, 0, 8, 12) });
    private void PathRow(string label, TextBox box, RoutedEventHandler browse, bool readOnly = false)
    {
        Hint(label);
        var row = new DockPanel { Margin = new Thickness(0, 0, 8, 10) };
        var clear = Button("Clear", (_, _) => { box.Clear(); if (box == iso) disc.Clear(); });
        DockPanel.SetDock(clear, Dock.Right); row.Children.Add(clear);
        var pick = Button("Browse…", browse); DockPanel.SetDock(pick, Dock.Right); row.Children.Add(pick);
        box.Style = (Style)FindResource("FrostBox"); box.IsReadOnly = readOnly; box.ToolTip = label;
        row.Children.Add(box); content.Children.Add(row);
    }
    private void PickFolder(TextBox box)
    {
        var dialog = new OpenFolderDialog { Title = "Select " + box.ToolTip };
        if (Directory.Exists(box.Text)) dialog.InitialDirectory = box.Text;
        if (dialog.ShowDialog(this) == true) box.Text = dialog.FolderName;
    }
    private void PickFile(TextBox box)
    {
        var dialog = new OpenFileDialog { Title = "Select decrypted EBOOT", Filter = "Decrypted EBOOT (*.bin;*.elf)|*.bin;*.elf|All files|*.*" };
        if (dialog.ShowDialog(this) == true) box.Text = dialog.FileName;
    }
    private async void ImportIso(object sender, RoutedEventArgs e)
    {
        var dialog = new OpenFileDialog { Title = "Import MotorStorm PSP ISO", Filter = "Uncompressed PSP ISO (*.iso)|*.iso" };
        if (dialog.ShowDialog(this) != true) return;
        importing = true; content.IsEnabled = false; status.Text = "Importing ISO…";
        try
        {
            var progress = new Progress<string>(message => status.Text = message);
            string path = await Task.Run(() => IsoImporter.Import(dialog.FileName, progress));
            imports.Add(path); iso.Text = dialog.FileName; disc.Text = path;
            status.Text = "ISO imported. Select the matching decrypted EBOOT and save settings.";
        }
        catch (Exception ex) when (ex is IOException or UnauthorizedAccessException or ArgumentException)
        { status.Text = "ISO import failed: " + ex.Message; }
        finally { importing = false; content.IsEnabled = true; }
    }
    private void Save(object sender, RoutedEventArgs e)
    {
        if (importing) return;
        try
        {
            string discPath = disc.Text.Trim(), ebootPath = eboot.Text.Trim(), packPath = textures.Text.Trim();
            if (discPath.Length > 0 && !File.Exists(Path.Combine(discPath, "PSP_GAME", "PARAM.SFO"))) throw new IOException("Select a disc folder containing PSP_GAME/PARAM.SFO.");
            if (ebootPath.Length > 0)
            {
                using var file = File.OpenRead(ebootPath);
                Span<byte> magic = stackalloc byte[4]; file.ReadExactly(magic);
                if (!magic.SequenceEqual(new byte[] { 0x7f, (byte)'E', (byte)'L', (byte)'F' })) throw new IOException("Select a decrypted ELF EBOOT. Encrypted PSP EBOOT files cannot be used.");
            }
            if (packPath.Length > 0 && !Directory.Exists(packPath)) throw new IOException("The texture pack folder does not exist.");
            settings.IsoPath = iso.Text; settings.DiscPath = discPath.Length > 0 ? Path.GetFullPath(discPath) : "";
            settings.EbootPath = ebootPath.Length > 0 ? Path.GetFullPath(ebootPath) : "";
            settings.TexturePackPath = packPath.Length > 0 ? Path.GetFullPath(packPath) : "";
            settings.RuntimeOptions = options.Where(p => ((ComboBoxItem)p.Value.SelectedItem).Tag is string value && value.Length > 0)
                .ToDictionary(p => p.Key, p => (string)((ComboBoxItem)p.Value.SelectedItem).Tag);
            settings.Save(); DialogResult = true;
        }
        catch (Exception ex) when (ex is IOException or UnauthorizedAccessException or ArgumentException)
        { status.Text = ex.Message; }
    }
}
