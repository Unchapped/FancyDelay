/* Blink using FancyDelay

 Turns on and off a light emitting diode (LED) connected to a digital
 pin, using the FancyDelay library.
 The circuit:
 * LED attached from pin 13 to ground.
 * Note: on most Arduinos, there is already an LED on the board
 that's attached to pin 13, so no hardware is needed for this example.

 created 2005
 by David A. Mellis
 modified 8 Feb 2010
 by Paul Stoffregen
 modified 11 Nov 2013
 by Scott Fitzgerald
 modified 1 Apr 2017 from BlinkWithoutDelay
 by Nathaniel Chapman 
 
 This example code is in the public domain.
 */


#include <FancyDelay.h>

// constants won't change. Used here to set a pin number :
const int ledPin =  13;      // the number of the LED pin

// Variables will change :
int ledState = LOW;             // ledState used to set the LED

// Create a new FancyDelay object, with a frequency of one second (1000 ms)
FancyDelay onesec = FancyDelay(1000);

void setup() {
  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  //if one second has passed since the last time we ran
  if(onesec.ready()){
    // toggle the LED state
    if (ledState == LOW)
      ledState = HIGH;
    else
      ledState = LOW;

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  }
}

