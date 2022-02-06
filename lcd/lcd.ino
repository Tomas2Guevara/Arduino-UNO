#include <LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);

void setup() {
  lcd.begin(16,2);

}

void loop() {
  lcd.setCursor(1,0);
  lcd.print("prueba scroll, siempre va hacia Izq");
  lcd.scrollDisplayLeft();
  delay(500);
}
