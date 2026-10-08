package org.psprecomp.motorstorm;

import java.security.SecureRandom;

/** Invite-code codec: 16 bytes <-> 26 Crockford base32 characters, grouped in fours. Pure Java. */
final class InviteCode {
    private static final String ALPHABET = "0123456789ABCDEFGHJKMNPQRSTVWXYZ";

    private InviteCode() {}

    static String generate() {
        byte[] bytes = new byte[16];
        new SecureRandom().nextBytes(bytes);
        return encode(bytes);
    }

    static String encode(byte[] bytes) {
        StringBuilder raw = new StringBuilder();
        int acc = 0, bits = 0;
        for (byte b : bytes) {
            acc = (acc << 8) | (b & 0xFF);
            bits += 8;
            while (bits >= 5) {
                raw.append(ALPHABET.charAt((acc >> (bits - 5)) & 31));
                bits -= 5;
            }
        }
        if (bits > 0) raw.append(ALPHABET.charAt((acc << (5 - bits)) & 31));
        StringBuilder grouped = new StringBuilder();
        for (int i = 0; i < raw.length(); i++) {
            if (i > 0 && i % 4 == 0) grouped.append('-');
            grouped.append(raw.charAt(i));
        }
        return grouped.toString();
    }

    /** Canonical form (upper case, grouped) of a typed invite, or null if it is not valid. */
    static String normalize(String text) {
        if (text == null) return null;
        StringBuilder raw = new StringBuilder();
        for (char ch : text.toCharArray()) {
            if (ch == '-' || ch == ' ') continue;
            ch = Character.toUpperCase(ch);
            if (ch == 'O') ch = '0';
            if (ch == 'I' || ch == 'L') ch = '1';
            if (ALPHABET.indexOf(ch) < 0) return null;
            raw.append(ch);
        }
        if (raw.length() != 26) return null;
        byte[] bytes = new byte[16];
        int acc = 0, bits = 0, produced = 0;
        for (int i = 0; i < raw.length(); i++) {
            acc = (acc << 5) | ALPHABET.indexOf(raw.charAt(i));
            bits += 5;
            if (bits >= 8) {
                if (produced >= 16) return null;
                bytes[produced++] = (byte) ((acc >> (bits - 8)) & 0xFF);
                bits -= 8;
            }
        }
        String canonical = encode(bytes);
        // Re-encoding must reproduce the input: rejects non-zero padding bits like the native parser.
        return canonical.replace("-", "").equals(raw.toString()) ? canonical : null;
    }
}
