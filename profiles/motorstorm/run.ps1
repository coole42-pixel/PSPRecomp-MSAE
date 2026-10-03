param(
    [int]$Scale = 2,
    [UInt64]$MaxDispatches = 4000000000,
    [UInt64]$StopAfterGe = 0,
    [string]$Executable = 'out/motorstorm/bin/Release/MotorStormNative.exe',
    [switch]$Audio = $true,
    [switch]$Mute,
    [ValidateSet('d3d12', 'software', 'auto')][string]$Renderer = 'd3d12',
    [ValidateRange(1,4)][int]$Resolution = 1,
    [ValidateSet('None','FXAA','SSAA4x')][string]$Antialiasing = 'None',
    # 'original' or 30-240; omitted uses the INI (default 60).
    [ValidatePattern('^(original|\d+)$')][string]$Fps,
    [switch]$Fullscreen,
    [switch]$Windowed,
    [switch]$Bringup
)

$repoDirectory = [IO.Path]::GetFullPath((Join-Path $PSScriptRoot '../..'))
$nativeExecutable = if ([IO.Path]::IsPathRooted($Executable)) {
    [IO.Path]::GetFullPath($Executable)
} else {
    [IO.Path]::GetFullPath((Join-Path $repoDirectory $Executable))
}
if (-not (Test-Path -LiteralPath $nativeExecutable)) {
    throw "Build the MotorStormNative Release target first: $nativeExecutable"
}
if ($Scale -lt 1 -or $Scale -gt 8) { throw 'Scale must be between 1 and 8.' }
if ($Fullscreen -and $Windowed) { throw 'Select either Fullscreen or Windowed.' }

# Normal startup keeps the guest's profile, title and menu initialization.
# The old scene skips are available only for reproducing banked diagnostics.
$settings = @{
    PSPRECOMP_MOTORSTORM_SOFTGE = '1'
    PSPRECOMP_MOTORSTORM_WINDOW = '1'
    PSPRECOMP_MOTORSTORM_SKIP_BOOT = $(if ($Bringup) { '200' } else { $null })
    PSPRECOMP_MOTORSTORM_SKIP_MOVIE = $(if ($Bringup) { '1' } else { $null })
    PSPRECOMP_MOTORSTORM_SKIP_MOVIE_SCENE = $(if ($Bringup) { '1' } else { $null })
    PSPRECOMP_MOTORSTORM_SOFTGE_START_AFTER = $null
}
if ($PSBoundParameters.ContainsKey('Renderer')) { $settings.PSPRECOMP_MOTORSTORM_RENDERER = $Renderer }
if ($PSBoundParameters.ContainsKey('Resolution')) { $settings.PSPRECOMP_MOTORSTORM_RESOLUTION = "$Resolution" }
if ($PSBoundParameters.ContainsKey('Antialiasing')) { $settings.PSPRECOMP_MOTORSTORM_AA = $Antialiasing.ToLowerInvariant() }
if ($PSBoundParameters.ContainsKey('Fps')) { $settings.PSPRECOMP_MOTORSTORM_FPS = $Fps.ToLowerInvariant() }
if ($PSBoundParameters.ContainsKey('Scale')) { $settings.PSPRECOMP_MOTORSTORM_WINDOW_SCALE = "$Scale" }
if ($PSBoundParameters.ContainsKey('MaxDispatches')) { $settings.PSPRECOMP_MAX_DISPATCHES = "$MaxDispatches" }
if ($PSBoundParameters.ContainsKey('StopAfterGe')) { $settings.PSPRECOMP_MOTORSTORM_STOP_AFTER_GE = "$StopAfterGe" }
if ($PSBoundParameters.ContainsKey('Audio')) { $settings.PSPRECOMP_MOTORSTORM_AUDIO = $(if ($Audio) { '1' } else { '0' }) }
if ($Mute) { $settings.PSPRECOMP_MOTORSTORM_AUDIO = '0' }
if ($PSBoundParameters.ContainsKey('Fullscreen')) { $settings.PSPRECOMP_MOTORSTORM_FULLSCREEN = $(if ($Fullscreen) { '1' } else { '0' }) }
if ($Windowed) { $settings.PSPRECOMP_MOTORSTORM_FULLSCREEN = '0' }
$previousSettings = @{}
foreach ($key in $settings.Keys) {
    $previousSettings[$key] = [Environment]::GetEnvironmentVariable($key, 'Process')
    [Environment]::SetEnvironmentVariable($key, $settings[$key], 'Process')
}
Push-Location -LiteralPath $repoDirectory
try {
    & $nativeExecutable
    $nativeResult = $LASTEXITCODE
} finally {
    Pop-Location
    foreach ($key in $settings.Keys) {
        [Environment]::SetEnvironmentVariable($key, $previousSettings[$key], 'Process')
    }
}
exit $nativeResult
