#include <Servo.h>

Servo servoL;
int pinOutServoL = 3;

void setup() {
  // put your setup code here, to run once:
  servoL.attach(pinOutServoL); 
}

void loop() {
  servoL.write(-255);
  delay(0);
 

}
