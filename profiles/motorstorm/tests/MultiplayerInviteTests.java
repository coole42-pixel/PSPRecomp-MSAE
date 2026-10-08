package org.psprecomp.motorstorm;

import java.io.BufferedReader;
import java.io.InputStreamReader;

/**
 * Pure-Java checks of the invite codec, plus a stdin/stdout mode so the same inputs can be run
 * through the native codec (psp_net_probe invite-check) and compared:
 *   java ... MultiplayerInviteTests            self checks
 *   java ... MultiplayerInviteTests gen N      print N generated codes
 *   java ... MultiplayerInviteTests norm       canonical form (or INVALID) for each stdin line
 *   java ... MultiplayerInviteTests join       parsed join code (or INVALID) for each stdin line; compared
 *                                             with the Windows launcher's parser (launcher/windows/tests)
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
        if (args.length >= 1 && args[0].equals("join")) {
            BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
            for (String line; (line = in.readLine()) != null;) {
                JoinCode code = JoinCode.parse(line.replace("\\n", "\n")); // "\n" in a line = a line break
                System.out.println(code == null ? "INVALID" : code.toString());
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
        // join codes
        String inv = InviteCode.generate();
        JoinCode direct = JoinCode.parse(inv + "@192.168.1.20:47900");
        require(direct != null && direct.invite.equals(inv) && "192.168.1.20:47900".equals(direct.address) && !direct.viaRoomServer, "direct join code");
        require(direct.toString().equals(inv + "@192.168.1.20:47900"), "direct round trip");
        JoinCode room = JoinCode.parse("Race me!\nJoin code: " + inv.toLowerCase() + " @ room=rooms.example.com:3478\nThen...");
        require(room != null && room.invite.equals(inv) && "rooms.example.com:3478".equals(room.address) && room.viaRoomServer, "room code inside a message");
        require(JoinCode.parse(inv + "@[fd00::1]:47900").address.equals("[fd00::1]:47900"), "ipv6 address");
        JoinCode bare = JoinCode.parse(inv);
        require(bare != null && bare.address == null && bare.toString().equals(inv), "invite only");
        require(JoinCode.parse(inv + "@1.2.3.4:0") .address == null, "port 0 falls back to invite only");
        require(JoinCode.parse(inv + "@1.2.3.4:70000").address == null, "port out of range");
        require(JoinCode.parse("hello world") == null && JoinCode.parse(null) == null, "no code");
        require(JoinCode.parse("X" + inv + "@1.2.3.4:5") == null, "code glued to other text is not a code");
        require(JoinCode.parse(inv + "@" + "10.0.0.2:47900" + " and " + InviteCode.generate()).address.equals("10.0.0.2:47900"), "first full code wins");
        System.out.println("MultiplayerInviteTests passed");
    }
}
