#include <CoDrone.h> 

void setup() {
  CoDrone.begin(115200);
  CoDrone.pair();
  CoDrone.DroneModeChange(Flight);

  delay(1000);

  CoDrone.takeoff();

    THROTTLE = 50;              // The drone will lift about 75cm above the ground
    CoDrone.Control();      
    delay(900);        

    THROTTLE = 50;             // The drone will move forward 1 metre
    PITCH = 50;
    CoDrone.Control();
    delay(1000);
   
    THROTTLE = 100;            // The drone will turn 4.4 degrees to the left
    YAW = -100;           
    CoDrone.Control();
    delay(49);

    THROTTLE = 50;             // The drone will move forward 8.15 metres
    PITCH = 50;
    CoDrone.Control();
    delay(8150);

    THROTTLE = 100;            // The drone will turn 94.4 degrees to the right
    YAW = 100;
    CoDrone.Control();
    delay(1049);

    THROTTLE = 50;             // The drone will move forward 7.5 metres
    PITCH = 50;
    CoDrone.Control();
    delay(7500);

    THROTTLE = 100;            // The drone will turn 77 degrees to the right
    YAW = 100;
    CoDrone.Control();
    delay(856);

    THROTTLE = 50;             // The drone will move forward 9.62 metres
    PITCH = 50;
    CoDrone.Control();
    delay(9620);

    THROTTLE = 100;            // The drone will turn 77 degrees to the left
    YAW = -100;
    CoDrone.Control();
    delay(856);
   
    THROTTLE = 50;             // The drone will move forward 0.34 metres
    PITCH = 50;
    CoDrone.Control();
    delay(340);
    
    THROTTLE = 100;            // The drone will turn 90 degrees to the left
    CoDrone.turnDegree(LEFT, ANGLE_90);   
    CoDrone.Control();
    delay(1000);

    THROTTLE = 50;             // The drone will move forward 2.5 metres
    PITCH = 50;
    CoDrone.Control();
    delay(2500);

    THROTTLE = 100;            // The drone will turn 90 degrees to the right
    CoDrone.turnDegree(RIGHT, ANGLE_90);   
    CoDrone.Control();
    delay(1000);

    THROTTLE = 50;             // The drone will move forward 0.875 metres
    PITCH = 50;
    CoDrone.Control();
    delay(875);

    THROTTLE = 100;            // The drone will turn 90 degrees to the right
    CoDrone.turnDegree(RIGHT, ANGLE_90);   
    CoDrone.Control();
    delay(1000);

    THROTTLE = 50;             // The drone will move forward 2.5 metres
    PITCH = 50;
    CoDrone.Control();
    delay(2500);


    THROTTLE = 100;            // The drone will turn 125.5 degrees to the left
    YAW = -100;
    CoDrone.Control();
    delay(1394);
    
    THROTTLE = 50;             // The drone will move forward 4.3 metres
    PITCH = 50;
    CoDrone.Control();
    delay(4300);

    THROTTLE = 100;            // The drone will turn 125.5 degrees to the right
    YAW = 100;
    CoDrone.Control();
    delay(1394);
    
    THROTTLE = 50;             // The drone will move forward 6.25 metres
    PITCH = 50;
    CoDrone.Control();
    delay(6250);

    THROTTLE = 100;            // The drone will turn 90 degrees to the right
    CoDrone.turnDegree(RIGHT, ANGLE_90);   
    CoDrone.Control();
    delay(1000);

    THROTTLE = 50;             // The drone will move forward 2.5 metres
    PITCH = 50;
    CoDrone.Control();
    delay(2500);

    THROTTLE = 100;            // The drone will turn 90 degrees to the left
    CoDrone.turnDegree(LEFT, ANGLE_90);   
    CoDrone.Control();
    delay(1000);

    THROTTLE = 50;             // The drone will move forward 2.5 metres
    PITCH = 50;
    CoDrone.Control();
    delay(2500); 

    THROTTLE = 100;            // The drone will turn 90 degrees to the left
    CoDrone.turnDegree(LEFT, ANGLE_90);   
    CoDrone.Control();
    delay(1000);
    
    THROTTLE = 50;             // The drone will move forward 2.5 metres
    PITCH = 50;
    CoDrone.Control();
    delay(2500); 

    THROTTLE = 100;            // The drone will turn 90 degrees to the right
    CoDrone.turnDegree(RIGHT, ANGLE_90);   
    CoDrone.Control();
    delay(1000);

    THROTTLE = 50;             // The drone will move forward 6.25 metres
    PITCH = 50;
    CoDrone.Control();
    delay(6250);

    THROTTLE = 100;            // The drone will turn 100.9 degrees to the right
    YAW = 100;
    CoDrone.Control();
    delay(1121);

    THROTTLE = 50;             // The drone will move forward 6.62 metres
    PITCH = 50;
    CoDrone.Control();
    delay(6620);   
    
    THROTTLE = 100;            // The drone will turn 22.7 degrees to the left
    YAW = -100;
    CoDrone.Control();
    delay(252);    

    THROTTLE = 50;             // The drone will move forward 6.13 metres
    PITCH = 50;
    CoDrone.Control();
    delay(6130);

    THROTTLE = 100;            // The drone will turn 101.8 degrees to the right
    YAW = 100;
    CoDrone.Control();
    delay(1131); 

    THROTTLE = 50;             // The drone will move forward 14.75 metres
    PITCH = 50;
    CoDrone.Control();
    delay(14750);
    
    CoDrone.FlightEvent(Landing);     // The codrone will land

}
void loop () {                // This is the code for the kill switch
    byte bt8 = digitalRead(18);
    byte bt4 = digitalRead(14);
    byte bt1 = digitalRead(11);

    if(bt1 && bt4 && !bt8){
        CoDrone.FlightEvent(Stop);
    }
}
