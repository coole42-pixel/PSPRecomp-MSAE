using System.Windows;
using System.Windows.Media;

namespace MotorStormLauncher;

/// <summary>Light snowfall drawn in one pass per frame; flakes drift with a slow sideways wind.</summary>
public sealed class SnowField : FrameworkElement
{
    private struct Flake { public double X, Y, R, Speed, Phase, Sway, Alpha; }

    private readonly Random rng = new(7);
    private readonly List<Flake> flakes = new();
    private readonly Brush[] brushes = new Brush[8];
    private TimeSpan last = TimeSpan.Zero;
    private double clock;

    public int Count { get; set; } = 140;

    public SnowField()
    {
        IsHitTestVisible = false;
        for (int i = 0; i < brushes.Length; i++)
        {
            var b = new SolidColorBrush(Color.FromArgb((byte)(40 + i * 26), 0xE9, 0xF8, 0xFF));
            b.Freeze();
            brushes[i] = b;
        }
        Loaded += (_, _) => CompositionTarget.Rendering += OnFrame;
        Unloaded += (_, _) => CompositionTarget.Rendering -= OnFrame;
    }

    private Flake NewFlake(bool anywhere)
    {
        double depth = rng.NextDouble(); // 0 = far, 1 = near
        return new Flake
        {
            X = rng.NextDouble() * Math.Max(1, ActualWidth),
            Y = anywhere ? rng.NextDouble() * Math.Max(1, ActualHeight) : -6,
            R = 0.6 + depth * depth * 2.4,
            Speed = 14 + depth * 46,
            Phase = rng.NextDouble() * Math.PI * 2,
            Sway = 6 + rng.NextDouble() * 18,
            Alpha = 0.25 + depth * 0.75,
        };
    }

    private void OnFrame(object? sender, EventArgs e)
    {
        if (e is not RenderingEventArgs re || ActualWidth < 1) return;
        var window = Window.GetWindow(this);
        if (window?.WindowState == WindowState.Minimized) { last = re.RenderingTime; return; }
        double dt = last == TimeSpan.Zero ? 0 : Math.Min(0.05, (re.RenderingTime - last).TotalSeconds);
        if (re.RenderingTime == last) return;
        last = re.RenderingTime;
        clock += dt;
        while (flakes.Count < Count) flakes.Add(NewFlake(true));
        double wind = 10 * Math.Sin(clock * 0.15);
        for (int i = 0; i < flakes.Count; i++)
        {
            var f = flakes[i];
            f.Y += f.Speed * dt;
            f.X += (wind + Math.Sin(clock * 0.9 + f.Phase) * f.Sway * 0.4) * dt * (0.4 + f.Alpha);
            if (f.Y > ActualHeight + 6 || f.X < -10 || f.X > ActualWidth + 10) f = NewFlake(false);
            flakes[i] = f;
        }
        InvalidateVisual();
    }

    protected override void OnRender(DrawingContext dc)
    {
        foreach (var f in flakes)
            dc.DrawEllipse(brushes[Math.Clamp((int)(f.Alpha * brushes.Length), 0, brushes.Length - 1)], null,
                           new Point(f.X, f.Y), f.R, f.R);
    }
}
