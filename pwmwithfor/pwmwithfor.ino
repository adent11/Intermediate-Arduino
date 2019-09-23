
//Alden Dent
//8-22-19
//Blink LED Project (pwm led up and down)


#include "Arduino.h"
#define led 6
int power = 0;
int line = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  for (int power = 0; power < 255; power++) {
    analogWrite(led, power);
    Serial.println(line);
    line++;
    delay(5);
  }
  for (int power = 255; power > 0; power--) {
    analogWrite(led, power);
    Serial.println(line);
    line--;
    delay(5);
  }

}
