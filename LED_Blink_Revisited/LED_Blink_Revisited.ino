//Alden Dent
//8-22-19
//LED Blink Revisited


#include "Arduino.h"
int power = 0;
int line = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  for (int power = 0; power < 255; power++) {   //When power is 0, increase power to 255
    analogWrite(6, power);
    Serial.println(line);
    line++;
    delay(5);
  }
  for (int power = 255; power > 0; power--) { //When power is 255, decrease power to 0
    analogWrite(6, power);
    Serial.println(line);
    line--;
    delay(5);
  }

}
