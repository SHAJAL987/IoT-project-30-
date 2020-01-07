#include <LiquidCrystal.h> 
int Contrast=25;
 LiquidCrystal lcd(12, 11, 10, 9, 8, 7);  

 void setup()
 {
    analogWrite(6,Contrast);
     lcd.begin(16, 2);
  } 
     void loop()
 { 
     lcd.setCursor(0, 0);
     lcd.print("Hello World");
   
    //lcd.setCursor(0, 1);
     //lcd.print("I am Sujit");
 }
