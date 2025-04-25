#include <Servo.h>
// See: https://docs.arduino.cc/libraries/servo/
//
int leftMotorPin = 4;   //left motor pin
Servo leftMotor;
//
void setup() {
  // put your setup code here, to run once:
  pinMode(leftMotorPin, OUTPUT);
  pinMode(13, OUTPUT);
  leftMotor.attach(leftMotorPin);
}
//
void loop() {
  //0-1023, 500 center for opposite direction (no movement), further away is more movement
  leftMotorControl(1000); 
  //
  digitalWrite(13, HIGH);
  delay(3000);
}
//
int leftMotorControl(int value) {
  leftMotor.write(map(value, 0, 1023, 1000, 2000));
}
//
//End MAIN