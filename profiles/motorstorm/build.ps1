[CmdletBinding()]
param(
    [string]$BuildDirectory = 'out/motorstorm',
    [ValidateRange(1,16)][int]$Jobs = [Math]::Min(4, [Environment]::ProcessorCount),
    [switch]$Tests,
    [switch]$GpuTests,
    [switch]$ResetConfig
)
$ErrorActionPreference = 'Stop'
$repoDirectory = [IO.Path]::GetFullPath((Join-Path $PSScriptRoot '../..'))
$buildPath = if ([IO.Path]::IsPathRooted($BuildDirectory)) {
    [IO.Path]::GetFullPath($BuildDirectory)
} else { [IO.Path]::GetFullPath((Join-Path $repoDirectory $BuildDirectory)) }

$cmakeCommand = Get-Command cmake.exe -ErrorAction SilentlyContinue
$cmakePath = if ($cmakeCommand) { $cmakeCommand.Source } else {
    $candidates = @(
        "$env:ProgramFiles/CMake/bin/cmake.exe",
        "$env:ProgramFiles/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe",
        "$env:ProgramFiles/Microsoft Visual Studio/2022/BuildTools/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe"
    )
    $candidates | Where-Object { Test-Path -LiteralPath $_ } | Select-Object -First 1
}
if (-not $cmakePath) { throw 'CMake not found. Install Visual Studio 2022 C++ tools and CMake, or add CMake to PATH.' }
$ctestPath = Join-Path (Split-Path $cmakePath) 'ctest.exe'
if (-not (Test-Path -LiteralPath $ctestPath)) { throw "CTest not found beside CMake: $ctestPath" }

Write-Host "MotorStorm Release build: $buildPath (cl.exe workers=$Jobs, MSBuild projects=1)"
$configureArgs = @('-S', $repoDirectory, '-B', $buildPath,
    '-DPSPRECOMP_PROFILE=motorstorm', '-DPSPRECOMP_GENERATED_OPT_LEVEL=2',
    '-DPSPRECOMP_MOTORSTORM_INLINE_LEVEL=0', '-DPSPRECOMP_MOTORSTORM_AOT_LTO=OFF',
    "-DPSPRECOMP_MOTORSTORM_MP_JOBS=$Jobs", "-DPSPRECOMP_MSVC_MP_JOBS=$Jobs",
    '-DPSPRECOMP_BUILD_TESTS=ON', '-DPSPRECOMP_BUILD_PROFILE_TESTS=ON',
    "-DPSPRECOMP_MOTORSTORM_GPU_TESTS=$(if ($GpuTests) {'ON'} else {'OFF'})",
    "-DPSPRECOMP_MOTORSTORM_WINDOW_TESTS=$(if ($Tests -or $GpuTests) {'ON'} else {'OFF'})")
if (-not (Test-Path -LiteralPath (Join-Path $buildPath 'CMakeCache.txt'))) {
    $configureArgs += @('-G', 'Visual Studio 17 2022', '-A', 'x64')
}
& $cmakePath @configureArgs
if ($LASTEXITCODE -ne 0) { throw 'MotorStorm CMake configuration failed.' }

$targets = @('MotorStormNative')
if ($Tests -or $GpuTests) {
    $targets += @('psprecomp_tests', 'psprecomp_codegen_tests', 'motorstorm_profile_tests',
                  'motorstorm_config_tests', 'motorstorm_window_tests')
}
if ($GpuTests) { $targets += 'motorstorm_gpu_tests' }
& $cmakePath --build $buildPath --config Release --parallel 1 --target @targets
if ($LASTEXITCODE -ne 0) { throw 'MotorStorm compilation failed; see the first compiler error above.' }

$outputDirectory = Join-Path $buildPath 'bin/Release'
$template = Join-Path $PSScriptRoot 'config/motorstorm.ini'
& $cmakePath "-DSOURCE=$template" "-DDESTINATION=$outputDirectory" -P (Join-Path $PSScriptRoot 'scripts/stage_ini.cmake')
if ($LASTEXITCODE -ne 0) { throw 'INI staging failed.' }
if ($ResetConfig) {
    $userIni = Join-Path $outputDirectory 'MotorStormNative.ini'
    $backupIni = "$userIni.$([DateTime]::Now.ToString('yyyyMMdd-HHmmss-fff')).bak"
    Copy-Item -LiteralPath $userIni -Destination $backupIni
    Copy-Item -LiteralPath $template -Destination $userIni -Force
    Write-Host "Restored default INI; previous settings backed up to $backupIni"
}
if ($Tests -or $GpuTests) {
    & $ctestPath --test-dir $buildPath -C Release --output-on-failure
    if ($LASTEXITCODE -ne 0) { throw 'MotorStorm regression tests failed.' }
}
Write-Host "Executable: $(Join-Path $outputDirectory 'MotorStormNative.exe')"
Write-Host "Settings:   $(Join-Path $outputDirectory 'MotorStormNative.ini')"
Write-Host 'Defaults: 4x internal resolution / SSAA4x / windowed. F11 or Alt+Enter toggles fullscreen.'
