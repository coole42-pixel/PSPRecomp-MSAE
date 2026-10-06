package org.psprecomp.motorstorm;
import android.app.Activity;
import android.os.Bundle;
import android.os.Build;
import android.app.ActivityManager;
import android.view.*;
import android.widget.*;
import org.json.JSONObject;
import java.io.File;
import java.nio.file.Files;
import java.nio.charset.StandardCharsets;

public final class ProbeActivity extends Activity implements SurfaceHolder.Callback {
    private TextView status;
    private boolean busy;
    @Override public void onCreate(Bundle state){
        super.onCreate(state);
        LinearLayout root=new LinearLayout(this);root.setOrientation(LinearLayout.VERTICAL);
        status=new TextView(this);status.setText("Probing Vulkan…");status.setPadding(24,24,24,24);root.addView(status);
        SurfaceView surface=new SurfaceView(this);root.addView(surface,new LinearLayout.LayoutParams(-1,400));
        surface.getHolder().addCallback(this);setContentView(root);
    }
    @Override public void surfaceCreated(SurfaceHolder holder){
        if(busy)return;busy=true;
        new Thread(() -> {
            try{
                File temp=new File(getFilesDir(),"driver-temp");temp.mkdirs();
                String id=getIntent().getStringExtra("driver");
                DriverStore.Driver selected=id==null||id.isEmpty()?null:DriverStore.read(this,id);
                String report=NativeBridge.probe(holder.getSurface(),getApplicationInfo().nativeLibraryDir,
                    selected==null?"":selected.directory().getAbsolutePath(),selected==null?"":selected.library(),temp.getAbsolutePath());
                JSONObject json=new JSONObject(report);
                json.put("android_release",Build.VERSION.RELEASE);json.put("android_sdk",Build.VERSION.SDK_INT);
                json.put("model",Build.MODEL);json.put("fingerprint",Build.FINGERPRINT);
                ActivityManager.MemoryInfo mem=new ActivityManager.MemoryInfo();
                getSystemService(ActivityManager.class).getMemoryInfo(mem);json.put("ram_bytes",mem.totalMem);
                json.put("fallback_message",NativeBridge.lastMessage);
                json.put("requested_driver",selected==null?"System":selected.name());
                File directory=new File(getExternalFilesDir(null),"diagnostics");directory.mkdirs();
                File path=new File(directory,selected==null?"capabilities-system.json":"capabilities-imported.json");
                Files.write(path.toPath(),json.toString(2).getBytes(StandardCharsets.UTF_8));
                String summary=json.toString(2);
                runOnUiThread(() -> status.setText("Report saved to "+path+"\n"+summary));
            }catch(Exception e){runOnUiThread(() -> status.setText("Probe failed: "+e));}
        },"VulkanProbe").start();
    }
    @Override public void surfaceChanged(SurfaceHolder holder,int format,int width,int height){}
    @Override public void surfaceDestroyed(SurfaceHolder holder){}
}
