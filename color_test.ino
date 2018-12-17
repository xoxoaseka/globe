#include "FastLED.h"
#define NUM_LEDS 140
#define DATA_PIN 3
#define CLOCK_PIN 2
#define BRIGHTNESS 3
unsigned char i;
unsigned char m;
unsigned int wait = 4750;
CRGB leds[NUM_LEDS];
// constants won't change. They're used here to set pin numbers:
const int hallPin = 5;     // the number of the hall effect sensor pin
const int ledPin =  13;     // the number of the LED pin
// variables will change:
int hallState = 0;          // variable for reading the hall sensor status

void setup() {
  FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
    // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the hall effect sensor pin as an input:
  pinMode(hallPin, INPUT); 
  FastLED.setBrightness(BRIGHTNESS);  
}
void loop() {
  // read the state of the hall effect sensor:
  hallState = digitalRead(hallPin);
  
  if (hallState == LOW) {
      for (i = 70; i < 140; i++) {
        leds[i] = CRGB::Red;
      }
      FastLED.show();
      for (i = 0; i < 70; i++) {
        leds[i] = CRGB::White;
      }
      FastLED.show();
  } else {
      for (i = 0; i < 70; i++) {
        leds[i] = CRGB::Green;
      }
      FastLED.show();
      for (i = 70; i < 140; i++) {
        leds[i] = CRGB::Blue;
      }
      FastLED.show();
    }
}
