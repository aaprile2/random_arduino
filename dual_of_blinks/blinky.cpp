// CPP File - where the class is defined (also called implementation)
#include "blinky.h"

LED::LED(int pin, int interval) {
  this -> pin = pin;
  this -> interval = interval; 
  state = HIGH;
  previousMillis = millis();
  pinMode(pin, OUTPUT);
  digitalWrite(pin, state);
}

void LED::updateState() {
  if (state == LOW) {
    state = HIGH;
  }
  else {
    state = LOW;
  }
  digitalWrite(pin, state);
}


void LED::check(unsigned long currentMillis) {
  Serial.println(interval);
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    this -> updateState();
  }
}
