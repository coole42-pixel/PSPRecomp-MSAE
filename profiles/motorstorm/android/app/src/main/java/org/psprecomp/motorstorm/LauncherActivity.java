package org.psprecomp.motorstorm;
import android.app.Activity;
import android.os.Bundle;
import android.content.Intent;
import android.widget.*;
import java.io.File;
import android.app.AlertDialog;
import java.io.FileInputStream;
import java.util.List;

public final class LauncherActivity extends Activity {
    private TextView status;
    private static final int IMPORT_DRIVER=41, IMPORT_ISO=42, IMPORT_EBOOT=43;
    private Thread importWorker;
    @Override public void onCreate(Bundle state) {
        super.onCreate(state);
        LinearLayout root = new LinearLayout(this); root.setOrientation(LinearLayout.VERTICAL);
        root.setPadding(32,32,32,32);
        TextView title = new TextView(this); title.setText("MotorStorm: Arctic Edge"); title.setTextSize(30);root.addView(title);
        status = new TextView(this);
        status.setText("Android bring-up build\nGame renderer is not ready yet. Run device diagnostics first.");root.addView(status);
        Button probe = new Button(this);probe.setText("Probe Vulkan driver and display");root.addView(probe);
        probe.setOnClickListener(v -> probeSelected());
        Button select=new Button(this);select.setText("Vulkan driver: System / Imported");root.addView(select);
        select.setOnClickListener(v -> {
            List<DriverStore.Driver> drivers=DriverStore.list(this);
            String[] names=new String[drivers.size()+1];names[0]="System (requires ordered attachment support)";
            for(int i=0;i<drivers.size();i++)names[i+1]=drivers.get(i).name();
            new AlertDialog.Builder(this).setTitle("Vulkan driver").setItems(names,(d,which) -> {
                String id=which==0?"":drivers.get(which-1).id();
                getSharedPreferences("settings",0).edit().putString("driver",id).apply();
                status.setText("Selected: "+names[which]);
            }).show();
        });
        Button add=new Button(this);add.setText("Import driver ZIP");root.addView(add);
        add.setOnClickListener(v -> {
            Intent pick=new Intent(Intent.ACTION_OPEN_DOCUMENT).addCategory(Intent.CATEGORY_OPENABLE).setType("*/*");
            startActivityForResult(pick,IMPORT_DRIVER);
        });
        Button iso=new Button(this);iso.setText("Import PSP ISO");root.addView(iso);iso.setOnClickListener(v -> pick(IMPORT_ISO));
        Button eboot=new Button(this);eboot.setText("Select decrypted EBOOT");root.addView(eboot);eboot.setOnClickListener(v -> pick(IMPORT_EBOOT));
        Button cancel=new Button(this);cancel.setText("Cancel import");root.addView(cancel);
        cancel.setOnClickListener(v -> {if(importWorker!=null)importWorker.interrupt();});
        Button settings=new Button(this);settings.setText("Game settings");root.addView(settings);
        settings.setOnClickListener(v -> {
            LinearLayout options=new LinearLayout(this);options.setOrientation(LinearLayout.VERTICAL);options.setPadding(28,12,28,12);
            TextView resolutionLabel=new TextView(this);resolutionLabel.setText("Internal resolution (applies next launch)");options.addView(resolutionLabel);
            Spinner scale=new Spinner(this);scale.setAdapter(new ArrayAdapter<>(this,android.R.layout.simple_spinner_dropdown_item,
                new String[]{"Full (matches the display, default)","1× (480×272)","2×","3×","4×"}));
            scale.setSelection(GameSettings.resolution(this));options.addView(scale);
            CheckBox audio=new CheckBox(this);audio.setText("Sound and music");audio.setChecked(GameSettings.prefs(this).getBoolean("audio",true));options.addView(audio);
            CheckBox fxaa=new CheckBox(this);fxaa.setText("FXAA");fxaa.setChecked(GameSettings.prefs(this).getBoolean("fxaa",false));options.addView(fxaa);
            TextView scaleModeLabel=new TextView(this);scaleModeLabel.setText("Render scale");options.addView(scaleModeLabel);
            Spinner scaleMode=new Spinner(this);
            String[] modes=new String[]{"Off (always full)","Fixed scale","Dynamic in gameplay (menus stay full)"};
            scaleMode.setAdapter(new ArrayAdapter<>(this,android.R.layout.simple_spinner_dropdown_item,modes));
            String savedMode=GameSettings.prefs(this).getString("scale_mode","dynamic");
            scaleMode.setSelection(savedMode.equals("off")?0:savedMode.equals("fixed")?1:2);
            options.addView(scaleMode);
            TextView minLabel=new TextView(this);minLabel.setText("Lowest gameplay resolution (dynamic)");options.addView(minLabel);
            Spinner minScale=new Spinner(this);
            minScale.setAdapter(new ArrayAdapter<>(this,android.R.layout.simple_spinner_dropdown_item,new String[]{"50%","60%","70%","80%","90%"}));
            minScale.setSelection(Math.max(0,java.util.Arrays.asList(GameSettings.MIN_SCALES).indexOf(GameSettings.prefs(this).getString("scale_min","0.20"))));
            options.addView(minScale);
            TextView sharpLabel=new TextView(this);sharpLabel.setText("SGSR sharpness (1 to 2)");options.addView(sharpLabel);
            android.widget.EditText sharp=new android.widget.EditText(this);
            sharp.setText(GameSettings.prefs(this).getString("sgsr_sharpness","2.0"));
            options.addView(sharp);
            TextView info=new TextView(this);info.setText("Original 30 fps · PSP filtering · effects off\nMenus, pause and movies always render at full resolution. In a race, dynamic scale lowers resolution only when GPU time exceeds the frame budget; SGSR 1 upscales to the display.");options.addView(info);
            new AlertDialog.Builder(this).setTitle("Game settings").setView(options).setPositiveButton("Save",(d,w) -> {
                String mode=scaleMode.getSelectedItemPosition()==0?"off":scaleMode.getSelectedItemPosition()==1?"fixed":"dynamic";
                String sharpness=sharp.getText().toString().trim();
                if(sharpness.isEmpty())sharpness="2.0";
                try{float value=Float.parseFloat(sharpness);sharpness=Float.toString(Math.max(1f,Math.min(2f,value)));}catch(NumberFormatException e){sharpness="2.0";}
                GameSettings.prefs(this).edit().putInt(GameSettings.RESOLUTION,scale.getSelectedItemPosition()).putBoolean("audio",audio.isChecked())
                    .putBoolean("fxaa",fxaa.isChecked()).putString("scale_mode",mode).putString("sgsr_sharpness",sharpness)
                    .putString("scale_min",GameSettings.MIN_SCALES[minScale.getSelectedItemPosition()]).apply();
            }).setNegativeButton("Cancel",null).show();
        });
        Button play=new Button(this);play.setText("Play (development build)");root.addView(play);
        play.setOnClickListener(v -> {
            if(!GameStore.ready(this)){status.setText("Import an ISO and matching decrypted EBOOT first");return;}
            startActivity(new Intent(this,GameActivity.class));
        });
        TextView location = new TextView(this);location.setText("Reports: "+new File(getExternalFilesDir(null),"diagnostics"));root.addView(location);
        setContentView(root);
        // Debug automation only accepts a file within this app's external directory.
        if((getApplicationInfo().flags & android.content.pm.ApplicationInfo.FLAG_DEBUGGABLE)!=0 &&
            getIntent().hasExtra("import_driver")){
            try{
                File source=new File(getExternalFilesDir(null),getIntent().getStringExtra("import_driver"));
                if(!source.getCanonicalPath().startsWith(getExternalFilesDir(null).getCanonicalPath()+File.separator))
                    throw new java.io.IOException("Invalid automation input path");
                importDriver(new FileInputStream(source));
            }catch(Exception e){status.setText("Driver import failed: "+e);}
        }
        if((getApplicationInfo().flags & android.content.pm.ApplicationInfo.FLAG_DEBUGGABLE)!=0){
            for(String key:new String[]{"import_iso","import_eboot"})if(getIntent().hasExtra(key))try{
                File source=new File(getExternalFilesDir(null),getIntent().getStringExtra(key));
                if(!source.getCanonicalPath().startsWith(getExternalFilesDir(null).getCanonicalPath()+File.separator))throw new java.io.IOException("Invalid automation input");
                importGame(key.equals("import_iso")?IMPORT_ISO:IMPORT_EBOOT,new FileInputStream(source));
            }catch(Exception e){status.setText("Import failed: "+e);}
        }
    }
    private void pick(int request){startActivityForResult(new Intent(Intent.ACTION_OPEN_DOCUMENT).addCategory(Intent.CATEGORY_OPENABLE).setType("*/*"),request);}
    private void importGame(int kind,java.io.InputStream stream){
        if(importWorker!=null&&importWorker.isAlive()){try{stream.close();}catch(Exception ignored){}status.setText("An import is already running");return;}
        importWorker=new Thread(() -> {try{
            if(kind==IMPORT_ISO)GameStore.importIso(this,stream,message -> runOnUiThread(() -> status.setText(message)));
            else {GameStore.importEboot(this,stream);runOnUiThread(() -> status.setText("Decrypted EBOOT matches. Game data ready: "+GameStore.ready(this)));}
        }catch(Exception e){runOnUiThread(() -> status.setText("Import failed: "+e));}},"GameImport");importWorker.start();
    }
    private void probeSelected(){startActivity(new Intent(this,ProbeActivity.class).putExtra("driver",
        getSharedPreferences("settings",0).getString("driver","")));}
    private void importDriver(java.io.InputStream stream){
        status.setText("Importing driver…");
        new Thread(() -> {try{
            DriverStore.Driver driver=DriverStore.importZip(this,stream);
            getSharedPreferences("settings",0).edit().putString("driver",driver.id()).commit();
            runOnUiThread(() -> {status.setText("Imported: "+driver.name());probeSelected();});
        }catch(Exception e){runOnUiThread(() -> status.setText("Driver import failed: "+e));}},"DriverImport").start();
    }
    @Override protected void onActivityResult(int request,int result,Intent data){
        super.onActivityResult(request,result,data);
        if(request==IMPORT_DRIVER && result==RESULT_OK && data!=null)try{
            importDriver(getContentResolver().openInputStream(data.getData()));
        }catch(Exception e){status.setText("Cannot read selected driver: "+e);}
        if((request==IMPORT_ISO||request==IMPORT_EBOOT)&&result==RESULT_OK&&data!=null)try{
            importGame(request,getContentResolver().openInputStream(data.getData()));
        }catch(Exception e){status.setText("Cannot read selected file: "+e);}
    }
}
