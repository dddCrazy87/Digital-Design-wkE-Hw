void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  int sensorVal = analogRead(A0);
  digitalWrite(13, 1);
  delay(sensorVal);
  digitalWrite(13, 0);
  delay(sensorVal);
}
