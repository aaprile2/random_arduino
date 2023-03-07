#include "blinky.h"

LED led0(7); // Create an LED object attached to pin 7
LED led1(11); // Create an LED object attached to pin 11
LED led2(14); // Create an LED object attached to pin 14
bool lightOn = false; 
bool pressed;
bool pressedLast = false; 
bool edge = false; 

void setup() {
  Serial.begin(9600);
  pinMode(4, INPUT_PULLUP);
}

void loop() {
  unsigned long currentMillis = millis();
  pressed = not(digitalRead(4));
  if (pressed && !pressedLast) {
    edge = true;
  }

  if (lightOn && edge) {
    led0.turnOff();
    led1.turnOff();
    led2.turnOff();
    lightOn = false; 

  }
  
  else if (!lightOn && edge) {
    led0.changeInterval();
    led1.changeInterval();
    led2.changeInterval();
    lightOn = true; 
  }

  if (lightOn) {
    led0.check(currentMillis);
    led1.check(currentMillis);
    led2.check(currentMillis);
  }

  pressedLast = pressed;
  edge = false;
}
