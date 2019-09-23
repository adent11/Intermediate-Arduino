#include "Arduino.h"
#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x3F, 16, 2);
void setup()
{
	lcd.init();
	lcd.backlight();
	pinMode(5, OUTPUT);
	Serial.begin(9600);
}

void loop()
{
	Serial.println((analogRead(3))/4);
	lcd.print((analogRead(3) /4));
	analogWrite(5,(analogRead(3) /4));
	delay(100);
	lcd.clear();
}
