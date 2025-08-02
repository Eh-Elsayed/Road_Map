/*
  Blink & Button - Day 1 of 30-Day Robotics & IoT Simulation Challenge
  ----------------------------------------------------
  This program blinks an LED on pin 13. A push button on pin 2
  changes the blinking speed when pressed.

  Author: Ehab Elsayed
*/

const int ledPin = 13;         // LED connected to digital pin 13
const int buttonPin = 2;       // Button connected to digital pin 2

int buttonState = LOW;         // Current reading from button
int blinkDelay = 1000;         // Initial blink delay (milliseconds)

void setup() {
  pinMode(ledPin, OUTPUT);     // Set LED pin as output
  pinMode(buttonPin, INPUT);   // Set button pin as input
}

void loop() {
  // Read the state of the button
  buttonState = digitalRead(buttonPin);

  // Adjust blink speed based on button state
  if (buttonState == HIGH) {
    blinkDelay = 200;          // Fast blink when button is pressed
  } else {
    blinkDelay = 1000;         // Slow blink when button is not pressed
  }

  // Blink the LED
  digitalWrite(ledPin, HIGH);
  delay(blinkDelay);
  digitalWrite(ledPin, LOW);
  delay(blinkDelay);
}
