#include <Adafruit_NeoPixel.h>
#define PIN        2 
#define NUMPIXELS 12 // Popular Cheap NeoPixel ring size


Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
// Argument 1 = Number of pixels in NeoPixel strip
// Argument 2 = Arduino pin number (most are valid)
// Argument 3 = Pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)

#define DELAYVAL 100 
#define DELAYVALTWO 75
#define DELAYVALTHREE 50
#define DELAYVALFOUR 25
#define DELAYVALFIVE 10
#define DELAYVALFINALRAINBOW 7  
#define DELAYVALFINALRAINBOWTWO 5
#define DELAYVALFINALRAINBOWTHREE 3
#define DELAYVALFINALRAINBOWFOUR 1



void setup() {

  pixels.begin(); 
}



void loop() {


  // VIOLET COLOR LOOOP...............................................................................................................
  
  pixels.clear(); // Set all pixel colors to 'off'

  
  for(int i=0; i<NUMPIXELS; i++) { 

  
    pixels.setPixelColor(i, pixels.Color(143, 0, 255)); // VIOLET

    pixels.show();   

    delay(DELAYVAL); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 

    pixels.setPixelColor(i, pixels.Color(143, 0, 255)); // VIOLET
    
    pixels.show();   

    delay(DELAYVAL);
  }

  // INDIGO COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 

  
  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { 


    pixels.setPixelColor(i, pixels.Color(75, 0, 130)); // INDIGO

    pixels.show();   

    delay(DELAYVAL); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 

    pixels.setPixelColor(i, pixels.Color(75, 0, 130)); // INDIGO
    
    pixels.show();   

    delay(DELAYVAL);
  }
  
  // BLUE COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 

  

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { // For each pixel...

    pixels.setPixelColor(i, pixels.Color(0, 0, 255)); // BLUE

    pixels.show();   

    delay(DELAYVAL); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 

    pixels.setPixelColor(i, pixels.Color(0, 0, 255)); // BLUE
    
    pixels.show();   

    delay(DELAYVAL);
  }

  // GREEN COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 

  

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { 

  
    pixels.setPixelColor(i, pixels.Color( 0, 255, 0)); // GREEN

    pixels.show();   

    delay(DELAYVAL);
	
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 

    pixels.setPixelColor(i, pixels.Color( 0, 255, 0)); // GREEN
    
    pixels.show();   

    delay(DELAYVAL);
  }


  // YELLOW COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 
  

 
 
  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { // For each pixel...

  
  
    pixels.setPixelColor(i, pixels.Color(255, 255, 0)); //YELLOW

    pixels.show();  

    delay(DELAYVAL); 
	
	pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 
    
    pixels.setPixelColor(i, pixels.Color(255, 255, 0)); //YELLOW
    
    pixels.show();   

    delay(DELAYVAL);
  }

 // ORANGE COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 

 

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { // For each pixel...


    pixels.setPixelColor(i, pixels.Color(255, 165, 0)); // ORANGE

    pixels.show();   

    delay(DELAYVAL); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 
    
    pixels.setPixelColor(i, pixels.Color(255, 165, 0)); // ORANGE
    
    pixels.show();   

    delay(DELAYVAL);
  }

  // RED COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 

   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { // For each pixel...

  
    pixels.setPixelColor(i, pixels.Color(255, 0, 0)); //RED

    pixels.show();   

    delay(DELAYVAL); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 
    
    pixels.setPixelColor(i, pixels.Color(255, 0, 0)); //RED
    
    pixels.show();   

    delay(DELAYVAL);
  }

/// START RAINBOW RGB CIRCLE


   pixels.clear(); 

   
  for(int i=0; i<NUMPIXELS; i++) { 

  
    pixels.setPixelColor(i, pixels.Color(143, 0, 255)); // VIOLET

    pixels.show();   

    delay(DELAYVAL); 
 
    pixels.clear(); 
  
  
    pixels.setPixelColor(i, pixels.Color(75, 0, 130)); // INDIGO

    pixels.show();   

    delay(DELAYVAL); 
  
  
  pixels.setPixelColor(i, pixels.Color(0, 0, 255)); // BLUE

    pixels.show();   

    delay(DELAYVAL); 
  
  
  pixels.setPixelColor(i, pixels.Color( 0, 255, 0)); // GREEN

    pixels.show();   

    delay(DELAYVAL); 
  
  
  pixels.setPixelColor(i, pixels.Color(255, 255, 0)); //YELLOW

    pixels.show();   

    delay(DELAYVAL); 
  
  
  pixels.setPixelColor(i, pixels.Color(255, 165, 0)); // ORANGE

    pixels.show();   

    delay(DELAYVAL);
  
  
  pixels.setPixelColor(i, pixels.Color(255, 0, 0)); //RED

    pixels.show();   

    delay(DELAYVAL); 
  
}


 // VIOLET COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 

  

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { // For each pixel...

  
    pixels.setPixelColor(i, pixels.Color(143, 0, 255)); // VIOLET

    pixels.show();   

    delay(DELAYVALTWO);
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 

    pixels.setPixelColor(i, pixels.Color(143, 0, 255)); // VIOLET
    
    pixels.show();   

    delay(DELAYVALTWO);
  }

  // INDIGO COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 

 
  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { 

 
    pixels.setPixelColor(i, pixels.Color(75, 0, 130)); // INDIGO

    pixels.show();   

    delay(DELAYVALTWO);
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 

    pixels.setPixelColor(i, pixels.Color(75, 0, 130)); // INDIGO
    
    pixels.show();   

    delay(DELAYVALTWO);
  }
  
  // BLUE COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { // For each pixel...

    pixels.setPixelColor(i, pixels.Color(0, 0, 255)); // BLUE

    pixels.show();   

    delay(DELAYVALTWO); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 

    pixels.setPixelColor(i, pixels.Color(0, 0, 255)); // BLUE
    
    pixels.show();   

    delay(DELAYVALTWO);
  }

  // GREEN COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 

  // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { 

  
    pixels.setPixelColor(i, pixels.Color( 0, 255, 0)); // GREEN

    pixels.show();   

    delay(DELAYVALTWO); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 

    pixels.setPixelColor(i, pixels.Color( 0, 255, 0)); // GREEN
    
    pixels.show();   

    delay(DELAYVALTWO);
  }


  // YELLOW COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 


  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { // For each pixel...

  // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
  // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(255, 255, 0)); //YELLOW

    pixels.show();   

    delay(DELAYVALTWO); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 
    
    pixels.setPixelColor(i, pixels.Color(255, 255, 0)); //YELLOW
    
    pixels.show();   

    delay(DELAYVALTWO);
  }

 // ORANGE COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 


   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { // For each pixel...

    pixels.setPixelColor(i, pixels.Color(255, 165, 0)); // ORANGE

    pixels.show();  

    delay(DELAYVALTWO); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 
    
    pixels.setPixelColor(i, pixels.Color(255, 165, 0)); // ORANGE
    
    pixels.show();   

    delay(DELAYVALTWO);
  }

  // RED COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { 

    pixels.setPixelColor(i, pixels.Color(255, 0, 0)); //RED

    pixels.show();  

    delay(DELAYVALTWO); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 
    
    pixels.setPixelColor(i, pixels.Color(255, 0, 0)); //RED
    
    pixels.show();   

    delay(DELAYVALTWO);
  }

/// START RAINBOW RGB CIRCLE


   pixels.clear(); 

  // EXECUTES A COMPLETE TOUR OF THE CIRCLE,  
  for(int i=0; i<NUMPIXELS; i++) { // For each pixel...

    // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
    // Here we're using a moderately bright green color:
    pixels.setPixelColor(i, pixels.Color(143, 0, 255)); // VIOLET

    pixels.show();  

    delay(DELAYVALTWO);
 
    pixels.clear(); 
  
  
    pixels.setPixelColor(i, pixels.Color(75, 0, 130)); // INDIGO

    pixels.show();   

    delay(DELAYVALTWO); 
  
  
  pixels.setPixelColor(i, pixels.Color(0, 0, 255)); // BLUE

    pixels.show();   

    delay(DELAYVALTWO); 
  
  
  pixels.setPixelColor(i, pixels.Color( 0, 255, 0)); // GREEN

    pixels.show();   

    delay(DELAYVALTWO); 
  
  
  pixels.setPixelColor(i, pixels.Color(255, 255, 0)); //YELLOW

    pixels.show();   

    delay(DELAYVALTWO); 
  
  
  pixels.setPixelColor(i, pixels.Color(255, 165, 0)); // ORANGE

    pixels.show();   

    delay(DELAYVALTWO);
  
  
  pixels.setPixelColor(i, pixels.Color(255, 0, 0)); //RED

    pixels.show();   

    delay(DELAYVALTWO); 
  


  }
  
  // VIOLET COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 
  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(143, 0, 255)); // VIOLET

    pixels.show();  

    delay(DELAYVALTHREE); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 

    pixels.setPixelColor(i, pixels.Color(143, 0, 255)); // VIOLET
    
    pixels.show();   

    delay(DELAYVALTHREE);
  }

  // INDIGO COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(75, 0, 130)); // INDIGO

    pixels.show();   
	
    delay(DELAYVALTHREE); 
	
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 

    pixels.setPixelColor(i, pixels.Color(75, 0, 130)); // INDIGO
    
    pixels.show();   

    delay(DELAYVALTHREE);
  }
  
  // BLUE COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(0, 0, 255)); // BLUE

    pixels.show();   

    delay(DELAYVALTHREE); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 

    pixels.setPixelColor(i, pixels.Color(0, 0, 255)); // BLUE
    
    pixels.show();   

    delay(DELAYVALTHREE);
  }

  // GREEN COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 

   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color( 0, 255, 0)); // GREEN

    pixels.show();   

    delay(DELAYVALTHREE);
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 

    pixels.setPixelColor(i, pixels.Color( 0, 255, 0)); // GREEN
    
    pixels.show();   

    delay(DELAYVALTHREE);
  }


  // YELLOW COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 
  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(255, 255, 0)); //YELLOW

    pixels.show();   

    delay(DELAYVALTHREE); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 
    
    pixels.setPixelColor(i, pixels.Color(255, 255, 0)); //YELLOW
    
    pixels.show();   

    delay(DELAYVALTHREE);
  }

 // ORANGE COLOR LOOOP...............................................................................................................
  
  pixels.clear();
  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(255, 165, 0)); // ORANGE

    pixels.show();   

    delay(DELAYVALTHREE); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 
    
    pixels.setPixelColor(i, pixels.Color(255, 165, 0)); // ORANGE
    
    pixels.show();   

    delay(DELAYVALTHREE);
  }

  // RED COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(255, 0, 0)); //RED

    pixels.show();  

    delay(DELAYVALTHREE); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 
    
    pixels.setPixelColor(i, pixels.Color(255, 0, 0)); //RED
    
    pixels.show();   

    delay(DELAYVALTHREE);
  }

/// START RAINBOW RGB CIRCLE


   pixels.clear(); 
  // EXECUTES A COMPLETE TOUR OF THE CIRCLE,  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(143, 0, 255)); // VIOLET

    pixels.show();   

    delay(DELAYVALTHREE);
 
    pixels.clear(); 
  
  
    pixels.setPixelColor(i, pixels.Color(75, 0, 130)); // INDIGO

    pixels.show();   

    delay(DELAYVALTHREE); 
  
  
  pixels.setPixelColor(i, pixels.Color(0, 0, 255)); // BLUE

    pixels.show();   

    delay(DELAYVALTHREE); 
  
  
  pixels.setPixelColor(i, pixels.Color( 0, 255, 0)); // GREEN

    pixels.show();   

    delay(DELAYVALTHREE); 
  
  
  pixels.setPixelColor(i, pixels.Color(255, 255, 0)); //YELLOW

    pixels.show();   

    delay(DELAYVALTHREE); 
  
  
  pixels.setPixelColor(i, pixels.Color(255, 165, 0)); // ORANGE

    pixels.show();   

    delay(DELAYVALTHREE);
  
  
  pixels.setPixelColor(i, pixels.Color(255, 0, 0)); //RED

    pixels.show();   

    delay(DELAYVALTHREE); 
  


  }
  
  // VIOLET COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 
  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(143, 0, 255)); // VIOLET

    pixels.show();   

    delay(DELAYVALFOUR); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 

    pixels.setPixelColor(i, pixels.Color(143, 0, 255)); // VIOLET
    
    pixels.show();   

    delay(DELAYVALFOUR);
  }

  // INDIGO COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(75, 0, 130)); // INDIGO

    pixels.show();   

    delay(DELAYVALFOUR); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 

    pixels.setPixelColor(i, pixels.Color(75, 0, 130)); // INDIGO
    
    pixels.show();   

    delay(DELAYVALFOUR);
  }
  
  // BLUE COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(0, 0, 255)); // BLUE

    pixels.show();   

    delay(DELAYVALFOUR);
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 

    pixels.setPixelColor(i, pixels.Color(0, 0, 255)); // BLUE
    
    pixels.show();   

    delay(DELAYVALFOUR);
  }

  // GREEN COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color( 0, 255, 0)); // GREEN

    pixels.show();  

    delay(DELAYVALFOUR); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 

    pixels.setPixelColor(i, pixels.Color( 0, 255, 0)); // GREEN
    
    pixels.show();   

    delay(DELAYVALFOUR);
  }


  // YELLOW COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(255, 255, 0)); //YELLOW

    pixels.show();  

    delay(DELAYVALFOUR); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 
    
    pixels.setPixelColor(i, pixels.Color(255, 255, 0)); //YELLOW
    
    pixels.show();   

    delay(DELAYVALFOUR);
  }

 // ORANGE COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(255, 165, 0)); // ORANGE

    pixels.show();   

    delay(DELAYVALFOUR); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 
    
    pixels.setPixelColor(i, pixels.Color(255, 165, 0)); // ORANGE
    
    pixels.show();   

    delay(DELAYVALFOUR);
  }

  // RED COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(255, 0, 0)); //RED

    pixels.show();   

    delay(DELAYVALFOUR); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 
    
    pixels.setPixelColor(i, pixels.Color(255, 0, 0)); //RED
    
    pixels.show();   

    delay(DELAYVALFOUR);
  }

/// START RAINBOW RGB CIRCLE


   pixels.clear(); 
  // EXECUTES A COMPLETE TOUR OF THE CIRCLE,  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(143, 0, 255)); // VIOLET

    pixels.show();

    delay(DELAYVALFOUR); 
 
    pixels.clear(); 
  
  
    pixels.setPixelColor(i, pixels.Color(75, 0, 130)); // INDIGO

    pixels.show();   

    delay(DELAYVALFOUR); 
  
  
  pixels.setPixelColor(i, pixels.Color(0, 0, 255)); // BLUE

    pixels.show();   

    delay(DELAYVALFOUR); 
  
  
  pixels.setPixelColor(i, pixels.Color( 0, 255, 0)); // GREEN

    pixels.show();   

    delay(DELAYVALFOUR); 
  
  
  pixels.setPixelColor(i, pixels.Color(255, 255, 0)); //YELLOW

    pixels.show();   

    delay(DELAYVALFOUR); 
  
  
  pixels.setPixelColor(i, pixels.Color(255, 165, 0)); // ORANGE

    pixels.show();   

    delay(DELAYVALFOUR);
  
  
  pixels.setPixelColor(i, pixels.Color(255, 0, 0)); //RED

    pixels.show();   

    delay(DELAYVALFOUR); 
  


  }
  
  
  
  
  
  
  
  
  // VIOLET COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(143, 0, 255)); // VIOLET

    pixels.show();  

    delay(DELAYVALFIVE); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 

    pixels.setPixelColor(i, pixels.Color(143, 0, 255)); // VIOLET
    
    pixels.show();   

    delay(DELAYVALFIVE);
  }

  // INDIGO COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(75, 0, 130)); // INDIGO

    pixels.show();  

    delay(DELAYVALFIVE); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 

    pixels.setPixelColor(i, pixels.Color(75, 0, 130)); // INDIGO
    
    pixels.show();   

    delay(DELAYVALFIVE);
  }
  
  // BLUE COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(0, 0, 255)); // BLUE

    pixels.show();   

    delay(DELAYVALFIVE); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 

    pixels.setPixelColor(i, pixels.Color(0, 0, 255)); // BLUE
    
    pixels.show();   

    delay(DELAYVALFIVE);
  }

  // GREEN COLOR LOOOP...............................................................................................................
  
  pixels.clear(); //
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { // F
    pixels.setPixelColor(i, pixels.Color( 0, 255, 0)); // GREEN

    pixels.show();   

    delay(DELAYVALFIVE); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 

    pixels.setPixelColor(i, pixels.Color( 0, 255, 0)); // GREEN
    
    pixels.show();   

    delay(DELAYVALFIVE);
  }


  // YELLOW COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(255, 255, 0)); //YELLOW

    pixels.show();   

    delay(DELAYVALFIVE); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 
    
    pixels.setPixelColor(i, pixels.Color(255, 255, 0)); //YELLOW
    
    pixels.show();   

    delay(DELAYVALFIVE);
  }

 // ORANGE COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(255, 165, 0)); // ORANGE

    pixels.show();   

    delay(DELAYVALFIVE); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 
    
    pixels.setPixelColor(i, pixels.Color(255, 165, 0)); // ORANGE
    
    pixels.show();   

    delay(DELAYVALFIVE);
  }

  // RED COLOR LOOOP...............................................................................................................
  
  pixels.clear(); 
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(255, 0, 0)); //RED

    pixels.show();   

    delay(DELAYVALFIVE); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<NUMPIXELS; i++) { 
    
    pixels.setPixelColor(i, pixels.Color(255, 0, 0)); //RED
    
    pixels.show();   

    delay(DELAYVALFIVE);
  }

/// START RAINBOW RGB CIRCLE


   pixels.clear(); 
  // EXECUTES A COMPLETE TOUR OF THE CIRCLE,  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(143, 0, 255)); // VIOLET

    pixels.show();   

    delay(DELAYVALFIVE); 
 
    pixels.clear(); 
  
  
    pixels.setPixelColor(i, pixels.Color(75, 0, 130)); // INDIGO

    pixels.show();   

    delay(DELAYVALFIVE); 
  
  
  pixels.setPixelColor(i, pixels.Color(0, 0, 255)); // BLUE

    pixels.show();   

    delay(DELAYVALFIVE); 
  
  
  pixels.setPixelColor(i, pixels.Color( 0, 255, 0)); // GREEN

    pixels.show();   

    delay(DELAYVALFIVE); 
  
  
  pixels.setPixelColor(i, pixels.Color(255, 255, 0)); //YELLOW

    pixels.show();   

    delay(DELAYVALFIVE); 
  
  
  pixels.setPixelColor(i, pixels.Color(255, 165, 0)); // ORANGE

    pixels.show();   

    delay(DELAYVALFIVE);
  
  
  pixels.setPixelColor(i, pixels.Color(255, 0, 0)); //RED

    pixels.show();   

    delay(DELAYVALFIVE); 
  


  }
  
  /// START RAINBOW RGB CIRCLE


   pixels.clear(); 
  // EXECUTES A COMPLETE TOUR OF THE CIRCLE,  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(143, 0, 255)); // VIOLET

    pixels.show();   

    delay(DELAYVALFINALRAINBOW); 
 
    pixels.clear(); 
  
  
    pixels.setPixelColor(i, pixels.Color(75, 0, 130)); // INDIGO

    pixels.show();   

    delay(DELAYVALFINALRAINBOW); 
  
  
  pixels.setPixelColor(i, pixels.Color(0, 0, 255)); // BLUE

    pixels.show();   

    delay(DELAYVALFINALRAINBOW); 
  
  
  pixels.setPixelColor(i, pixels.Color( 0, 255, 0)); // GREEN

    pixels.show();   

    delay(DELAYVALFINALRAINBOW); 
  
  
  pixels.setPixelColor(i, pixels.Color(255, 255, 0)); //YELLOW

    pixels.show();   

    delay(DELAYVALFINALRAINBOW); 
  
  
  pixels.setPixelColor(i, pixels.Color(255, 165, 0)); // ORANGE

    pixels.show();   

    delay(DELAYVALFINALRAINBOW);
  
  
  pixels.setPixelColor(i, pixels.Color(255, 0, 0)); //RED

    pixels.show();   

    delay(DELAYVALFINALRAINBOW); 
  


  }
  
  /// START RAINBOW RGB CIRCLE


   pixels.clear(); 
  // EXECUTES A COMPLETE TOUR OF THE CIRCLE,  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(143, 0, 255)); // VIOLET

    pixels.show();   

    delay(DELAYVALFINALRAINBOWTWO); 
 
    pixels.clear(); 
  
  
    pixels.setPixelColor(i, pixels.Color(75, 0, 130)); // INDIGO

    pixels.show();   

    delay(DELAYVALFINALRAINBOWTWO); 
  
  
  pixels.setPixelColor(i, pixels.Color(0, 0, 255)); // BLUE

    pixels.show();   

    delay(DELAYVALFINALRAINBOWTWO); 
  
  
  pixels.setPixelColor(i, pixels.Color( 0, 255, 0)); // GREEN

    pixels.show();   

    delay(DELAYVALFINALRAINBOWTWO); 
  
  
  pixels.setPixelColor(i, pixels.Color(255, 255, 0)); //YELLOW

    pixels.show();   

    delay(DELAYVALFINALRAINBOWTWO); 
  
  
  pixels.setPixelColor(i, pixels.Color(255, 165, 0)); // ORANGE

    pixels.show();   

    delay(DELAYVALFINALRAINBOWTWO);
  
  
  pixels.setPixelColor(i, pixels.Color(255, 0, 0)); //RED

    pixels.show();   

    delay(DELAYVALFINALRAINBOWTWO); 
  


  }

  /// START RAINBOW RGB CIRCLE


   pixels.clear(); 
  // EXECUTES A COMPLETE TOUR OF THE CIRCLE,  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(143, 0, 255)); // VIOLET

    pixels.show();   

    delay(DELAYVALFINALRAINBOWTHREE); 
 
    pixels.clear(); 
  
  
    pixels.setPixelColor(i, pixels.Color(75, 0, 130)); // INDIGO

    pixels.show();   

    delay(DELAYVALFINALRAINBOWTHREE); 
  
  
  pixels.setPixelColor(i, pixels.Color(0, 0, 255)); // BLUE

    pixels.show();   

    delay(DELAYVALFINALRAINBOWTHREE); 
  
  
  pixels.setPixelColor(i, pixels.Color( 0, 255, 0)); // GREEN

    pixels.show();   

    delay(DELAYVALFINALRAINBOWTHREE); 
  
  
  pixels.setPixelColor(i, pixels.Color(255, 255, 0)); //YELLOW

    pixels.show();   

    delay(DELAYVALFINALRAINBOWTHREE); 
  
  
  pixels.setPixelColor(i, pixels.Color(255, 165, 0)); // ORANGE

    pixels.show();   

    delay(DELAYVALFINALRAINBOWTHREE);
  
  
  pixels.setPixelColor(i, pixels.Color(255, 0, 0)); //RED

    pixels.show();   

    delay(DELAYVALFINALRAINBOWTHREE); 
  


  }
  
  
  /// START RAINBOW RGB CIRCLE


   pixels.clear(); 
  // EXECUTES A COMPLETE TOUR OF THE CIRCLE,  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(143, 0, 255)); // VIOLET

    pixels.show();   

    delay(DELAYVALFINALRAINBOWFOUR); 
 
    pixels.clear(); 
  
  
    pixels.setPixelColor(i, pixels.Color(75, 0, 130)); // INDIGO

    pixels.show();   

    delay(DELAYVALFINALRAINBOWFOUR); 
  
  
  pixels.setPixelColor(i, pixels.Color(0, 0, 255)); // BLUE

    pixels.show();   

    delay(DELAYVALFINALRAINBOWFOUR); 
  
  
  pixels.setPixelColor(i, pixels.Color( 0, 255, 0)); // GREEN

    pixels.show();   

    delay(DELAYVALFINALRAINBOWFOUR); 
  
  
  pixels.setPixelColor(i, pixels.Color(255, 255, 0)); //YELLOW

    pixels.show();   

    delay(DELAYVALFINALRAINBOWFOUR); 
  
  
  pixels.setPixelColor(i, pixels.Color(255, 165, 0)); // ORANGE

    pixels.show();   

    delay(DELAYVALFINALRAINBOWFOUR);
  
  
  pixels.setPixelColor(i, pixels.Color(255, 0, 0)); //RED

    pixels.show();   

    delay(DELAYVALFINALRAINBOWFOUR); 
  


  }
  
  /// START RAINBOW RGB CIRCLE LED\ALL

  // The first NeoPixel in a strand is #0, second is 1, all the way up
  // to the count of pixels minus one.
  // EXECUTES A COMPLETE TOUR OF THE CIRCLE,  
  for(int i=0; i<NUMPIXELS; i++) { 
    pixels.setPixelColor(i, pixels.Color(143, 0, 255)); 

    pixels.show();   

    delay(DELAYVALTHREE); 
 
    pixels.clear(); 
  
  
    pixels.setPixelColor(i, pixels.Color(75, 0, 130)); 

    pixels.show();   

    delay(DELAYVALTHREE); 
  
  
  pixels.setPixelColor(i, pixels.Color(0, 0, 255)); 

    pixels.show();   

    delay(DELAYVALTHREE); 
  
  
  pixels.setPixelColor(i, pixels.Color( 0, 255, 0)); 

    pixels.show();   

    delay(DELAYVALTHREE); 
  
  
  pixels.setPixelColor(i, pixels.Color(255, 255, 0)); 

    pixels.show();   

    delay(DELAYVALTHREE); 
  
  
  pixels.setPixelColor(i, pixels.Color(255, 165, 0)); 

    pixels.show();   

    delay(DELAYVALTHREE);
  
  
  pixels.setPixelColor(i, pixels.Color(255, 0, 0)); 

    pixels.show();   

    delay(DELAYVALTHREE); 
  


  }


}
