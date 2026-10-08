package org.psprecomp.motorstorm;

import android.content.Context;
import android.content.SharedPreferences;
import java.net.Inet4Address;
import java.net.InetAddress;
import java.net.NetworkInterface;
import java.security.SecureRandom;
import java.util.Collections;

/**
 * Private-room multiplayer settings (PSP ad-hoc mode carried over an encrypted UDP transport).
 *
 * A room is identified by an invite code: 16 random bytes shown as 26 Crockford base32
 * characters grouped in fours. The code is the pre-shared key of the room, so treat it like a
 * password. The encoding is byte-for-byte the one the native layer parses
 * (src/net/crypto.cpp: invite_to_string / invite_from_string).
 *
 * Roles
 *   host - creates the room; players join with the invite. With a rendezvous server the host
 *          is found by invite alone (hole punching, relay fallback); without one, joiners need
 *          the host's LAN/public address and port (shown in the dialog).
 *   join - connects to a host using the invite plus either a rendezvous server or a direct
 *          address.
 */
final class MultiplayerSettings {
    static final String MODE = "mp_mode", INVITE = "mp_invite", SERVER = "mp_server", PEER = "mp_peer", NICK = "mp_nick";
    static final String[] MODES = {"off", "host", "join"};
    static final int DEFAULT_PORT = 47900;

    private MultiplayerSettings() {}

    static SharedPreferences prefs(Context c) { return GameSettings.prefs(c); }

    static String mode(Context c) {
        String value = prefs(c).getString(MODE, "off");
        for (String m : MODES) if (m.equals(value)) return value;
        return "off";
    }

    // ------------------------------------------------------------------------------ invites
    static String generateInvite() { return InviteCode.generate(); }
    static String normalizeInvite(String text) { return InviteCode.normalize(text); }

    // ------------------------------------------------------------------------------ addresses
    /** host:port or ip:port; also accepts [ipv6]:port. */
    static boolean validAddress(String text) {
        if (text == null) return false;
        return text.matches("^[A-Za-z0-9.\\-]+:[0-9]{1,5}$") || text.matches("^\\[[0-9A-Fa-f:.]+\\]:[0-9]{1,5}$");
    }

    /** First private IPv4 address of this device (what a LAN player would type), or null. */
    static String lanAddress() {
        try {
            for (NetworkInterface nif : Collections.list(NetworkInterface.getNetworkInterfaces())) {
                if (!nif.isUp() || nif.isLoopback()) continue;
                for (InetAddress a : Collections.list(nif.getInetAddresses()))
                    if (a instanceof Inet4Address && a.isSiteLocalAddress()) return a.getHostAddress();
            }
        } catch (Exception ignored) {}
        return null;
    }

    // ------------------------------------------------------------------------------ launch
    /** Null when the saved settings are usable, otherwise a message for the user. */
    static String validate(Context c) {
        String mode = mode(c);
        if (mode.equals("off")) return null;
        SharedPreferences p = prefs(c);
        if (normalizeInvite(p.getString(INVITE, "")) == null) return "Multiplayer: create or enter a valid invite code";
        String server = p.getString(SERVER, "").trim(), peer = p.getString(PEER, "").trim();
        if (!server.isEmpty() && !validAddress(server)) return "Multiplayer: room server must look like host:port";
        if (mode.equals("join") && server.isEmpty() && !validAddress(peer))
            return "Multiplayer: to join, enter a room server or the host's address (ip:port)";
        return null;
    }

    private static String nickname(SharedPreferences p) {
        String nick = p.getString(NICK, "").replaceAll("[^A-Za-z0-9 _-]", "").trim();
        if (nick.length() > 24) nick = nick.substring(0, 24);
        return nick;
    }

    /**
     * "KEY=VALUE;KEY=VALUE" for the native --env switch, or null when multiplayer is off or
     * misconfigured. Only the PSPRECOMP_MOTORSTORM_NET* variables are ever produced.
     */
    static String envArgument(Context c) {
        if (validate(c) != null || mode(c).equals("off")) return null;
        SharedPreferences p = prefs(c);
        String mode = mode(c), server = p.getString(SERVER, "").trim(), peer = p.getString(PEER, "").trim();
        StringBuilder env = new StringBuilder("PSPRECOMP_MOTORSTORM_NET=").append(mode);
        env.append(";PSPRECOMP_MOTORSTORM_NET_INVITE=").append(normalizeInvite(p.getString(INVITE, "")));
        if (!server.isEmpty()) env.append(";PSPRECOMP_MOTORSTORM_NET_SERVER=").append(server);
        else if (mode.equals("join")) env.append(";PSPRECOMP_MOTORSTORM_NET_PEER=").append(peer);
        if (mode.equals("host")) env.append(";PSPRECOMP_MOTORSTORM_NET_PORT=").append(DEFAULT_PORT);
        String nick = nickname(p);
        if (!nick.isEmpty()) env.append(";PSPRECOMP_MOTORSTORM_NET_NICK=").append(nick);
        return env.toString();
    }
}
