// Alden Dent
// Hello LCD
#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
unsigned long time;
void setup()
{
	lcd.begin(16, 2);
	Serial.begin(9600);
}

void loop()
{
	lcd.setCursor(0, 0);
	lcd.print("hello world          ");
	lcd.setCursor(0, 1);
	lcd.print("Time: ");
	time = millis();
	lcd.print(time/1000);
	lcd.print("            "); //Clear bottom row
	Serial.print(time/1000);
	delay(1000);
}
