#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 7, 6,5, 4);
char text[]="Welcome Heliware";
void setup()
{

lcd.begin(16, 2);
}
void loop() {
  unsigned int i=0;
  
  lcd.setCursor(0, 0);
  
  while(text[i]!='\0'){
    
   lcd.print(text[i]);
   delay(100);
   i++;
   
   } 
   delay(200);

  lcd.clear();
}
