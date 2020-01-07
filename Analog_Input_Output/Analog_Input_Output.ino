void setup() {
  pinMode(11,OUTPUT);
}

void loop() {
  analogWrite(11,255);
  delay(500);
  analogWrite(11,0);
  delay(500);
}
