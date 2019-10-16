//Alden Dent
//Photointerrupters

#include "Arduino.h"
int count = 0;
volatile byte led = LOW;
void setup()
{
	Serial.begin(9600);
	pinMode(3, INPUT_PULLUP);
	pinMode(4, OUTPUT);
	attachInterrupt(digitalPinToInterrupt(3), on, RISING);
}

void loop()
{
Serial.println(count);
digitalWrite(4, led);
	}
void on()
{
count++;
led = !led;
}
