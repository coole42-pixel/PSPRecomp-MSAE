using System.Buffers.Binary;
using System.IO;
using System.Text;

namespace MotorStormLauncher.Core;

/// <summary>Imports uncompressed ISO9660 PSP data into an isolated launcher-owned folder.</summary>
public static class IsoImporter
{
    public static string Import(string source, IProgress<string>? progress = null)
    {
        string destination = Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.LocalApplicationData),
            "MotorStormLauncher", "Games", Guid.NewGuid().ToString("N"), "disc0");
        try
        {
            using var iso = File.OpenRead(source);
            byte[] Read(long offset, int size)
            {
                if (offset < 0 || size < 0 || offset > iso.Length - size) throw new IOException("Truncated ISO extent.");
                iso.Position = offset;
                var data = new byte[size];
                iso.ReadExactly(data);
                return data;
            }
            static long U32(byte[] data, int offset) => BinaryPrimitives.ReadUInt32LittleEndian(data.AsSpan(offset, 4));
            var pvd = Read(16L * 2048, 2048);
            if (pvd[0] != 1 || Encoding.ASCII.GetString(pvd, 1, 5) != "CD001" || pvd[6] != 1)
                throw new IOException("Select an uncompressed PSP ISO (ISO9660). CSO images are not supported.");
            var visited = new HashSet<long>();
            var buffer = new byte[65536];
            long extracted = 0;
            int files = 0;
            void DirectoryAt(long offset, long size, string folder, int depth)
            {
                if (depth > 16 || size > 8 * 1024 * 1024 || !visited.Add(offset)) throw new IOException("Invalid ISO directory.");
                Directory.CreateDirectory(folder);
                var data = Read(offset, (int)size);
                for (int cursor = 0; cursor < data.Length;)
                {
                    int n = data[cursor];
                    if (n == 0) { cursor = (cursor / 2048 + 1) * 2048; continue; }
                    if (n < 34 || cursor + n > data.Length) throw new IOException("Invalid ISO record.");
                    var record = data.AsSpan(cursor, n).ToArray();
                    cursor += n;
                    int nameLength = record[32];
                    if (33 + nameLength > n) throw new IOException("Invalid ISO filename.");
                    if (nameLength == 1 && record[33] is 0 or 1) continue;
                    string name = Encoding.ASCII.GetString(record, 33, nameLength).Split(';')[0];
                    string stem = name.Split('.')[0].ToUpperInvariant();
                    if (string.IsNullOrWhiteSpace(name) || name is "." or ".." ||
                        stem is "CON" or "PRN" or "AUX" or "NUL" ||
                        (stem.Length == 4 && (stem.StartsWith("COM") || stem.StartsWith("LPT")) && stem[3] is >= '0' and <= '9') ||
                        name.IndexOfAny(Path.GetInvalidFileNameChars()) >= 0 || name.EndsWith('.') || name.EndsWith(' '))
                        throw new IOException("Unsafe ISO filename.");
                    string output = Path.Combine(folder, name);
                    long start = U32(record, 2) * 2048, bytes = U32(record, 10);
                    if (start > iso.Length - bytes || bytes > 2L * 1024 * 1024 * 1024 || (record[25] & 128) != 0)
                        throw new IOException("Unsupported or invalid ISO file extent.");
                    if ((record[25] & 2) != 0) { DirectoryAt(start, bytes, output, depth + 1); continue; }
                    if (++files > 20000 || (extracted += bytes) > 2L * 1024 * 1024 * 1024)
                        throw new IOException("ISO extraction exceeds limits.");
                    iso.Position = start;
                    using (var file = new FileStream(output, FileMode.CreateNew, FileAccess.Write))
                    {
                        while (bytes > 0)
                        {
                            int chunk = (int)Math.Min(bytes, buffer.Length);
                            iso.ReadExactly(buffer.AsSpan(0, chunk));
                            file.Write(buffer, 0, chunk);
                            bytes -= chunk;
                        }
                    }
                    if (files % 20 == 0) progress?.Report($"Imported {extracted / 1048576} MiB · {files} files");
                }
            }
            DirectoryAt(U32(pvd, 158) * 2048, U32(pvd, 166), destination, 0);
            if (!File.Exists(Path.Combine(destination, "PSP_GAME", "PARAM.SFO")))
                throw new IOException("The ISO has no PSP_GAME/PARAM.SFO.");
            return destination;
        }
        catch
        {
            if (Directory.Exists(destination)) Directory.Delete(destination, true);
            throw;
        }
    }
}
