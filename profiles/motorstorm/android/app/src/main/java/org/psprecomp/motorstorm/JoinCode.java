package org.psprecomp.motorstorm;

import java.util.regex.Matcher;
import java.util.regex.Pattern;

/**
 * One string a player pastes to join a room (docs/MULTIPLAYER_JOIN_CODE.md). Pure Java; the
 * Windows launcher has the same parser (launcher/windows/Core/JoinCode.cs).
 *   INVITE                       invite only; the joiner still needs an address
 *   INVITE@192.168.1.20:47900    connect straight to the host
 *   INVITE@room=1.2.3.4:3478     find the host through a rendezvous server
 * Parsing searches free text, so a whole shared chat message works as input.
 */
final class JoinCode {
    static final String ROOM_PREFIX = "room=";
    private static final Pattern TOKEN = Pattern.compile(
        "(?<![0-9A-Za-z])([0-9A-Za-z]{4}(?:[- ]?[0-9A-Za-z]{4}){5}[- ]?[0-9A-Za-z]{2})(?![0-9A-Za-z])"
        + "(?:\\s*@\\s*(room=)?(\\[[0-9A-Fa-f:.]+\\]:\\d{1,5}|[A-Za-z0-9.\\-]+:\\d{1,5}))?");
    private static final Pattern ADDRESS = Pattern.compile("^(?:\\[[0-9A-Fa-f:.]+\\]|[A-Za-z0-9][A-Za-z0-9.\\-]*):(\\d{1,5})$");

    final String invite;
    /** host:port, or null when the code carried no address. */
    final String address;
    final boolean viaRoomServer;

    JoinCode(String invite, String address, boolean viaRoomServer) {
        this.invite = invite;
        this.address = address;
        this.viaRoomServer = viaRoomServer;
    }

    @Override public String toString() {
        return address == null ? invite : invite + "@" + (viaRoomServer ? ROOM_PREFIX : "") + address;
    }

    /** host:port, ip:port or [ipv6]:port with a port of 1-65535. */
    static boolean validAddress(String text) {
        if (text == null) return false;
        Matcher m = ADDRESS.matcher(text);
        if (!m.matches()) return false;
        int port = Integer.parseInt(m.group(1));
        return port >= 1 && port <= 65535;
    }

    /** The first join code (preferring one with an address) found in the text, or null. */
    static JoinCode parse(String text) {
        if (text == null) return null;
        JoinCode inviteOnly = null;
        Matcher m = TOKEN.matcher(text);
        while (m.find()) {
            String invite = InviteCode.normalize(m.group(1));
            if (invite == null) continue;
            if (m.group(3) == null || !validAddress(m.group(3))) {
                if (inviteOnly == null) inviteOnly = new JoinCode(invite, null, false);
                continue;
            }
            return new JoinCode(invite, m.group(3), m.group(2) != null);
        }
        return inviteOnly;
    }
}
