int ledPin = 12;
int buttonApin = 9;
int val = 0;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT);
}

void loop() {
  val = digitalRead(buttonApin);
  if(val==HIGH)
  {
    digitalWrite(ledPin, LOW);  
  }
  else
  {
    digitalWrite(ledPin, HIGH); 
  }

}
