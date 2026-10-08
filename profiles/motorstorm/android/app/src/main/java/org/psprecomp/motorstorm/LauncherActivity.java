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
    private Button loggingToggle;
    private static final int IMPORT_DRIVER=41, IMPORT_ISO=42, IMPORT_EBOOT=43;
    private Thread importWorker;

    @Override protected void onResume() {
        super.onResume();
        if(loggingToggle!=null)updateLoggingToggleText(loggingToggle);
    }

    private void updateLoggingToggleText(Button b){
        String mode=GameSettings.choice(this,GameSettings.LOGGING_MODE,"standard",GameSettings.LOGGING_MODES);
        String label=mode.equals("verbose")?"Verbose (traces)":(mode.equals("off")?"Off":"Standard");
        b.setText("Logging mode: "+label);
    }

    @Override public void onCreate(Bundle state) {
        super.onCreate(state);
        GameSettings.migrateVisualSettings(this);
        LinearLayout root = new LinearLayout(this); root.setOrientation(LinearLayout.VERTICAL);
        root.setPadding(32,32,32,32);
        TextView title = new TextView(this); title.setText("MotorStorm: Arctic Edge"); title.setTextSize(30);root.addView(title);
        status = new TextView(this);
        status.setText(GameStore.ready(this)?"Ready to play":"Import your game files to start.");root.addView(status);
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
        settings.setOnClickListener(v -> showSettings());
        Button multiplayer=new Button(this);multiplayer.setText(multiplayerLabel());root.addView(multiplayer);
        multiplayer.setOnClickListener(v -> showMultiplayer(multiplayer));
        loggingToggle=new Button(this);
        updateLoggingToggleText(loggingToggle);
        loggingToggle.setOnClickListener(v -> {
            String current=GameSettings.choice(this,GameSettings.LOGGING_MODE,"standard",GameSettings.LOGGING_MODES);
            int nextIdx=(java.util.Arrays.asList(GameSettings.LOGGING_MODES).indexOf(current)+1)%GameSettings.LOGGING_MODES.length;
            String next=GameSettings.LOGGING_MODES[nextIdx];
            GameSettings.prefs(this).edit().putString(GameSettings.LOGGING_MODE,next).apply();
            updateLoggingToggleText(loggingToggle);
            Toast.makeText(this,"Logging mode set to: "+next.toUpperCase(),Toast.LENGTH_SHORT).show();
        });
        root.addView(loggingToggle);
        Button viewLogs=new Button(this);viewLogs.setText("View saved logs / crash info");root.addView(viewLogs);
        viewLogs.setOnClickListener(v -> showLogsDialog());
        Button play=new Button(this);play.setText("Play");root.addView(play);
        play.setOnClickListener(v -> {
            if(!GameStore.ready(this)){status.setText("Import an ISO and matching decrypted EBOOT first");return;}
            String multiplayerProblem=MultiplayerSettings.validate(this);
            if(multiplayerProblem!=null){status.setText(multiplayerProblem);return;}
            startActivity(new Intent(this,GameActivity.class));
        });
        TextView location = new TextView(this);location.setText("Reports: "+new File(getExternalFilesDir(null),"diagnostics"));root.addView(location);
        TextView logsLocation = new TextView(this);logsLocation.setText("Logs: "+GameSettings.logsDirectory(this));root.addView(logsLocation);
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
    private Spinner settingChoice(LinearLayout root,String label,String[] labels,int selected){
        TextView text=new TextView(this);text.setText(label);root.addView(text);
        Spinner choice=new Spinner(this);
        choice.setAdapter(new ArrayAdapter<>(this,android.R.layout.simple_spinner_dropdown_item,labels));
        choice.setSelection(Math.max(0,Math.min(labels.length-1,selected)));root.addView(choice);return choice;
    }
    private CheckBox settingToggle(LinearLayout root,String label,String key,boolean fallback){
        CheckBox box=new CheckBox(this);box.setText(label);box.setChecked(GameSettings.prefs(this).getBoolean(key,fallback));
        root.addView(box);return box;
    }
    private String multiplayerLabel(){
        String mode=MultiplayerSettings.mode(this);
        return mode.equals("host")?"Multiplayer: hosting a private room":mode.equals("join")?"Multiplayer: joining a private room":"Multiplayer (ad-hoc, private rooms): off";
    }
    private EditText multiplayerField(LinearLayout root,String label,String hint,String value){
        TextView text=new TextView(this);text.setText(label);root.addView(text);
        EditText field=new EditText(this);field.setHint(hint);field.setText(value);field.setSingleLine(true);root.addView(field);return field;
    }
    /** Host or join a private room. In-game, open Wreckreation > Multiplayer > Adhoc, then Create or Join Game. */
    private void showMultiplayer(Button launcherButton){
        android.content.SharedPreferences prefs=MultiplayerSettings.prefs(this);
        LinearLayout options=new LinearLayout(this);options.setOrientation(LinearLayout.VERTICAL);options.setPadding(28,12,28,12);
        ScrollView scroll=new ScrollView(this);scroll.addView(options);
        TextView info=new TextView(this);
        info.setText("Race friends over the internet or your Wi-Fi in the game's own Ad-hoc mode. One player hosts and shares the invite code; everyone else joins with it. "
            +"Traffic is encrypted with the code, so keep it private. After pressing Play, open Wreckreation > Multiplayer > Adhoc, then Create Game (host) or Join Game.");
        options.addView(info);
        String[] modeLabels={"Off (single player)","Host a room","Join a room"};
        Spinner mode=settingChoice(options,"Role",modeLabels,java.util.Arrays.asList(MultiplayerSettings.MODES).indexOf(MultiplayerSettings.mode(this)));
        EditText invite=multiplayerField(options,"Invite code","XXXX-XXXX-XXXX-XXXX-XXXX-XX",prefs.getString(MultiplayerSettings.INVITE,""));
        LinearLayout inviteButtons=new LinearLayout(this);inviteButtons.setOrientation(LinearLayout.HORIZONTAL);options.addView(inviteButtons);
        Button fresh=new Button(this);fresh.setText("New code");inviteButtons.addView(fresh);
        Button copy=new Button(this);copy.setText("Copy");inviteButtons.addView(copy);
        Button share=new Button(this);share.setText("Share");inviteButtons.addView(share);
        fresh.setOnClickListener(v -> invite.setText(MultiplayerSettings.generateInvite()));
        copy.setOnClickListener(v -> {
            String code=MultiplayerSettings.normalizeInvite(invite.getText().toString());
            if(code==null){Toast.makeText(this,"Not a valid invite code",Toast.LENGTH_SHORT).show();return;}
            ((android.content.ClipboardManager)getSystemService(CLIPBOARD_SERVICE)).setPrimaryClip(android.content.ClipData.newPlainText("MotorStorm invite",code));
            Toast.makeText(this,"Invite code copied",Toast.LENGTH_SHORT).show();
        });
        share.setOnClickListener(v -> {
            String code=MultiplayerSettings.normalizeInvite(invite.getText().toString());
            if(code==null){Toast.makeText(this,"Not a valid invite code",Toast.LENGTH_SHORT).show();return;}
            Intent send=new Intent(Intent.ACTION_SEND).setType("text/plain").putExtra(Intent.EXTRA_TEXT,"Join my MotorStorm room: "+code);
            startActivity(Intent.createChooser(send,"Share invite code"));
        });
        EditText server=multiplayerField(options,"Room server (optional, host:port) - lets players find the host by code and handles NAT",
            "example.com:3478",prefs.getString(MultiplayerSettings.SERVER,""));
        EditText peer=multiplayerField(options,"Host address when joining without a server (ip:port)",
            "192.168.1.20:"+MultiplayerSettings.DEFAULT_PORT,prefs.getString(MultiplayerSettings.PEER,""));
        EditText nick=multiplayerField(options,"Your name in the room","Player",prefs.getString(MultiplayerSettings.NICK,""));
        TextView lan=new TextView(this);
        String lanAddress=MultiplayerSettings.lanAddress();
        lan.setText("If you host without a server, tell joiners to use: "+(lanAddress==null?"(no Wi-Fi address found)":lanAddress+":"+MultiplayerSettings.DEFAULT_PORT));
        options.addView(lan);
        AlertDialog dialog=new AlertDialog.Builder(this).setTitle("Multiplayer").setView(scroll)
            .setPositiveButton("Save",null).setNegativeButton("Cancel",null).create();
        dialog.setOnShowListener(ignored -> dialog.getButton(AlertDialog.BUTTON_POSITIVE).setOnClickListener(v -> {
            String selected=MultiplayerSettings.MODES[mode.getSelectedItemPosition()];
            String code=MultiplayerSettings.normalizeInvite(invite.getText().toString());
            if(!selected.equals("off")&&code==null&&selected.equals("host")){code=MultiplayerSettings.generateInvite();invite.setText(code);}
            if(!selected.equals("off")&&code==null){Toast.makeText(this,"Enter the invite code you were given",Toast.LENGTH_LONG).show();return;}
            String serverText=server.getText().toString().trim(),peerText=peer.getText().toString().trim();
            if(!serverText.isEmpty()&&!MultiplayerSettings.validAddress(serverText)){Toast.makeText(this,"Room server must look like host:port",Toast.LENGTH_LONG).show();return;}
            if(selected.equals("join")&&serverText.isEmpty()&&!MultiplayerSettings.validAddress(peerText)){
                Toast.makeText(this,"Enter a room server or the host's address (ip:port)",Toast.LENGTH_LONG).show();return;
            }
            prefs.edit().putString(MultiplayerSettings.MODE,selected).putString(MultiplayerSettings.INVITE,code==null?"":code)
                .putString(MultiplayerSettings.SERVER,serverText).putString(MultiplayerSettings.PEER,peerText)
                .putString(MultiplayerSettings.NICK,nick.getText().toString()).apply();
            launcherButton.setText(multiplayerLabel());
            dialog.dismiss();
        }));
        dialog.show();
    }
    private int settingIndex(String key,String fallback,String[] values){
        return java.util.Arrays.asList(values).indexOf(GameSettings.choice(this,key,fallback,values));
    }
    private void showSettings(){
        LinearLayout options=new LinearLayout(this);options.setOrientation(LinearLayout.VERTICAL);options.setPadding(28,12,28,12);
        ScrollView scroll=new ScrollView(this);scroll.addView(options);
        TextView info=new TextView(this);
        info.setText("Default: 2x resolution, original 30 fps, low draw distance, optional effects off. Changes apply next launch. Menus and races always fill the screen.");options.addView(info);
        Spinner resolution=settingChoice(options,"Internal resolution",new String[]{"Full (matches display)","1x (480 x 272)","2x (960 x 544, default)","3x","4x","5x (2400 x 1360)"},GameSettings.resolution(this));
        String[] fpsValues={"original","60"};
        Spinner fps=settingChoice(options,"Frame rate",new String[]{"Original (30 fps, default)","60 fps"},settingIndex("fps","original",fpsValues));
        CheckBox dynamicFps=settingToggle(options,"Fall back to 30 fps when 60 fps cannot be sustained","dynamic_fps",false);
        CheckBox fxaa=settingToggle(options,"FXAA antialiasing","fxaa",false);
        CheckBox filtering=settingToggle(options,"Enhanced texture filtering (anisotropic and mipmaps)","enhanced_filtering",false);
        String[] distanceValues={"low","normal","high","ultra"};
        Spinner distance=settingChoice(options,"Draw distance",new String[]{"Low (default)","Normal","High","Ultra"},settingIndex("render_distance","low",distanceValues));
        CheckBox popIn=settingToggle(options,"Fade distant objects to reduce pop-in","less_pop_in",false);
        CheckBox frameSkip=settingToggle(options,"Skip race frames when the game falls behind (keeps speed and sound steady)","frame_skip",true);
        String[] frameGenValues={"off","zero","reallyzero"};
        Spinner frameGen=settingChoice(options,"Frame generation in races (ZeroFG)",new String[]{"Off (default)","Zero (best image, doubles the frame rate shown)","ReallyZero (faster, for weaker GPUs)"},settingIndex("frame_generation","off",frameGenValues));
        String[] frameGenWidths={"1280","1600","1920"};
        Spinner frameGenWidth=settingChoice(options,"Frame generation picture size",new String[]{"1280 px wide (fast, default)","1600 px wide","1920 px wide (sharpest, slowest)"},settingIndex("frame_generation_width","1280",frameGenWidths));
        String[] modeValues={"off","fixed","dynamic"};
        Spinner mode=settingChoice(options,"Render scale",new String[]{"Off (stable resolution, default)","Fixed scale","Dynamic during gameplay"},settingIndex("scale_mode","off",modeValues));
        Spinner fixed=settingChoice(options,"Fixed render scale",new String[]{"50%","60%","70%","75%","80%","90%","100%"},settingIndex("scale","0.75",GameSettings.FIXED_SCALES));
        Spinner min=settingChoice(options,"Dynamic minimum resolution",new String[]{"50%","60%","70%","80%","90%"},settingIndex("scale_min","0.50",GameSettings.MIN_SCALES));
        Spinner max=settingChoice(options,"Dynamic maximum resolution",new String[]{"50%","60%","70%","80%","90%","100%"},settingIndex("scale_max","1.00",GameSettings.MAX_SCALES));
        String[] sharpValues={"1.0","1.5","2.0"};
        Spinner sharp=settingChoice(options,"Upscaler sharpness (fixed/dynamic scale)",new String[]{"1.0 (soft)","1.5","2.0 (sharp)"},settingIndex("sgsr_sharpness","2.0",sharpValues));
        CheckBox effects=settingToggle(options,"Enable optional race effects","effects",false);
        CheckBox color=settingToggle(options,"Color correction (requires race effects)","color_correction",false);
        CheckBox sharpen=settingToggle(options,"Sharpening (requires race effects)","sharpening",false);
        CheckBox particles=settingToggle(options,"Soft particles (requires race effects)","soft_particles",false);
        CheckBox audio=settingToggle(options,"Sound and music","audio",true);
        CheckBox rumble=settingToggle(options,"Controller vibration","rumble",false);
        CheckBox touchUi=settingToggle(options,"Show touch controls (hide automatically after controller input)",GameSettings.TOUCH_UI,true);
        String[] loggingLabels={"Standard (essential events & crashes)","Verbose (full traces & filesystem)","Off (no log file)"};
        Spinner logging=settingChoice(options,"Logging mode",loggingLabels,settingIndex(GameSettings.LOGGING_MODE,"standard",GameSettings.LOGGING_MODES));
        AlertDialog dialog=new AlertDialog.Builder(this).setTitle("Game settings").setView(scroll)
            .setPositiveButton("Save",null).setNegativeButton("Cancel",null).setNeutralButton("Reset defaults",null).create();
        dialog.setOnShowListener(ignored -> {
            dialog.getButton(AlertDialog.BUTTON_POSITIVE).setOnClickListener(v -> {
                String minimum=GameSettings.MIN_SCALES[min.getSelectedItemPosition()];
                String maximum=GameSettings.MAX_SCALES[max.getSelectedItemPosition()];
                if(Float.parseFloat(minimum)>Float.parseFloat(maximum)){
                    Toast.makeText(this,"Dynamic minimum must not exceed maximum",Toast.LENGTH_SHORT).show();return;
                }
                GameSettings.prefs(this).edit().putInt(GameSettings.RESOLUTION,resolution.getSelectedItemPosition())
                    .putString("fps",fpsValues[fps.getSelectedItemPosition()]).putBoolean("dynamic_fps",dynamicFps.isChecked())
                    .putBoolean("fxaa",fxaa.isChecked()).putBoolean("enhanced_filtering",filtering.isChecked())
                    .putString("render_distance",distanceValues[distance.getSelectedItemPosition()]).putBoolean("less_pop_in",popIn.isChecked())
                    .putBoolean("frame_skip",frameSkip.isChecked())
                    .putString("frame_generation",frameGenValues[frameGen.getSelectedItemPosition()])
                    .putString("frame_generation_width",frameGenWidths[frameGenWidth.getSelectedItemPosition()])
                    .putString("scale_mode",modeValues[mode.getSelectedItemPosition()]).putString("scale",GameSettings.FIXED_SCALES[fixed.getSelectedItemPosition()])
                    .putString("scale_min",minimum).putString("scale_max",maximum).putString("sgsr_sharpness",sharpValues[sharp.getSelectedItemPosition()])
                    .putBoolean("effects",effects.isChecked()).putBoolean("color_correction",color.isChecked())
                    .putBoolean("sharpening",sharpen.isChecked()).putBoolean("soft_particles",particles.isChecked())
                    .putBoolean("audio",audio.isChecked()).putBoolean("rumble",rumble.isChecked())
                    .putBoolean(GameSettings.TOUCH_UI,touchUi.isChecked())
                    .putString(GameSettings.LOGGING_MODE,GameSettings.LOGGING_MODES[logging.getSelectedItemPosition()]).apply();
                if(loggingToggle!=null)updateLoggingToggleText(loggingToggle);
                dialog.dismiss();
            });
            dialog.getButton(AlertDialog.BUTTON_NEUTRAL).setOnClickListener(v -> {
                GameSettings.resetGraphics(this);
                if(loggingToggle!=null)updateLoggingToggleText(loggingToggle);
                dialog.dismiss();showSettings();
            });
        });
        dialog.show();
    }
    private void showLogsDialog(){
        File logsDir=GameSettings.logsDirectory(this);
        java.util.List<File> allLogs=new java.util.ArrayList<>();
        File[] dirFiles=logsDir.listFiles((d,name)->name.endsWith(".log")||name.endsWith(".txt"));
        if(dirFiles!=null)allLogs.addAll(java.util.Arrays.asList(dirFiles));
        File extDir=getExternalFilesDir(null);
        if(extDir!=null){
            File[] rootLogs=extDir.listFiles((d,name)->name.endsWith(".log"));
            if(rootLogs!=null)for(File rf:rootLogs)if(!allLogs.contains(rf))allLogs.add(rf);
        }
        if(allLogs.isEmpty()){
            new AlertDialog.Builder(this)
                .setTitle("Saved Logs")
                .setMessage("No logs found yet in:\n"+logsDir.getAbsolutePath()+"\n\nLogs are automatically created here when you play.")
                .setPositiveButton("OK",null)
                .show();
            return;
        }
        allLogs.sort((a,b)->Long.compare(b.lastModified(),a.lastModified()));
        String[] labels=new String[allLogs.size()];
        for(int i=0;i<allLogs.size();i++){
            File f=allLogs.get(i);
            long kb=f.length()/1024;
            labels[i]=f.getName()+" ("+(kb>0?kb+" KB":f.length()+" B")+")";
        }
        new AlertDialog.Builder(this)
            .setTitle("Saved Logs ("+logsDir.getAbsolutePath()+")")
            .setItems(labels,(d,which)->viewLogFile(allLogs.get(which)))
            .setPositiveButton("Close",null)
            .setNeutralButton("Clear all",(d,which)->{
                for(File f:allLogs)f.delete();
                Toast.makeText(this,"Logs cleared",Toast.LENGTH_SHORT).show();
            })
            .show();
    }
    private void viewLogFile(File file){
        try{
            String content;
            long maxBytes=64*1024;
            if(file.length()>maxBytes){
                try(java.io.RandomAccessFile raf=new java.io.RandomAccessFile(file,"r")){
                    raf.seek(file.length()-maxBytes);
                    byte[] bytes=new byte[(int)maxBytes];
                    raf.readFully(bytes);
                    content="... [Showing last "+(maxBytes/1024)+" KB] ...\n"+new String(bytes,java.nio.charset.StandardCharsets.UTF_8);
                }
            } else {
                content=new String(java.nio.file.Files.readAllBytes(file.toPath()),java.nio.charset.StandardCharsets.UTF_8);
            }
            if(content.isEmpty())content="(File is empty)";
            TextView tv=new TextView(this);
            tv.setText(content);
            tv.setTextSize(10);
            tv.setTypeface(android.graphics.Typeface.MONOSPACE);
            tv.setPadding(24,16,24,16);
            tv.setTextIsSelectable(true);
            ScrollView sv=new ScrollView(this);
            sv.addView(tv);
            new AlertDialog.Builder(this)
                .setTitle(file.getName())
                .setView(sv)
                .setPositiveButton("Close",null)
                .setNeutralButton("Copy",(d,which)->{
                    android.content.ClipboardManager cm=(android.content.ClipboardManager)getSystemService(CLIPBOARD_SERVICE);
                    if(cm!=null){
                        cm.setPrimaryClip(android.content.ClipData.newPlainText("MotorStorm Log",tv.getText()));
                        Toast.makeText(this,"Copied to clipboard",Toast.LENGTH_SHORT).show();
                    }
                })
                .setNegativeButton("Delete",(d,which)->{
                    if(file.delete())Toast.makeText(this,"Deleted "+file.getName(),Toast.LENGTH_SHORT).show();
                })
                .show();
        }catch(Exception e){
            Toast.makeText(this,"Failed to read log: "+e.getMessage(),Toast.LENGTH_LONG).show();
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
