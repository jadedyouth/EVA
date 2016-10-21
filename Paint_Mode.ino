//These are the main loops for paint mode. it got a bit long so the SNES inputs are in the next tab and the palette is in the 3rd one.

void checkpaintserial (){
   while (Serial.available() > 0){
   
  prec = Serial.read();
  if (prec == 'm'){    //gets you out of paint mode and back to the main menu
      mode = Serial.parseInt(); }

       if (prec == '~') {printPaint (); } //prints all the HSV numbers to the serial so you can capture it later
      if (prec == 'P') {pause (); } //pauses everything until you enter the same command again. note this is a capital P, not to be confused with lower case p for pixel number in this mode.
     


//IKJL will navigate you up down left and right around the sheet. you still have to hit enter after each letter.

      if (prec == 'i'){ //up 
      
      if (pmode >= 0 & pmode <= 8)  { pmode = pmode + 1; if (pmode > 8) {pmode = 0;} }  
      if (pmode >= 9 & pmode <= 17) { pmode = pmode - 1; if (pmode < 9) {pmode = 17;} } 
      if (pmode >= 18 & pmode <= 26) { pmode = pmode + 1; if (pmode > 26) {pmode = 18;} }  
      if (pmode >= 27 & pmode <= 35) { pmode = pmode - 1; if (pmode < 27) {pmode = 35;} } 
      if (pmode >= 36 & pmode <= 44) { pmode = pmode + 1; if (pmode > 44) {pmode = 36;} }  
      if (pmode >= 45 & pmode <= 53) { pmode = pmode - 1; if (pmode < 45) {pmode = 53;} } 
      if (pmode >= 54 & pmode <= 62) { pmode = pmode + 1; if (pmode > 62) {pmode = 54;} }  
      if (pmode >= 63 & pmode <= 71) { pmode = pmode - 1; if (pmode < 63) {pmode = 71;} } 
      if (pmode >= 72 & pmode <= 80) { pmode = pmode + 1; if (pmode > 80) {pmode = 72;} }  
      if (pmode >= 81 & pmode <= 89) { pmode = pmode - 1; if (pmode < 81) {pmode = 89;} } 
     
      }

      if (prec == 'k'){    //down
      
      if (pmode >= 0 & pmode <= 8) { pmode = pmode - 1; if (pmode < 0) {pmode = 8;} }  
      if (pmode >= 9 & pmode <= 17) { pmode = pmode + 1; if (pmode > 17) {pmode = 9;} } 
      if (pmode >= 18 & pmode <= 26) { pmode = pmode - 1; if (pmode < 18) {pmode = 26;} }  
      if (pmode >= 27 & pmode <= 35) { pmode = pmode + 1; if (pmode > 35) {pmode = 27;} } 
      if (pmode >= 36 & pmode <= 44) { pmode = pmode - 1; if (pmode < 36) {pmode = 44;} }  
      if (pmode >= 45 & pmode <= 53) { pmode = pmode + 1; if (pmode > 53) {pmode = 45;} } 
      if (pmode >= 54 & pmode <= 62) { pmode = pmode - 1; if (pmode < 54) {pmode = 62;} }  
      if (pmode >= 63 & pmode <= 71) { pmode = pmode + 1; if (pmode > 71) {pmode = 63;} } 
      if (pmode >= 72 & pmode <= 80) { pmode = pmode - 1; if (pmode < 72) {pmode = 80;} }  
      if (pmode >= 81 & pmode <= 89) { pmode = pmode + 1; if (pmode > 89) {pmode = 81;} } 
       
       }


      if (prec == 'j'){    //left 
           
            if (pmode == 81) {pmode = 8; break;} 
            if (pmode == 82) {pmode = 7; break;} 
            if (pmode == 83) {pmode = 6; break;} 
            if (pmode == 84) {pmode = 5; break;} 
            if (pmode == 85) {pmode = 4; break;} 
            if (pmode == 86) {pmode = 3; break;} 
            if (pmode == 87) {pmode = 2; break;} 
            if (pmode == 88) {pmode = 1; break;} 
            if (pmode == 89) {pmode = 0; break;} 
        
            if (pmode == 72) {pmode = pmode +17; break;} 
            if (pmode == 73) {pmode = pmode +15; break;} 
            if (pmode == 74) {pmode = pmode +13; break;} 
            if (pmode == 75) {pmode = pmode +11; break;} 
            if (pmode == 76) {pmode = pmode + 9; break;} 
            if (pmode == 77) {pmode = pmode + 7; break;} 
            if (pmode == 78) {pmode = pmode + 5; break;} 
            if (pmode == 79) {pmode = pmode + 3; break;} 
            if (pmode == 80) {pmode = pmode + 1; break;} 
            
            if (pmode == 63) {pmode = pmode +17; break;} 
            if (pmode == 64) {pmode = pmode +15; break;} 
            if (pmode == 65) {pmode = pmode +13; break;} 
            if (pmode == 66) {pmode = pmode +11; break;} 
            if (pmode == 67) {pmode = pmode + 9; break;} 
            if (pmode == 68) {pmode = pmode + 7; break;} 
            if (pmode == 69) {pmode = pmode + 5; break;} 
            if (pmode == 70) {pmode = pmode + 3; break;} 
            if (pmode == 71) {pmode = pmode + 1; break;} 

            if (pmode == 54) {pmode = pmode +17; break;} 
            if (pmode == 55) {pmode = pmode +15; break;} 
            if (pmode == 56) {pmode = pmode +13; break;} 
            if (pmode == 57) {pmode = pmode +11; break;} 
            if (pmode == 58) {pmode = pmode + 9; break;} 
            if (pmode == 59) {pmode = pmode + 7; break;} 
            if (pmode == 60) {pmode = pmode + 5; break;} 
            if (pmode == 61) {pmode = pmode + 3; break;} 
            if (pmode == 62) {pmode = pmode + 1; break;} 
            
            if (pmode == 45) {pmode = pmode +17; break;} 
            if (pmode == 46) {pmode = pmode +15; break;} 
            if (pmode == 47) {pmode = pmode +13; break;} 
            if (pmode == 48) {pmode = pmode +11; break;} 
            if (pmode == 49) {pmode = pmode + 9; break;} 
            if (pmode == 50) {pmode = pmode + 7; break;} 
            if (pmode == 51) {pmode = pmode + 5; break;} 
            if (pmode == 52) {pmode = pmode + 3; break;} 
            if (pmode == 53) {pmode = pmode + 1; break;} 

            if (pmode == 36) {pmode = pmode +17; break;} 
            if (pmode == 37) {pmode = pmode +15; break;} 
            if (pmode == 38) {pmode = pmode +13; break;} 
            if (pmode == 39) {pmode = pmode +11; break;} 
            if (pmode == 40) {pmode = pmode + 9; break;} 
            if (pmode == 41) {pmode = pmode + 7; break;} 
            if (pmode == 42) {pmode = pmode + 5; break;} 
            if (pmode == 43) {pmode = pmode + 3; break;} 
            if (pmode == 44) {pmode = pmode + 1; break;} 

            if (pmode == 27) {pmode = pmode +17; break;} 
            if (pmode == 28) {pmode = pmode +15; break;} 
            if (pmode == 29) {pmode = pmode +13; break;} 
            if (pmode == 30) {pmode = pmode +11; break;} 
            if (pmode == 31) {pmode = pmode + 9; break;} 
            if (pmode == 32) {pmode = pmode + 7; break;} 
            if (pmode == 33) {pmode = pmode + 5; break;} 
            if (pmode == 34) {pmode = pmode + 3; break;} 
            if (pmode == 35) {pmode = pmode + 1; break;}

            if (pmode == 18) {pmode = pmode +17; break;} 
            if (pmode == 19) {pmode = pmode +15; break;} 
            if (pmode == 20) {pmode = pmode +13; break;} 
            if (pmode == 21) {pmode = pmode +11; break;} 
            if (pmode == 22) {pmode = pmode + 9; break;} 
            if (pmode == 23) {pmode = pmode + 7; break;} 
            if (pmode == 24) {pmode = pmode + 5; break;} 
            if (pmode == 25) {pmode = pmode + 3; break;} 
            if (pmode == 26) {pmode = pmode + 1; break;}

            if (pmode == 9) {pmode = pmode +17; break;} 
            if (pmode == 10) {pmode = pmode +15; break;} 
            if (pmode == 11) {pmode = pmode +13; break;} 
            if (pmode == 12) {pmode = pmode +11; break;} 
            if (pmode == 13) {pmode = pmode + 9; break;} 
            if (pmode == 14) {pmode = pmode + 7; break;} 
            if (pmode == 15) {pmode = pmode + 5; break;} 
            if (pmode == 16) {pmode = pmode + 3; break;} 
            if (pmode == 17) {pmode = pmode + 1; break;} 
        
            if (pmode == 0) {pmode = pmode +17; break;} 
            if (pmode == 1) {pmode = pmode +15; break;} 
            if (pmode == 2) {pmode = pmode +13; break;} 
            if (pmode == 3) {pmode = pmode +11; break;} 
            if (pmode == 4) {pmode = pmode + 9; break;} 
            if (pmode == 5) {pmode = pmode + 7; break;} 
            if (pmode == 6) {pmode = pmode + 5; break;} 
            if (pmode == 7) {pmode = pmode + 3; break;} 
            if (pmode == 8) {pmode = pmode + 1; break;} 


        }
      
      
      if (prec == 'l'){    //right
         
        
            if (pmode == 81) {pmode = pmode -1; break;} 
            if (pmode == 82) {pmode = pmode -3; break;} 
            if (pmode == 83) {pmode = pmode -5; break;} 
            if (pmode == 84) {pmode = pmode -7; break;} 
            if (pmode == 85) {pmode = pmode -9; break;} 
            if (pmode == 86) {pmode = pmode -11; break;} 
            if (pmode == 87) {pmode = pmode -13; break;} 
            if (pmode == 88) {pmode = pmode -15; break;} 
            if (pmode == 89) {pmode = pmode -17; break;}   
 
            if (pmode == 72) {pmode = pmode -1; break;} 
            if (pmode == 73) {pmode = pmode -3; break;} 
            if (pmode == 74) {pmode = pmode -5; break;} 
            if (pmode == 75) {pmode = pmode -7; break;} 
            if (pmode == 76) {pmode = pmode -9; break;} 
            if (pmode == 77) {pmode = pmode -11; break;} 
            if (pmode == 78) {pmode = pmode -13; break;} 
            if (pmode == 79) {pmode = pmode -15; break;} 
            if (pmode == 80) {pmode = pmode -17; break;} 
            
            if (pmode == 63) {pmode = pmode -1; break;} 
            if (pmode == 64) {pmode = pmode -3; break;} 
            if (pmode == 65) {pmode = pmode -5; break;} 
            if (pmode == 66) {pmode = pmode -7; break;} 
            if (pmode == 67) {pmode = pmode -9; break;} 
            if (pmode == 68) {pmode = pmode -11; break;} 
            if (pmode == 69) {pmode = pmode -13; break;} 
            if (pmode == 70) {pmode = pmode -15; break;} 
            if (pmode == 71) {pmode = pmode -17; break;} 

            if (pmode == 54) {pmode = pmode -1; break;} 
            if (pmode == 55) {pmode = pmode -3; break;} 
            if (pmode == 56) {pmode = pmode -5; break;} 
            if (pmode == 57) {pmode = pmode -7; break;} 
            if (pmode == 58) {pmode = pmode -9; break;} 
            if (pmode == 59) {pmode = pmode -11; break;} 
            if (pmode == 60) {pmode = pmode -13; break;} 
            if (pmode == 61) {pmode = pmode -15; break;} 
            if (pmode == 62) {pmode = pmode -17; break;} 
            
            if (pmode == 45) {pmode = pmode -1; break;} 
            if (pmode == 46) {pmode = pmode -3; break;} 
            if (pmode == 47) {pmode = pmode -5; break;} 
            if (pmode == 48) {pmode = pmode -7; break;} 
            if (pmode == 49) {pmode = pmode -9; break;} 
            if (pmode == 50) {pmode = pmode -11; break;} 
            if (pmode == 51) {pmode = pmode -13; break;} 
            if (pmode == 52) {pmode = pmode -15; break;} 
            if (pmode == 53) {pmode = pmode -17; break;} 

            if (pmode == 36) {pmode = pmode -1; break;} 
            if (pmode == 37) {pmode = pmode -3; break;} 
            if (pmode == 38) {pmode = pmode -5; break;} 
            if (pmode == 39) {pmode = pmode -7; break;} 
            if (pmode == 40) {pmode = pmode -9; break;} 
            if (pmode == 41) {pmode = pmode -11; break;} 
            if (pmode == 42) {pmode = pmode -13; break;} 
            if (pmode == 43) {pmode = pmode -15; break;} 
            if (pmode == 44) {pmode = pmode -17; break;} 

            if (pmode == 27) {pmode = pmode -1; break;} 
            if (pmode == 28) {pmode = pmode -3; break;} 
            if (pmode == 29) {pmode = pmode -5; break;} 
            if (pmode == 30) {pmode = pmode -7; break;} 
            if (pmode == 31) {pmode = pmode -9; break;} 
            if (pmode == 32) {pmode = pmode -11; break;} 
            if (pmode == 33) {pmode = pmode -13; break;} 
            if (pmode == 34) {pmode = pmode -15; break;} 
            if (pmode == 35) {pmode = pmode -17; break;} 

            if (pmode == 18) {pmode = pmode -1; break;} 
            if (pmode == 19) {pmode = pmode -3; break;} 
            if (pmode == 20) {pmode = pmode -5; break;} 
            if (pmode == 21) {pmode = pmode -7; break;} 
            if (pmode == 22) {pmode = pmode -9; break;}  
            if (pmode == 23) {pmode = pmode -11; break;} 
            if (pmode == 24) {pmode = pmode -13; break;} 
            if (pmode == 25) {pmode = pmode -15; break;} 
            if (pmode == 26) {pmode = pmode -17; break;} 

            if (pmode == 9) {pmode = pmode -1; break;} 
            if (pmode == 10) {pmode = pmode -3; break;} 
            if (pmode == 11) {pmode = pmode -5; break;} 
            if (pmode == 12) {pmode = pmode -7; break;} 
            if (pmode == 13) {pmode = pmode -9; break;} 
            if (pmode == 14) {pmode = pmode -11; break;} 
            if (pmode == 15) {pmode = pmode -13; break;} 
            if (pmode == 16) {pmode = pmode -15; break;} 
            if (pmode == 17) {pmode = pmode -17; break;} 

            if (pmode == 0) {pmode = 89; break;} 
            if (pmode == 1) {pmode = 88; break;} 
            if (pmode == 2) {pmode = 87; break;} 
            if (pmode == 3) {pmode = 86; break;} 
            if (pmode == 4) {pmode = 85; break;} 
            if (pmode == 5) {pmode = 84; break;} 
            if (pmode == 6) {pmode = 83; break;} 
            if (pmode == 7) {pmode = 82; break;} 
            if (pmode == 8) {pmode = 81; break;} 
        
        }



 if (prec == 'p'){    //this calls up the pixel directly eg typing in p56 will make pixel 56 start flashing and enable you to change its Hue (colour), Saturation (whiteness), and Value (brightness).
      pmode = Serial.parseInt(); }


if ( prec == 'u') {showPicture ();} //show all when returning from another mode/state

if (pmode == 69) {  Serial.println(); Serial.println("...lol");} //because it's never not funny

//Keyboard serial inputs for changing the HSV. once the pixel is called up, typing in h, s, or v and a number between 0 and 255 will change it. eg h96 will turn the flashing pixel green.
if (prec == 'h'){   //hue
      
      if (pmode == 0) { paah = Serial.parseInt();}
      if (pmode == 1) { pabh = Serial.parseInt();} 
      if (pmode == 2) { pach = Serial.parseInt();}
      if (pmode == 3) { padh = Serial.parseInt();} 
      if (pmode == 4) { paeh = Serial.parseInt();}
      if (pmode == 5) { pafh = Serial.parseInt();} 
      if (pmode == 6) { pagh = Serial.parseInt();}
      if (pmode == 7) { pahh = Serial.parseInt();}
      if (pmode == 8) { paih = Serial.parseInt();}
      if (pmode == 9) { pajh = Serial.parseInt();} 
      if (pmode == 10) { pakh = Serial.parseInt();}
      if (pmode == 11) { palh = Serial.parseInt();} 
      if (pmode == 12) { pamh = Serial.parseInt();}
      if (pmode == 13) { panh = Serial.parseInt();} 
      if (pmode == 14) { paoh = Serial.parseInt();}
      if (pmode == 15) { paph = Serial.parseInt();}
      if (pmode == 16) { paqh = Serial.parseInt();}
      if (pmode == 17) { parh = Serial.parseInt();} 
      if (pmode == 18) { pash = Serial.parseInt();}
      if (pmode == 19) { path = Serial.parseInt();} 
      if (pmode == 20) { pauh = Serial.parseInt();}
      if (pmode == 21) { pavh = Serial.parseInt();} 
      if (pmode == 22) { pawh = Serial.parseInt();}
      if (pmode == 23) { paxh = Serial.parseInt();}
      if (pmode == 24) { payh = Serial.parseInt();}
      if (pmode == 25) { pazh = Serial.parseInt();} 
      if (pmode == 26) { pbah = Serial.parseInt();}
      if (pmode == 27) { pbbh = Serial.parseInt();} 
      if (pmode == 28) { pbch = Serial.parseInt();}
      if (pmode == 29) { pbdh = Serial.parseInt();} 
      if (pmode == 30) { pbeh = Serial.parseInt();}
      if (pmode == 31) { pbfh = Serial.parseInt();} 
      if (pmode == 32) { pbgh = Serial.parseInt();}
      if (pmode == 33) { pbhh = Serial.parseInt();}
      if (pmode == 34) { pbih = Serial.parseInt();}
      if (pmode == 35) { pbjh = Serial.parseInt();} 
      if (pmode == 36) { pbkh = Serial.parseInt();}
      if (pmode == 37) { pblh = Serial.parseInt();} 
      if (pmode == 38) { pbmh = Serial.parseInt();}
      if (pmode == 39) { pbnh = Serial.parseInt();} 
      if (pmode == 40) { pboh = Serial.parseInt();}
      if (pmode == 41) { pbph = Serial.parseInt();} 
      if (pmode == 42) { pbqh = Serial.parseInt();}
      if (pmode == 43) { pbrh = Serial.parseInt();}
      if (pmode == 44) { pbsh = Serial.parseInt();}
      if (pmode == 45) { pbth = Serial.parseInt();} 
      if (pmode == 46) { pbuh = Serial.parseInt();} 
      if (pmode == 47) { pbvh = Serial.parseInt();}
      if (pmode == 48) { pbwh = Serial.parseInt();} 
      if (pmode == 49) { pbxh = Serial.parseInt();}
      if (pmode == 50) { pbyh = Serial.parseInt();} 
      if (pmode == 51) { pbzh = Serial.parseInt();}
      if (pmode == 52) { pcah = Serial.parseInt();} 
      if (pmode == 53) { pcbh = Serial.parseInt();}
      if (pmode == 54) { pcch = Serial.parseInt();}
      if (pmode == 55) { pcdh = Serial.parseInt();}
      if (pmode == 56) { pceh = Serial.parseInt();}
      if (pmode == 57) { pcfh = Serial.parseInt();}
      if (pmode == 58) { pcgh = Serial.parseInt();} 
      if (pmode == 59) { pchh = Serial.parseInt();}
      if (pmode == 60) { pcih = Serial.parseInt();} 
      if (pmode == 61) { pcjh = Serial.parseInt();}
      if (pmode == 62) { pckh = Serial.parseInt();} 
      if (pmode == 63) { pclh = Serial.parseInt();}
      if (pmode == 64) { pcmh = Serial.parseInt();}
      if (pmode == 65) { pcnh = Serial.parseInt();}
      if (pmode == 66) { pcoh = Serial.parseInt();}
      if (pmode == 67) { pcph = Serial.parseInt();}
      if (pmode == 68) { pcqh = Serial.parseInt();} 
      if (pmode == 69) { pcrh = Serial.parseInt();}
      if (pmode == 70) { pcsh = Serial.parseInt();} 
      if (pmode == 71) { pcth = Serial.parseInt();}
      if (pmode == 72) { pcuh = Serial.parseInt();} 
      if (pmode == 73) { pcvh = Serial.parseInt();}
      if (pmode == 74) { pcwh = Serial.parseInt();}
      if (pmode == 75) { pcxh = Serial.parseInt();}
      if (pmode == 76) { pcyh = Serial.parseInt();}
      if (pmode == 77) { pczh = Serial.parseInt();}
      if (pmode == 78) { pdah = Serial.parseInt();} 
      if (pmode == 79) { pdbh = Serial.parseInt();}
      if (pmode == 80) { pdch = Serial.parseInt();} 
      if (pmode == 81) { pddh = Serial.parseInt();}
      if (pmode == 82) { pdeh = Serial.parseInt();} 
      if (pmode == 83) { pdfh = Serial.parseInt();}
      if (pmode == 84) { pdgh = Serial.parseInt();}
      if (pmode == 85) { pdhh = Serial.parseInt();}
      if (pmode == 86) { pdih = Serial.parseInt();}
      if (pmode == 87) { pdjh = Serial.parseInt();}
      if (pmode == 88) { pdkh = Serial.parseInt();}
      if (pmode == 89) { pdlh = Serial.parseInt();}
      
      }
    
   
   if (prec == 's'){   //saturation
      
      if (pmode == 0) { paas = Serial.parseInt();}
      if (pmode == 1) { pabs = Serial.parseInt();} 
      if (pmode == 2) { pacs = Serial.parseInt();}
      if (pmode == 3) { pads = Serial.parseInt();} 
      if (pmode == 4) { paes = Serial.parseInt();}
      if (pmode == 5) { pafs = Serial.parseInt();} 
      if (pmode == 6) { pags = Serial.parseInt();}
      if (pmode == 7) { pahs = Serial.parseInt();}
      if (pmode == 8) { pais = Serial.parseInt();}
      if (pmode == 9) { pajs = Serial.parseInt();} 
      if (pmode == 10) { paks = Serial.parseInt();}
      if (pmode == 11) { pals = Serial.parseInt();} 
      if (pmode == 12) { pams = Serial.parseInt();}
      if (pmode == 13) { pans = Serial.parseInt();} 
      if (pmode == 14) { paos = Serial.parseInt();}
      if (pmode == 15) { paps = Serial.parseInt();}
      if (pmode == 16) { paqs = Serial.parseInt();}
      if (pmode == 17) { pars = Serial.parseInt();} 
      if (pmode == 18) { pass = Serial.parseInt();}
      if (pmode == 19) { pats = Serial.parseInt();} 
      if (pmode == 20) { paus = Serial.parseInt();}
      if (pmode == 21) { pavs = Serial.parseInt();} 
      if (pmode == 22) { paws = Serial.parseInt();}
      if (pmode == 23) { paxs = Serial.parseInt();}
      if (pmode == 24) { pays = Serial.parseInt();}
      if (pmode == 25) { pazs = Serial.parseInt();} 
      if (pmode == 26) { pbas = Serial.parseInt();}
      if (pmode == 27) { pbbs = Serial.parseInt();} 
      if (pmode == 28) { pbcs = Serial.parseInt();}
      if (pmode == 29) { pbds = Serial.parseInt();} 
      if (pmode == 30) { pbes = Serial.parseInt();}
      if (pmode == 31) { pbfs = Serial.parseInt();} 
      if (pmode == 32) { pbgs = Serial.parseInt();}
      if (pmode == 33) { pbhs = Serial.parseInt();}
      if (pmode == 34) { pbis = Serial.parseInt();}
      if (pmode == 35) { pbjs = Serial.parseInt();} 
      if (pmode == 36) { pbks = Serial.parseInt();}
      if (pmode == 37) { pbls = Serial.parseInt();} 
      if (pmode == 38) { pbms = Serial.parseInt();}
      if (pmode == 39) { pbns = Serial.parseInt();} 
      if (pmode == 40) { pbos = Serial.parseInt();}
      if (pmode == 41) { pbps = Serial.parseInt();} 
      if (pmode == 42) { pbqs = Serial.parseInt();}
      if (pmode == 43) { pbrs = Serial.parseInt();}
      if (pmode == 44) { pbss = Serial.parseInt();}
      if (pmode == 45) { pbts = Serial.parseInt();} 
      if (pmode == 46) { pbus = Serial.parseInt();} 
      if (pmode == 47) { pbvs = Serial.parseInt();}
      if (pmode == 48) { pbws = Serial.parseInt();} 
      if (pmode == 49) { pbxs = Serial.parseInt();}
      if (pmode == 50) { pbys = Serial.parseInt();} 
      if (pmode == 51) { pbzs = Serial.parseInt();}
      if (pmode == 52) { pcas = Serial.parseInt();} 
      if (pmode == 53) { pcbs = Serial.parseInt();}
      if (pmode == 54) { pccs = Serial.parseInt();}
      if (pmode == 55) { pcds = Serial.parseInt();}
      if (pmode == 56) { pces = Serial.parseInt();}
      if (pmode == 57) { pcfs = Serial.parseInt();}
      if (pmode == 58) { pcgs = Serial.parseInt();} 
      if (pmode == 59) { pchs = Serial.parseInt();}
      if (pmode == 60) { pcis = Serial.parseInt();} 
      if (pmode == 61) { pcjs = Serial.parseInt();}
      if (pmode == 62) { pcks = Serial.parseInt();} 
      if (pmode == 63) { pcls = Serial.parseInt();}
      if (pmode == 64) { pcms = Serial.parseInt();}
      if (pmode == 65) { pcns = Serial.parseInt();}
      if (pmode == 66) { pcos = Serial.parseInt();}
      if (pmode == 67) { pcps = Serial.parseInt();}
      if (pmode == 68) { pcqs = Serial.parseInt();} 
      if (pmode == 69) { pcrs = Serial.parseInt();}
      if (pmode == 70) { pcss = Serial.parseInt();} 
      if (pmode == 71) { pcts = Serial.parseInt();}
      if (pmode == 72) { pcus = Serial.parseInt();} 
      if (pmode == 73) { pcvs = Serial.parseInt();}
      if (pmode == 74) { pcws = Serial.parseInt();}
      if (pmode == 75) { pcxs = Serial.parseInt();}
      if (pmode == 76) { pcys = Serial.parseInt();}
      if (pmode == 77) { pczs = Serial.parseInt();}
      if (pmode == 78) { pdas = Serial.parseInt();} 
      if (pmode == 79) { pdbs = Serial.parseInt();}
      if (pmode == 80) { pdcs = Serial.parseInt();} 
      if (pmode == 81) { pdds = Serial.parseInt();}
      if (pmode == 82) { pdes = Serial.parseInt();} 
      if (pmode == 83) { pdfs = Serial.parseInt();}
      if (pmode == 84) { pdgs = Serial.parseInt();}
      if (pmode == 85) { pdhs = Serial.parseInt();}
      if (pmode == 86) { pdis = Serial.parseInt();}
      if (pmode == 87) { pdjs = Serial.parseInt();}
      if (pmode == 88) { pdks = Serial.parseInt();}
      if (pmode == 89) { pdls = Serial.parseInt();}
   }
    

   if (prec == 'v'){   //value
      
      if (pmode == 0) { paav = Serial.parseInt();}
      if (pmode == 1) { pabv = Serial.parseInt();} 
      if (pmode == 2) { pacv = Serial.parseInt();}
      if (pmode == 3) { padv = Serial.parseInt();} 
      if (pmode == 4) { paev = Serial.parseInt();}
      if (pmode == 5) { pafv = Serial.parseInt();} 
      if (pmode == 6) { pagv = Serial.parseInt();}
      if (pmode == 7) { pahv = Serial.parseInt();}
      if (pmode == 8) { paiv = Serial.parseInt();}
      if (pmode == 9) { pajv = Serial.parseInt();} 
      if (pmode == 10) { pakv = Serial.parseInt();}
      if (pmode == 11) { palv = Serial.parseInt();} 
      if (pmode == 12) { pamv = Serial.parseInt();}
      if (pmode == 13) { panv = Serial.parseInt();} 
      if (pmode == 14) { paov = Serial.parseInt();}
      if (pmode == 15) { papv = Serial.parseInt();}
      if (pmode == 16) { paqv = Serial.parseInt();}
      if (pmode == 17) { parv = Serial.parseInt();} 
      if (pmode == 18) { pasv = Serial.parseInt();}
      if (pmode == 19) { patv = Serial.parseInt();} 
      if (pmode == 20) { pauv = Serial.parseInt();}
      if (pmode == 21) { pavv = Serial.parseInt();} 
      if (pmode == 22) { pawv = Serial.parseInt();}
      if (pmode == 23) { paxv = Serial.parseInt();}
      if (pmode == 24) { payv = Serial.parseInt();}
      if (pmode == 25) { pazv = Serial.parseInt();} 
      if (pmode == 26) { pbav = Serial.parseInt();}
      if (pmode == 27) { pbbv = Serial.parseInt();} 
      if (pmode == 28) { pbcv = Serial.parseInt();}
      if (pmode == 29) { pbdv = Serial.parseInt();} 
      if (pmode == 30) { pbev = Serial.parseInt();}
      if (pmode == 31) { pbfv = Serial.parseInt();} 
      if (pmode == 32) { pbgv = Serial.parseInt();}
      if (pmode == 33) { pbhv = Serial.parseInt();}
      if (pmode == 34) { pbiv = Serial.parseInt();}
      if (pmode == 35) { pbjv = Serial.parseInt();} 
      if (pmode == 36) { pbkv = Serial.parseInt();}
      if (pmode == 37) { pblv = Serial.parseInt();} 
      if (pmode == 38) { pbmv = Serial.parseInt();}
      if (pmode == 39) { pbnv = Serial.parseInt();} 
      if (pmode == 40) { pbov = Serial.parseInt();}
      if (pmode == 41) { pbpv = Serial.parseInt();} 
      if (pmode == 42) { pbqv = Serial.parseInt();}
      if (pmode == 43) { pbrv = Serial.parseInt();}
      if (pmode == 44) { pbsv = Serial.parseInt();}
      if (pmode == 45) { pbtv = Serial.parseInt();} 
      if (pmode == 46) { pbuv = Serial.parseInt();} 
      if (pmode == 47) { pbvv = Serial.parseInt();}
      if (pmode == 48) { pbwv = Serial.parseInt();} 
      if (pmode == 49) { pbxv = Serial.parseInt();}
      if (pmode == 50) { pbyv = Serial.parseInt();} 
      if (pmode == 51) { pbzv = Serial.parseInt();}
      if (pmode == 52) { pcav = Serial.parseInt();} 
      if (pmode == 53) { pcbv = Serial.parseInt();}
      if (pmode == 54) { pccv = Serial.parseInt();}
      if (pmode == 55) { pcdv = Serial.parseInt();}
      if (pmode == 56) { pcev = Serial.parseInt();}
      if (pmode == 57) { pcfv = Serial.parseInt();}
      if (pmode == 58) { pcgv = Serial.parseInt();} 
      if (pmode == 59) { pchv = Serial.parseInt();}
      if (pmode == 60) { pciv = Serial.parseInt();} 
      if (pmode == 61) { pcjv = Serial.parseInt();}
      if (pmode == 62) { pckv = Serial.parseInt();} 
      if (pmode == 63) { pclv = Serial.parseInt();}
      if (pmode == 64) { pcmv = Serial.parseInt();}
      if (pmode == 65) { pcnv = Serial.parseInt();}
      if (pmode == 66) { pcov = Serial.parseInt();}
      if (pmode == 67) { pcpv = Serial.parseInt();}
      if (pmode == 68) { pcqv = Serial.parseInt();} 
      if (pmode == 69) { pcrv = Serial.parseInt();}
      if (pmode == 70) { pcsv = Serial.parseInt();} 
      if (pmode == 71) { pctv = Serial.parseInt();}
      if (pmode == 72) { pcuv = Serial.parseInt();} 
      if (pmode == 73) { pcvv = Serial.parseInt();}
      if (pmode == 74) { pcwv = Serial.parseInt();}
      if (pmode == 75) { pcxv = Serial.parseInt();}
      if (pmode == 76) { pcyv = Serial.parseInt();}
      if (pmode == 77) { pczv = Serial.parseInt();}
      if (pmode == 78) { pdav = Serial.parseInt();} 
      if (pmode == 79) { pdbv = Serial.parseInt();}
      if (pmode == 80) { pdcv = Serial.parseInt();} 
      if (pmode == 81) { pddv = Serial.parseInt();}
      if (pmode == 82) { pdev = Serial.parseInt();} 
      if (pmode == 83) { pdfv = Serial.parseInt();}
      if (pmode == 84) { pdgv = Serial.parseInt();}
      if (pmode == 85) { pdhv = Serial.parseInt();}
      if (pmode == 86) { pdiv = Serial.parseInt();}
      if (pmode == 87) { pdjv = Serial.parseInt();}
      if (pmode == 88) { pdkv = Serial.parseInt();}
      if (pmode == 89) { pdlv = Serial.parseInt();} }
   } 
   
   }

void paintmode () { //switches between each of the pixel loops. if the loop is called up. it checks if the value is 0, indicating it hasn't been called on before, and if so turns it to full brightness and runs the loop. 
      //pixels turned "off" with the SNES buttons really only go down to 1. doing it this way keeps all the unused pixels off, but allows you to still change the value (brightness) between 1 (which is invisible anyway) and 255.

checkpaintserial ();
checkPaintSNES ();
   
 
 switch (pmode) { 
  case 0: if (paav == 0) { paav = 255; } paa(); break;     
  case 1: if (pabv == 0) { pabv = 255; } pab (); break; 
  case 2: if (pacv == 0) { pacv = 255; } pac (); break;
  case 3: if (padv == 0) { padv = 255; } pad (); break;   
  case 4: if (paev == 0) { paev = 255; } pae (); break; 
  case 5: if (pafv == 0) { pafv = 255; } paf (); break; 
  case 6: if (pagv == 0) { pagv = 255; } pag (); break; 
  case 7: if (pahv == 0) { pahv = 255; } pah (); break; 
  case 8: if (paiv == 0) { paiv = 255; } pai (); break; 
  case 9: if (pajv == 0) { pajv = 255; } paj (); break; 
  case 10: if (pakv == 0) { pakv = 255; } pak (); break; 
  case 11: if (palv == 0) { palv = 255; } pal (); break; 
  case 12: if (pamv == 0) { pamv = 255; } pam (); break; 
  case 13: if (panv == 0) { panv = 255; } pan (); break;
  case 14: if (paov == 0) { paov = 255; } pao (); break; 
  case 15: if (papv == 0) { papv = 255; } pap (); break;
  case 16: if (paqv == 0) { paqv = 255; } paq (); break; 
  case 17: if (parv == 0) { parv = 255; } par (); break; 
  case 18: if (pasv == 0) { pasv = 255; } pas (); break; 
  case 19: if (patv == 0) { patv = 255; } pat (); break;
  case 20: if (pauv == 0) { pauv = 255; } pau (); break; 
  case 21: if (pavv == 0) { pavv = 255; } pav (); break;
  case 22: if (pawv == 0) { pawv = 255; } paw (); break;
  case 23: if (paxv == 0) { paxv = 255; } pax (); break; 
  case 24: if (payv == 0) { payv = 255; } pay (); break;
  case 25: if (pazv == 0) { pazv = 255; } paz (); break;
  case 26: if (pbav == 0) { pbav = 255; } pba (); break; 
  case 27: if (pbbv == 0) { pbbv = 255; } pbb (); break;
  case 28: if (pbcv == 0) { pbcv = 255; } pbc (); break;
  case 29: if (pbdv == 0) { pbdv = 255; } pbd (); break;
  case 30: if (pbev == 0) { pbev = 255; } pbe (); break;
  case 31: if (pbfv == 0) { pbfv = 255; } pbf (); break;
  case 32: if (pbgv == 0) { pbgv = 255; } pbg (); break;
  case 33: if (pbhv == 0) { pbhv = 255; } pbh (); break;
  case 34: if (pbiv == 0) { pbiv = 255; } pbi (); break;
  case 35: if (pbjv == 0) { pbjv = 255; } pbj (); break;
  case 36: if (pbkv == 0) { pbkv = 255; } pbk (); break;
  case 37: if (pblv == 0) { pblv = 255; } pbl (); break;
  case 38: if (pbmv == 0) { pbmv = 255; } pbm (); break;
  case 39: if (pbnv == 0) { pbnv = 255; } pbn (); break;
  case 40: if (pbov == 0) { pbov = 255; } pbo (); break;
  case 41: if (pbpv == 0) { pbpv = 255; } pbp (); break;
  case 42: if (pbqv == 0) { pbqv = 255; } pbq (); break;
  case 43: if (pbrv == 0) { pbrv = 255; } pbr (); break;
  case 44: if (pbsv == 0) { pbsv = 255; } pbs (); break;
  case 45: if (pbtv == 0) { pbtv = 255; } pbt (); break;
  case 46: if (pbuv == 0) { pbuv = 255; } pbu (); break;
  case 47: if (pbvv == 0) { pbvv = 255; } pbv (); break;
  case 48: if (pbwv == 0) { pbwv = 255; } pbw (); break;
  case 49: if (pbxv == 0) { pbxv = 255; } pbx (); break;
  case 50: if (pbyv == 0) { pbyv = 255; } pby (); break;
  case 51: if (pbzv == 0) { pbzv = 255; } pbz (); break;
  case 52: if (pcav == 0) { pcav = 255; } pca (); break;
  case 53: if (pcbv == 0) { pcbv = 255; } pcb (); break;
  case 54: if (pccv == 0) { pccv = 255; } pcc (); break;
  case 55: if (pcdv == 0) { pcdv = 255; } pcd (); break;
  case 56: if (pcev == 0) { pcev = 255; } pce (); break;
  case 57: if (pcfv == 0) { pcfv = 255; } pcf (); break;
  case 58: if (pcgv == 0) { pcgv = 255; } pcg (); break;
  case 59: if (pchv == 0) { pchv = 255; } pch (); break;
  case 60: if (pciv == 0) { pciv = 255; } pci (); break;
  case 61: if (pcjv == 0) { pcjv = 255; } pcj (); break;
  case 62: if (pckv == 0) { pckv = 255; } pck (); break;
  case 63: if (pclv == 0) { pclv = 255; } pcl (); break;
  case 64: if (pcmv == 0) { pcmv = 255; } pcm (); break;
  case 65: if (pcnv == 0) { pcnv = 255; } pcn (); break;
  case 66: if (pcov == 0) { pcov = 255; } pco (); break;
  case 67: if (pcpv == 0) { pcpv = 255; } pcp (); break;
  case 68: if (pcqv == 0) { pcqv = 255; } pcq (); break;
  case 69: if (pcrv == 0) { pcrv = 255; } pcr (); break; 
  case 70: if (pcsv == 0) { pcsv = 255; } pcs (); break;
  case 71: if (pctv == 0) { pctv = 255; } pct (); break;
  case 72: if (pcuv == 0) { pcuv = 255; } pcu (); break;
  case 73: if (pcvv == 0) { pcvv = 255; } pcv (); break;
  case 74: if (pcwv == 0) { pcwv = 255; } pcw (); break;
  case 75: if (pcxv == 0) { pcxv = 255; } pcx (); break;
  case 76: if (pcyv == 0) { pcyv = 255; } pcy (); break;
  case 77: if (pczv == 0) { pczv = 255; } pcz (); break;
  case 78: if (pdav == 0) { pdav = 255; } pda (); break;
  case 79: if (pdbv == 0) { pdbv = 255; } pdb (); break;
  case 80: if (pdcv == 0) { pdcv = 255; } pdc (); break;
  case 81: if (pddv == 0) { pddv = 255; } pdd (); break;
  case 82: if (pdev == 0) { pdev = 255; } pde (); break;
  case 83: if (pdfv == 0) { pdfv = 255; } pdf (); break;
  case 84: if (pdgv == 0) { pdgv = 255; } pdg (); break;
  case 85: if (pdhv == 0) { pdhv = 255; } pdh (); break;
  case 86: if (pdiv == 0) { pdiv = 255; } pdi (); break;
  case 87: if (pdjv == 0) { pdjv = 255; } pdj (); break;
  case 88: if (pdkv == 0) { pdkv = 255; } pdk (); break;
  case 89: if (pdlv == 0) { pdlv = 255; } pdl (); break;
  default: break;
  break;
 
  }
}

//Every Pixel has its own loop that when running makes the pixel blink and checks for more inputs. Each led has a variable integers for their HSV.  It also prints the pixel number, its HSV and whether it's dead to the serial.

//Pixel 0
void paa () {
   leds[0] = CHSV(paah, paas, 0); //go dark
   LEDS.show(); 
waitOne (); checkPaintSNES (); checkpaintserial (); //wait a quarter of second and check for more input
   leds[0] = CHSV(paah, paas, paav); // (Hue, Saturation, Value) turn back on
   LEDS.show(); 
waitOne (); checkPaintSNES (); checkpaintserial (); //wait a quarter of second and check for more input

unsigned long currentMillisPaintSec = millis();  //print to serial every 2 seconds
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (paah); 
    Serial.print ("  Saturation:"); Serial.println (paas);
    Serial.print ("  Value:"); Serial.println (paav); Serial.println();}
}

//Pixel 1
void pab () {
   leds[1] = CHSV(pabh, pabs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[1] = CHSV(pabh, pabs, pabv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pabh); 
    Serial.print ("  Saturation:"); Serial.println (pabs);
    Serial.print ("  Value:"); Serial.println (pabv); Serial.println();}
}
//Pixel 2
void pac () {
   leds[2] = CHSV(pach, pacs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[2] = CHSV(pach, pacs, pacv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pach); 
    Serial.print ("  Saturation:"); Serial.println (pacs);
    Serial.print ("  Value:"); Serial.println (pacv); Serial.println();}
}
//Pixel 3
void pad () {
   leds[3] = CHSV(padh, pads, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[3] = CHSV(padh, pads, padv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (padh); 
    Serial.print ("  Saturation:"); Serial.println (pads);
    Serial.print ("  Value:"); Serial.println (padv); Serial.println();}
}
//Pixel 4
void pae () {
   leds[4] = CHSV(paeh, paes, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[4] = CHSV(paeh, paes, paev); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (paeh); 
    Serial.print ("  Saturation:"); Serial.println (paes);
    Serial.print ("  Value:"); Serial.println (paev); Serial.println();}
}
//Pixel 5
void paf () {
   leds[5] = CHSV(pafh, pafs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[5] = CHSV(pafh, pafs, pafv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pafh); 
    Serial.print ("  Saturation:"); Serial.println (pafs);
    Serial.print ("  Value:"); Serial.println (pafv); Serial.println();}
}
//Pixel 6
void pag () {
   leds[6] = CHSV(pagh, pags, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[6] = CHSV(pagh, pags, pagv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pagh); 
    Serial.print ("  Saturation:"); Serial.println (pags);
    Serial.print ("  Value:"); Serial.println (pagv); Serial.println();}
}
//Pixel 7
void pah () {
   leds[7] = CHSV(pahh, pahs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[7] = CHSV(pahh, pahs, pahv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pahh); 
    Serial.print ("  Saturation:"); Serial.println (pahs);
    Serial.print ("  Value:"); Serial.println (pahv); Serial.println();}
}
//Pixel 8
void pai () {
   leds[8] = CHSV(paih, pais, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[8] = CHSV(paih, pais, paiv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (paih); 
    Serial.print ("  Saturation:"); Serial.println (pais);
    Serial.print ("  Value:"); Serial.println (paiv); Serial.println();}
}
//Pixel 9
void paj () {
   leds[9] = CHSV(pajh, pajs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[9] = CHSV(pajh, pajs, pajv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pajh); 
    Serial.print ("  Saturation:"); Serial.println (pajs);
    Serial.print ("  Value:"); Serial.println (pajv); Serial.println();}
}
//Pixel 10
void pak () {
   leds[10] = CHSV(pakh, paks, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[10] = CHSV(pakh, paks, pakv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pakh); 
    Serial.print ("  Saturation:"); Serial.println (paks);
    Serial.print ("  Value:"); Serial.println (pakv); Serial.println("dead green"); Serial.println();}
}
//Pixel 11
void pal () {
   leds[11] = CHSV(palh, pals, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[11] = CHSV(palh, pals, palv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (palh); 
    Serial.print ("  Saturation:"); Serial.println (pals);
    Serial.print ("  Value:"); Serial.println (palv); Serial.println();}
}
//Pixel 12
void pam () {
   leds[12] = CHSV(pamh, pams, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[12] = CHSV(pamh, pams, pamv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pamh); 
    Serial.print ("  Saturation:"); Serial.println (pams);
    Serial.print ("  Value:"); Serial.println (pamv); Serial.println("dead green"); Serial.println();}
}
//Pixel 13
void pan () {
   leds[13] = CHSV(panh, pans, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[13] = CHSV(panh, pans, panv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (panh); 
    Serial.print ("  Saturation:"); Serial.println (pans);
    Serial.print ("  Value:"); Serial.println (panv); Serial.println();}
}
//Pixel 14
void pao () {
   leds[14] = CHSV(paoh, paos, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[14] = CHSV(paoh, paos, paov); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (paoh); 
    Serial.print ("  Saturation:"); Serial.println (paos);
    Serial.print ("  Value:"); Serial.println (paov); Serial.println();}
}
//Pixel 15
void pap () {
   leds[15] = CHSV(paph, paps, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[15] = CHSV(paph, paps, papv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (paph); 
    Serial.print ("  Saturation:"); Serial.println (paps);
    Serial.print ("  Value:"); Serial.println (papv); Serial.println();}
}
//Pixel 16
void paq () {
   leds[16] = CHSV(paqh, paqs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[16] = CHSV(paqh, paqs, paqv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (paqh); 
    Serial.print ("  Saturation:"); Serial.println (paqs);
    Serial.print ("  Value:"); Serial.println (paqv); Serial.println();}
}
//Pixel 17
void par () {
   leds[17] = CHSV(parh, pars, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[17] = CHSV(parh, pars, parv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (parh); 
    Serial.print ("  Saturation:"); Serial.println (pars);
    Serial.print ("  Value:"); Serial.println (parv); Serial.println();}
}
//Pixel 18
void pas () {
   leds[18] = CHSV(pash, pass, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[18] = CHSV(pash, pass, pasv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pash); 
    Serial.print ("  Saturation:"); Serial.println (pass);
    Serial.print ("  Value:"); Serial.println (pasv); Serial.println();}
}
//Pixel 19
void pat () {
   leds[19] = CHSV(path, pats, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[19] = CHSV(path, pats, patv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (path); 
    Serial.print ("  Saturation:"); Serial.println (pats);
    Serial.print ("  Value:"); Serial.println (patv); Serial.println();}
}
//Pixel 20
void pau () { 
   leds[20] = CHSV(pauh, paus, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[21] = CHSV(pauh, paus, pauv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pauh); 
    Serial.print ("  Saturation:"); Serial.println (paus);
    Serial.print ("  Value:"); Serial.println (pauv); Serial.println();}
}
//Pixel 21
void pav () {
   leds[21] = CHSV(pavh, pavs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[21] = CHSV(pavh, pavs, pavv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pavh); 
    Serial.print ("  Saturation:"); Serial.println (pavs);
    Serial.print ("  Value:"); Serial.println (pavv); Serial.println();}
}
//Pixel 22
void paw () {
   leds[22] = CHSV(pawh, paws, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[22] = CHSV(pawh, paws, pawv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pawh); 
    Serial.print ("  Saturation:"); Serial.println (paws);
    Serial.print ("  Value:"); Serial.println (pawv); Serial.println();}
}
//Pixel 23
void pax () {
   leds[23] = CHSV(paxh, paxs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[23] = CHSV(paxh, paxs, paxv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (paxh); 
    Serial.print ("  Saturation:"); Serial.println (paxs);
    Serial.print ("  Value:"); Serial.println (paxv); Serial.println();}
}
//Pixel 24
void pay () {
   leds[24] = CHSV(payh, pays, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[24] = CHSV(payh, pays, payv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (payh); 
    Serial.print ("  Saturation:"); Serial.println (pays);
    Serial.print ("  Value:"); Serial.println (payv); Serial.println();}
}
//Pixel 25
void paz () {
   leds[25] = CHSV(pazh, pazs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[25] = CHSV(pazh, pazs, pazv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pazh); 
    Serial.print ("  Saturation:"); Serial.println (pazs);
    Serial.print ("  Value:"); Serial.println (pazv); Serial.println();}
}
//Pixel 26
void pba () {
   leds[26] = CHSV(pbah, pbas, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[26] = CHSV(pbah, pbas, pbav); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pbah); 
    Serial.print ("  Saturation:"); Serial.println (pbas);
    Serial.print ("  Value:"); Serial.println (pbav); Serial.println("dead green"); Serial.println();}
}
//Pixel 27
void pbb () {
   leds[27] = CHSV(pbbh, pbbs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[27] = CHSV(pbbh, pbbs, pbbv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pbbh); 
    Serial.print ("  Saturation:"); Serial.println (pbbs);
    Serial.print ("  Value:"); Serial.println (pbbv); Serial.println("dead green"); Serial.println();}
}
//Pixel 28
void pbc () {
   leds[28] = CHSV(pbch, pbcs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
    leds[28] = CHSV(pbch, pbcs, pbcv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pbch); 
    Serial.print ("  Saturation:"); Serial.println (pbcs);
    Serial.print ("  Value:"); Serial.println (pbcv); Serial.println();}
}
//Pixel 29
void pbd () {
  leds[29] = CHSV(pbdh, pbds, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[29] = CHSV(pbdh, pbds, pbdv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pbdh); 
    Serial.print ("  Saturation:"); Serial.println (pbds);
    Serial.print ("  Value:"); Serial.println (pbdv); Serial.println();}
}
//Pixel 30
void pbe () {
  leds[30] = CHSV(pbeh, pbes, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[30] = CHSV(pbeh, pbes, pbev); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pbeh); 
    Serial.print ("  Saturation:"); Serial.println (pbes);
    Serial.print ("  Value:"); Serial.println (pbev); Serial.println("dead green"); Serial.println();}
}
//Pixel 31
void pbf () {
  leds[31] = CHSV(pbfh, pbfs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[31] = CHSV(pbfh, pbfs, pbfv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pbgh); 
    Serial.print ("  Saturation:"); Serial.println (pbgs);
    Serial.print ("  Value:"); Serial.println (pbgv); Serial.println();}
}
//Pixel 32
void pbg () {
  leds[32] = CHSV(pbgh, pbgs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[32] = CHSV(pbgh, pbgs, pbgv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pbgh); 
    Serial.print ("  Saturation:"); Serial.println (pbgs);
    Serial.print ("  Value:"); Serial.println (pbgv); Serial.println();}
}
//Pixel 33
void pbh () {
  leds[33] = CHSV(pbhh, pbhs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[33] = CHSV(pbhh, pbhs, pbhv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pbhh); 
    Serial.print ("  Saturation:"); Serial.println (pbhs);
    Serial.print ("  Value:"); Serial.println (pbhv); Serial.println();}
}
//Pixel 34
void pbi () {
  leds[34] = CHSV(pbih, pbis, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[34] = CHSV(pbih, pbis, pbiv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pbih); 
    Serial.print ("  Saturation:"); Serial.println (pbis);
    Serial.print ("  Value:"); Serial.println (pbiv); Serial.println();}
}
//Pixel 35
void pbj () {
  leds[35] = CHSV(pbjh, pbjs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[35] = CHSV(pbjh, pbjs, pbjv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pbjh); 
    Serial.print ("  Saturation:"); Serial.println (pbjs);
    Serial.print ("  Value:"); Serial.println (pbjv); Serial.println();}
}
//Pixel 36
void pbk () {
  leds[36] = CHSV(pbkh, pbks, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[36] = CHSV(pbkh, pbks, pbkv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pbkh); 
    Serial.print ("  Saturation:"); Serial.println (pbks);
    Serial.print ("  Value:"); Serial.println (pbkv); Serial.println();}
}
//Pixel 37
void pbl () {
  leds[37] = CHSV(pblh, pbls, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[37] = CHSV(pblh, pbls, pblv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pblh); 
    Serial.print ("  Saturation:"); Serial.println (pbls);
    Serial.print ("  Value:"); Serial.println (pblv); Serial.println();}
}
//Pixel 38
void pbm () {
  leds[38] = CHSV(pbmh, pbms, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[38] = CHSV(pbmh, pbms, pbmv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pbmh); 
    Serial.print ("  Saturation:"); Serial.println (pbms);
    Serial.print ("  Value:"); Serial.println (pbmv); Serial.println();}
}
//Pixel 39
void pbn () {
  leds[39] = CHSV(pbnh, pbns, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[39] = CHSV(pbnh, pbns, pbnv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pbnh); 
    Serial.print ("  Saturation:"); Serial.println (pbns);
    Serial.print ("  Value:"); Serial.println (pbnv); Serial.println();}
}
//Pixel 40
void pbo () {
  leds[40] = CHSV(pboh, pbos, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[40] = CHSV(pboh, pbos, pbov); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pboh); 
    Serial.print ("  Saturation:"); Serial.println (pbos);
    Serial.print ("  Value:"); Serial.println (pbov); Serial.println();}
}
//Pixel 41
void pbp () {
  leds[41] = CHSV(pbph, pbps, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[41] = CHSV(pbph, pbps, pbpv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pbph); 
    Serial.print ("  Saturation:"); Serial.println (pbps);
    Serial.print ("  Value:"); Serial.println (pbpv); Serial.println("dead green"); Serial.println();}
}
//Pixel 42
void pbq() {
  leds[42] = CHSV(pbqh, pbqs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[42] = CHSV(pbqh, pbqs, pbqv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pbqh); 
    Serial.print ("  Saturation:"); Serial.println (pbqs);
    Serial.print ("  Value:"); Serial.println (pbqv); Serial.println();}
}
//Pixel 43
void pbr() {
  leds[43] = CHSV(pbrh, pbrs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[43] = CHSV(pbrh, pbrs, pbrv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pbrh); 
    Serial.print ("  Saturation:"); Serial.println (pbrs);
    Serial.print ("  Value:"); Serial.println (pbrv); Serial.println();}
}
//Pixel 44
void pbs() {
  leds[44] = CHSV(pbsh, pbss, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[44] = CHSV(pbsh, pbss, pbsv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println ("44"); Serial.print ("  Hue:"); Serial.println (pbsh); Serial.print ("  Saturation:"); Serial.println (pbss); Serial.print ("  Value:"); Serial.println (pbsv); Serial.println("dead green"); Serial.println();}
}
//Pixel 45
void pbt() {
  leds[45] = CHSV(pbth, pbts, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[45] = CHSV(pbth, pbts, pbtv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println ("45"); Serial.print ("  Hue:"); Serial.println (pbth); Serial.print ("  Saturation:"); Serial.println (pbts); Serial.print ("  Value:"); Serial.println (pbtv); Serial.println();}
}
//Pixel 46
void pbu() {
  leds[46] = CHSV(pbuh, pbus, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[46] = CHSV(pbuh, pbus, pbuv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println ("46"); Serial.print ("  Hue:"); Serial.println (pbuh); Serial.print ("  Saturation:"); Serial.println (pbus); Serial.print ("  Value:"); Serial.println (pbuv); Serial.println();}
}
//Pixel 47
void pbv() {
  leds[47] = CHSV(pbvh, pbvs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[47] = CHSV(pbvh, pbvs, pbvv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();

unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println ("47"); Serial.print ("  Hue:"); Serial.println (pbvh); Serial.print ("  Saturation:"); Serial.println (pbvs); Serial.print ("  Value:"); Serial.println (pbvv); Serial.println();}


}
//Pixel 48
void pbw() {
  leds[48] = CHSV(pbwh, pbws, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[48] = CHSV(pbwh, pbws, pbwv); 
    LEDS.show();
waitOne (); checkPaintSNES (); 
checkpaintserial ();

unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println ("48"); Serial.print ("  Hue:"); Serial.println (pbwh); Serial.print ("  Saturation:"); Serial.println (pbws); Serial.print ("  Value:"); Serial.println (pbwv); Serial.println();}

}
//Pixel 49
void pbx() {
  leds[49] = CHSV(pbxh, pbxs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[49] = CHSV(pbxh, pbxs, pbxv); 
    LEDS.show();
waitOne (); checkPaintSNES (); 
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println ("49"); Serial.print ("  Hue:"); Serial.println (pbxh); Serial.print ("  Saturation:"); Serial.println (pbxs); Serial.print ("  Value:"); Serial.println (pbxv); Serial.println("dead green"); Serial.println();}


}
//Pixel 50
void pby() {
  leds[50] = CHSV(pbyh, pbys, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[50] = CHSV(pbyh, pbys, pbyv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println ("50"); Serial.print ("  Hue:"); Serial.println (pbyh); Serial.print ("  Saturation:"); Serial.println (pbys); Serial.print ("  Value:"); Serial.println (pbyv); Serial.println();}

}
//Pixel 51
void pbz() {
  leds[51] = CHSV(pbzh, pbzs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[51] = CHSV(pbzh, pbzs, pbzv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println ("51"); Serial.print ("  Hue:"); Serial.println (pbzh); Serial.print ("  Saturation:"); Serial.println (pbzs); Serial.print ("  Value:"); Serial.println (pbzv); Serial.println();}
}
//Pixel 52
void pca() {
  leds[52] = CHSV(pcah, pcas, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[52] = CHSV(pcah, pcas, pcav); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pcah); 
    Serial.print ("  Saturation:"); Serial.println (pcas);
    Serial.print ("  Value:"); Serial.println (pcav); Serial.println();}
}
//Pixel 53
void pcb() {
  leds[53] = CHSV(pcbh, pcbs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[53] = CHSV(pcbh, pcbs, pcbv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pcbh); 
    Serial.print ("  Saturation:"); Serial.println (pcbs);
    Serial.print ("  Value:"); Serial.println (pcbv); Serial.println();}
}
//Pixel 54
void pcc() {
  leds[54] = CHSV(pcch, pccs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[54] = CHSV(pcch, pccs, pccv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pcch); 
    Serial.print ("  Saturation:"); Serial.println (pccs);
    Serial.print ("  Value:"); Serial.println (pccv); Serial.println();}
}
//Pixel 55
void pcd() {
  leds[55] = CHSV(pcdh, pcds, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[55] = CHSV(pcdh, pcds, pcdv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pcdh); 
    Serial.print ("  Saturation:"); Serial.println (pcds);
    Serial.print ("  Value:"); Serial.println (pcdv); Serial.println();}
}
//Pixel 56
void pce() {
  leds[56] = CHSV(pceh, pces, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[56] = CHSV(pceh, pces, pcev); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pceh); 
    Serial.print ("  Saturation:"); Serial.println (pces);
    Serial.print ("  Value:"); Serial.println (pcev); Serial.println();}
}
//Pixel 57
void pcf() {
  leds[57] = CHSV(pcfh, pcfs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[57] = CHSV(pcfh, pcfs, pcfv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pcfh); 
    Serial.print ("  Saturation:"); Serial.println (pcfs);
    Serial.print ("  Value:"); Serial.println (pcfv); Serial.println();}
}
//Pixel 58
void pcg() {
  leds[58] = CHSV(pcgh, pcgs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[58] = CHSV(pcgh, pcgs, pcgv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pcgh); 
    Serial.print ("  Saturation:"); Serial.println (pcgs);
    Serial.print ("  Value:"); Serial.println (pcgv); Serial.println();}
}
//Pixel 59
void pch() {
  leds[59] = CHSV(pchh, pchs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[59] = CHSV(pchh, pchs, pchv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pchh); 
    Serial.print ("  Saturation:"); Serial.println (pchs);
    Serial.print ("  Value:"); Serial.println (pchv); Serial.println();}
}
//Pixel 60
void pci() {
  leds[60] = CHSV(pcih, pcis, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[60] = CHSV(pcih, pcis, pciv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pcih); 
    Serial.print ("  Saturation:"); Serial.println (pcis);
    Serial.print ("  Value:"); Serial.println (pciv); Serial.println();}
}
//Pixel 61
void pcj() {
  leds[61] = CHSV(pcjh, pcjs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[61] = CHSV(pcjh, pcjs, pcjv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pcjh); 
    Serial.print ("  Saturation:"); Serial.println (pcjs);
    Serial.print ("  Value:"); Serial.println (pcjv); Serial.println();}
}
//Pixel 62
void pck() {
  leds[62] = CHSV(pckh, pcks, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[62] = CHSV(pckh, pcks, pckv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pckh); 
    Serial.print ("  Saturation:"); Serial.println (pcks);
    Serial.print ("  Value:"); Serial.println (pckv); Serial.println();}
}
//Pixel 63
void pcl() {
  leds[63] = CHSV(pclh, pcls, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[63] = CHSV(pclh, pcls, pclv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pcmh); 
    Serial.print ("  Saturation:"); Serial.println (pcms);
    Serial.print ("  Value:"); Serial.println (pcmv); Serial.println();}
}
//Pixel 64
void pcm() {
  leds[64] = CHSV(pcmh, pcms, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[64] = CHSV(pcmh, pcms, pcmv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pcmh); 
    Serial.print ("  Saturation:"); Serial.println (pcms);
    Serial.print ("  Value:"); Serial.println (pcmv); Serial.println("dead green"); Serial.println();}
}
//Pixel 65
void pcn() {
  leds[65] = CHSV(pcnh, pcns, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[65] = CHSV(pcnh, pcns, pcnv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pcnh); 
    Serial.print ("  Saturation:"); Serial.println (pcns);
    Serial.print ("  Value:"); Serial.println (pcnv); Serial.println();}
}
//Pixel 66
void pco() {
  leds[66] = CHSV(pcoh, pcos, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[66] = CHSV(pcoh, pcos, pcov); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pcoh); 
    Serial.print ("  Saturation:"); Serial.println (pcos);
    Serial.print ("  Value:"); Serial.println (pcov); Serial.println();}
}
//Pixel 67
void pcp() {
  leds[67] = CHSV(pcph, pcps, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[67] = CHSV(pcph, pcps, pcpv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pcph); 
    Serial.print ("  Saturation:"); Serial.println (pcps);
    Serial.print ("  Value:"); Serial.println (pcpv); Serial.println();}
}
//Pixel 68
void pcq() {
  leds[68] = CHSV(pcqh, pcqs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[68] = CHSV(pcqh, pcqs, pcqv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pcqh); 
    Serial.print ("  Saturation:"); Serial.println (pcqs);
    Serial.print ("  Value:"); Serial.println (pcqv); Serial.println();}
}
//Pixel 69 LOL
void pcr() {
  leds[69] = CHSV(pcrh, pcrs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[69] = CHSV(pcrh, pcrs, pcrv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.print (pmode); Serial.println(" lol");
    Serial.print ("  Hue:"); Serial.println (pcrh); 
    Serial.print ("  Saturation:"); Serial.println (pcrs);
    Serial.print ("  Value:"); Serial.println (pcrv); Serial.println();}
}
//Pixel 70
void pcs() {
  leds[70] = CHSV(pcsh, pcss, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[70] = CHSV(pcsh, pcss, pcsv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pcsh); 
    Serial.print ("  Saturation:"); Serial.println (pcss);
    Serial.print ("  Value:"); Serial.println (pcsv); Serial.println();}
}
//Pixel 71
void pct() {
  leds[71] = CHSV(pcth, pcts, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[71] = CHSV(pcth, pcts, pctv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pcth); 
    Serial.print ("  Saturation:"); Serial.println (pcts);
    Serial.print ("  Value:"); Serial.println (pctv); Serial.println();}
}
//Pixel 72
void pcu() {
  leds[72] = CHSV(pcuh, pcus, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[72] = CHSV(pcuh, pcus, pcuv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pcuh); 
    Serial.print ("  Saturation:"); Serial.println (pcus);
    Serial.print ("  Value:"); Serial.println (pcuv); Serial.println();}
}
//Pixel 73
void pcv() {
  leds[73] = CHSV(pcvh, pcvs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[73] = CHSV(pcvh, pcvs, pcvv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pcvh); 
    Serial.print ("  Saturation:"); Serial.println (pcvs);
    Serial.print ("  Value:"); Serial.println (pcvv); Serial.println();}
}
//Pixel 74
void pcw() {
  leds[74] = CHSV(pcwh, pcws, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[74] = CHSV(pcwh, pcws, pcwv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pcwh); 
    Serial.print ("  Saturation:"); Serial.println (pcws);
    Serial.print ("  Value:"); Serial.println (pcwv); Serial.println();}
}
//Pixel 75
void pcx() {
  leds[75] = CHSV(pcxh, pcxs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[75] = CHSV(pcxh, pcxs, pcxv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pcxh); 
    Serial.print ("  Saturation:"); Serial.println (pcxs);
    Serial.print ("  Value:"); Serial.println (pcxv); Serial.println();}
}
//Pixel 76
void pcy() {
  leds[76] = CHSV(pcyh, pcys, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[76] = CHSV(pcyh, pcys, pcyv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pcyh); 
    Serial.print ("  Saturation:"); Serial.println (pcys);
    Serial.print ("  Value:"); Serial.println (pcyv); Serial.println("dead green"); Serial.println();}
}
//Pixel 77
void pcz() {
  leds[77] = CHSV(pczh, pczs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[77] = CHSV(pczh, pczs, pczv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pczh); 
    Serial.print ("  Saturation:"); Serial.println (pczs);
    Serial.print ("  Value:"); Serial.println (pczv); Serial.println("TOTAL PIXEL DEATH"); Serial.println();}
}
//Pixel 78
void pda() {
  leds[78] = CHSV(pdah, pdas, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[78] = CHSV(pdah, pdas, pdav); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pdah); 
    Serial.print ("  Saturation:"); Serial.println (pdas);
    Serial.print ("  Value:"); Serial.println (pdav); Serial.println("dead green"); Serial.println();}
}
//Pixel 79
void pdb() {
  leds[79] = CHSV(pdbh, pdbs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[79] = CHSV(pdbh, pdbs, pdbv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pdbh); 
    Serial.print ("  Saturation:"); Serial.println (pdbs);
    Serial.print ("  Value:"); Serial.println (pdbv); Serial.println();}
}
//Pixel 80
void pdc() {
  leds[80] = CHSV(pdch, pdcs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[80] = CHSV(pdch, pdcs, pdcv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pddh); 
    Serial.print ("  Saturation:"); Serial.println (pdds);
    Serial.print ("  Value:"); Serial.println (pddv); Serial.println();}
}
//Pixel 81
void pdd() {
  leds[81] = CHSV(pddh, pdds, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[81] = CHSV(pddh, pdds, pddv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pddh); 
    Serial.print ("  Saturation:"); Serial.println (pdds);
    Serial.print ("  Value:"); Serial.println (pddv); Serial.println();}
}
//Pixel 82
void pde() {
  leds[82] = CHSV(pdeh, pdes, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[82] = CHSV(pdeh, pdes, pdev); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pdeh); 
    Serial.print ("  Saturation:"); Serial.println (pdes);
    Serial.print ("  Value:"); Serial.println (pdev); Serial.println();}
}
//Pixel 83
void pdf() {
  leds[83] = CHSV(pdfh, pdfs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[83] = CHSV(pdfh, pdfs, pdfv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pdfh); 
    Serial.print ("  Saturation:"); Serial.println (pdfs);
    Serial.print ("  Value:"); Serial.println (pdfv); Serial.println();}
}
//Pixel 84
void pdg() {
  leds[84] = CHSV(pdgh, pdgs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[84] = CHSV(pdgh, pdgs, pdgv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pdgh); 
    Serial.print ("  Saturation:"); Serial.println (pdgs);
    Serial.print ("  Value:"); Serial.println (pdgv); Serial.println();}
}
//Pixel 85
void pdh() {
  leds[85] = CHSV(pdhh, pdhs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[85] = CHSV(pdhh, pdhs, pdhv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pdhh); 
    Serial.print ("  Saturation:"); Serial.println (pdhs);
    Serial.print ("  Value:"); Serial.println (pdhv); Serial.println();}
}
//Pixel 86
void pdi() {
  leds[86] = CHSV(pdih, pdis, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[86] = CHSV(pdih, pdis, pdiv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pdih); 
    Serial.print ("  Saturation:"); Serial.println (pdis);
    Serial.print ("  Value:"); Serial.println (pdiv); Serial.println();}
}
//Pixel 87
void pdj() {
  leds[87] = CHSV(pdjh, pdjs, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[87] = CHSV(pdjh, pdjs, pdjv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pdjh); 
    Serial.print ("  Saturation:"); Serial.println (pdjs);
    Serial.print ("  Value:"); Serial.println (pdjv); Serial.println();}
}
//Pixel 88
void pdk() {
  leds[88] = CHSV(pdkh, pdks, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[88] = CHSV(pdkh, pdks, pdkv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pdkh); 
    Serial.print ("  Saturation:"); Serial.println (pdks);
    Serial.print ("  Value:"); Serial.println (pdkv); Serial.println();}
}
//Pixel 89
void pdl() {
  leds[89] = CHSV(pdlh, pdls, 0); 
   LEDS.show(); 
waitOne (); checkPaintSNES (); 
  leds[89] = CHSV(pdlh, pdls, pdlv); 
    LEDS.show();
waitOne (); checkPaintSNES ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (pmode); 
    Serial.print ("  Hue:"); Serial.println (pdlh); 
    Serial.print ("  Saturation:"); Serial.println (pdls);
    Serial.print ("  Value:"); Serial.println (pdlv); Serial.println();}
}

 void showPicture () { //when returning to paint mode I needed a way to bring up the picture again. This displays the leds you've changed (painted with). Leds you haven't used have a Value of 1 and can't be seen. 
leds[0] = CHSV(paah, paas, paav); 
leds[1] = CHSV(pabh, pabs, pabv); 
leds[2] = CHSV(pach, pacs, pacv); 
leds[3] = CHSV(padh, pads, padv);   
leds[4] = CHSV(paeh, paes, paev); 
leds[5] = CHSV(pafh, pafs, pafv);  
leds[6] = CHSV(pagh, pags, pagv); 
leds[7] = CHSV(pahh, pahs, pahv);  
leds[8] = CHSV(paih, pais, paiv); 
leds[9] = CHSV(pajh, pajs, pajv); 
leds[10] = CHSV(pakh, paks, pakv); 
leds[11] = CHSV(palh, pals, palv);  
leds[12] = CHSV(pamh, pams, pamv); 
leds[13] = CHSV(panh, pans, panv);  
leds[14] = CHSV(paoh, paos, paov); 
leds[15] = CHSV(paph, paps, papv); 
leds[16] = CHSV(paqh, paqs, paqv); 
leds[17] = CHSV(parh, pars, parv);  
leds[18] = CHSV(pash, pass, pasv); 
leds[19] = CHSV(path, pats, patv); 
leds[20] = CHSV(pauh, paus, pauv); 
leds[21] = CHSV(pavh, pavs, pavv); 
leds[22] = CHSV(pawh, paws, pawv); 
leds[23] = CHSV(paxh, paxs, paxv); 
leds[24] = CHSV(payh, pays, payv); 
leds[25] = CHSV(pazh, pazs, pazv); 
leds[26] = CHSV(pbah, pbas, pbav); 
leds[27] = CHSV(pbbh, pbbs, pbbv); 
leds[28] = CHSV(pbch, pbcs, pbcv);  
leds[29] = CHSV(pbdh, pbds, pbdv); 
leds[30] = CHSV(pbeh, pbes, pbev); 
leds[31] = CHSV(pbfh, pbfs, pbfv); 
leds[32] = CHSV(pbgh, pbgs, pbgv); 
leds[33] = CHSV(pbhh, pbhs, pbhv); 
leds[34] = CHSV(pbih, pbis, pbiv); 
leds[35] = CHSV(pbjh, pbjs, pbjv); 
leds[36] = CHSV(pbkh, pbks, pbkv);
leds[37] = CHSV(pblh, pbls, pblv); 
leds[38] = CHSV(pbmh, pbms, pbmv);
leds[39] = CHSV(pbnh, pbns, pbnv); 
leds[40] = CHSV(pboh, pbos, pbov); 
leds[41] = CHSV(pbph, pbps, pbpv); 
leds[42] = CHSV(pbqh, pbqs, pbqv); 
leds[43] = CHSV(pbrh, pbrs, pbrv); 
leds[44] = CHSV(pbsh, pbss, pbsv); 
leds[45] = CHSV(pbth, pbts, pbtv); 
leds[46] = CHSV(pbuh, pbus, pbuv); 
leds[47] = CHSV(pbvh, pbvs, pbvv);  
leds[48] = CHSV(pbwh, pbws, pbwv); 
leds[49] = CHSV(pbxh, pbxs, pbxv); 
leds[50] = CHSV(pbyh, pbys, pbyv); 
leds[51] = CHSV(pbzh, pbzs, pbzv); 
leds[52] = CHSV(pcah, pcas, pcav); 
leds[53] = CHSV(pcbh, pcbs, pcbv); 
leds[54] = CHSV(pcch, pccs, pccv); 
leds[55] = CHSV(pcdh, pcds, pcdv); 
leds[56] = CHSV(pceh, pces, pcev); 
leds[57] = CHSV(pcfh, pcfs, pcfv); 
leds[58] = CHSV(pcgh, pcgs, pcgv); 
leds[59] = CHSV(pchh, pchs, pchv); 
leds[60] = CHSV(pcih, pcis, pciv); 
leds[61] = CHSV(pcjh, pcjs, pcjv); 
leds[62] = CHSV(pckh, pcks, pckv); 
leds[63] = CHSV(pclh, pcls, pclv); 
leds[64] = CHSV(pcmh, pcms, pcmv); 
leds[65] = CHSV(pcnh, pcns, pcnv); 
leds[66] = CHSV(pcoh, pcos, pcov); 
leds[67] = CHSV(pcph, pcps, pcpv); 
leds[68] = CHSV(pcqh, pcqs, pcqv); 
leds[69] = CHSV(pcrh, pcrs, pcrv); 
leds[70] = CHSV(pcsh, pcss, pcsv);
leds[71] = CHSV(pcth, pcts, pctv); 
leds[72] = CHSV(pcuh, pcus, pcuv); 
leds[73] = CHSV(pcvh, pcvs, pcvv); 
leds[74] = CHSV(pcwh, pcws, pcwv); 
leds[75] = CHSV(pcxh, pcxs, pcxv); 
leds[76] = CHSV(pcyh, pcys, pcyv);
leds[77] = CHSV(pczh, pczs, pczv); 
leds[78] = CHSV(pdah, pdas, pdav); 
leds[79] = CHSV(pdbh, pdbs, pdbv); 
leds[80] = CHSV(pdch, pdcs, pdcv);
leds[81] = CHSV(pddh, pdds, pddv); 
leds[82] = CHSV(pdeh, pdes, pdev); 
leds[83] = CHSV(pdfh, pdfs, pdfv);
leds[84] = CHSV(pdgh, pdgs, pdgv); 
leds[85] = CHSV(pdhh, pdhs, pdhv); 
leds[86] = CHSV(pdih, pdis, pdiv); 
leds[87] = CHSV(pdjh, pdjs, pdjv); 
leds[88] = CHSV(pdkh, pdks, pdkv); 
leds[89] = CHSV(pdlh, pdls, pdlv); 
  LEDS.show();
 }  

//this sends all the values of your pretty picture to the serial so you can copy/paste it into excel to save it for later. Obviously I still need to find a way to quickly reload it. 
void printPaint () { 
  //hues
  Serial.println("Hues");
Serial.println(paah);
Serial.println(pabh);
Serial.println(pach);
Serial.println(padh);
Serial.println(paeh);
Serial.println(pafh);
Serial.println(pagh);
Serial.println(pahh);
Serial.println(paih);
Serial.println(pajh);
Serial.println(pakh);
Serial.println(palh);
Serial.println(pamh);
Serial.println(panh);
Serial.println(paoh);
Serial.println(paph);
Serial.println(paqh);
Serial.println(parh);
Serial.println(pash);
Serial.println(path);
Serial.println(pauh);
Serial.println(pavh);
Serial.println(pawh);
Serial.println(paxh);
Serial.println(payh);
Serial.println(pazh);
Serial.println(pbah);
Serial.println(pbbh);
Serial.println(pbch);
Serial.println(pbdh);
Serial.println(pbeh);
Serial.println(pbfh);
Serial.println(pbgh);
Serial.println(pbhh);
Serial.println(pbih);
Serial.println(pbjh);
Serial.println(pbkh);
Serial.println(pblh);
Serial.println(pbmh);
Serial.println(pbnh);
Serial.println(pboh);
Serial.println(pbph);
Serial.println(pbqh);
Serial.println(pbrh);
Serial.println(pbsh);
Serial.println(pbth);
Serial.println(pbuh);
Serial.println(pbvh);
Serial.println(pbwh);
Serial.println(pbxh);
Serial.println(pbyh);
Serial.println(pbzh);
Serial.println(pcah);
Serial.println(pcbh);
Serial.println(pcch);
Serial.println(pcdh);
Serial.println(pceh);
Serial.println(pcfh);
Serial.println(pcgh);
Serial.println(pchh);
Serial.println(pcih);
Serial.println(pcjh);
Serial.println(pckh);
Serial.println(pclh);
Serial.println(pcmh);
Serial.println(pcnh);
Serial.println(pcoh);
Serial.println(pcph);
Serial.println(pcqh);
Serial.println(pcrh);
Serial.println(pcsh);
Serial.println(pcth);
Serial.println(pcuh);
Serial.println(pcvh);
Serial.println(pcwh);
Serial.println(pcxh);
Serial.println(pcyh);
Serial.println(pczh);
Serial.println(pdah);
Serial.println(pdbh);
Serial.println(pdch);
Serial.println(pddh);
Serial.println(pdeh);
Serial.println(pdfh);
Serial.println(pdgh);
Serial.println(pdhh);
Serial.println(pdih);
Serial.println(pdjh);
Serial.println(pdkh);
Serial.println(pdlh);

//Saturations
Serial.println("Saturations");
Serial.println(paas);
Serial.println(pabs);
Serial.println(pacs);
Serial.println(pads);
Serial.println(paes);
Serial.println(pafs);
Serial.println(pags);
Serial.println(pahs);
Serial.println(pais);
Serial.println(pajs);
Serial.println(paks);
Serial.println(pals);
Serial.println(pams);
Serial.println(pans);
Serial.println(paos);
Serial.println(paps);
Serial.println(paqs);
Serial.println(pars);
Serial.println(pass);
Serial.println(pats);
Serial.println(paus);
Serial.println(pavs);
Serial.println(paws);
Serial.println(paxs);
Serial.println(pays);
Serial.println(pazs);
Serial.println(pbas);
Serial.println(pbbs);
Serial.println(pbcs);
Serial.println(pbds);
Serial.println(pbes);
Serial.println(pbfs);
Serial.println(pbgs);
Serial.println(pbhs);
Serial.println(pbis);
Serial.println(pbjs);
Serial.println(pbks);
Serial.println(pbls);
Serial.println(pbms);
Serial.println(pbns);
Serial.println(pbos);
Serial.println(pbps);
Serial.println(pbqs);
Serial.println(pbrs);
Serial.println(pbss);
Serial.println(pbts);
Serial.println(pbus);
Serial.println(pbvs);
Serial.println(pbws);
Serial.println(pbxs);
Serial.println(pbys);
Serial.println(pbzs);
Serial.println(pcas);
Serial.println(pcbs);
Serial.println(pccs);
Serial.println(pcds);
Serial.println(pces);
Serial.println(pcfs);
Serial.println(pcgs);
Serial.println(pchs);
Serial.println(pcis);
Serial.println(pcjs);
Serial.println(pcks);
Serial.println(pcls);
Serial.println(pcms);
Serial.println(pcns);
Serial.println(pcos);
Serial.println(pcps);
Serial.println(pcqs);
Serial.println(pcrs);
Serial.println(pcss);
Serial.println(pcts);
Serial.println(pcus);
Serial.println(pcvs);
Serial.println(pcws);
Serial.println(pcxs);
Serial.println(pcys);
Serial.println(pczs);
Serial.println(pdas);
Serial.println(pdbs);
Serial.println(pdcs);
Serial.println(pdds);
Serial.println(pdes);
Serial.println(pdfs);
Serial.println(pdgs);
Serial.println(pdhs);
Serial.println(pdis);
Serial.println(pdjs);
Serial.println(pdks);
Serial.println(pdls);

//Values
Serial.println("values");
Serial.println(paav);
Serial.println(pabv);
Serial.println(pacv);
Serial.println(padv);
Serial.println(paev);
Serial.println(pafv);
Serial.println(pagv);
Serial.println(pahv);
Serial.println(paiv);
Serial.println(pajv);
Serial.println(pakv);
Serial.println(palv);
Serial.println(pamv);
Serial.println(panv);
Serial.println(paov);
Serial.println(papv);
Serial.println(paqv);
Serial.println(parv);
Serial.println(pasv);
Serial.println(patv);
Serial.println(pauv);
Serial.println(pavv);
Serial.println(pawv);
Serial.println(paxv);
Serial.println(payv);
Serial.println(pazv);
Serial.println(pbav);
Serial.println(pbbv);
Serial.println(pbcv);
Serial.println(pbdv);
Serial.println(pbev);
Serial.println(pbfv);
Serial.println(pbgv);
Serial.println(pbhv);
Serial.println(pbiv);
Serial.println(pbjv);
Serial.println(pbkv);
Serial.println(pblv);
Serial.println(pbmv);
Serial.println(pbnv);
Serial.println(pbov);
Serial.println(pbpv);
Serial.println(pbqv);
Serial.println(pbrv);
Serial.println(pbsv);
Serial.println(pbtv);
Serial.println(pbuv);
Serial.println(pbvv);
Serial.println(pbwv);
Serial.println(pbxv);
Serial.println(pbyv);
Serial.println(pbzv);
Serial.println(pcav);
Serial.println(pcbv);
Serial.println(pccv);
Serial.println(pcdv);
Serial.println(pcev);
Serial.println(pcfv);
Serial.println(pcgv);
Serial.println(pchv);
Serial.println(pciv);
Serial.println(pcjv);
Serial.println(pckv);
Serial.println(pclv);
Serial.println(pcmv);
Serial.println(pcnv);
Serial.println(pcov);
Serial.println(pcpv);
Serial.println(pcqv);
Serial.println(pcrv);
Serial.println(pcsv);
Serial.println(pctv);
Serial.println(pcuv);
Serial.println(pcvv);
Serial.println(pcwv);
Serial.println(pcxv);
Serial.println(pcyv);
Serial.println(pczv);
Serial.println(pdav);
Serial.println(pdbv);
Serial.println(pdcv);
Serial.println(pddv);
Serial.println(pdev);
Serial.println(pdfv);
Serial.println(pdgv);
Serial.println(pdhv);
Serial.println(pdiv);
Serial.println(pdjv);
Serial.println(pdkv);
Serial.println(pdlv);
}
