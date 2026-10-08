# Builds the Windows launcher and puts MotorStormLauncher.exe next to MotorStormNative.exe.
#   ./build.ps1                 framework-dependent single file (~0.5 MB; needs the .NET 10 Desktop Runtime)
#   ./build.ps1 -SelfContained  no runtime needed on the other PC (~150 MB)
#   ./build.ps1 -Tests          also run the launcher's codec/environment checks
[CmdletBinding()]
param(
    [string]$Output = '../../../../out/motorstorm/bin/Release',
    [switch]$SelfContained,
    [switch]$Tests
)
$ErrorActionPreference = 'Stop'
$outputPath = if ([IO.Path]::IsPathRooted($Output)) { $Output } else { [IO.Path]::GetFullPath((Join-Path $PSScriptRoot $Output)) }

if ($Tests) {
    dotnet run -c Release --project (Join-Path $PSScriptRoot 'tests/LauncherTests.csproj')
    if ($LASTEXITCODE -ne 0) { throw 'Launcher tests failed' }
}
$publish = @('publish', (Join-Path $PSScriptRoot 'MotorStormLauncher.csproj'), '-c', 'Release', '-r', 'win-x64',
             '-p:PublishSingleFile=true', '-p:DebugType=none', '-o', $outputPath)
$publish += if ($SelfContained) { @('--self-contained', 'true', '-p:IncludeNativeLibrariesForSelfExtract=true', '-p:EnableCompressionInSingleFile=true') }
            else { @('--self-contained', 'false') }
dotnet @publish
if ($LASTEXITCODE -ne 0) { throw 'Launcher build failed' }
Write-Host "Launcher: $(Join-Path $outputPath 'MotorStormLauncher.exe')"
