#include <Arduino.h>


const int ledPin = 13;
const int buttonPin = 2;
bool buttonState = false;

void setup() {
  // put your setup code here, to run once:
    pinMode(ledPin, OUTPUT); // sets up the pin, and lets defines it's behavior which is OUTPUT
    pinMode(buttonPin, INPUT);
    // pinMode = (pin number, mode/behavior) -> behavior can be either output or input
}

void blink () {

          digitalWrite(ledPin, HIGH);  // turn the LED on (HIGH is the voltage level)
          delay(1000);                      // wait for a second
          digitalWrite(ledPin, LOW);   // turn the LED off by making the voltage LOW
          delay(1000); 
}

void loop() {
    // put your main code here, to run repeatedly:
    //igitalWrite(LED_BUILTIN, HIGH); // sets the pin mode to a corresponinding voltage
    // HIGH being 5V or 3.3V, and LOW being 0V / Ground
    // this digital write function essentially sets voltage to a pin that has been 
    // configured for output, which results on the pin to light up
    
    buttonState = digitalRead(buttonPin); // reads the state of the button whether HIGH or LOW

    if (buttonState == HIGH) { // If button state is HIGH (button is pressed) will execute blink func
        blink();
    } 

    if (buttonState == LOW) {
        digitalWrite(ledPin, LOW);
    }
}

