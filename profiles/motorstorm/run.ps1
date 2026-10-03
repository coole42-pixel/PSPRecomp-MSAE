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

# Normal startup keeps the guest's profile, title and menu initialization.
# The old scene skips are available only for reproducing banked diagnostics.
$settings = @{
    PSPRECOMP_MOTORSTORM_SOFTGE = '1'
    PSPRECOMP_MOTORSTORM_RENDERER = $Renderer
    PSPRECOMP_MOTORSTORM_RESOLUTION = "$Resolution"
    PSPRECOMP_MOTORSTORM_AA = $Antialiasing.ToLowerInvariant()
    PSPRECOMP_MOTORSTORM_WINDOW = '1'
    PSPRECOMP_MOTORSTORM_WINDOW_SCALE = "$Scale"
    PSPRECOMP_MOTORSTORM_SKIP_BOOT = $(if ($Bringup) { '200' } else { $null })
    PSPRECOMP_MOTORSTORM_SKIP_MOVIE = $(if ($Bringup) { '1' } else { $null })
    PSPRECOMP_MOTORSTORM_SKIP_MOVIE_SCENE = $(if ($Bringup) { '1' } else { $null })
    PSPRECOMP_MAX_DISPATCHES = "$MaxDispatches"
    PSPRECOMP_MOTORSTORM_STOP_AFTER_GE = "$StopAfterGe"
    PSPRECOMP_MOTORSTORM_AUDIO = $(if ($Audio -and -not $Mute) { '1' } else { '0' })
    PSPRECOMP_MOTORSTORM_SOFTGE_START_AFTER = $null
}
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
