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

/** Draws the touch_skin art and reports the same regions as touch_sample. */
public final class TouchPad extends View {
    private static final int STICK_X = 128;
    private final HashMap<String, Bitmap> art = new HashMap<>();
    private final HashMap<Integer, Pointer> pointers = new HashMap<>();
    private int buttons;
    private int axisX = STICK_X;
    private int axisY = STICK_X;
    private boolean analog;
    private boolean pressL, pressR, pressPause, pressSelect, pressStart, pressMenu;
    private boolean pressTriangle, pressCircle, pressCross, pressSquare;
    private int dpad;

    public TouchPad(Context context) {
        super(context);
        setClickable(true);
        AssetManager assets = context.getAssets();
        String[] names = {
            "btn_triangle", "btn_circle", "btn_cross", "btn_square",
            "btn_l", "btn_r", "btn_start", "btn_select", "btn_pause", "btn_menu",
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
                break;
            case MotionEvent.ACTION_MOVE:
                for (int i = 0; i < event.getPointerCount(); i++) {
                    Pointer pointer = pointers.get(event.getPointerId(i));
                    if (pointer != null) {
                        pointer.x = event.getX(i);
                        pointer.y = event.getY(i);
                    }
                }
                break;
            case MotionEvent.ACTION_UP:
            case MotionEvent.ACTION_POINTER_UP:
            case MotionEvent.ACTION_CANCEL:
                pointers.remove(id);
                if (event.getActionMasked() == MotionEvent.ACTION_CANCEL) pointers.clear();
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
        analog = false;
        axisX = STICK_X;
        axisY = STICK_X;
        pressL = pressR = pressPause = pressSelect = pressStart = pressMenu = false;
        pressTriangle = pressCircle = pressCross = pressSquare = false;
        dpad = 0;
        float w = Math.max(getWidth(), 1);
        float h = Math.max(getHeight(), 1);
        for (Pointer pointer : pointers.values()) {
            float x = pointer.x / w;
            float y = pointer.y / h;
            float dx = x - 0.16f;
            float dy = y - 0.74f;
            if (dx * dx + dy * dy <= 0.13f * 0.13f) {
                analog = true;
                axisX = clamp(128f + dx / 0.13f * 127f);
                axisY = clamp(128f + dy / 0.13f * 127f);
                continue;
            }
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
            else if (x >= 0.30f && x <= 0.38f && y < 0.18f) { buttons |= 0x0008; pressPause = true; }
            else if (x >= 0.40f && x <= 0.48f && y < 0.18f) { buttons |= 0x0001; pressSelect = true; }
            else if (x >= 0.52f && x <= 0.60f && y < 0.18f) { buttons |= 0x0008; pressStart = true; }
            else if (x >= 0.62f && x <= 0.70f && y < 0.18f) { buttons |= 0x0001; pressMenu = true; }
            else if (x >= 0.78f && x <= 0.90f && y >= 0.48f && y <= 0.60f) { buttons |= 0x1000; pressTriangle = true; }
            else if (x >= 0.90f && y >= 0.60f && y <= 0.74f) { buttons |= 0x2000; pressCircle = true; }
            else if (x >= 0.78f && x <= 0.90f && y >= 0.74f && y <= 0.88f) { buttons |= 0x4000; pressCross = true; }
            else if (x >= 0.69f && x <= 0.81f && y >= 0.60f && y <= 0.74f) { buttons |= 0x8000; pressSquare = true; }
        }
    }

    /** Releases every touch control (hidden overlay, cancelled gesture). */
    void reset() {
        pointers.clear();
        resolve();
        GameActivity.setTouch(0, STICK_X, STICK_X, false);
        invalidate();
    }

    private static int clamp(float value) {
        return Math.max(0, Math.min(255, Math.round(value)));
    }

    @Override
    protected void onDraw(Canvas canvas) {
        float w = getWidth();
        float h = getHeight();
        float unit = Math.min(w, h);
        boolean stick = analog;
        drawArt(canvas, stick ? "stick_ring_pressed" : "stick_ring_idle", 0.16f * w, 0.74f * h, unit * 0.34f);
        float cap = unit * 0.34f * 0.46f;
        float deflectX = (axisX - STICK_X) / 127f * unit * 0.08f;
        float deflectY = (axisY - STICK_X) / 127f * unit * 0.08f;
        drawArt(canvas, stick ? "stick_cap_pressed" : "stick_cap_idle", 0.16f * w + deflectX, 0.74f * h + deflectY, cap);
        String dpadName = dpad == 1 ? "dpad_up_pressed" : dpad == 2 ? "dpad_down_pressed"
            : dpad == 3 ? "dpad_left_pressed" : dpad == 4 ? "dpad_right_pressed" : "dpad_idle";
        drawArt(canvas, dpadName, 0.08f * w, 0.48f * h, unit * 0.30f);
        button(canvas, "btn_l", pressL, 0.15f * w, 0.10f * h, unit * 0.16f);
        button(canvas, "btn_r", pressR, 0.86f * w, 0.10f * h, unit * 0.16f);
        button(canvas, "btn_pause", pressPause, 0.34f * w, 0.09f * h, unit * 0.11f);
        button(canvas, "btn_select", pressSelect, 0.44f * w, 0.09f * h, unit * 0.11f);
        button(canvas, "btn_start", pressStart, 0.56f * w, 0.09f * h, unit * 0.11f);
        button(canvas, "btn_menu", pressMenu, 0.66f * w, 0.09f * h, unit * 0.11f);
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
        Pointer(float x, float y) { this.x = x; this.y = y; }
    }
}
