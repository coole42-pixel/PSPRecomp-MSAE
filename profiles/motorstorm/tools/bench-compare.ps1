param(
    [string[]]$Name,
    [string]$Directory = 'out/motorstorm/bench'
)
# Summarize every race benchmark report captured by bench-race.ps1.  Pass
# -Name to order/select specific runs; otherwise every *.bench.txt in the
# directory is listed by file name.

$repoDirectory = [IO.Path]::GetFullPath((Join-Path $PSScriptRoot '../../..'))
$root = Join-Path $repoDirectory $Directory
if (-not (Test-Path -LiteralPath $root)) { throw "No benchmark directory: $root" }

$files = Get-ChildItem -LiteralPath $root -Filter '*.bench.txt' | Sort-Object Name
if ($Name) {
    # powershell -File passes comma-separated text as one string.
    $wanted = @($Name | ForEach-Object { $_ -split ',' } | Where-Object { $_ })
    $files = $files | Where-Object {
        ($wanted -contains $_.Name) -or
        ($wanted -contains $_.BaseName) -or
        ($wanted -contains ($_.BaseName -replace '\.bench$', ''))
    }
}

$rows = foreach ($file in $files) {
    $values = @{}
    foreach ($line in Get-Content -LiteralPath $file.FullName) {
        if ($line -match '^([a-z_]+)=(.+)$') { $values[$Matches[1]] = $Matches[2] }
    }
    [PSCustomObject]@{
        run         = $file.BaseName -replace '\.bench$', ''
        frames      = $values['frames']
        wall_ms     = [int]$values['wall_ms']
        perf        = $values['guest_per_wall']
        sync_ms     = [int][double]$values['gpu_sync_ms']
        fence_ms    = [int][double]$values['gpu_fence_ms']
        submit_ms   = [int][double]$values['ge_submit_ms']
        decode_ms   = [int][double]$values['ge_decode_ms']
        texture_ms  = [int][double]$values['texture_ms']
        prepare_ms  = [int][double]$values['gpu_prepare_ms']
        record_ms   = [int][double]$values['gpu_record_ms']
        other_ms    = [int][double]$values['other_ms']
    }
}
$rows | Format-Table -AutoSize | Out-String -Width 250
