const int motorPin = 9;  // Define the pin connected to the motor's speed control

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  // initialize digital pin LED_BUILTIN as an output pin.
  // Set the motor pin as an output
  pinMode(motorPin, OUTPUT);
}

void loop() {
  // Set the motor speed to 128 (half speed)
  analogWrite(motorPin, 128);
  delay(1000);  // Wait for 1 second

  on(1000, 500);  // ON 1s (1000ms), OFF 0.5s (500 ms)

  // Set the motor speed to 255 (full speed)
  analogWrite(motorPin, 255);
  delay(1000);  // Wait for 1 second

  on(2000, 500);  // ON 1s (1000ms), OFF 0.5s (500 ms)

  // Set the motor speed to 0 (stop)
  analogWrite(motorPin, 0);
  delay(1000);  // Wait for 1 second

  on(2000, 500);  // ON 1s (1000ms), OFF 0.5s (500 ms)

}
