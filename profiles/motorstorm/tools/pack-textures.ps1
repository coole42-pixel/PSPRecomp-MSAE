<#
.SYNOPSIS
Turns upscaled texture PNGs into an optimized MotorStorm texture pack.

.DESCRIPTION
For each image whose name starts with a 16-digit texture hash, writes a BC7 (or
BC3 with -Format BC3) DDS with a full mip chain using texconv.exe (Microsoft
DirectXTex, https://github.com/microsoft/DirectXTex/releases), on PATH or passed
via -Texconv. DDS files upload straight to the GPU: no decoding, about 4x less
video memory than PNG, and no mip generation at load time.
  - Subfolders of -Source are kept in -Destination.
  - Sizes that are not a multiple of 4 (BC block size) are padded up by resizing;
    the game maps a replacement by its file name, not its pixel size.
  - Images whose alpha is zero everywhere get opaque alpha, so the game keeps
    using its own alpha for them (as it does for such PNGs).
  - Without texconv (or with -Format PNG) the images are copied unchanged.
texconv is run in batches and compresses BC7 on the GPU when one is available.
Re-running only processes images that are newer than their output.

.EXAMPLE
./profiles/motorstorm/tools/pack-textures.ps1 -Source D:/MotorStormTextures/upscaled
./profiles/motorstorm/tools/pack-textures.ps1 -Source upscaled -Destination out/motorstorm/bin/Release/textures_bc7
#>
param(
    [Parameter(Mandatory = $true)][string]$Source,
    [string]$Destination,
    [string]$Executable = 'out/motorstorm/bin/Release/MotorStormNative.exe',
    [ValidateSet('BC7', 'BC3', 'PNG')][string]$Format = 'BC7',
    [string]$Texconv,
    [switch]$Force
)
$ErrorActionPreference = 'Stop'
$repoDirectory = [IO.Path]::GetFullPath((Join-Path $PSScriptRoot '../../..'))
$exe = if ([IO.Path]::IsPathRooted($Executable)) { $Executable } else { Join-Path $repoDirectory $Executable }
if (-not $Destination) { $Destination = Join-Path (Split-Path $exe) 'textures/replace' }
$Source = [IO.Path]::GetFullPath($Source).TrimEnd('\', '/')
$Destination = [IO.Path]::GetFullPath($Destination).TrimEnd('\', '/')
if (-not (Test-Path -LiteralPath $Source)) { throw "Source folder not found: $Source" }
if ($Source -eq $Destination) { throw 'Destination must differ from Source (the PNGs are kept as originals).' }
New-Item -ItemType Directory -Force -Path $Destination | Out-Null

if ($Format -ne 'PNG' -and -not $Texconv) {
    $found = Get-Command texconv.exe -ErrorAction SilentlyContinue
    if ($found) { $Texconv = $found.Source }
    elseif (Test-Path (Join-Path $repoDirectory 'out/tools/texconv.exe')) { $Texconv = Join-Path $repoDirectory 'out/tools/texconv.exe' }
}
if ($Format -ne 'PNG' -and -not $Texconv) {
    Write-Warning 'texconv.exe not found: copying PNGs (decoded at runtime). Install DirectXTex texconv for BC7 DDS packs.'
    $Format = 'PNG'
}

# Image inspection: size from the header; alpha scan only for images with an
# alpha channel, in parallel (decoding is the slow part).
Add-Type -ReferencedAssemblies System.Drawing -TypeDefinition @'
using System;
using System.Drawing;
using System.Drawing.Imaging;
using System.IO;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
public static class PackInspect {
    public sealed class Info { public int Width; public int Height; public bool ZeroAlpha; public string Error; }
    static Info Inspect(string path) {
        var info = new Info();
        try {
            byte[] head = new byte[33];
            using (var file = File.OpenRead(path)) file.Read(head, 0, head.Length);
            bool png = head[0] == 0x89 && head[1] == (byte)'P' && head[2] == (byte)'N' && head[3] == (byte)'G';
            int colorType = png ? head[25] : 6;
            using (var image = Image.FromFile(path)) {
                info.Width = image.Width; info.Height = image.Height;
                if (png && colorType != 4 && colorType != 6) return info;
                using (var bitmap = new Bitmap(image)) {
                    var data = bitmap.LockBits(new Rectangle(0, 0, bitmap.Width, bitmap.Height),
                                               ImageLockMode.ReadOnly, PixelFormat.Format32bppArgb);
                    try {
                        byte[] row = new byte[bitmap.Width * 4];
                        info.ZeroAlpha = true;
                        for (int y = 0; y < bitmap.Height && info.ZeroAlpha; ++y) {
                            Marshal.Copy(IntPtr.Add(data.Scan0, y * data.Stride), row, 0, row.Length);
                            for (int x = 3; x < row.Length; x += 4) if (row[x] != 0) { info.ZeroAlpha = false; break; }
                        }
                    } finally { bitmap.UnlockBits(data); }
                }
            }
        } catch (Exception error) { info.Error = error.Message; }
        return info;
    }
    public static Info[] InspectAll(string[] paths) {
        var result = new Info[paths.Length];
        Parallel.For(0, paths.Length, new ParallelOptions { MaxDegreeOfParallelism = Environment.ProcessorCount },
                     i => { result[i] = Inspect(paths[i]); });
        return result;
    }
}
'@

$images = @(Get-ChildItem -LiteralPath $Source -Recurse -File |
    Where-Object { $_.Extension -match '^\.(png|jpg|jpeg|bmp|tif|tiff)$' })
$ignored = 0; $skipped = 0; $copied = 0; $packed = 0; $padded = 0; $opaqued = 0; $failed = 0
$work = New-Object System.Collections.Generic.List[object]
foreach ($image in $images) {
    if ($image.Name -notmatch '^[0-9a-fA-F]{16}([_.\- ]|$)') { $ignored++; continue }
    $relative = $image.DirectoryName.Substring($Source.Length).TrimStart('\', '/')
    $folder = if ($relative) { Join-Path $Destination $relative } else { $Destination }
    $stem = [IO.Path]::GetFileNameWithoutExtension($image.Name)
    $extension = if ($Format -eq 'PNG') { $image.Extension.ToLowerInvariant() } else { '.dds' }
    $output = Join-Path $folder ($stem + $extension)
    if (-not $Force -and (Test-Path -LiteralPath $output) -and
        (Get-Item -LiteralPath $output).LastWriteTimeUtc -ge $image.LastWriteTimeUtc) { $skipped++; continue }
    $work.Add([pscustomobject]@{ Image = $image; Folder = $folder; Stem = $stem; Output = $output })
}

if ($Format -eq 'PNG') {
    foreach ($item in $work) {
        New-Item -ItemType Directory -Force -Path $item.Folder | Out-Null
        Copy-Item -LiteralPath $item.Image.FullName -Destination $item.Output -Force
        $copied++
    }
} elseif ($work.Count -gt 0) {
    Write-Host "Inspecting $($work.Count) image(s)..."
    $infos = [PackInspect]::InspectAll([string[]]($work | ForEach-Object { $_.Image.FullName }))
    $dxgi = @{ BC7 = 'BC7_UNORM'; BC3 = 'BC3_UNORM' }[$Format]
    # One texconv run per (folder, options) batch; odd sizes run one by one.
    $batches = @{}
    for ($i = 0; $i -lt $work.Count; $i++) {
        $item = $work[$i]; $info = $infos[$i]
        if ($info.Error) { Write-Warning "skipped $($item.Image.FullName): $($info.Error)"; $failed++; continue }
        New-Item -ItemType Directory -Force -Path $item.Folder | Out-Null
        $options = @()
        if ($info.ZeroAlpha) { $options += @('-swizzle', 'rgb1'); $opaqued++ }
        if (($info.Width % 4) -ne 0 -or ($info.Height % 4) -ne 0) {
            $w = [int]([Math]::Ceiling($info.Width / 4.0) * 4); $h = [int]([Math]::Ceiling($info.Height / 4.0) * 4)
            & $Texconv -nologo -y --ignore-srgb -f $dxgi -m 0 -w $w -h $h @options -o $item.Folder $item.Image.FullName | Out-Null
            if ($LASTEXITCODE -ne 0) { Write-Warning "texconv failed: $($item.Image.FullName)"; $failed++ } else { $packed++; $padded++ }
            continue
        }
        $key = $item.Folder + '|' + ($options -join ' ')
        if (-not $batches.ContainsKey($key)) { $batches[$key] = [pscustomobject]@{ Folder = $item.Folder; Options = $options; Files = New-Object System.Collections.Generic.List[string] } }
        $batches[$key].Files.Add($item.Image.FullName)
    }
    $done = 0
    foreach ($batch in $batches.Values) {
        for ($start = 0; $start -lt $batch.Files.Count; $start += 200) {
            $chunk = $batch.Files.GetRange($start, [Math]::Min(200, $batch.Files.Count - $start))
            $list = [IO.Path]::GetTempFileName()
            [IO.File]::WriteAllLines($list, $chunk)
            $options = $batch.Options
            & $Texconv -nologo -y --ignore-srgb -f $dxgi -m 0 @options -o $batch.Folder -flist $list | Out-Null
            $code = $LASTEXITCODE
            Remove-Item -LiteralPath $list -Force
            if ($code -ne 0) { Write-Warning "texconv reported errors in $($batch.Folder)"; $failed += $chunk.Count } else { $packed += $chunk.Count }
            $done += $chunk.Count
            Write-Host ("  {0}/{1} converted" -f $done, ($work.Count - $padded - $failed))
        }
    }
}
Write-Host "Texture pack: $Destination"
Write-Host ("  DDS ({0}, mipmapped): {1}   padded to 4x4 blocks: {2}   alpha made opaque: {3}" -f $Format, $packed, $padded, $opaqued)
Write-Host ("  copied images: {0}   up to date: {1}   ignored (no hash): {2}   failed: {3}" -f $copied, $skipped, $ignored, $failed)
Write-Host 'Point [textures] replace_dir at this folder; the game indexes it at startup.'
