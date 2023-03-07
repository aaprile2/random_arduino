int led = 11;           
int brightness = 0;    
int fadeAmount = 5;    // How many points to fade the LED by

void setup() {
  pinMode(led, OUTPUT);
}


void loop() {
  // Set the brightness of pin 11
  analogWrite(led, brightness);

  // Change the brightness for next time through the loop
  brightness = brightness + fadeAmount;

  // Reverse the direction of the fading at the ends of the fade
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount;
  }
  // Wait for 30 milliseconds to see the dimming effect
  delay(20);
}
