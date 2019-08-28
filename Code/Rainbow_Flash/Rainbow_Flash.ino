#include <Adafruit_NeoPixel.h>
#define LED_PIN    2
#define LED_COUNT 12 // for cheap neoxipixel from ebay,China, etc. with 12 led


Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);



void setup() {

  strip.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  strip.show();            // Turn OFF all pixels ASAP
  strip.setBrightness(50); // Set BRIGHTNESS to about 1/5 (max = 255)
}

void loop() {
 
  theaterChase(strip.Color(127, 127, 127), 25); 
  theaterChase(strip.Color(255, 255, 0), 25); 
  theaterChase(strip.Color(127,   0,   0), 25); 
  theaterChase(strip.Color(  0, 255,   0), 25); 
  theaterChase(strip.Color(  0,   0, 127), 25); 
  theaterChase(strip.Color(143, 0, 255), 25); 
  
  
}



void theaterChase(uint32_t color, int wait) {
  for(int a=0; a<1; a++) {  
    for(int b=0; b<3; b++) { 
      strip.clear();      

      for(int c=b; c<strip.numPixels(); c += 3) {
        strip.setPixelColor(c, color); 
      }
      strip.show(); 
      delay(wait);  
    }
  }}
