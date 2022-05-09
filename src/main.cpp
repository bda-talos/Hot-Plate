#include <Arduino.h>
#include <avr/io.h>

void setup()
{
  PORTA.DIR = PIN4_bm;
}

void loop()
{

  PORTA.OUT = 00001000;

  delay(1000);

  PORTA.OUT = 00000000;

  delay(1000);
}