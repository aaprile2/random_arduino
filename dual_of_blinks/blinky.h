// Header files - where the class is declared
//              - where the functions and variables are defined
#ifndef LED_h
#define LED_h

#include <Arduino.h> // Core library that contains all of Arduino's built-in functions

class LED {
  private:
    int pin;
    int interval; 
    int state;
    unsigned long previousMillis;

  public:
    LED(int pin, int interval);
    void updateState();
    void check(unsigned long currentMillis);
};

#endif