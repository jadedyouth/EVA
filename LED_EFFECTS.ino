//Some patterns i imported from funkboxing. tbh i haven't really done anything here yet. it's just been a concept.

void random_burst_md() {                         //-m4-RANDOM INDEX/COLOR  //Neal and I fixed this aaages ago so not all the pixels were on all the time. 
  idex = random(0, LED_COUNT);
  ihue = random(0, 255);  
  leds[idex] = CHSV(ihue, thissat, 255);
  LEDS.show();
  waitNine();
    
    idex = random(0, LED_COUNT);  //Neal Fixed it by adding these lines that add a black pixel each cycle
    ihue = random(0, 255);  
    leds[idex] = CHSV(0, 0, 0);
    
     LEDS.show();
     
    waitNine();
    
  
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////

void new_rainbow_loop_md(){                       //-m88-RAINBOW FADE FROM FAST_SPI2
  ihue -= 1;
  fill_rainbow( leds, LED_COUNT, ihue );
  LEDS.show();
  waitFour();
  
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////

void random_red() {                       //QUICK 'N DIRTY RANDOMIZE TO GET CELL AUTOMATA STARTED  
  int temprand;
  for(int i = 0; i < LED_COUNT; i++ ) {
    temprand = random(0,100);
    if (temprand > 50) {leds[i] = CHSV(26, 230, 150);} //not really read at the moment. kind brown 
    
    if (temprand <= 50) {leds[i] = CHSV(0, 255, 0);}
    
    
  }
  waitThree();
  LEDS.show();  
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////

void RedGreenBlue () {  ///just cycles. it's annoying. I need to rewrite the way it interacts with inputs so they cancel the rest of the loop when it recieves commans to switch modes.
   for(int i = 0; i < LED_COUNT; i++) {
   leds[i] = CHSV(0, 255, 255); }
   LEDS.show(); 
   waitFive();
    checkinput (); snesIn ();
    waitFive();
    checkinput (); snesIn ();
    waitFive();
    checkinput ();
    waitFive();
    checkinput (); snesIn ();
 for(int i = 0; i < LED_COUNT; i++) {
   leds[i] = CHSV(96, 255, 255); }
   LEDS.show(); 
     waitFive();
    checkinput (); snesIn ();
    waitFive();
    checkinput (); snesIn ();
    waitFive();
    checkinput (); snesIn ();
    waitFive();
    checkinput (); snesIn ();
   for(int i = 0; i < LED_COUNT; i++) {
   leds[i] = CHSV(160, 255, 255); }
   LEDS.show(); 
    waitFive();
    checkinput (); snesIn ();
    waitFive();
    checkinput (); snesIn ();
    waitFive();
    checkinput (); snesIn ();
    waitFive();
    checkinput (); snesIn ();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

void white () {
   for(int i = 0; i < LED_COUNT; i++) {
   leds[i] = CRGB::Red; }
   LEDS.show(); 
}

