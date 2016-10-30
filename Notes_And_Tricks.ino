 /*
JUST SPACE TO STORE SHIT

  use this to add an extra input time and interup the loop during long loops:
 
 btns = Spad.getButtons(false);
      if(!(btns & BTN_DOWN)) (!(btns & BTN_DOWN)); else if (!(btns & BTN_UP)); else if (!(btns & BTN_L)); else if (!(btns & BTN_START)){ snesIn ();}
     else  if (Serial.available() > 0)  {
    checkinput(); 
     }

 else { 


//for push button switches
 butOne = digitalRead(12);
 if (butOne == LOW){
 switch (butValOne){
 case 0:  {butValOne = 1; delay (100); break; } 
 case 1:  {butValOne = 0; delay (100); break; } } }


//COLOURS

//lUCYD PINK
leds[i] = CHSV(221, 210, 180);

//70's Apricot Cream
leds[i] = CHSV(32, 150, 180);

//Burnt Orange
{leds[i] = CHSV(26, 230, 150);}

//OFF RED
{leds[i] = CHSV(12, 230, 130);}




//timers

unsigned long currentMillisSec = millis();
if (currentMillis - previousMillisSec >= intervalSec) {
    // save the last time you blinked the LED
    previousMillisSec = currentMillisSec;
}


   */


//extra legacy stuff that may be useful later
//also for SNESvariable up down    (limits base variables to 4 due to 8 buttons)
   /* //commented out as legacy of older program
   if (rec == 'h'){   
      
      if (mode == 0) { hue = Serial.parseInt(); count = 0; }
      if (mode == 1) { copxhue = Serial.parseInt();}
      if (mode == 2) { raingap = Serial.parseInt();}
      if (mode == 3) { cfxhue = Serial.parseInt();}
      if (mode == 4) { grstrt = Serial.parseInt();}
      
        if (raingap > 255){raingap = 255;}  }
      

//also for SNESvariable left right
     
   if (rec == 'd'){ 
    
    if (mode == 0) {tdelay = Serial.parseInt(); }
    if (mode == 1) {copyhue = Serial.parseInt(); }
    if (mode == 2) {rainspeed = Serial.parseInt(); }
    if (mode == 3) {cfxdelay = Serial.parseInt(); }
    if (mode == 4) {grfn = Serial.parseInt(); }
     
     if (tdelay > 25) {tdelay = 25;}
     if (rainspeed > 200) {tdelay = 200;}  }



//also for SNESvariable xy
     
   if (rec == 'x'){
    if (mode == 0) { xdelay = Serial.parseInt(); }
    if (mode == 1) { copxdelay = Serial.parseInt(); }
    if (mode == 4) { grs = Serial.parseInt(); }

     if (xdelay > 60000) {xdelay = 60000;} if (copxdelay > 60000) {copxdelay = 60000;}  }

//also for SNESvariable ab
     
    if (rec == 'y'){

      if (mode == 0) {ydelay = Serial.parseInt(); }
      if (mode == 1) {copydelay = Serial.parseInt();}
     
     if (ydelay > 60000) {ydelay = 60000;}  }
     
     
   */

//also for SNESvariable shoulder buttons   
