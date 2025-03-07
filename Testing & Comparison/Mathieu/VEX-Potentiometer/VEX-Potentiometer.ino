void setup() {
  // initalize serial communitcation at 9600 bits per second
  Serial.begin(9600);

  // put your setup code here, to run once:

}

void loop() {
  // read the input on analog pin0:
  int sensorValue = analogRead(A0);
  
  //int brightness = sensorvalue/4; 
  // 1023 / 4 = 255.75 but the .75 cuts cut off
  
  int brightness = map(sensorValue, 0, 1023, 0, 255);

  // analogWrite(11,brightness);

  // print out the value you read
  Serial.print(" ADC reading: ");
  Serial.print(sensorValue);
  Serial.print(" Analog voltage: ");
  //Serial.println(voltage);
  delay(1); // delay in between reads for stability


  // put your main code here, to run repeatedly:

}