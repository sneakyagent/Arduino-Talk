#include <QTRSensors.h>
//left one green
int sensorRightPin = A0;    // select the input pin 
//right one yeelow
int sensorLeftPin = A2;    // select the input pin 

int sensorValueLeft = 0;  // variable to store the value coming from the sensor
int sensorValueRight = 0;  // variable to store the value coming from the sensor
int cntrl =  A3;

void setup() {
 
  Serial.begin(9600);
  
}

void loop() {
  // read the value from the sensor:
       sensorValueRight = analogRead(sensorRightPin);
        sensorValueLeft = analogRead(sensorLeftPin);
  if(sensorValueRight >700)
  {
     Serial.println("right");
  }
  else if  (sensorValueLeft > 700)
  {
    Serial.println("left");
  }
  else
  {
    Serial.println("STRIGHT");
  }
   
 // delay(100); // the number of milliseconds between readings                 
}

