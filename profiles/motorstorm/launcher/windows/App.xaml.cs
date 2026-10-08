using System.Windows;

namespace MotorStormLauncher;

public partial class App : Application
{
    protected override void OnStartup(StartupEventArgs e)
    {
        base.OnStartup(e);
        var window = new MainWindow();
        window.Show();
        // --screenshot <file.png> [join]: render the window once and exit (design checks).
        if (e.Args.Length >= 2 && e.Args[0] == "--screenshot")
            window.CaptureAndExit(e.Args[1], e.Args.Length >= 3 && e.Args[2] == "join");
    }
}
