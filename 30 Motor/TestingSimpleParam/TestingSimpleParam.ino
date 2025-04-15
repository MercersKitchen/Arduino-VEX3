const int motorPin = 9;  // Define the pin connected to the motor's speed control
int motorParameter = 82;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  // initialize digital pin LED_BUILTIN as an output pin.
  // Set the motor pin as an output
  pinMode(motorPin, OUTPUT);
  println("End Setup, Motor Parameter is", motorParameter);
}

void loop() {
  on(1000, 500); //Verifies Code executes
  analogWrite(motorPin, -motorParameter); // Set the motor speed to xxx (max 255)
  println("Motor Parameter", motorParameter);
  delay(1000);  // Wait for 1 second
  motorParameter++;
}
//
void on(int x, int y){
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(x);
  off(y);
}
void off(int y){
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(y);
}