float temp;
const int buzzer = 3;

void setup() {
  pinMode(5,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  temp = analogRead(A0);
  temp = temp*0.48828125;

  Serial.print("Tempareture: ");
  Serial.print(temp);
  Serial.print(" C");
  if(temp>=31)
  {
    tone(buzzer,1000);
    digitalWrite(5,HIGH);
    digitalWrite(7,LOW);
    Serial.println("Danger");
  }
  else
  {
    digitalWrite(5,LOW);
    digitalWrite(7,HIGH);
    noTone(buzzer);
    Serial.println("Normal");
  }

}
