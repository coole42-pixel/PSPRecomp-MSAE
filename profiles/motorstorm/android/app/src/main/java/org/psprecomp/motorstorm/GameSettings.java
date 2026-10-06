package org.psprecomp.motorstorm;
import android.content.Context;
import android.content.SharedPreferences;
import java.io.*;
import java.nio.file.*;
import java.nio.charset.StandardCharsets;
import java.util.*;

final class GameSettings {
    /** Internal resolution: 0 = full (matches the display), 1-4 = fixed PSP multiple. */
    static final String RESOLUTION = "internal_resolution";
    static final String[] MIN_SCALES = {"0.20", "0.30", "0.40", "0.50", "0.60", "0.70", "0.80", "0.90"};
    private static final int KEEP_SESSIONS = 3;

    static SharedPreferences prefs(Context c){return c.getSharedPreferences("settings",0);}
    /** Debug/benchmark launches may override the saved resolution for one session. */
    static int override=-1;
    static String scaleOverride;
    static int resolution(Context c){
        int value=override>=0?override:prefs(c).getInt(RESOLUTION,0);
        return value<0||value>4?0:value;
    }
    static File session(Context c)throws Exception{
        File root=c.getExternalFilesDir(null);File data=GameStore.root(c);
        removeOldSessions(root);
        int resolution=resolution(c);
        File output=new File(root,"session-"+System.currentTimeMillis()+".ini");
        // Full resolution is chosen natively from the display; the INI keeps a
        // valid fixed value for the shared config parser.
        String content="[graphics]\nrenderer = vulkan\nresolution = "+(resolution==0?1:resolution)+"\nantialiasing = "+
            (prefs(c).getBoolean("fxaa",false)?"FXAA":"None")+"\ntexture_filtering = psp\nfps = original\n"+
            "dynamic_fps = false\nvsync = true\nwidescreen = auto\nrender_distance = normal\nless_pop_in = true\n"+
            "[enhancements]\nenabled = false\n[window]\nenabled = true\nfullscreen = true\n"+
            "[audio]\napi = sdl\nenabled = "+prefs(c).getBoolean("audio",true)+"\n"+
            "[controller]\napi = sdl\nenabled = true\n[textures]\nreplace = false\nbudget_mb = 128\n"+
            "[paths]\neboot = "+new File(data,"EBOOT_DECRYPTED.BIN")+"\ndisc_root = "+new File(data,"disc0")+"\n"+
            "[logging]\nlog_file = "+new File(root,"MotorStormAndroid.log")+"\n";
        Files.write(output.toPath(),content.getBytes(StandardCharsets.UTF_8),StandardOpenOption.CREATE_NEW);
        return output;
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
        String mode=scaleOverride!=null?scaleOverride:prefs(c).getString("scale_mode","dynamic");
        if(!mode.equals("off")&&!mode.equals("fixed")&&!mode.equals("dynamic"))mode="dynamic";
        return new String[]{"--config",session.getAbsolutePath(),"--native-lib",c.getApplicationInfo().nativeLibraryDir,
            "--driver-dir",driver==null?"":driver.directory().getAbsolutePath()+"/",
            "--driver-name",driver==null?"":driver.library(),"--driver-temp",temp.getAbsolutePath(),
            "--savedata",saves(c).getAbsolutePath(),
            "--resolution-mode",resolution(c)==0?"auto":"fixed",
            "--scale-mode",mode,"--scale",prefs(c).getString("scale","0.75"),
            "--scale-min",prefs(c).getString("scale_min","0.20"),
            "--scale-max",prefs(c).getString("scale_max","1.00"),
            "--sgsr-sharpness",prefs(c).getString("sgsr_sharpness","2.0")};
    }
}
