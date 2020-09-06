#include <Adafruit_CircuitPlayground.h> // include the Circuit Playground library so we can use its functions, etc.

void setup() {
  CircuitPlayground.begin(); // initialize the Circuit Playground
}

void loop() {
  CircuitPlayground.redLED(HIGH); // set the single color LED D13 to HIGH / set LED to "on" by sending it voltage 
  delay(500); // delay for half a second or 500 milliseconds - equivalent to "on time"
  CircuitPlayground.redLED(LOW); // set the single color LED D13 to LOW or 0V 
  delay(500); // delay for half a second or 500 milliseconds - equivalent to "off time"
}
