const int motorPin = 9;  // Define the pin connected to the motor's speed control
int motorSpeed = 128; //For testing
//
void setup() {
  pinMode(motorPin, OUTPUT);
}
//
void loop() {
  analogWrite(motorPin, motorSpeed);
  delay(1000);  // Wait for 1 second for stability
}
//
//End MAIN