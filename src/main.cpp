#include <Arduino.h>
#include <avr/io.h>

void setup()
{
  PORTA.DIR = PIN_PA4;
}

void loop()
{

  digitalWrite(PIN_PA4, HIGH);
  delay(500);
  digitalWrite(PIN_PA4, LOW);
  delay(500);
}
/*
  PORTA.OUT = 00001000;

  delay(1000);

  PORTA.OUT = 00000000;

  delay(1000);
*/