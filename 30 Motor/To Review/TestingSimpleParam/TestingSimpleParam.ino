const int motorPin = 9;  // Define the pin connected to the motor's speed control
int motorParameter = 75; //Verified lowest value

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);  // initialize digital pin LED_BUILTIN as an output pin.
  // Set the motor pin as an output
  pinMode(motorPin, OUTPUT);
  Serial.print("Motor, ");
  Serial.println(motorParameter);
}

void loop() {
  on(1000, 500);                          //Verifies Code executes
  analogWrite(motorPin, motorParameter);  // Set the motor speed to xxx (max 255)
  Serial.print("Motor, ");
  Serial.println(motorParameter);
  delay(1000);  // Wait for 1 second
  if (motorParameter < 254) { //negative values???
    motorParameter++; //does not go to 256
  } else {
    motorParameter=0;
  }
  
}
//
void on(int x, int y) {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(x);
  off(y);
}
void off(int y) {
  digitalWrite(LED_BUILTIN, LOW);  // turn the LED off by making the voltage LOW
  delay(y);
}