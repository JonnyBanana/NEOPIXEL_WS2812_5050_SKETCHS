#include <Adafruit_NeoPixel.h>
#define LED_PIN    2
#define LED_COUNT 12 // for cheap neoxipixel from ebay, china, etc. with 12 led 


Adafruit_NeoPixel pixels(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

#define DELAYVALTWO 75
#define DELAYVALTHREE 50
#define DELAYVALFOUR 25
#define DELAYVALFIVE 10
#define DELAYVALFINALRAINBOW 7  
#define DELAYVALFINALRAINBOWTWO 5
#define DELAYVALFINALRAINBOWTHREE 3
#define DELAYVALFINALRAINBOWFOUR 1


void setup() {

  pixels.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  pixels.show();            // Turn OFF all pixels ASAP
  pixels.setBrightness(50); // Set BRIGHTNESS to about 1/5 (max = 255)
}

void loop() {
 
	for( int x=1; x<=5; x++) {
		RainbowFlash(pixels.Color(143, 0, 255), 50); 
		RainbowFlash(pixels.Color(75, 0, 130), 50); 
		RainbowFlash(pixels.Color(0, 255, 0), 50); 
		RainbowFlash(pixels.Color(255, 255, 0), 50); 
		RainbowFlash(pixels.Color(255, 165, 0), 50); 
		RainbowFlash(pixels.Color(255, 0, 0), 50); 
	}



  // VIOLET COLOR LOOOP....................................................................................................................................................................................................................
  
  pixels.clear();

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<LED_COUNT; i++) { // For each pixel...


    pixels.setPixelColor(i, pixels.Color(143, 0, 255)); // VIOLET

    pixels.show(); 

    delay(DELAYVALTWO); 
 
    pixels.clear();
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(143, 0, 255)); 
    
    pixels.show();   

    delay(DELAYVALTWO);
  }
  
  // INDIGO COLOR LOOOP.........................................................................................................................................................................................................
  
  pixels.clear(); 


   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<LED_COUNT; i++) { 


    pixels.setPixelColor(i, pixels.Color(75, 0, 130)); 

    pixels.show();

    delay(DELAYVALTWO); 
 
    pixels.clear();
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(75, 0, 130)); 
    
    pixels.show();   

    delay(DELAYVALTWO);
  }
  
  // BLUE COLOR LOOOP.........................................................................................................................................................................................................
  
  pixels.clear();

   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(0, 0, 255)); 

    pixels.show();

    delay(DELAYVALTWO); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(0, 0, 255)); 
    
    pixels.show();   

    delay(DELAYVALTWO);
  }

  
  // GREEN COLOR LOOOP.........................................................................................................................................................................................................
  
  pixels.clear(); 

   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(0, 255, 0)); 

    pixels.show(); 

    delay(DELAYVALTWO); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(0, 255, 0)); 
    
    pixels.show();   

    delay(DELAYVALTWO);
  }


// YELLOW COLOR LOOOP.........................................................................................................................................................................................................
  
  pixels.clear(); 

   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(255, 255, 0)); 

    pixels.show(); 

    delay(DELAYVALTWO); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(255, 255, 0)); 
    
    pixels.show();   

    delay(DELAYVALTWO);
  }
  
  
  
  // ORANGE COLOR LOOOP.........................................................................................................................................................................................................
  
  pixels.clear(); 

   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(255, 165, 0)); 

    pixels.show();

    delay(DELAYVALTWO);
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(255, 165, 0)); 
    
    pixels.show();   

    delay(DELAYVALTWO);
  }


// RED COLOR LOOOP.........................................................................................................................................................................................................
  
  pixels.clear(); 

   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(255, 165, 0)); 

    pixels.show();   

    delay(DELAYVALTWO); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(255, 165, 0)); 
    
    pixels.show();   

    delay(DELAYVALTWO);
  }
  
  
  
  
  //3ND ROUND.................................................................................................................................................................................................................................
  
  for( int x=1; x<=5; x++) {
		RainbowFlash(pixels.Color(143, 0, 255), 50); 
		RainbowFlash(pixels.Color(75, 0, 130), 50); 
		RainbowFlash(pixels.Color(0, 255, 0), 50); 
		RainbowFlash(pixels.Color(255, 255, 0), 50); 
		RainbowFlash(pixels.Color(255, 165, 0), 50); 
		RainbowFlash(pixels.Color(255, 0, 0), 50); 
	}
  
  
  
// VIOLET COLOR LOOOP....................................................................................................................................................................................................................
  
  pixels.clear(); 

   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(143, 0, 255)); // VIOLET

    pixels.show(); 

    delay(DELAYVALTHREE); 
 
    pixels.clear(); 
  }

   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(143, 0, 255)); 
    
    pixels.show();   

    delay(DELAYVALTHREE);
  }
  
  // INDIGO COLOR LOOOP.........................................................................................................................................................................................................
  
  pixels.clear(); 

   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(75, 0, 130)); 

    pixels.show();

    delay(DELAYVALTHREE); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(75, 0, 130)); 
    
    pixels.show();   

    delay(DELAYVALTHREE);
  }
  
  // BLUE COLOR LOOOP.........................................................................................................................................................................................................
  
  pixels.clear(); 

   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(0, 0, 255)); 

    pixels.show();   

    delay(DELAYVALTHREE); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(0, 0, 255)); 
    
    pixels.show();   

    delay(DELAYVALTHREE);
  }

  
  // GREEN COLOR LOOOP.........................................................................................................................................................................................................
  
  pixels.clear(); 

   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<LED_COUNT; i++) {

  
    pixels.setPixelColor(i, pixels.Color(0, 255, 0)); 

    pixels.show();   

    delay(DELAYVALTHREE); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(0, 255, 0)); 
    
    pixels.show();   

    delay(DELAYVALTHREE);
  }


// YELLOW COLOR LOOOP.........................................................................................................................................................................................................
  
  pixels.clear(); 

   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<LED_COUNT; i++) { 


    pixels.setPixelColor(i, pixels.Color(255, 255, 0)); 

    pixels.show();  

    delay(DELAYVALTHREE);
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(255, 255, 0)); 
    
    pixels.show();   

    delay(DELAYVALTHREE);
  }
  
  
  
  // ORANGE COLOR LOOOP.........................................................................................................................................................................................................
  
  pixels.clear(); // Set all pixel colors to 'off'


   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<LED_COUNT; i++) { 


    pixels.setPixelColor(i, pixels.Color(255, 165, 0)); 

    pixels.show();   

    delay(DELAYVALTHREE); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(255, 165, 0)); 
    
    pixels.show();   

    delay(DELAYVALTHREE);
  }


// RED COLOR LOOOP.........................................................................................................................................................................................................
  
  pixels.clear(); 

 
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<LED_COUNT; i++) { 

 
    pixels.setPixelColor(i, pixels.Color(255, 165, 0)); 

    pixels.show();   

    delay(DELAYVALTHREE); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(255, 165, 0)); 
    
    pixels.show();   

    delay(DELAYVALTHREE);
  }

//2ND ROUND.................................................................................................................................................................................................................................
  
  
  
  
  
  for( int x=1; x<=5; x++) {
		RainbowFlash(pixels.Color(143, 0, 255), 50); 
		RainbowFlash(pixels.Color(75, 0, 130), 50); 
		RainbowFlash(pixels.Color(0, 255, 0), 50); 
		RainbowFlash(pixels.Color(255, 255, 0), 50); 
		RainbowFlash(pixels.Color(255, 165, 0), 50); 
		RainbowFlash(pixels.Color(255, 0, 0), 50); 
	}
  
  
  
  
  
  
  
  
    // VIOLET COLOR LOOOP....................................................................................................................................................................................................................
  
  pixels.clear(); 

   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<LED_COUNT; i++) { 


    pixels.setPixelColor(i, pixels.Color(143, 0, 255)); // VIOLET

    pixels.show();   

    delay(DELAYVALFIVE); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(143, 0, 255)); 
    
    pixels.show();   

    delay(DELAYVALFIVE);
  }
  
  // INDIGO COLOR LOOOP.........................................................................................................................................................................................................
  
  pixels.clear(); 

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<LED_COUNT; i++) { 

  
    pixels.setPixelColor(i, pixels.Color(75, 0, 130)); 

    pixels.show();   

    delay(DELAYVALFIVE); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(75, 0, 130)); 
    
    pixels.show();   

    delay(DELAYVALFIVE);
  }
  
  // BLUE COLOR LOOOP.........................................................................................................................................................................................................
  
  pixels.clear(); 

   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<LED_COUNT; i++) { 

  
    pixels.setPixelColor(i, pixels.Color(0, 0, 255)); 

    pixels.show();   

    delay(DELAYVALFIVE); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(0, 0, 255)); 
    
    pixels.show();   

    delay(DELAYVALFIVE);
  }

  
  // GREEN COLOR LOOOP.........................................................................................................................................................................................................
  
  pixels.clear(); 


  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(0, 255, 0)); 

    pixels.show();   

    delay(DELAYVALFIVE); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(0, 255, 0)); 
    
    pixels.show();   

    delay(DELAYVALFIVE);
  }


// YELLOW COLOR LOOOP.........................................................................................................................................................................................................
  
  pixels.clear(); 

   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(255, 255, 0)); 

    pixels.show();  

    delay(DELAYVALFIVE); 
 
    pixels.clear();
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(255, 255, 0)); 
    
    pixels.show();   

    delay(DELAYVALFIVE);
  }
  
  
  
  // ORANGE COLOR LOOOP.........................................................................................................................................................................................................
  
  pixels.clear(); 

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<LED_COUNT; i++) { 

  
    pixels.setPixelColor(i, pixels.Color(255, 165, 0)); 

    pixels.show();   // 

    delay(DELAYVALFIVE); // 
 
    pixels.clear();
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(255, 165, 0)); 
    
    pixels.show();   

    delay(DELAYVALFIVE);
  }


// RED COLOR LOOOP.........................................................................................................................................................................................................
  
  pixels.clear(); 

   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, ONE LED TIME  
  for(int i=0; i<LED_COUNT; i++) { 

 
    pixels.setPixelColor(i, pixels.Color(255, 165, 0)); 

    pixels.show();   

    delay(DELAYVALFIVE); 
 
    pixels.clear(); 
  }

  
   // EXECUTES A COMPLETE TOUR OF THE CIRCLE, LED/ALL  
  for(int i=0; i<LED_COUNT; i++) { 

    pixels.setPixelColor(i, pixels.Color(255, 165, 0)); 
    
    pixels.show();   

    delay(DELAYVALFIVE);
  }




//FINAL ROUND.................................................................................................................................................................................................................................
  
  
  
  
  
  for( int x=1; x<=5; x++) {
		RainbowFlash(pixels.Color(143, 0, 255), 50); 
		RainbowFlash(pixels.Color(75, 0, 130), 50); 
		RainbowFlash(pixels.Color(0, 255, 0), 50); 
		RainbowFlash(pixels.Color(255, 255, 0), 50); 
		RainbowFlash(pixels.Color(255, 165, 0), 50); 
		RainbowFlash(pixels.Color(255, 0, 0), 50); 
	}
  
  

//GRAND FINAL.................................................................................................................................................................................................................................  
  
  
  /// START RAINBOW RGB CIRCLE


   pixels.clear(); 

 
  for(int i=0; i<LED_COUNT; i++) { 

  
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

  
  for(int i=0; i<LED_COUNT; i++) { 

    
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

 
  for(int i=0; i<LED_COUNT; i++) { 

    
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
  

  }
  
///Rainbow Function!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

void RainbowFlash(uint32_t color, int wait) {
  for(int a=0; a<1; a++) {  
    for(int b=0; b<3; b++) { 
      pixels.clear();      

      for(int c=b; c<pixels.numPixels(); c += 3) {
        pixels.setPixelColor(c, color); 
      }
      pixels.show(); 
      delay(wait);  
    }
  }}

