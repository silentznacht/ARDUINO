#include <Arduino.h>

// put function declarations here:

void setup() {
  // put your setup code here, to run once:
    pinMode(LED_BUILTIN, OUTPUT); // sets up the pin, and lets defines it's behavior which is OUTPUT
    // pinMode = (pin number, mode/behavior) -> behavior can be either output or input
}

void loop() {
    // put your main code here, to run repeatedly:
    digitalWrite(LED_BUILTIN, HIGH); // sets the pin mode to a corresponinding voltage
    // HIGH being 5V or 3.3V, and LOW being 0V / Ground
    // this digital write function essentially sets voltage to a pin that has been 
    // configured for output, which results on the pin to light up


}
