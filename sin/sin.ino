int Pin = 11;

void setup()
{
pinMode(Pin, OUTPUT);
}

void loop()
{
float something = millis()/1000.0;
int value = 128.0 + 128 * sin( something * 2.0 * PI );
analogWrite(Pin,value);
}
