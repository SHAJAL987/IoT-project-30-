//BAR GRAPH
const int analogPin = A0;
const int ledCount=3;
int ledPin[] = {4,5,6};
int i;
int Sensor = 0;
int level = 0;
//BUZZER 
const int buzzer = 3;
//RED LED
const int redled = 2;
//ULTRASONIC 
int echopin = 13;
int trigpin = 12;
float duration =0.0;
float cm =0.0;

void setup() {

  for(i=0;i<ledCount;i++)
  {
    pinMode(ledPin[i],OUTPUT);
  }
  //ULTRASONIC
  pinMode(echopin,INPUT);
  pinMode(trigpin,OUTPUT);

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
  //ULTRASONIC
  digitalWrite(trigpin,LOW);
  delay(2);

  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);

  digitalWrite(trigpin,LOW);

  duration = pulseIn(echopin,HIGH);

  cm = (duration * 0.034)/2;

  if(cm<15)
  {
    digitalWrite(redled,HIGH);
    tone(buzzer,10);
  }
  else
  {
    digitalWrite(redled,LOW);
    noTone(buzzer);
  }

}
