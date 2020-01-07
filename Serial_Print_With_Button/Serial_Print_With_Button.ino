int Button = 6;
int val = 0;
void setup() {
  pinMode(Button,INPUT_PULLUP);
  Serial.begin(9600);
  Serial.println("Hello Shajal");

}

void loop() {
  val = digitalRead(Button);
  if(val == LOW)
  {
    Serial.println("Button Pressed");
    delay(400);
  }

}
