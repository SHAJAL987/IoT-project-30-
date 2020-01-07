#include<LiquidCrystal.h>
LiquidCrystal lcd(11,12,2,3,4,5);
//int led = 2;
//int buzer = 3;
float value;
float milivolt;
int temp;
void setup() {
  lcd.begin(16,2);
  //pinMode(led, OUTPUT);
  //pinMode(buzer, OUTPUT);
}

void loop() {
  value = analogRead(A1);
  milivolt = (value*5000)/1024;
  temp = milivolt/10;
  lcd.setCursor(2,0);
  lcd.print("Shajal");
  lcd.setCursor(2,1);
  lcd.print("Temp = ");
  lcd.print(temp);
  //if(temp==30 || temp==31){
   // digitalWrite(led, HIGH);
  //}else if(temp>=33){
   // digitalWrite(buzer, HIGH);
 // }else{
    //digitalWrite(led, LOW);
    //digitalWrite(buzer, LOW);
  //}
  lcd.print(char(223));
  lcd.print("C");
}
