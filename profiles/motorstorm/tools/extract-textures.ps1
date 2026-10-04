<#
.SYNOPSIS
Extracts every texture from the MotorStorm: Arctic Edge disc files as PNG,
without running the game.

.DESCRIPTION
Reads FE.PAK / MAIN.PAK (and loose .PSP_PTX_MAIN files), decompresses the
resource bundles and track files, finds every texture object and decodes it
through the same GE texel path the game uses at runtime. Each texture is
written once as <hash>_<width>x<height>.png, where <hash> is the identity the
running game computes, so an upscaled copy with the same name prefix replaces
it in MotorStormNative. Output is grouped in one folder per source (vehicle,
track, menu bundle); index.csv lists format, size and source of every file.

Textures in a runtime_palette subfolder ship with placeholder colour ramps:
the game colours them at runtime (vehicle liveries). Use
dump-runtime-textures.ps1 for those.

.EXAMPLE
./profiles/motorstorm/tools/extract-textures.ps1
./profiles/motorstorm/tools/extract-textures.ps1 -Disc D:/PSP/MotorStorm/disc0 -Output D:/MotorStormTextures/extracted
#>
param(
    # disc0 folder (containing PSP_GAME), PSP_GAME, or USRDIR.
    [string]$Disc = 'profiles/motorstorm/game/disc0',
    # Default: textures/extracted beside the executable.
    [string]$Output,
    [string]$Executable = 'out/motorstorm/bin/Release/MotorStormTextureExtract.exe',
    # One folder for everything instead of one folder per source.
    [switch]$Flat
)
$ErrorActionPreference = 'Stop'
$repoDirectory = [IO.Path]::GetFullPath((Join-Path $PSScriptRoot '../../..'))
$resolve = { param($path) if ([IO.Path]::IsPathRooted($path)) { $path } else { Join-Path $repoDirectory $path } }
$exe = & $resolve $Executable
if (-not (Test-Path -LiteralPath $exe)) { throw "Build MotorStormTextureExtract first (profiles/motorstorm/build.ps1): $exe" }
$discPath = & $resolve $Disc
if (-not (Test-Path -LiteralPath $discPath)) { throw "Disc folder not found: $discPath" }
if (-not $Output) { $Output = Join-Path (Split-Path $exe) 'textures/extracted' }
$Output = [IO.Path]::GetFullPath($Output)
$arguments = @($discPath, $Output)
if ($Flat) { $arguments += '--flat' }
& $exe @arguments
$code = $LASTEXITCODE
if ($code -eq 0) {
    Write-Host "Next: upscale the PNGs (keep each file's 16-digit hash prefix), then run pack-textures.ps1 -Source <upscaled folder>."
}
exit $code
