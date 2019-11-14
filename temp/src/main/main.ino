#include "Arduino.h"

Led myLed;

void setup() {
  myLed  = Led("AppLED" , 19 , false);

}

void loop() {
  
  myLed.setState(true);   // Turn the LED on (Note that LOW is the voltage level
  delay(1000);                      // Wait for a second
  myLed.setState(false);   // Turn the LED off by making the voltage HIGH
  delay(1000);   
}
