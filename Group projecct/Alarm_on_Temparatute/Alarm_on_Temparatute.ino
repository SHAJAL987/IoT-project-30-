#include <LiquidCrystal.h> 
LiquidCrystal lcd(12, 11,10, 9, 8,7,3);
float temp;
const int buzzer=3;

void setup() {
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(buzzer, OUTPUT);
  lcd.begin(16,2);

}

void loop() {
  temp = analogRead(A1);
  temp = temp * 0.48828125;
  
  lcd.setCursor(0,0);
  lcd.print("TEMPARATURE:");

  lcd.setCursor(0,1);
  lcd.print(temp);
  lcd.print((char)223);
  lcd.print("C");

 
   if(temp>=31){
    tone(buzzer, 1000);
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    
    lcd.setCursor(9,1);
    lcd.print("Danger");
    
    }
    
   else{
    noTone(buzzer);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);

    lcd.setCursor(9,1);
    lcd.print("Normal");
    
    }
  delay(500);
  lcd.clear();
  
}
