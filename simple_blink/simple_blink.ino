int val;
int ledpin = 13;

const int DUTY = 127;

//// Put your setup code here, to run once
void setup() {
  // Speed parameter; tells Arduino to get ready to exchange
  // the messages with the Serial Monitor at a data rate of 9600 bits per second;
  // 9600 binary ones or zeros per second (called a baud rate)
  Serial.begin(9600);

  // Configures the specified pin to behave as either input or output
  pinMode(ledpin, OUTPUT);
}

//// Put your main code here, to run repeatedly
void loop() {
  // Serial communication: process of sending one bit of data at a time
  // sequentially from one place to another;
  // Serial.read(): reads from the serial receive buffer, taking only one byte at a time
  val = Serial.read();

  if (val == 'R') {
    // Set voltage to 5V
    digitalWrite(ledpin, HIGH); 
    Serial.println("High");

    // Delay 500 ms (0.5 seconds)
    delay(1000);

    Serial.println("Dimmed");
    // Set voltage to 0V (ground)
    analogWrite(ledpin, DUTY);
    delay(10000);

    // Prints data to serial port as human-readable ASCII text followed by a carriage return character and newline
    Serial.println("Hello World!");
  }
}
