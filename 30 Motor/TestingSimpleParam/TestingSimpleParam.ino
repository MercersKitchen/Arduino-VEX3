const int motorPin = 9;  // Define the pin connected to the motor's speed control

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  // initialize digital pin LED_BUILTIN as an output pin.
  // Set the motor pin as an output
  pinMode(motorPin, OUTPUT);
}

void loop() {
  on(1000, 500);
  // Set the motor speed to 128 (half speed)
  analogWrite(motorPin, -176);
  delay(1000);  // Wait for 1 second
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