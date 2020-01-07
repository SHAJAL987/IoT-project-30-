#include <LiquidCrystal.h> 
LiquidCrystal lcd(11,12,2,3,4,5);
//float temp;
//const int buzzer=3;

void setup() {
  //pinMode(6, OUTPUT);
  //pinMode(5, OUTPUT);
  //pinMode(buzzer, OUTPUT);
  lcd.begin(16,2);

}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("shajal");
  delay(500);
  lcd.clear();
  
}
