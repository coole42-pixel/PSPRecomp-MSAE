<#
.SYNOPSIS
Complement to extract-textures.ps1: plays MotorStorm with texture dumping on.
Every texture the game draws is written once as a lossless PNG named
<hash>_<width>x<height>.png, plus index.csv (PSP format, palette format, mip
count, swizzle, first GE list). Use it for textures the game colours at
runtime (vehicle liveries and other runtime palettes), which the offline
extractor can only show with their placeholder palettes.

.DESCRIPTION
Play normally (menus, every track, vehicles, weather) to collect textures; files
already in the dump folder are skipped, so repeated sessions only add new ones.
Upscale the PNGs with any tool and keep the leading 16-digit hash in each file
name (suffixes such as _64x64 or _x4 are fine). Then run pack-textures.ps1, or
copy the upscaled PNGs into the replacement folder directly.

.EXAMPLE
./profiles/motorstorm/tools/dump-runtime-textures.ps1
./profiles/motorstorm/tools/dump-runtime-textures.ps1 -DumpDir D:/MotorStormTextures/dump -Fps original
#>
param(
    [string]$Executable = 'out/motorstorm/bin/Release/MotorStormNative.exe',
    # Default: textures/dump beside the executable (same as the INI default).
    [string]$DumpDir,
    # Keep existing replacements visible while dumping (off: dump the originals).
    [switch]$WithReplacements,
    [ValidatePattern('^(original|\d+)$')][string]$Fps,
    # Optional controller script (time_us buttons x y per line) for unattended runs.
    [string]$InputScript,
    [UInt64]$StopAfterGe = 0
)
$ErrorActionPreference = 'Stop'
$repoDirectory = [IO.Path]::GetFullPath((Join-Path $PSScriptRoot '../../..'))
$exe = if ([IO.Path]::IsPathRooted($Executable)) { $Executable } else { Join-Path $repoDirectory $Executable }
if (-not (Test-Path -LiteralPath $exe)) { throw "Build MotorStormNative first: $exe" }
if (-not $DumpDir) { $DumpDir = Join-Path (Split-Path $exe) 'textures/dump' }
$DumpDir = [IO.Path]::GetFullPath($DumpDir)
New-Item -ItemType Directory -Force -Path $DumpDir | Out-Null
$before = @(Get-ChildItem -LiteralPath $DumpDir -Filter '*.png' -File).Count

$settings = @{
    PSPRECOMP_MOTORSTORM_TEXTURE_DUMP = '1'
    PSPRECOMP_MOTORSTORM_TEXTURE_DUMP_DIR = $DumpDir
    PSPRECOMP_MOTORSTORM_TEXTURE_REPLACE = $(if ($WithReplacements) { '1' } else { '0' })
    PSPRECOMP_MOTORSTORM_WINDOW = '1'
}
if ($Fps) { $settings.PSPRECOMP_MOTORSTORM_FPS = $Fps.ToLowerInvariant() }
if ($InputScript) { $settings.PSPRECOMP_MOTORSTORM_INPUT_SCRIPT = [IO.Path]::GetFullPath($InputScript) }
if ($StopAfterGe -gt 0) { $settings.PSPRECOMP_MOTORSTORM_STOP_AFTER_GE = "$StopAfterGe" }
$previous = @{}
foreach ($key in $settings.Keys) {
    $previous[$key] = [Environment]::GetEnvironmentVariable($key, 'Process')
    [Environment]::SetEnvironmentVariable($key, $settings[$key], 'Process')
}
Write-Host "Dumping textures to $DumpDir ($before already present). Play, then close the game window."
Push-Location -LiteralPath (Split-Path $exe)
try {
    & $exe
    $exitCode = $LASTEXITCODE
} finally {
    Pop-Location
    foreach ($key in $settings.Keys) { [Environment]::SetEnvironmentVariable($key, $previous[$key], 'Process') }
}
$after = @(Get-ChildItem -LiteralPath $DumpDir -Filter '*.png' -File).Count
Write-Host "Textures in dump folder: $after ($($after - $before) new). Index: $(Join-Path $DumpDir 'index.csv')"
Write-Host "Next: upscale the PNGs (keep the 16-digit hash prefix), then run pack-textures.ps1."
exit $exitCode
