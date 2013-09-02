//i2c slave 2

#include <Wire.h>

void setup()
{
  Wire.begin(5);
  Wire.onRequest(requestEvent);
}

void loop()
{
  delay(100);
}


void requestEvent()
{
  Wire.write("1234567890");
}
