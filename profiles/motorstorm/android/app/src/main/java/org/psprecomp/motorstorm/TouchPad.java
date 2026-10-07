package org.psprecomp.motorstorm;

import android.content.Context;
import android.content.res.AssetManager;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Canvas;
import android.graphics.RectF;
import android.view.MotionEvent;
import android.view.View;

import java.io.InputStream;
import java.util.HashMap;

/** Touch artwork with a captured floating stick and independent multitouch buttons. */
public final class TouchPad extends View {
    private static final int STICK_X = 128;
    private final HashMap<String, Bitmap> art = new HashMap<>();
    private final HashMap<Integer, Pointer> pointers = new HashMap<>();
    private final TouchStick stick = new TouchStick();
    private int buttons;
    private int axisX = STICK_X;
    private int axisY = STICK_X;
    private boolean analog;
    private boolean pressL, pressR, pressSelect, pressStart;
    private boolean pressTriangle, pressCircle, pressCross, pressSquare;
    private int dpad;

    public TouchPad(Context context) {
        super(context);
        setClickable(true);
        AssetManager assets = context.getAssets();
        String[] names = {
            "btn_triangle", "btn_circle", "btn_cross", "btn_square",
            "btn_l", "btn_r", "btn_start", "btn_select",
            "stick_ring", "stick_cap", "dpad"
        };
        for (String name : names) {
            load(assets, name + "_idle");
            if (!name.equals("dpad")) load(assets, name + "_pressed");
        }
        load(assets, "dpad_up_pressed");
        load(assets, "dpad_down_pressed");
        load(assets, "dpad_left_pressed");
        load(assets, "dpad_right_pressed");
    }

    private void load(AssetManager assets, String name) {
        try (InputStream in = assets.open("touch/" + name + ".png")) {
            art.put(name, BitmapFactory.decodeStream(in));
        } catch (Exception ignored) {
        }
    }

    @Override
    public boolean onTouchEvent(MotionEvent event) {
        int index = event.getActionIndex();
        int id = event.getPointerId(index);
        switch (event.getActionMasked()) {
            case MotionEvent.ACTION_DOWN:
            case MotionEvent.ACTION_POINTER_DOWN:
                pointers.put(id, new Pointer(event.getX(index), event.getY(index)));
                float unit = Math.min(getWidth(), getHeight());
                float dx = event.getX(index) - 0.16f * getWidth();
                float dy = event.getY(index) - 0.74f * getHeight();
                if (!stick.active() && unit > 0 && Math.hypot(dx, dy) <= unit * 0.21f) {
                    stick.grab(id, event.getX(index), event.getY(index), unit * 0.14f);
                    pointers.get(id).stick = true;
                }
                break;
            case MotionEvent.ACTION_MOVE:
                for (int i = 0; i < event.getPointerCount(); i++) {
                    Pointer pointer = pointers.get(event.getPointerId(i));
                    if (pointer != null) {
                        pointer.x = event.getX(i);
                        pointer.y = event.getY(i);
                        stick.move(event.getPointerId(i), pointer.x, pointer.y);
                    }
                }
                break;
            case MotionEvent.ACTION_UP:
            case MotionEvent.ACTION_POINTER_UP:
            case MotionEvent.ACTION_CANCEL:
                pointers.remove(id);
                stick.release(id);
                if (event.getActionMasked() == MotionEvent.ACTION_CANCEL) {
                    pointers.clear();
                    stick.reset();
                }
                break;
            default:
                return true;
        }
        resolve();
        GameActivity.setTouch(buttons, axisX, axisY, analog);
        invalidate();
        return true;
    }

    private void resolve() {
        buttons = 0;
        analog = stick.active();
        axisX = stick.axisX();
        axisY = stick.axisY();
        pressL = pressR = pressSelect = pressStart = false;
        pressTriangle = pressCircle = pressCross = pressSquare = false;
        dpad = 0;
        float w = Math.max(getWidth(), 1);
        float h = Math.max(getHeight(), 1);
        for (Pointer pointer : pointers.values()) {
            // The stick keeps its owning finger even beyond the visible ring;
            // dragging across another control cannot release steering or press it.
            if (pointer.stick) continue;
            float x = pointer.x / w;
            float y = pointer.y / h;
            if (x >= 0.02f && x <= 0.14f && y >= 0.36f && y <= 0.60f) {
                float cx = 0.08f, cy = 0.48f;
                if (Math.abs(y - cy) > Math.abs(x - cx)) {
                    buttons |= y < cy ? 0x0010 : 0x0040;
                    dpad = y < cy ? 1 : 2;
                } else {
                    buttons |= x < cx ? 0x0080 : 0x0020;
                    dpad = x < cx ? 3 : 4;
                }
            } else if (x >= 0.08f && x <= 0.22f && y < 0.20f) { buttons |= 0x0100; pressL = true; }
            else if (x >= 0.78f && x <= 0.94f && y < 0.20f) { buttons |= 0x0200; pressR = true; }
            else if (x >= 0.40f && x <= 0.48f && y < 0.18f) { buttons |= 0x0001; pressSelect = true; }
            else if (x >= 0.52f && x <= 0.60f && y < 0.18f) { buttons |= 0x0008; pressStart = true; }
            else if (x >= 0.78f && x <= 0.90f && y >= 0.48f && y <= 0.60f) { buttons |= 0x1000; pressTriangle = true; }
            else if (x >= 0.90f && y >= 0.60f && y <= 0.74f) { buttons |= 0x2000; pressCircle = true; }
            else if (x >= 0.78f && x <= 0.90f && y >= 0.74f && y <= 0.88f) { buttons |= 0x4000; pressCross = true; }
            else if (x >= 0.69f && x <= 0.81f && y >= 0.60f && y <= 0.74f) { buttons |= 0x8000; pressSquare = true; }
        }
    }

    /** Releases every touch control (hidden overlay, cancelled gesture). */
    void reset() {
        pointers.clear();
        stick.reset();
        resolve();
        GameActivity.setTouch(0, STICK_X, STICK_X, false);
        invalidate();
    }
    @Override protected void onSizeChanged(int w,int h,int oldw,int oldh){
        super.onSizeChanged(w,h,oldw,oldh);
        if(oldw>0&&oldh>0&&(w!=oldw||h!=oldh))reset();
    }

    @Override
    protected void onDraw(Canvas canvas) {
        float w = getWidth();
        float h = getHeight();
        float unit = Math.min(w, h);
        float stickX = analog ? stick.centerX() : 0.16f * w;
        float stickY = analog ? stick.centerY() : 0.74f * h;
        drawArt(canvas, analog ? "stick_ring_pressed" : "stick_ring_idle", stickX, stickY, unit * 0.34f);
        float cap = unit * 0.34f * 0.46f;
        float deflectX = stick.x() * unit * 0.105f;
        float deflectY = stick.y() * unit * 0.105f;
        drawArt(canvas, analog ? "stick_cap_pressed" : "stick_cap_idle", stickX + deflectX, stickY + deflectY, cap);
        String dpadName = dpad == 1 ? "dpad_up_pressed" : dpad == 2 ? "dpad_down_pressed"
            : dpad == 3 ? "dpad_left_pressed" : dpad == 4 ? "dpad_right_pressed" : "dpad_idle";
        drawArt(canvas, dpadName, 0.08f * w, 0.48f * h, unit * 0.30f);
        button(canvas, "btn_l", pressL, 0.15f * w, 0.10f * h, unit * 0.16f);
        button(canvas, "btn_r", pressR, 0.86f * w, 0.10f * h, unit * 0.16f);
        button(canvas, "btn_select", pressSelect, 0.44f * w, 0.09f * h, unit * 0.11f);
        button(canvas, "btn_start", pressStart, 0.56f * w, 0.09f * h, unit * 0.11f);
        button(canvas, "btn_triangle", pressTriangle, 0.84f * w, 0.54f * h, unit * 0.16f);
        button(canvas, "btn_circle", pressCircle, 0.93f * w, 0.67f * h, unit * 0.16f);
        button(canvas, "btn_cross", pressCross, 0.84f * w, 0.81f * h, unit * 0.16f);
        button(canvas, "btn_square", pressSquare, 0.75f * w, 0.67f * h, unit * 0.16f);
    }

    private void button(Canvas canvas, String name, boolean pressed, float x, float y, float size) {
        drawArt(canvas, name + (pressed ? "_pressed" : "_idle"), x, y, size);
    }

    private void drawArt(Canvas canvas, String name, float x, float y, float size) {
        Bitmap bitmap = art.get(name);
        if (bitmap == null) return;
        canvas.drawBitmap(bitmap, null, new RectF(x - size * 0.5f, y - size * 0.5f, x + size * 0.5f, y + size * 0.5f), null);
    }

    private static final class Pointer {
        float x, y;
        boolean stick;
        Pointer(float x, float y) { this.x = x; this.y = y; }
    }
}
