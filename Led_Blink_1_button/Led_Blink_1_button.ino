int ledPin = 12;
int buttonApin = 9;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);
}

void loop() {
  int i;
  if(digitalRead(buttonApin) == LOW)
  {
    for(i=0;i<100;i++)
    {
      digitalWrite(ledPin,HIGH);
      delay(500);
      digitalWrite(ledPin,LOW);
      delay(500);
      
      if(digitalRead(buttonApin) == HIGH)
      {
        break;
      }
    }
  }

}
