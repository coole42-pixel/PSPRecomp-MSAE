package org.psprecomp.motorstorm;

/** A captured, floating stick with a circular range and a small radial deadzone. */
final class TouchStick {
    private int pointerId=-1;
    private float centerX,centerY,radius,x,y;
    boolean active(){return pointerId>=0;}
    float centerX(){return centerX;}
    float centerY(){return centerY;}
    float x(){return x;}
    float y(){return y;}
    int axisX(){return Math.max(0,Math.min(255,Math.round(128+x*(x<0?128:127))));}
    int axisY(){return Math.max(0,Math.min(255,Math.round(128+y*(y<0?128:127))));}
    void grab(int id,float px,float py,float travel){
        if(active())return;
        pointerId=id;centerX=px;centerY=py;radius=Math.max(1,travel);x=y=0;
    }
    void move(int id,float px,float py){
        if(id!=pointerId)return;
        float dx=(px-centerX)/radius,dy=(py-centerY)/radius;
        float length=(float)Math.hypot(dx,dy);
        if(length<=0.04f){x=y=0;return;}
        float magnitude=(Math.min(length,1)-0.04f)/0.96f;
        x=dx/length*magnitude;y=dy/length*magnitude;
    }
    void release(int id){if(id==pointerId)reset();}
    void reset(){pointerId=-1;x=y=0;}
}
