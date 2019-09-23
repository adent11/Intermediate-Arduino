#include <LiquidCrystal_I2C.h>
#include <Wire.h>
int press = 0;
bool wait = false;
LiquidCrystal_I2C lcd(0x3F, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display.
// If 0x27 doesn't work, try 0x3F.
void setup()
{
	lcd.init();
	lcd.backlight();
	pinMode(6, INPUT);
	Serial.begin(9600);
}

void loop()
{
	// put your main code here, to run repeatedly:
	Serial.println(digitalRead(6));
	if ((digitalRead(6) == HIGH) && (wait == false))
	{
		lcd.clear();
		press++;
		lcd.print("Presses:");
		lcd.print(press);
		wait = true;
	}
	if (digitalRead(6) == LOW)
	{
		wait = false;
	}
}
