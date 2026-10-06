package org.psprecomp.motorstorm;
import android.view.Surface;
final class NativeBridge {
    static { System.loadLibrary("motorstorm_android"); }
    static String lastMessage = "";
    static native String probe(Surface surface, String hooks, String driverDir, String driverName, String temp);
}
