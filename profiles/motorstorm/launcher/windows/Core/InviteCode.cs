using System.Security.Cryptography;
using System.Text;

namespace MotorStormLauncher.Core;

/// <summary>
/// Invite-code codec: 16 bytes &lt;-&gt; 26 Crockford base32 characters grouped in fours.
/// Byte-for-byte the format of the native parser (src/net/crypto.cpp: invite_to_string /
/// invite_from_string) and of the Android launcher (InviteCode.java). The code is the room's
/// pre-shared key, so it doubles as the room password.
/// </summary>
public static class InviteCode
{
    private const string Alphabet = "0123456789ABCDEFGHJKMNPQRSTVWXYZ";

    public static string Generate() => Encode(RandomNumberGenerator.GetBytes(16));

    public static string Encode(ReadOnlySpan<byte> bytes)
    {
        var raw = new StringBuilder();
        int acc = 0, bits = 0;
        foreach (byte b in bytes)
        {
            acc = (acc << 8) | b;
            bits += 8;
            while (bits >= 5)
            {
                raw.Append(Alphabet[(acc >> (bits - 5)) & 31]);
                bits -= 5;
            }
        }
        if (bits > 0) raw.Append(Alphabet[(acc << (5 - bits)) & 31]);
        var grouped = new StringBuilder();
        for (int i = 0; i < raw.Length; i++)
        {
            if (i > 0 && i % 4 == 0) grouped.Append('-');
            grouped.Append(raw[i]);
        }
        return grouped.ToString();
    }

    /// <summary>Canonical form (upper case, grouped) of a typed invite, or null if it is not valid.</summary>
    public static string? Normalize(string? text)
    {
        if (text is null) return null;
        var raw = new StringBuilder();
        foreach (char c in text)
        {
            if (c == '-' || c == ' ') continue;
            char ch = char.ToUpperInvariant(c);
            if (ch == 'O') ch = '0';
            if (ch == 'I' || ch == 'L') ch = '1';
            if (Alphabet.IndexOf(ch) < 0) return null;
            raw.Append(ch);
        }
        if (raw.Length != 26) return null;
        var bytes = new byte[16];
        int acc = 0, bits = 0, produced = 0;
        for (int i = 0; i < raw.Length; i++)
        {
            acc = (acc << 5) | Alphabet.IndexOf(raw[i]);
            bits += 5;
            if (bits >= 8)
            {
                if (produced >= 16) return null;
                bytes[produced++] = (byte)((acc >> (bits - 8)) & 0xFF);
                bits -= 8;
            }
        }
        string canonical = Encode(bytes);
        // Re-encoding must reproduce the input: rejects non-zero padding bits like the native parser.
        return canonical.Replace("-", "") == raw.ToString() ? canonical : null;
    }
}
