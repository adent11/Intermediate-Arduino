#include "Arduino.h"
int power = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(6, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run r4epeatedly:
for(int power=0; power <255; power++){
  analogWrite(6, power);
  delay(10);
  Serial.println(power);
}
for(int power=0; power <255; power++){
  analogWrite(6, power);
  delay(10);
  Serial.println(power);
}
}
