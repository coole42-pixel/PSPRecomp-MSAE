package org.psprecomp.motorstorm;
import android.view.InputDevice;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;
import android.hardware.input.InputManager;
import java.util.HashSet;
import org.libsdl.app.SDLActivity;
public final class GameActivity extends SDLActivity implements InputManager.InputDeviceListener {
    static native void setTouch(int buttons, int axisX, int axisY, boolean analog);
    static native void flushLog();
    private TouchPad pad;
    private boolean touchEnabled;
    private InputManager inputManager;
    private final HashSet<Integer> usedControllers=new HashSet<>();
    @Override protected void onCreate(android.os.Bundle saved){
        super.onCreate(saved);
        final Thread.UncaughtExceptionHandler defaultHandler = Thread.getDefaultUncaughtExceptionHandler();
        Thread.setDefaultUncaughtExceptionHandler((thread, throwable) -> {
            try {
                java.io.File crashFile = new java.io.File(GameSettings.logsDirectory(this), "MotorStorm-crash.log");
                try (java.io.PrintWriter pw = new java.io.PrintWriter(new java.io.FileWriter(crashFile, true))) {
                    pw.println("=== FATAL JAVA EXCEPTION at " + new java.util.Date() + " ===");
                    pw.println("Thread: " + thread.getName() + " (id=" + thread.getId() + ")");
                    throwable.printStackTrace(pw);
                    pw.flush();
                }
                flushLog();
            } catch (Throwable ignored) {}
            if (defaultHandler != null) {
                defaultHandler.uncaughtException(thread, throwable);
            }
        });
        android.view.ViewGroup content=findViewById(android.R.id.content);
        touchEnabled=GameSettings.prefs(this).getBoolean(GameSettings.TOUCH_UI,true);
        if(content!=null){
            pad=new TouchPad(this);
            pad.setLayoutParams(new android.widget.FrameLayout.LayoutParams(
                android.view.ViewGroup.LayoutParams.MATCH_PARENT, android.view.ViewGroup.LayoutParams.MATCH_PARENT));
            content.addView(pad);
            pad.reset(); // Disable SDL's invisible fallback touch regions too.
            showTouch(touchEnabled);
        }
        inputManager=(InputManager)getSystemService(INPUT_SERVICE);
        if(inputManager!=null)inputManager.registerInputDeviceListener(this,null);
    }
    @Override protected void onPause(){
        if(pad!=null)pad.reset();
        try { flushLog(); } catch(Throwable ignored){}
        super.onPause();
    }
    @Override protected void onStop(){
        try { flushLog(); } catch(Throwable ignored){}
        super.onStop();
    }
    @Override protected void onDestroy(){
        if(inputManager!=null)inputManager.unregisterInputDeviceListener(this);
        try { flushLog(); } catch(Throwable ignored){}
        super.onDestroy();
    }
    private static boolean fromController(int source){
        return (source&InputDevice.SOURCE_GAMEPAD)==InputDevice.SOURCE_GAMEPAD||
            (source&InputDevice.SOURCE_JOYSTICK)==InputDevice.SOURCE_JOYSTICK||
            (source&InputDevice.SOURCE_DPAD)==InputDevice.SOURCE_DPAD;
    }
    /** Hide after real input, retaining that choice until the controller disconnects. */
    private void showTouch(boolean visible){
        visible=visible&&touchEnabled&&usedControllers.isEmpty();
        if(pad==null||(pad.getVisibility()==View.VISIBLE)==visible)return;
        pad.reset();
        pad.setVisibility(visible?View.VISIBLE:View.GONE);
    }
    @Override public boolean dispatchKeyEvent(KeyEvent event){
        if(event.getAction()==KeyEvent.ACTION_DOWN&&fromController(event.getSource())&&
            event.getKeyCode()!=KeyEvent.KEYCODE_BACK)controllerUsed(event.getDeviceId());
        return super.dispatchKeyEvent(event);
    }
    @Override public boolean dispatchGenericMotionEvent(MotionEvent event){
        if(fromController(event.getSource())&&hasControllerMotion(event))controllerUsed(event.getDeviceId());
        return super.dispatchGenericMotionEvent(event);
    }
    private void controllerUsed(int deviceId){
        if(deviceId<0)return;
        usedControllers.add(deviceId);
        showTouch(false);
    }
    private static boolean hasControllerMotion(MotionEvent event){
        InputDevice device=event.getDevice();
        if(device==null||event.getActionMasked()!=MotionEvent.ACTION_MOVE)return false;
        int[] axes={MotionEvent.AXIS_X,MotionEvent.AXIS_Y,MotionEvent.AXIS_Z,
            MotionEvent.AXIS_RX,MotionEvent.AXIS_RY,MotionEvent.AXIS_RZ,
            MotionEvent.AXIS_HAT_X,MotionEvent.AXIS_HAT_Y,MotionEvent.AXIS_LTRIGGER,
            MotionEvent.AXIS_RTRIGGER,MotionEvent.AXIS_BRAKE,MotionEvent.AXIS_GAS};
        for(int axis:axes){
            InputDevice.MotionRange range=device.getMotionRange(axis,event.getSource());
            if(range==null)continue;
            boolean trigger=axis==MotionEvent.AXIS_LTRIGGER||axis==MotionEvent.AXIS_RTRIGGER||
                axis==MotionEvent.AXIS_BRAKE||axis==MotionEvent.AXIS_GAS;
            float rest=trigger?range.getMin():(range.getMin()+range.getMax())*0.5f;
            float threshold=Math.max(range.getFlat(),range.getRange()*0.025f);
            if(Math.abs(event.getAxisValue(axis)-rest)>threshold)return true;
        }
        return false;
    }
    @Override public void onInputDeviceAdded(int deviceId){} // Connection alone does not hide controls.
    @Override public void onInputDeviceRemoved(int deviceId){
        usedControllers.remove(deviceId);
        showTouch(true);
    }
    @Override public void onInputDeviceChanged(int deviceId){
        InputDevice device=InputDevice.getDevice(deviceId);
        if(device==null||!fromController(device.getSources()))onInputDeviceRemoved(deviceId);
    }
    @Override protected String[] getLibraries(){return new String[]{"SDL3","main"};}
    @Override protected String[] getArguments(){
        try{
            GameSettings.override=getIntent().getIntExtra("resolution",-1);
            GameSettings.scaleOverride=getIntent().getStringExtra("scale_mode");
            GameSettings.benchmark=getIntent().hasExtra("bench_seconds");
            GameSettings.benchmarkFps=getIntent().getIntExtra("bench_fps",60);
            if(GameSettings.benchmarkFps!=0&&GameSettings.benchmarkFps!=30&&GameSettings.benchmarkFps!=60)
                throw new IllegalArgumentException("Benchmark FPS must be original (0), 30 or 60");
            java.util.List<String> args=new java.util.ArrayList<>(java.util.Arrays.asList(GameSettings.arguments(this,GameSettings.session(this))));
            if(getIntent().hasExtra("bench_seconds")){
                String runId=getIntent().getStringExtra("bench_run_id");
                if(runId==null)runId=Long.toString(System.currentTimeMillis())+"-"+android.os.Process.myPid();
                if(!runId.matches("[A-Za-z0-9_-]+"))throw new IllegalArgumentException("Invalid benchmark run id");
                java.io.File script=new java.io.File(getFilesDir(),"race-throughput-input.txt");
                try(java.io.InputStream in=getAssets().open("race-throughput-input.txt")){java.nio.file.Files.copy(in,script.toPath(),java.nio.file.StandardCopyOption.REPLACE_EXISTING);}
                args.addAll(java.util.Arrays.asList("--input-script",script.getAbsolutePath(),"--bench-seconds",Integer.toString(getIntent().getIntExtra("bench_seconds",25)),
                    "--savedata",GameSettings.writableDirectory(new java.io.File(getFilesDir(),"benchmark-saves")).getAbsolutePath(),
                    "--bench-out",new java.io.File(getExternalFilesDir(null),"race-benchmark-"+runId+".txt").getAbsolutePath(),
                    "--bench-mode",getIntent().getStringExtra("bench_mode")==null?"paced":getIntent().getStringExtra("bench_mode")));
            }
            if(getIntent().getBooleanExtra("audio_capture",false))
                args.addAll(java.util.Arrays.asList("--audio-capture",new java.io.File(getExternalFilesDir(null),"audio-capture.wav").getAbsolutePath()));
            if(getIntent().hasExtra("env")&&(getApplicationInfo().flags&android.content.pm.ApplicationInfo.FLAG_DEBUGGABLE)!=0)
                args.addAll(java.util.Arrays.asList("--env",getIntent().getStringExtra("env")));
            if(getIntent().hasExtra("present_mode"))
                args.addAll(java.util.Arrays.asList("--present-mode",getIntent().getStringExtra("present_mode")));
            return args.toArray(new String[0]);
        }
        catch(Exception e){android.util.Log.e("MotorStorm","Cannot prepare game session",e);return new String[]{"--invalid-session"};}
    }
}
