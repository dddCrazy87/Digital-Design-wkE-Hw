void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorVal = analogRead(A0);
  if(sensorVal < 400) sensorVal = 400;
  if(sensorVal > 600) sensorVal = 600;
  analogWrite(9, map(sensorVal,400,500,0,255));
  delay(1);
}
