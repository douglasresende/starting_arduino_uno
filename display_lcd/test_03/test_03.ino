#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //Configura os pinos do Arduino para se comunicar com o LCD
 
int temp; //Inicia uma variável inteira(temp), para escrever no LCD a contagem do tempo
 
void setup()
{
  lcd.print("hello, world!");
  delay(1000);
}
 
void loop()
{
  // Turn off the blinking cursor:
  lcd.noBlink();
  delay(3000);
  // Turn on the blinking cursor:
  lcd.blink();
  delay(3000);

}
