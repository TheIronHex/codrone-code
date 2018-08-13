#include <CoDrone.h> 

void setup() {  
    CoDrone.begin(115200);            
    CoDrone.pair();
    CoDrone.DroneModeChange(Flight);  // Changes the drone so that it is now in flight mode

    delay(1000);

    CoDrone.takeoff();                // Take off and hover for 3 seconds for little auto calibrate

    THROTTLE = 50;              // Set throttle to 50%
    CoDrone.Control();            // Engage!
    delay(1000);              // Let it happen for 1 second before moving to the next command

    THROTTLE = 50;      //forward 1m
    PITCH = 50;
    CoDrone.Control();
    delay(1000);
   
    YAW = -100;        //turn 5 degrees left       
    CoDrone.Control();
    delay(55);

    THROTTLE = 20;    //forward 8m
    PITCH = 50;
    CoDrone.Control();
    delay(8000);

    //turn 95 degrees right
    YAW = 100;
    CoDrone.Control();
    delay(1055);

    THROTTLE = 20;      //forward 7.5m
    PITCH = 50;
    CoDrone.Control();
    delay(7500);

    //turn 80 degrees right
    YAW = 100;
    CoDrone.Control();
    delay(889);

    THROTTLE = 20;    //forward 9m
    PITCH = 50;
    CoDrone.Control();
    delay(9000);

    //turn 165 degrees left
    YAW = -100;
    CoDrone.Control();
    delay(1833);
   
    THROTTLE = 20;      //forward 3m
    PITCH = 50;
    CoDrone.Control();
    delay(3000);

    //turn 90 degrees right
    CoDrone.turnDegree(RIGHT, ANGLE_90);   
    CoDrone.Control();
    delay(1000);

    THROTTLE = 20;      //forward 0.88m
    PITCH = 50;
    CoDrone.Control();
    delay(880);

    //turn 90 degrees right
    CoDrone.turnDegree(RIGHT, ANGLE_90);   
    CoDrone.Control();
    delay(1000);

    THROTTLE = 20;      //forward 2.5m
    PITCH = 50;
    CoDrone.Control();
    delay(2500);

    //turn 125 degrees left
    YAW = -100;
    CoDrone.Control();
    delay(1388);
    
    THROTTLE = 20;      //forward 4m
    PITCH = 50;
    CoDrone.Control();
    delay(4000);

    //turn 125 degrees right
    YAW = 100;
    CoDrone.Control();
    delay(1388);
    
    THROTTLE = 20;      //forward 6.25m
    PITCH = 50;
    CoDrone.Control();
    delay(6250);

    //turn 90 degrees right
    CoDrone.turnDegree(RIGHT, ANGLE_90);   
    CoDrone.Control();
    delay(1000);

    THROTTLE = 20;      //forward 2.5m
    PITCH = 50;
    CoDrone.Control();
    delay(2500);

    //turn 90 degrees left
    CoDrone.turnDegree(LEFT, ANGLE_90);   
    CoDrone.Control();
    delay(1000);

    THROTTLE = 20;      //forward 2.5m
    PITCH = 50;
    CoDrone.Control();
    delay(2500); 

    //turn 90 degrees left
    CoDrone.turnDegree(LEFT, ANGLE_90);   
    CoDrone.Control();
    delay(1000);
    
    THROTTLE = 20;      //forward 2.5m
    PITCH = 50;
    CoDrone.Control();
    delay(2500); 

    //turn 90 degrees right
    CoDrone.turnDegree(RIGHT, ANGLE_90);   
    CoDrone.Control();
    delay(1000);

    THROTTLE = 50;      //forward 6.25m
    PITCH = 52;
    CoDrone.Control();
    delay(6250);

    //turn 100 degrees right
    YAW = 100;
    CoDrone.Control();
    delay(1111);

    THROTTLE = 20;      //forward 7m
    PITCH = 50;
    CoDrone.Control();
    delay(7000);   
    
    //turn 20 degrees left
    YAW = -100;
    CoDrone.Control();
    delay(222);    

    THROTTLE = 20;      //forward 6m
    PITCH = 50;
    CoDrone.Control();
    delay(6000);

    //turn 100 degrees right
    YAW = 100;
    CoDrone.Control();
    delay(1111); 

    //forward 16m
    PITCH = 50;
    CoDrone.Control();
    delay(16000);
    
    CoDrone.FlightEvent(Landing);     // Land

}

void loop () {                // This is the kill-switch code (the only thing we repeat)
    byte bt8 = digitalRead(18);
    byte bt4 = digitalRead(14);
    byte bt1 = digitalRead(11);

    if(bt1 && bt4 && !bt8){
        CoDrone.FlightEvent(Stop);
    }
}
