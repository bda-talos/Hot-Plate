#include <Arduino.h>

void setup()
{
  PORTA.DIR = 0b01000000;
}

void loop()
{

  PORTA.OUT = 0b01000000;
  delay(500);
  PORTA.OUT = 0b00000000;
  delay(500);
}
