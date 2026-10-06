package org.psprecomp.motorstorm;
import android.view.InputDevice;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;
import org.libsdl.app.SDLActivity;
public final class GameActivity extends SDLActivity {
    static native void setTouch(int buttons, int axisX, int axisY, boolean analog);
    private TouchPad pad;
    @Override protected void onCreate(android.os.Bundle saved){
        super.onCreate(saved);
        android.view.ViewGroup content=findViewById(android.R.id.content);
        if(content!=null){
            pad=new TouchPad(this);
            pad.setLayoutParams(new android.widget.FrameLayout.LayoutParams(
                android.view.ViewGroup.LayoutParams.MATCH_PARENT, android.view.ViewGroup.LayoutParams.MATCH_PARENT));
            content.addView(pad);
        }
    }
    private static boolean fromController(int source){
        return (source&InputDevice.SOURCE_GAMEPAD)==InputDevice.SOURCE_GAMEPAD||
            (source&InputDevice.SOURCE_JOYSTICK)==InputDevice.SOURCE_JOYSTICK||
            (source&InputDevice.SOURCE_DPAD)==InputDevice.SOURCE_DPAD;
    }
    /** A physical controller hides the touch skin (and releases its buttons); touching the screen shows it again. */
    private void showTouch(boolean visible){
        if(pad==null||(pad.getVisibility()==View.VISIBLE)==visible)return;
        pad.reset();
        pad.setVisibility(visible?View.VISIBLE:View.GONE);
    }
    @Override public boolean dispatchKeyEvent(KeyEvent event){
        if(fromController(event.getSource())&&event.getKeyCode()!=KeyEvent.KEYCODE_BACK)showTouch(false);
        return super.dispatchKeyEvent(event);
    }
    @Override public boolean dispatchGenericMotionEvent(MotionEvent event){
        if(fromController(event.getSource()))showTouch(false);
        return super.dispatchGenericMotionEvent(event);
    }
    @Override public boolean dispatchTouchEvent(MotionEvent event){
        if(pad!=null&&pad.getVisibility()!=View.VISIBLE){
            if(event.getActionMasked()==MotionEvent.ACTION_DOWN)showTouch(true);
            return true;
        }
        return super.dispatchTouchEvent(event);
    }
    @Override protected String[] getLibraries(){return new String[]{"SDL3","main"};}
    @Override protected String[] getArguments(){
        try{
            GameSettings.override=getIntent().getIntExtra("resolution",-1);
            GameSettings.scaleOverride=getIntent().getStringExtra("scale_mode");
            java.util.List<String> args=new java.util.ArrayList<>(java.util.Arrays.asList(GameSettings.arguments(this,GameSettings.session(this))));
            if(getIntent().hasExtra("bench_seconds")){
                java.io.File script=new java.io.File(getFilesDir(),"race-throughput-input.txt");
                try(java.io.InputStream in=getAssets().open("race-throughput-input.txt")){java.nio.file.Files.copy(in,script.toPath(),java.nio.file.StandardCopyOption.REPLACE_EXISTING);}
                args.addAll(java.util.Arrays.asList("--input-script",script.getAbsolutePath(),"--bench-seconds",Integer.toString(getIntent().getIntExtra("bench_seconds",25)),
                    "--savedata",GameSettings.writableDirectory(new java.io.File(getFilesDir(),"benchmark-saves")).getAbsolutePath(),
                    "--bench-out",new java.io.File(getExternalFilesDir(null),"race-benchmark.txt").getAbsolutePath()));
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
