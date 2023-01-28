#include <Keyboard.h>

const int coinmech = 2;
const int ledPin = LED_BUILTIN;
const int threshold = 50;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(coinmech, INPUT_PULLUP);
  attachInterrupt( digitalPinToInterrupt(coinmech), coinSignal, RISING);
  Keyboard.begin();
}

void coinSignal() {
  Keyboard.write(0xF3);
}
void loop()
{
}

