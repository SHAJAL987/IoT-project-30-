const int analogPin = A0;
const int ledCount=5;
int ledPin[] = {4,5,6,7,8};
int i;
int Sensor = 0;
int level = 0;
void setup() {

  for(i=0;i<ledCount;i++)
  {
    pinMode(ledPin[i],OUTPUT);
  }

}

void loop() {

  Sensor = analogRead(analogPin);
  level = map(Sensor,0,1023,0,ledCount);

  for (i=0;i<ledCount;i++)
  {
    if(i<level)
    {
      digitalWrite(ledPin[i],HIGH);
    }
    else
    {
      digitalWrite(ledPin[i],LOW);
    }
  }

}
