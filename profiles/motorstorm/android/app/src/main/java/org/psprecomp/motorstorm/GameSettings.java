package org.psprecomp.motorstorm;
import android.content.Context;
import android.content.SharedPreferences;
import java.io.*;
import java.nio.file.*;
import java.nio.charset.StandardCharsets;
import java.util.*;

final class GameSettings {
    /** Internal resolution: 0 = full (matches the display), 1-5 = fixed PSP multiple. */
    static final String RESOLUTION = "internal_resolution";
    static final String LOGGING_MODE = "logging_mode";
    static final String TOUCH_UI = "touch_ui";
    static final String[] LOGGING_MODES = {"standard", "verbose", "off"};
    static final String[] MIN_SCALES = {"0.50", "0.60", "0.70", "0.80", "0.90"};
    static final String[] MAX_SCALES = {"0.50", "0.60", "0.70", "0.80", "0.90", "1.00"};
    static final String[] FIXED_SCALES = {"0.50", "0.60", "0.70", "0.75", "0.80", "0.90", "1.00"};
    private static final int KEEP_SESSIONS = 3;

    static SharedPreferences prefs(Context c){return c.getSharedPreferences("settings",0);}
    /** Apply the shipped graphics preset once, including existing installs. */
    static void migrateVisualSettings(Context c){
        if(prefs(c).getInt("visual_settings_version",0)<2)resetGraphics(c);
    }
    static void resetGraphics(Context c){
        prefs(c).edit().putInt(RESOLUTION,2).putBoolean("fxaa",false)
            .putString("scale_mode","off").putString("scale","0.75")
            .putString("scale_min","0.50").putString("scale_max","1.00")
            .putString("sgsr_sharpness","2.0").putString("fps","original")
            .putBoolean("dynamic_fps",false).putBoolean("enhanced_filtering",false)
            .putString("render_distance","low").putBoolean("less_pop_in",false)
            .putBoolean("effects",false).putBoolean("sharpening",false)
            .putBoolean("color_correction",false).putBoolean("soft_particles",false)
            .putBoolean("rumble",false).putString(LOGGING_MODE,"standard")
            .putInt("visual_settings_version",2).apply();
    }
    static File logsDirectory(Context c){
        File dir=new File(c.getExternalFilesDir(null),"logs");
        if(!dir.exists())dir.mkdirs();
        return dir;
    }
    /** Debug/benchmark launches may override the saved resolution for one session. */
    static int override=-1;
    static String scaleOverride;
    static boolean benchmark;
    static int benchmarkFps=60;
    static int resolution(Context c){
        int value=override>=0?override:prefs(c).getInt(RESOLUTION,2);
        if(override>=0 && value>5)throw new IllegalArgumentException("Benchmark resolution must be 0 through 5");
        return value<0||value>5?2:value;
    }
    static File session(Context c)throws Exception{
        migrateVisualSettings(c);
        File root=c.getExternalFilesDir(null);File data=GameStore.root(c);
        removeOldSessions(root);
        int resolution=resolution(c);
        File output=new File(root,"session-"+System.currentTimeMillis()+".ini");
        String loggingMode=benchmark?"standard":choice(c,LOGGING_MODE,"standard",LOGGING_MODES);
        File logFile=loggingMode.equals("off")?null:(benchmark?new File(root,"MotorStormAndroid.log"):new File(logsDirectory(c),"MotorStorm.log"));
        boolean verbose=loggingMode.equals("verbose");
        // Full resolution is chosen natively from the display; the INI keeps a
        // valid fixed value for the shared config parser.
        String content="[graphics]\nrenderer = vulkan\nresolution = "+(resolution==0?1:resolution)+"\nantialiasing = "+
            (!benchmark&&prefs(c).getBoolean("fxaa",false)?"FXAA":"None")+"\ntexture_filtering = "+
            (!benchmark&&prefs(c).getBoolean("enhanced_filtering",false)?"enhanced":"psp")+"\nfps = "+
            (benchmark?(benchmarkFps==0?"original":Integer.toString(benchmarkFps)):choice(c,"fps","original",new String[]{"original","60"}))+"\n"+
            "dynamic_fps = "+(!benchmark&&prefs(c).getBoolean("dynamic_fps",false))+"\nvsync = true\nwidescreen = auto\nrender_distance = "+
            (benchmark?"low":choice(c,"render_distance","low",new String[]{"low","normal","high","ultra"}))+
            "\nless_pop_in = "+(!benchmark&&prefs(c).getBoolean("less_pop_in",false))+"\n"+
            "[enhancements]\nenabled = "+(!benchmark&&prefs(c).getBoolean("effects",false))+
            "\ncolor_depth = 16\ncolor_correction = "+prefs(c).getBoolean("color_correction",false)+
            "\nsharpening = "+prefs(c).getBoolean("sharpening",false)+
            "\nsoft_particles = "+prefs(c).getBoolean("soft_particles",false)+
            "\n[window]\nenabled = true\nfullscreen = true\n"+
            "[audio]\napi = sdl\nenabled = "+prefs(c).getBoolean("audio",true)+"\n"+
            "[controller]\napi = sdl\nenabled = true\nrumble = "+prefs(c).getBoolean("rumble",false)+
            "\ntrigger_rumble = false\n[textures]\nreplace = false\nbudget_mb = 128\n"+
            "[paths]\neboot = "+new File(data,"EBOOT_DECRYPTED.BIN")+"\ndisc_root = "+new File(data,"disc0")+"\n"+
            "[logging]\nlog_file = "+(logFile!=null?logFile.getAbsolutePath():"off")+
            "\ntrace_imports = "+verbose+
            "\ntrace_filesystem = "+verbose+
            "\nverbose = "+verbose+"\n";
        Files.write(output.toPath(),content.getBytes(StandardCharsets.UTF_8),StandardOpenOption.CREATE_NEW);
        return output;
    }
    static String choice(Context c,String key,String fallback,String[] allowed){
        String value=prefs(c).getString(key,fallback);
        return Arrays.asList(allowed).contains(value)?value:fallback;
    }
    /** Every launch writes an immutable session INI; keep only the newest few. */
    private static void removeOldSessions(File root){
        File[] sessions=root==null?null:root.listFiles((dir,name)->name.startsWith("session-")&&name.endsWith(".ini"));
        if(sessions==null||sessions.length<KEEP_SESSIONS)return;
        Arrays.sort(sessions,(a,b)->Long.compare(b.lastModified(),a.lastModified()));
        for(int i=KEEP_SESSIONS-1;i<sessions.length;i++)if(!sessions[i].delete())android.util.Log.w("MotorStorm","Cannot remove "+sessions[i]);
    }
    /**
     * Returns a save directory the game process can list and write. A folder
     * created from outside the app (for example with adb push) belongs to the
     * shell user, and the game then fails every savedata call with "Permission
     * denied" and never starts a race. Such a folder is moved aside, never
     * deleted, and a new app-owned folder takes its place.
     */
    static File writableDirectory(File directory){
        if(usable(directory))return directory;
        if(directory.exists()){
            File aside=new File(directory.getParentFile(),directory.getName()+".inaccessible-"+System.currentTimeMillis());
            if(directory.renameTo(aside))android.util.Log.w("MotorStorm","Moved unusable "+directory+" to "+aside);
        }
        if(usable(directory))return directory;
        File fallback=new File(directory.getParentFile(),directory.getName()+"-app");
        android.util.Log.w("MotorStorm","Using "+fallback+" for saves; "+directory+" is not writable");
        fallback.mkdirs();
        return fallback;
    }
    private static boolean usable(File directory){
        directory.mkdirs();
        File probe=new File(directory,".write-test");
        try{
            if(directory.list()==null)return false;
            try(FileOutputStream out=new FileOutputStream(probe)){out.write(0);}
            File child=new File(directory,".dir-test");
            boolean made=child.mkdir()||child.isDirectory();
            child.delete();
            return made;
        }catch(IOException e){return false;}
        finally{probe.delete();}
    }
    static File saves(Context c){return writableDirectory(new File(c.getExternalFilesDir(null),"SAVEDATA"));}
    static String[] arguments(Context c,File session)throws Exception{
        File temp=new File(c.getFilesDir(),"driver-temp");temp.mkdirs();
        String selected=prefs(c).getString("driver","");
        DriverStore.Driver driver=selected.isEmpty()?null:DriverStore.read(c,selected);
        String mode=scaleOverride!=null?scaleOverride:benchmark?"off":prefs(c).getString("scale_mode","off");
        if(!mode.equals("off")&&!mode.equals("fixed")&&!mode.equals("dynamic"))mode="off";
        String loggingMode=benchmark?"standard":choice(c,LOGGING_MODE,"standard",LOGGING_MODES);
        return new String[]{"--config",session.getAbsolutePath(),"--native-lib",c.getApplicationInfo().nativeLibraryDir,
            "--driver-dir",driver==null?"":driver.directory().getAbsolutePath()+"/",
            "--driver-name",driver==null?"":driver.library(),"--driver-temp",temp.getAbsolutePath(),
            "--savedata",saves(c).getAbsolutePath(),
            "--resolution-mode",resolution(c)==0?"auto":"fixed",
            "--scale-mode",mode,"--scale",prefs(c).getString("scale","0.75"),
            "--scale-min",prefs(c).getString("scale_min","0.50"),
            "--scale-max",prefs(c).getString("scale_max","1.00"),
            "--sgsr-sharpness",prefs(c).getString("sgsr_sharpness","2.0"),
            "--logging-mode",loggingMode};
    }
}
