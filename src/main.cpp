#include <Arduino.h>

//#include <../lib/digitalPin/src/digitalPin.h>
#include <digitalPin.h>

int delayMs;
digitalPin outPin = digitalPin(LED_BUILTIN,OUTPUT);

void Blinky();

void setup()
{
  // put your setup code here, to run once:
  //pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  Blinky();
}

void Blinky()
{
  // put your main code here, to run repeatedly:
  //digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level
  outPin.setState(HIGH);
  delay(500);                     // wait for a second
  //digitalWrite(LED_BUILTIN, LOW);  // turn the LED off by making the voltage LOW
  outPin.setState(LOW);
  delay(500);                     // wait for a second
  //delay(50);
}