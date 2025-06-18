#include <Servo.h>

//motors
Servo motorLeft;
Servo motorRight;
const int motorLeftPin = 9;
const int motorRightPin = 10;

//line sensors
const int lineSensorPins[3] = {A0, A1, A2};  // Left, Center, Right
int lineValues[3];
const int lineThreshold = 500;

//front bumper
const int limitSwitchPin = 2;

void setup() {
  Serial.begin(9600);

  //motor setup
  motorLeft.attach(motorLeftPin);
  motorRight.attach(motorRightPin);
  stopMotors();

  //sensor pins
  pinMode(limitSwitchPin, INPUT_PULLUP);
  for (int i = 0; i < 3; i++) {
    pinMode(lineSensorPins[i], INPUT);
  }
}

void loop() {
  //read bumper
  bool limitPressed = digitalRead(limitSwitchPin) == LOW;

  if (limitPressed) {
    reverseMotors();
    delay(1000);
    stopMotors();
    delay(200); //pause after reverse
    return;
  }

  //read line sensors
  for (int i = 0; i < 3; i++) {
    lineValues[i] = analogRead(lineSensorPins[i]);
  }

  //debug because i can't read
  Serial.print("Line sensors: ");
  for (int i = 0; i < 3; i++) {
    Serial.print(lineValues[i]);
    Serial.print(" ");
  }
  Serial.println();

  //the things that makes it follow the line
  bool left = lineValues[0] < lineThreshold;
  bool center = lineValues[1] < lineThreshold;
  bool right = lineValues[2] < lineThreshold;

  if (center && !left && !right) {
    goForward();
  } else if (left && !right) {
    turnLeft();
  } else if (right && !left) {
    turnRight();
  } else if (center && left && right) {
    goForward(); //all sensors see line = go forward
  } else {
    stopMotors(); //stop if we lost line
  }

  delay(50);
}

//motor functions
void goForward() {
  motorLeft.writeMicroseconds(1700);
  motorRight.writeMicroseconds(1700);
}

void turnLeft() {
  motorLeft.writeMicroseconds(1400);
  motorRight.writeMicroseconds(1700);
}

void turnRight() {
  motorLeft.writeMicroseconds(1700);
  motorRight.writeMicroseconds(1400);
}

void stopMotors() {
  motorLeft.writeMicroseconds(1500);
  motorRight.writeMicroseconds(1500);
}

void reverseMotors() {
  motorLeft.writeMicroseconds(1300);
  motorRight.writeMicroseconds(1300);
}

  delay(100);
}

//motor control (1500 = stop, 2000 = full forward, 1000 = full reverse)
void goForward() {
  motorLeft.writeMicroseconds(1700); //adjust speed
  motorRight.writeMicroseconds(1700);
}

void turnLeft() {
  motorLeft.writeMicroseconds(1300); //slow/reverse left
  motorRight.writeMicroseconds(1700); //forward right
}

void stopMotors() {
  motorLeft.writeMicroseconds(1500); //neutral pulse
  motorRight.writeMicroseconds(1500);
}
//if this does not work if/when you test it try reconfiguring the array pins
//btw you can just put it right on the line and it will do its thing