void setup() {
  // setup runs once - declare things
  Serial.begin(9600); // initialize serial communication
}

void loop() {
  // read the value from the sensor:
  int sensorValue = analogRead(A0);
  delay(10);
  int sensorValue1 = analogRead(A1);

  //print the value to the serial monitor so that we can see it
  Serial.print(sensorValue);
  Serial.print(",");
  Serial.println(sensorValue1);
  delay(10);
}
