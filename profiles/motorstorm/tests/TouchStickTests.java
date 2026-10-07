package org.psprecomp.motorstorm;

public final class TouchStickTests {
    private static void require(boolean value,String message){
        if(!value)throw new AssertionError(message);
    }
    public static void main(String[] args){
        TouchStick stick=new TouchStick();
        stick.grab(7,210,340,100);
        require(stick.active()&&stick.axisX()==128&&stick.axisY()==128,"Grab must start neutral under the finger");
        stick.move(9,900,900);
        require(stick.axisX()==128,"A second finger must not steer the captured stick");
        stick.grab(9,900,900,10);
        require(stick.centerX()==210&&stick.centerY()==340,"A second finger cannot take ownership");
        stick.move(7,212,342);
        require(stick.axisX()==128&&stick.axisY()==128,"Small radial movements must stay neutral");
        stick.move(7,260,340);
        require(stick.axisX()>128&&stick.axisX()<255&&stick.axisY()==128,"Partial drag must give proportional steering");
        stick.move(7,900,340);
        require(stick.active()&&stick.axisX()==255,"Dragging outside the ring must hold full steering");
        stick.move(7,310,440);
        require(Math.abs(Math.hypot(stick.x(),stick.y())-1)<0.0001,"Diagonal travel must clamp to a circle");
        stick.release(9);
        require(stick.active(),"Lifting another finger must not release steering");
        stick.move(7,-900,340);
        require(stick.axisX()==0&&stick.axisY()==128,"Full left must reach the PSP axis minimum");
        stick.move(7,210,340);
        require(stick.axisX()==128&&stick.axisY()==128,"Returning to the anchor must return to neutral");
        stick.release(7);
        require(!stick.active()&&stick.axisX()==128&&stick.axisY()==128,"Release must clear steering");
        stick.grab(9,15,25,0);
        stick.move(9,30,40);
        stick.reset();
        require(!stick.active()&&stick.x()==0&&stick.y()==0,"Hide/cancel must clear the whole gesture");
        System.out.println("Touch stick capture, proportional drag, full range, circular clamp and release passed");
    }
}
