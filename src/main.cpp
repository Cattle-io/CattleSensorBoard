#include <Arduino.h>
#include <Led.h>

/*
  ESP8266 Blink by Simon Peter
  Blink the blue LED on the ESP-01 module
  This example code is in the public domain

  The blue LED on the ESP-01 module is connected to GPIO1
  (which is also the TXD pin; so we cannot use Serial.print() at the same time)

  Note that this sketch uses LED_BUILTIN to find the pin with the internal LED
*/

Led myLed;

void setup() {
  myLed = Led();
}

void loop() {

  myLed.on();
  delay(500);
  myLed.off();
  //digitalWrite(D0, HIGH); 

  /*
  delay(1000);
  myLed.off();
  delay(1000);
  myLed.on();
  delay(1000);
  myLed.off();
  delay(1000);
  myLed.on();
  delay(1000);
  myLed.off();
  */

  delay(500);

}