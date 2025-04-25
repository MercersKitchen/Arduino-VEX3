#include <Servo.h> // Include the Servo library
// See: https://docs.arduino.cc/libraries/servo/
//
// Pin and variable declarations
int potPin = A1; // Potentiometer connected to analog pin A1 (0 - 1023, 500 is no motion, <500 is backwards, >500 is forwards
int leftMotorPin = 11; // Left motor signal pin
//
Servo leftMotor; // Left motor
//
void setup() {
  Serial.begin(9600); // Start serial communication
  leftMotor.attach(leftMotorPin); // Attach left motor to left motor pin 11
}
//
void loop() {
  int potValue = 0;//testing only
  // Read the potentiometer value
  //int potValue = analogRead(potPin); // Read the analog value (0-1023)
  int motorSpeed = map(potValue, 0, 1023, 1000, 2000); // Map it to a higher motor speed range (1000-2000)
  //
  delay(100); // Small delay for stability
}
//
//End MAIN