param(
    [ValidateSet('d3d12','software','auto')][string]$Renderer = 'd3d12',
    [string]$Name = 'd3d12-final',
    [UInt64]$StopAfterGe = 2800,
    [UInt64]$RenderAfterGe = 0,
    [ValidateSet(1,2,3,4,8)][int]$Resolution = 1,
    [ValidateSet('None','FXAA','SSAA2x','SSAA4x')][string]$Antialiasing = 'None',
    [string]$InputScript = 'out/motorstorm/phase12/fixes/normal-race-straight-input.txt',
    [string]$SaveRoot = 'out/motorstorm/phase12/fixes/test-stick-v2',
    # Reference captures were recorded at the game's original 30 fps pacing.
    [string]$Fps = 'original',
    [switch]$Window
)
$repoDirectory = [IO.Path]::GetFullPath((Join-Path $PSScriptRoot '../../..'))
$outputDirectory = Join-Path $repoDirectory "out/motorstorm/d3d12/$Name"
New-Item -ItemType Directory -Force -Path $outputDirectory | Out-Null
$settings = @{
    PSPRECOMP_MOTORSTORM_RENDERER = $Renderer
    PSPRECOMP_MOTORSTORM_RESOLUTION = "$Resolution"
    PSPRECOMP_MOTORSTORM_AA = $Antialiasing.ToLowerInvariant()
    PSPRECOMP_MOTORSTORM_FPS = $Fps
    # Measure throughput, not the wall-clock limiter used when audio is off.
    PSPRECOMP_MOTORSTORM_UNTHROTTLED = '1'
    PSPRECOMP_MOTORSTORM_SOFTGE = '1'
    PSPRECOMP_MOTORSTORM_SOFTGE_START_AFTER = "$RenderAfterGe"
    PSPRECOMP_MOTORSTORM_STOP_AFTER_GE = "$StopAfterGe"
    PSPRECOMP_MAX_DISPATCHES = '50000000'
    PSPRECOMP_MOTORSTORM_INPUT_SCRIPT = $InputScript
    PSPRECOMP_MOTORSTORM_SAVEDATA = $SaveRoot
    PSPRECOMP_MOTORSTORM_LOG = (Join-Path $outputDirectory 'native.log')
    PSPRECOMP_MOTORSTORM_TRACE_STATE = '1'
    PSPRECOMP_MOTORSTORM_TRACE_CTRL = '1'
    PSPRECOMP_MOTORSTORM_FRAME_DUMP = '1'
    PSPRECOMP_MOTORSTORM_DUMP_AFTER_GE = '180'
    PSPRECOMP_MOTORSTORM_FRAME_DUMP_EVERY = '80'
    PSPRECOMP_MOTORSTORM_FRAME_DUMP_COUNT = '34'
    PSPRECOMP_MOTORSTORM_FRAME_DUMP_DIR = $outputDirectory
    PSPRECOMP_MOTORSTORM_WINDOW = $(if ($Window) { '1' } else { '0' })
    PSPRECOMP_MOTORSTORM_SKIP_BOOT = $null
    PSPRECOMP_MOTORSTORM_SKIP_MOVIE = $null
    PSPRECOMP_MOTORSTORM_SKIP_MOVIE_SCENE = $null
    PSPRECOMP_MOTORSTORM_SYNC_STRINGS = $null
    PSPRECOMP_WATCH_WRITE = $null
    PSPRECOMP_MOTORSTORM_D3D12_DEBUG = $null
}
$previousSettings = @{}
foreach ($key in $settings.Keys) {
    $previousSettings[$key] = [Environment]::GetEnvironmentVariable($key,'Process')
    [Environment]::SetEnvironmentVariable($key,$settings[$key],'Process')
}
Push-Location -LiteralPath $repoDirectory
try {
    $timer = [Diagnostics.Stopwatch]::StartNew()
    & out/motorstorm/bin/Release/MotorStormNative.exe *> (Join-Path $outputDirectory 'console.txt')
    $nativeExit = $LASTEXITCODE
    $timer.Stop()
    "renderer=$Renderer native_exit=$nativeExit elapsed_seconds=$($timer.Elapsed.TotalSeconds)" |
        Tee-Object -FilePath (Join-Path $outputDirectory 'result.txt')
} finally {
    Pop-Location
    foreach ($key in $settings.Keys) { [Environment]::SetEnvironmentVariable($key,$previousSettings[$key],'Process') }
}
exit $nativeExit
