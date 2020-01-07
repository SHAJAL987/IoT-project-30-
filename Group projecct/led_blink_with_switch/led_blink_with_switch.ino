int ledPin=5;
int buttonApin=9;
int buttonBpin=8;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);
  pinMode(buttonBpin, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(buttonApin)==LOW){
    int i;

    for(i=0; i<100; i++)
    {
      
      digitalWrite(ledPin, HIGH);
      delay(500);
     
      digitalWrite(ledPin, LOW);                             
      delay(500);

      if(digitalRead(buttonBpin)==LOW){
        break;
      }
      
    }
  }

}
