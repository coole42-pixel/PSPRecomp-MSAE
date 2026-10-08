package org.psprecomp.motorstorm;

import java.io.BufferedReader;
import java.io.InputStreamReader;

/**
 * Pure-Java checks of the invite codec, plus a stdin/stdout mode so the same inputs can be run
 * through the native codec (psp_net_probe invite-check) and compared:
 *   java ... MultiplayerInviteTests            self checks
 *   java ... MultiplayerInviteTests gen N      print N generated codes
 *   java ... MultiplayerInviteTests norm       canonical form (or INVALID) for each stdin line
 */
public final class MultiplayerInviteTests {
    private static void require(boolean ok, String what) {
        if (!ok) throw new AssertionError(what);
    }

    public static void main(String[] args) throws Exception {
        if (args.length >= 2 && args[0].equals("gen")) {
            for (int i = 0; i < Integer.parseInt(args[1]); i++) System.out.println(InviteCode.generate());
            return;
        }
        if (args.length >= 1 && args[0].equals("norm")) {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            for (String line; (line = in.readLine()) != null;) {
                String canonical = InviteCode.normalize(line);
                System.out.println(canonical == null ? "INVALID" : canonical);
            }
            return;
        }
        // self checks
        for (int i = 0; i < 1000; i++) {
            String code = InviteCode.generate();
            require(code.length() == 32, "length " + code);
            require(code.equals(InviteCode.normalize(code)), "round trip " + code);
            require(code.equals(InviteCode.normalize(code.toLowerCase().replace("-", " "))), "case/space tolerant " + code);
        }
        String zeros = InviteCode.encode(new byte[16]);
        require(zeros.equals("0000-0000-0000-0000-0000-0000-00"), "all-zero code: " + zeros);
        require(InviteCode.normalize("OOOO-0000-IIII-LLLL-0000-0000-00") != null, "O/I/L aliases");
        require(InviteCode.normalize(zeros.substring(0, zeros.length() - 1)) == null, "too short");
        require(InviteCode.normalize(zeros + "0") == null, "too long");
        require(InviteCode.normalize("U" + zeros.substring(1)) == null, "U is not in the alphabet");
        require(InviteCode.normalize("0000-0000-0000-0000-0000-0000-0Z") == null, "non-zero padding bits rejected");
        require(InviteCode.normalize(null) == null && InviteCode.normalize("") == null, "null/empty");
        System.out.println("MultiplayerInviteTests passed");
    }
}
