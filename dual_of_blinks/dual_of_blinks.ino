#include "blinky.h"

LED led0(7, random(1000)); // Create an LED object attached to pin 7
LED led1(11, random(1000)); // Create an LED object attached to pin 11
LED led2(14, random(1000)); // Create an LED object attached to pin 14

void setup() {
  Serial.begin(9600);
}

void loop() {
  unsigned long currentMillis = millis();

  led0.check(currentMillis);
  led1.check(currentMillis);
  led2.check(currentMillis);
  
}
