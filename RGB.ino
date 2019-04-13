//Pins
const int red =  9;
const int green = 10;
const int blue = 11;
//RGB Values
int redVal= 0;
int blueVal= 0;
int greenVal = 0;
void setup() {
  // put your setup code here, to run once:
  //Setting the pins to output 
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  //Starting of the "Serial" or the console
  Serial.begin(9600);
}

void loop() {
//Set random value to the pins 0 - 255
redVal= random(0, 255);
blueVal=random(0, 255);
greenVal = random(0, 255);
//Wriing a value to the pins 
analogWrite(red,redVal);
analogWrite(green,greenVal);
analogWrite(blue,blueVal);
delay(1000);
Serial.print("Running");

}
