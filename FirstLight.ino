// Use if you want to force the software SPI subsystem to be used for some reason (generally, you don't)
// #define FASTLED_FORCE_SOFTWARE_SPI
// Use if you want to force non-accelerated pin access (hint: you really don't, it breaks lots of things)
// #define FASTLED_FORCE_SOFTWARE_SPI
// #define FASTLED_FORCE_SOFTWARE_PINS
#include <FastLED.h>
#define BRIGHTNESS 3
///////////////////////////////////////////////////////////////////////////////////////////
//
// Move a white dot along the strip of leds.  This program simply shows how to configure the leds,
// and then how to turn a single pixel white and then off, moving down the line of pixels.
// 

// How many leds are in the strip?
#define NUM_LEDS 140

// Data pin that led data will be written out over
#define DATA_PIN 3

// Clock pin only needed for SPI based chipsets when not using hardware SPI
#define CLOCK_PIN 2


// This is an array of leds.  One item for each led in your strip.
CRGB leds[NUM_LEDS];

// This function sets up the ledsand tells the controller about them
void setup() {
    FastLED.setBrightness(BRIGHTNESS);
	// sanity check delay - allows reprogramming if accidently blowing power w/leds
   	delay(2000);
       FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
}

// This function runs over and over, and is where you do the magic to light
// your leds.
void loop() {
  int i = 0;
  int j = 0; 
   for(int i = 0; i < 70; i = i + 1) {
      leds[i] = CHSV( 10, 255, 255);
      // Show the leds (only one of which is set to white, from above)
      FastLED.show();
      // Wait a little bit
      delay(50);
      // Turn our current led back to black for the next loop around
      leds[i] = CRGB::Black;
   }
   for(int i = 70; i < 140; i = i + 1) {
      leds[i]= CHSV( 60, 255, 255);
      // Show the leds (only one of which is set to white, from above)
      FastLED.show();
      // Wait a little bit
      delay(50);
      // Turn our current led back to black for the next loop around
      leds[i] = CRGB::Black;
   }
   for(int i = 0; i < 70; i = i + 1) {
      leds[i] = CHSV( 100, 255, 255);
      // Show the leds (only one of which is set to white, from above)
      FastLED.show();
      // Wait a little bit
      delay(50);
      // Turn our current led back to black for the next loop around
      leds[i] = CRGB::Black;
   }
      for(int i = 70; i < 140; i = i + 1) {
      leds[i]= CHSV( 150, 255, 255);
      // Show the leds (only one of which is set to white, from above)
      FastLED.show();
      // Wait a little bit
      delay(50);
      // Turn our current led back to black for the next loop around
      leds[i] = CRGB::Black;
   }
      for(int i = 0; i < 70; i = i + 1) {
      leds[i] = CHSV( 200, 255, 255);
      // Show the leds (only one of which is set to white, from above)
      FastLED.show();
      // Wait a little bit
      delay(50);
      // Turn our current led back to black for the next loop around
      leds[i] = CRGB::Black;
   }
         for(int i = 70; i < 140; i = i + 1) {
      leds[i]= CHSV( 250, 255, 255);
      // Show the leds (only one of which is set to white, from above)
      FastLED.show();
      // Wait a little bit
      delay(50);
      // Turn our current led back to black for the next loop around
      leds[i] = CRGB::Black;
   }
}
