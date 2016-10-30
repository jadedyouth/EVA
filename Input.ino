void checkinput(){
   //serial inputs             
 
  while (Serial.available() > 0){ // checks serial for any activity at all, if there is, it keeps it as rec
  rec = Serial.read();



    if (rec == 'm'){ {   
      mode = Serial.parseInt(); } //this parses (separates the numerical from the alphabetical because maths, thats how and mode becomes that number, prints the name here that way it only turns up in the serial once
       if (mode == 0) { clearsheet (); Serial.println(); Serial.println(); Serial.println("m0: Jack and Neal's Random Burst");}
       if (mode == 1) { clearsheet (); Serial.println(); Serial.println(); Serial.println("m1: The Old M88 Rainbow"); }
       if (mode == 2) { clearsheet (); Serial.println(); Serial.println(); Serial.println("m2: Random Flashing");}  
       if (mode == 3) { clearsheet (); Serial.println(); Serial.println(); Serial.println("m3: RGB Pixel Test Mode");} 
       if (mode == 4) { clearsheet (); Serial.println(); Serial.println(); Serial.println("m4: Solid Colour I spose");} 
     //  if (mode == 5) { clearsheet (); Serial.println(); Serial.println(); Serial.println("m5: All White");} 
       }
   
   
    if (rec == 'r') {software_Reset();} //resets the program
    if (rec == 'q') { tutorial();} //shows tutorial
    if (rec == 'i') { showindex();} //shows list of commands
    if (rec == ',') { PSU_ON ();} //turns the psu on
    if (rec == '.') { PSU_OFF ();} //turns the psu off
    if (rec == 'o') {layoutSideways ();} //shows pixel layout for a horizontal dropsheet with starting pixel (0) in the bottom right corner
     if (rec == 'P') {pause ();}
  }

}

  
 //MAIN SNESInputs
void snesIn () {
  btns = Spad.getButtons(false); //these commands are inverted. not sure exactly what that means but pretty much every SNES code from here on starts with ! (not).

/*
  // True if A *AND* B were pressed
  if(!(btns & (BTN_A | BTN_B)))
    Serial.println("BTN_A + BTN_B"); */

  //True if X *AND* Y were pressed together
  if(!(btns & (BTN_X | BTN_Y))) { } //nothing happens yet
    


  if(!(btns & (BTN_X | BTN_A | BTN_UP))) {} //not used yet. there's a bunch of this sitting around so I don't forget I can use it.
  

  // Scrolling up and down through the modes using up and down
  if(!(btns & BTN_UP)) {

    if( mode < 99){
                                                                          mode= mode +1; clearsheet ();
                                                waitThree();              if (mode > 5) {mode = 5;} //limits the highest mode you can get to
  }}


  if(!(btns & BTN_DOWN)) {
   if( mode <99){
                                               waitThree();                     mode= mode -1; clearsheet ();
                                                                            if (mode < 0) {mode = 0;} //and the lowest
  }}
    

//these commands are nested and probably need cleaning up. but basically L+R+Start+Down turns the psu power off and L+R+Start+up turns it back on again if the microcontroller has power from elsewhere. 
//if it doesnt the PSU has a push-to-make switch that you can hold from 2 seconds to get it going again.
// True, if L *AND* R were pressed
    if(!(btns & (BTN_L | BTN_R)))
    {

        if(!(btns & (BTN_START | BTN_DOWN)))
  {     waitThree();        PSU_OFF ();}

        if(!(btns & (BTN_START | BTN_UP)))
  {     waitThree();        PSU_ON ();}


    else { Serial.println("BTN_L + BTN_R"); } //nothing really happens here, its just a reminder i can put something here if want
    }

  // True if START *AND* SELECT were pressed
  if(!(btns & (BTN_START | BTN_SELECT)))
  {
    // True, if L *AND* R were pressed
    if(!(btns & (BTN_L | BTN_R)))
    {
      // Now, START & SELECT *AND* L & R were pressed!
      Serial.println("BTN_START + BTN_SELECT + BTN_L + BTN_R");     waitThree(); //these various waits are so we don't flood the serial and because the buttons can be a bit sensitive.
      software_Reset(); 
      
    }
    else
    {
      // START & SELECT were pressed, L&R not
      
  // This gets you into paint mode from the main menu. I wanted it separate from the other scrolling when i was writing because of its extra complexity.  
      if(mode <99 ){ clearsheet (); mode = 99; waitThree(); Serial.println("Paint Mode");}
    }
  }
  }


