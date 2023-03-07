int val;
int ledpin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
}

void loop() {
    digitalWrite(ledpin, HIGH); 
    delay(1000);
    digitalWrite(ledpin, LOW);
    delay(1000);
}
