int sensePin = 0;

void setup()
{
  analogReference(DEFAULT); // no es necesario
  Serial.begin(9600);
}

void loop()
{
  Serial.println(analogRead(sensePin));
  delay(500);
}
