#include <Adafruit_NeoPixel.h>
#define LED_PIN    2
#define LED_COUNT 12


Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);



void setup() {

  strip.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  strip.show();            // Turn OFF all pixels ASAP
  strip.setBrightness(50); // Set BRIGHTNESS to about 1/5 (max = 255)
}

void loop() {
 
  theaterChaseTwo(strip.Color(127, 127, 127), 100);  // set brightness to 100
  theaterChaseTwo(strip.Color(255, 255, 0), 100); 
  theaterChaseTwo(strip.Color(127, 0, 0), 100); 
  theaterChaseTwo(strip.Color(0, 255, 0), 100); 
  theaterChaseTwo(strip.Color(0, 0, 127), 100); 
  theaterChaseTwo(strip.Color(143, 0, 255), 100); 

  theaterChase(strip.Color(127, 127, 127), 50); // 50 = half brightness
  theaterChase(strip.Color(255, 255, 0), 50); 
  theaterChase(strip.Color(127,   0,   0), 50); 
  theaterChase(strip.Color(  0, 255,   0), 50); 
  theaterChase(strip.Color(  0,   0, 127), 50); 
  theaterChase(strip.Color(143, 0, 255), 50); 
  
  
  theaterChase(strip.Color(127, 127, 127), 25); // set brightness to 25
  theaterChase(strip.Color(255, 255, 0), 25); 
  theaterChase(strip.Color(127,   0,   0), 25); 
  theaterChase(strip.Color(  0, 255,   0), 25); 
  theaterChase(strip.Color(  0,   0, 127), 25); 
  theaterChase(strip.Color(143, 0, 255), 25);  
  
}



void theaterChase(uint32_t color, int wait) {
  for(int a=0; a<10; a++) {  
    for(int b=0; b<3; b++) { 
      strip.clear();         
     
      for(int c=b; c<strip.numPixels(); c += 3) {
        strip.setPixelColor(c, color); 
      }
      strip.show(); 
      delay(wait);  
    }
  }}
  
  
  
  void theaterChaseTwo(uint32_t color, int wait) {
  for(int a=0; a<5; a++) {  
    for(int b=0; b<4; b++) { 
      strip.clear();        
      
      for(int c=b; c<strip.numPixels(); c += 3) {
        strip.setPixelColor(c, color); 
      }
      strip.show();
      delay(wait);  
    }
  }}
  
  
  void theaterChaseThree(uint32_t color, int wait) {
  for(int a=0; a<10; a++) {  
    for(int b=0; b<2; b++) { 
      strip.clear();         
      
      for(int c=b; c<strip.numPixels(); c += 3) {
        strip.setPixelColor(c, color); 
      }
      strip.show(); 
      delay(wait); 
    }
  }}
