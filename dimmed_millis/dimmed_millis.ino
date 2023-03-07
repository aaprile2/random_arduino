// delay() makes it impossible to run code concurrently in the loop
// millis() returns the number of milliseconds since the board started running, and 
//          allows you to run code concurrently
int led = 11;
int state = LOW;

// Generally, use unsigned long for variables that hold time since will
// quickly become too large for an int
// Stores last time LED was updated
unsigned long previousMillis = 0;

// Stores interval at which to blind (ms)
long interval = 1000;

void setup() {
  pinMode(led, OUTPUT);

}

void loop() {
  // Check if it is time to blink the LED (i.e. if the difference between
  // the current time and last time you blinked is bigger than the desired interval)
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // Save the last time you blinked the LED
    previousMillis = currentMillis;

    // If the LED is off, turn it on and vice-versa
    if (state == LOW) {
      state = 255;
    }
    else {
      state = LOW;
    }

    // Set the LED with the state of the variable
    analogWrite(led, state);
  }

}
