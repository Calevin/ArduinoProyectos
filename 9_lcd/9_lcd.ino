//LCD
#include <LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2);

void setup() {
  lcd.begin(16,2); //Tamano del LCD (columnas, lineas)

}

void loop() {
  lcd.setCursor(0,0); //Posicion inicial del cursor
  lcd.print("TEST");

}
