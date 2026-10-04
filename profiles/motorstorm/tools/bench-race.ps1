param(
    [Parameter(Mandatory = $true)][string]$Name,
    [UInt64]$StartUs = 115000000,
    [UInt64]$EndUs = 140000000,
    [ValidateSet('d3d12','software','auto')][string]$Renderer = 'd3d12',
    [ValidateSet(1,2,3,4,8)][int]$Resolution = 1,
    [ValidateSet('None','FXAA','SSAA2x','SSAA4x')][string]$Antialiasing = 'None',
    [string]$InputScript = 'profiles/motorstorm/tools/race-throughput-input.txt',
    [string]$SaveRoot = 'out/motorstorm/phase12/fixes/test-stick-v2',
    [switch]$Audio,
    [switch]$Window,
    # Measure normal frame cadence instead of maximum throughput (with or without audio).
    [switch]$Paced,
    [string]$Executable = 'out/motorstorm/bin/Release/MotorStormNative.exe',
    # Guest time normally also advances per 256 chained dispatches.  Builds
    # with a different generated-unit layout dispatch differently, so their
    # guest timelines (and frames) diverge.  -FixedClock disables that
    # execution clock: guest time is then event-driven only and identical
    # across corpora, which makes cross-corpus comparisons equal guest work.
    [switch]$FixedClock,
    # Baselines (750 frames per window) use the game's original 30 fps pacing.
    [string]$Fps = 'original'
)
# Race benchmark window.  Runs the normal boot/menu/race path (no scene skips)
# and stops exactly when the guest reaches -EndUs; the host writes the report
# to out/motorstorm/bench/<Name>.txt.  Audio stays off by default because audio
# backpressure paces the guest to real time and would hide throughput changes.
# -Paced -Window measures the normal frame limiter instead; add -Audio to check
# whether sound and frame delivery remain stable together.

$repoDirectory = [IO.Path]::GetFullPath((Join-Path $PSScriptRoot '../../..'))
$outputDirectory = Join-Path $repoDirectory 'out/motorstorm/bench'
New-Item -ItemType Directory -Force -Path $outputDirectory | Out-Null
$reportPath = Join-Path $outputDirectory "$Name.bench.txt"
$consolePath = Join-Path $outputDirectory "$Name.txt"
$logPath = Join-Path $outputDirectory "$Name.log"

$settings = @{
    PSPRECOMP_MOTORSTORM_PROFILE = '1'
    PSPRECOMP_MOTORSTORM_RENDERER = $Renderer
    PSPRECOMP_MOTORSTORM_RESOLUTION = "$Resolution"
    PSPRECOMP_MOTORSTORM_AA = $Antialiasing.ToLowerInvariant()
    PSPRECOMP_MOTORSTORM_FPS = $Fps
    # Throughput is the default; -Paced enables normal frame deadlines.
    PSPRECOMP_MOTORSTORM_UNTHROTTLED = $(if ($Paced) { $null } else { '1' })
    PSPRECOMP_MOTORSTORM_SOFTGE = '1'
    PSPRECOMP_MOTORSTORM_WINDOW = $(if ($Window) {'1'} else {'0'})
    PSPRECOMP_MOTORSTORM_AUDIO = $(if ($Audio) { '1' } else { '0' })
    PSPRECOMP_MOTORSTORM_INPUT_SCRIPT = $InputScript
    PSPRECOMP_MOTORSTORM_SAVEDATA = $SaveRoot
    PSPRECOMP_MOTORSTORM_BENCH_START_US = "$StartUs"
    PSPRECOMP_MOTORSTORM_BENCH_END_US = "$EndUs"
    PSPRECOMP_MOTORSTORM_BENCH_OUT = $reportPath
    PSPRECOMP_MOTORSTORM_LOG = $logPath
    PSPRECOMP_MAX_DISPATCHES = '4000000000'
    PSPRECOMP_MOTORSTORM_STOP_AFTER_GE = $null
    PSPRECOMP_TIME_TICK_DISPATCHES = $(if ($FixedClock) { '0' } else { [Environment]::GetEnvironmentVariable('PSPRECOMP_TIME_TICK_DISPATCHES', 'Process') })
}
$previousSettings = @{}
foreach ($key in $settings.Keys) {
    $previousSettings[$key] = [Environment]::GetEnvironmentVariable($key, 'Process')
    [Environment]::SetEnvironmentVariable($key, $settings[$key], 'Process')
}
Push-Location -LiteralPath $repoDirectory
try {
    $timer = [Diagnostics.Stopwatch]::StartNew()
    & $Executable 2>&1 |
        Out-File -LiteralPath $consolePath -Encoding ascii
    $nativeExit = $LASTEXITCODE
    $timer.Stop()
    $bench = Select-String -Path $reportPath -Pattern '^\[BENCH\]' -ErrorAction SilentlyContinue |
        Select-Object -Last 1
    if ($bench) {
        $bench.Line
        "run_seconds=$([math]::Round($timer.Elapsed.TotalSeconds, 1)) report=$reportPath log=$logPath"
        $nativeExit = 0
    } else {
        "benchmark did not close; native_exit=$nativeExit elapsed_seconds=$($timer.Elapsed.TotalSeconds)"
        "console=$consolePath log=$logPath"
    }
} finally {
    Pop-Location
    foreach ($key in $settings.Keys) { [Environment]::SetEnvironmentVariable($key, $previousSettings[$key], 'Process') }
}
exit $nativeExit
