// CPP File - where the class is defined (also called implementation)
#include "blinky.h"

LED::LED(int pin) {
  this -> pin = pin;
  interval = random(1000); 
  state = HIGH;
  previousMillis = millis();
  pinMode(pin, OUTPUT);
  digitalWrite(pin, state);
}

void LED::changeInterval() {
  interval = random(1000); 
}

void LED::turnOff() {
  digitalWrite(pin, LOW);
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
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    this -> updateState();
  }
}
