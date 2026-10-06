param([switch]$Offline, [switch]$Install,
    [string]$JavaHome = $env:JAVA_HOME,
    [string]$GradleHome)
$ErrorActionPreference = 'Stop'
$repo = [IO.Path]::GetFullPath((Join-Path $PSScriptRoot '../../../..'))
$project = Join-Path $repo 'profiles/motorstorm/android'
if (-not $GradleHome) {
    $distribution = Join-Path $env:USERPROFILE '.gradle/wrapper/dists/gradle-9.3.1-all'
    $launcher = Get-ChildItem -LiteralPath $distribution -Recurse -Filter 'gradle-gradle-cli-main-9.3.1.jar' | Select-Object -First 1
    if (-not $launcher) { throw 'Gradle 9.3.1 is required. Pass -GradleHome; this script does not download large distributions.' }
    $GradleHome = [IO.Path]::GetFullPath((Join-Path $launcher.Directory.FullName '..'))
}
$JavaHome = $JavaHome.TrimEnd('\', '/')
$java = Join-Path $JavaHome 'bin/java.exe'
if (-not (Test-Path -LiteralPath $java)) { throw 'Pass a valid -JavaHome or set JAVA_HOME.' }
$arguments = @("-Dorg.gradle.java.home=$JavaHome", '-jar', (Join-Path $GradleHome 'lib/gradle-gradle-cli-main-9.3.1.jar'),
    '-p', $project, 'assembleDebug', '--no-daemon', '--console=plain')
if ($Offline) { $arguments += '--offline' }
& $java @arguments
if ($LASTEXITCODE -ne 0) { throw "Android build failed: $LASTEXITCODE" }
if ($Install) {
    & adb install -r (Join-Path $project 'app/build/outputs/apk/debug/app-debug.apk')
    if ($LASTEXITCODE -ne 0) { throw 'APK install failed' }
}
