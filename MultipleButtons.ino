void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int value = analogRead(A0);
  if (value > 800 && value < 1000) {
    Serial.println("Button1");
  } else if (value > 750 && value < 800) {
    Serial.println("Button2");
  } else if (value > 650 && value < 750) {
    Serial.println("Button3");
  } else if (value > 480 && value < 650) {
    Serial.println("Button4");
  } else if (value < 480) {
    Serial.println("Button5");
  }
  delay(500);
}
