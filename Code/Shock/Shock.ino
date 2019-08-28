#include <Adafruit_NeoPixel.h>

#define PIN 2

long randNumber;  
long randNumberR;  
long randNumberG;  
long randNumberB;  
int numPixels = 12;  

Adafruit_NeoPixel strip = Adafruit_NeoPixel(12, PIN, NEO_GRB + NEO_KHZ800);

                     
uint8_t myColors[][3] = {{232, 100, 255},   // purple
                        {200, 200, 20},   // yellow 
                        {30, 200, 200},   // blue
                        {237,159,176},    // pink
                        {255, 0, 0},      // red
                        {108, 87,229},     // Dark blue
                        {162,211,172},     // Lt Green
                          };
                               

#define FAVCOLORS sizeof(myColors) / 3




void setup()
{
	pinMode(0, INPUT);
	strip.begin();
	strip.setBrightness(20);
	strip.show(); 
	randomSeed(analogRead(0));  //Set random number generator seed from analog pin 0
}




void loop()
{
	
	
	theaterChaseThree(strip.Color(127, 127, 127), 25); // set brightness to 25
	theaterChaseThree(strip.Color(255, 255, 0), 25); 
	theaterChaseThree(strip.Color(127,   0,   0), 25); 
	theaterChaseThree(strip.Color(  0, 255,   0), 25); 
	theaterChaseThree(strip.Color(  0,   0, 127), 25); 
	theaterChaseThree(strip.Color(143, 0, 255), 25);  
	
  for( int x=1; x<=23; x++)
  {
    flashRandom(5, 1);  
    flashRandom(5, 3);  
    flashRandom(5, 2);

  } 



  for( int x=1; x<=13; x++)
  {
    theaterChase(strip.Color(127, 127, 127), 25); 
    theaterChase(strip.Color(255, 255, 0), 25); 
    theaterChase(strip.Color(127,   0,   0), 25); 
    theaterChase(strip.Color(  0, 255,   0), 25); 
    theaterChase(strip.Color(  0,   0, 127), 25); 
    theaterChase(strip.Color(143, 0, 255), 25); 
  }
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
  }
 }
 





void flashRandom(int wait, uint8_t howmany) {
 
  for(uint16_t i=0; i<howmany; i++) {
    // pick a random favorite color!
    int c = random(FAVCOLORS);
    int red = myColors[c][0];
    int green = myColors[c][1];
    int blue = myColors[c][2]; 
 
    
    int j = random(strip.numPixels());
    
   
    for (int x=0; x < 5; x++) {
      int r = red * (x+1); r /= 5;
      int g = green * (x+1); g /= 5;
      int b = blue * (x+1); b /= 5;
      
      strip.setPixelColor(j, strip.Color(r, g, b));
      strip.show();
      delay(wait);
    }
  
    for (int u=5; u >= 0; u--) {
      int r = red * u; r /= 5;
      int g = green * u; g /= 5;
      int b = blue * u; b /= 5;
      
      strip.setPixelColor(j, strip.Color(r, g, b));
      strip.show();
      delay(wait);
    }
  }
  
}



void randomPixel(uint32_t c, uint8_t wait)
{
	for (int i = 0; i < strip.numPixels(); i = i++)
	{
		strip.setPixelColor(randNumber, c);    
	}
	strip.show();

	delay(wait);

	for (int i = 0; i < strip.numPixels(); i = i++)
	{
		strip.setPixelColor(randNumber, 0);        
	}
}



void theaterChaseThree(uint32_t color, int wait) {
  for(int a=0; a<10; a++) {  
    for(int b=0; b<3; b++) { 
      strip.clear();         
     
      for(int c=b; c<strip.numPixels(); c += 3) {
        strip.setPixelColor(c, color); 
      }
      strip.show(); 
      delay(wait);  
    }
  }
 }
