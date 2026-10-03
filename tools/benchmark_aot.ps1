param(
    [string]$Exe = "out/framework/Release/psp_recomp.exe",
    [string]$InputElf = "profiles/motorstorm/game/EBOOT_DECRYPTED.BIN",
    [string]$OutputRoot = "out/aot-perf",
    [string]$Name = "run",
    [int]$TimeoutSeconds = 300,
    [string[]]$ExtraArgs = @()
)
$ErrorActionPreference = 'Stop'
New-Item -ItemType Directory -Force -Path $OutputRoot | Out-Null
$destination = Join-Path $OutputRoot $Name
New-Item -ItemType Directory -Force -Path $destination | Out-Null
$startInfo = New-Object System.Diagnostics.ProcessStartInfo
$startInfo.FileName = (Resolve-Path -LiteralPath $Exe).Path
$quotedArgs = @($InputElf, '--auto', $destination) + $ExtraArgs | ForEach-Object {
    '"' + $_.Replace('"', '\"') + '"'
}
$startInfo.Arguments = $quotedArgs -join ' '
$startInfo.UseShellExecute = $false
$startInfo.CreateNoWindow = $true
$startInfo.RedirectStandardOutput = $true
$startInfo.RedirectStandardError = $true
$process = New-Object System.Diagnostics.Process
$process.StartInfo = $startInfo
$clock = [System.Diagnostics.Stopwatch]::StartNew()
[void]$process.Start()
$stdout = $process.StandardOutput.ReadToEndAsync()
$stderr = $process.StandardError.ReadToEndAsync()
$peak = 0L
$cpu = 0.0
$stopped = $false
while (-not $process.WaitForExit(20)) {
    $process.Refresh()
    $peak = [Math]::Max($peak, $process.PeakWorkingSet64)
    $cpu = $process.TotalProcessorTime.TotalSeconds
    if ($clock.Elapsed.TotalSeconds -gt $TimeoutSeconds -or $peak -gt 3GB) {
        $stopped = $true
        $process.Kill()
    }
}
$clock.Stop()
$cpu = $process.TotalProcessorTime.TotalSeconds
$peak = [Math]::Max($peak, $process.PeakWorkingSet64)
[System.IO.File]::WriteAllText((Join-Path (Resolve-Path $OutputRoot) ($Name + '.log')), $stdout.Result + $stderr.Result)
$files = @(Get-ChildItem -LiteralPath $destination -File)
$result = [ordered]@{
    name = $Name; args = $ExtraArgs; wall_s = [Math]::Round($clock.Elapsed.TotalSeconds, 3)
    cpu_s = [Math]::Round($cpu, 3); peak_bytes = $peak; exit = $process.ExitCode; stopped = $stopped
    output_bytes = ($files | Measure-Object -Property Length -Sum).Sum
    units = @($files | Where-Object Name -Like 'generated_unit_*.cpp').Count
}
$json = $result | ConvertTo-Json -Compress
Add-Content -LiteralPath (Join-Path $OutputRoot 'measurements.jsonl') -Value $json
$json
$process.Dispose()
