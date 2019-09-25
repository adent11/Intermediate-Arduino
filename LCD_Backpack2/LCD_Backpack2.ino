// Alden Dent
// previous version of LCD Backpack
#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7)
	#define button 2
int press = 0;
void setup()
{
	lcd.begin(16, 2); // for 16 x 2 LCD module
	lcd.setBacklightPin(3, POSITIVE);
	lcd.setBacklight(HIGH);
	pinMode(button, INPUT);
	lcd.print(press);
}

void loop()
{
	// put your main code here, to run repeatedly:
	if (digitalRead(button) == HIGH)
	{
		press = press + 1;
		lcd.print("Presses = ");
		lcd.print(press);
		lcd.print("              ");
		delay(500); // Instead of waiting for the button to be unpressed, this just delays
	}
}
