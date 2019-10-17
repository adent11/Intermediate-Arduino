//Alden Dent
//Motor Control
#include "Arduino.h"


void setup()
{
	pinMode(5, OUTPUT);
	Serial.begin(9600);

}

void loop()
{
	Serial.println(analogRead(0));
	analogWrite(5, analogRead(0)/4);   //Powers the transistor/motor according to the potentiometer
}

