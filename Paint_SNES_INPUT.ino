//Snes Inputs for paint mode. there was a lot of lines so paint mode is split. will reconcile later.

void checkPaintSNES (){
if (mode != 100) {
btns = Spad.getButtons(false);

if(!(btns & BTN_START)) { mode = 0; clearsheet ();}
if(!(btns & BTN_SELECT)) { mode = 100;}

if(!(btns & BTN_UP)) { //up

   if (pmode >= 0 & pmode <= 8)  { pmode = pmode + 1; if (pmode > 8) {pmode = 0;} waitThree();}  
      if (pmode >= 9 & pmode <= 17) { pmode = pmode - 1; if (pmode < 9) {pmode = 17;} waitThree();} 
      if (pmode >= 18 & pmode <= 26) { pmode = pmode + 1; if (pmode > 26) {pmode = 18;} waitThree();}  
      if (pmode >= 27 & pmode <= 35) { pmode = pmode - 1; if (pmode < 27) {pmode = 35;} waitThree();} 
      if (pmode >= 36 & pmode <= 44) { pmode = pmode + 1; if (pmode > 44) {pmode = 36;} waitThree();}  
      if (pmode >= 45 & pmode <= 53) { pmode = pmode - 1; if (pmode < 45) {pmode = 53;} waitThree();} 
      if (pmode >= 54 & pmode <= 62) { pmode = pmode + 1; if (pmode > 62) {pmode = 54;} waitThree();}  
      if (pmode >= 63 & pmode <= 71) { pmode = pmode - 1; if (pmode < 63) {pmode = 71;} waitThree();} 
      if (pmode >= 72 & pmode <= 80) { pmode = pmode + 1; if (pmode > 80) {pmode = 72;} waitThree();}  
      if (pmode >= 81 & pmode <= 89) { pmode = pmode - 1; if (pmode < 81) {pmode = 89;} waitThree();} 
}
    


if(!(btns & BTN_DOWN)) { //down

if (pmode >= 0 & pmode <= 8) { pmode = pmode - 1; if (pmode < 0) {pmode = 8;} waitThree();}  
      if (pmode >= 9 & pmode <= 17) { pmode = pmode + 1; if (pmode > 17) {pmode = 9;} waitThree();} 
      if (pmode >= 18 & pmode <= 26) { pmode = pmode - 1; if (pmode < 18) {pmode = 26;} waitThree();}  
      if (pmode >= 27 & pmode <= 35) { pmode = pmode + 1; if (pmode > 35) {pmode = 27;} waitThree();} 
      if (pmode >= 36 & pmode <= 44) { pmode = pmode - 1; if (pmode < 36) {pmode = 44;} waitThree();}  
      if (pmode >= 45 & pmode <= 53) { pmode = pmode + 1; if (pmode > 53) {pmode = 45;} waitThree();} 
      if (pmode >= 54 & pmode <= 62) { pmode = pmode - 1; if (pmode < 54) {pmode = 62;} waitThree();}  
      if (pmode >= 63 & pmode <= 71) { pmode = pmode + 1; if (pmode > 71) {pmode = 63;} waitThree();} 
      if (pmode >= 72 & pmode <= 80) { pmode = pmode - 1; if (pmode < 72) {pmode = 80;} waitThree();}  
      if (pmode >= 81 & pmode <= 89) { pmode = pmode + 1; if (pmode > 89) {pmode = 81;} waitThree();} 
}  


if(!(btns & BTN_LEFT)) { //left
/*
  //neer figured out how to get the cursor to go to the other side of the sheet when it reaches the end with the snes. works fine for the keyboard serial inputs cause they're in a while loop and i can use break;
            if (pmode == 81) {pmode = 8; } 
            if (pmode == 82) {pmode = 7; } 
            if (pmode == 83) {pmode = 6; } 
            if (pmode == 84) {pmode = 5; } 
            if (pmode == 85) {pmode = 4; } 
            if (pmode == 86) {pmode = 3; } 
            if (pmode == 87) {pmode = 2; } 
            if (pmode == 88) {pmode = 1; } 
            if (pmode == 89) {pmode = 0; }
         
        */
            if (pmode == 72) {pmode = pmode +17; waitThree();} 
            if (pmode == 73) {pmode = pmode +15; waitThree();} 
            if (pmode == 74) {pmode = pmode +13; waitThree();} 
            if (pmode == 75) {pmode = pmode +11; waitThree();} 
            if (pmode == 76) {pmode = pmode + 9; waitThree();} 
            if (pmode == 77) {pmode = pmode + 7; waitThree();} 
            if (pmode == 78) {pmode = pmode + 5; waitThree();} 
            if (pmode == 79) {pmode = pmode + 3; waitThree();} 
            if (pmode == 80) {pmode = pmode + 1; waitThree();} 
            
            if (pmode == 63) {pmode = pmode +17; waitThree();} 
            if (pmode == 64) {pmode = pmode +15; waitThree();} 
            if (pmode == 65) {pmode = pmode +13; waitThree();} 
            if (pmode == 66) {pmode = pmode +11; waitThree();} 
            if (pmode == 67) {pmode = pmode + 9; waitThree();} 
            if (pmode == 68) {pmode = pmode + 7; waitThree();} 
            if (pmode == 69) {pmode = pmode + 5; waitThree();} 
            if (pmode == 70) {pmode = pmode + 3; waitThree();} 
            if (pmode == 71) {pmode = pmode + 1; waitThree();} 

            if (pmode == 54) {pmode = pmode +17; waitThree();} 
            if (pmode == 55) {pmode = pmode +15; waitThree();} 
            if (pmode == 56) {pmode = pmode +13; waitThree();} 
            if (pmode == 57) {pmode = pmode +11; waitThree();} 
            if (pmode == 58) {pmode = pmode + 9; waitThree();} 
            if (pmode == 59) {pmode = pmode + 7; waitThree();} 
            if (pmode == 60) {pmode = pmode + 5; waitThree();} 
            if (pmode == 61) {pmode = pmode + 3; waitThree();} 
            if (pmode == 62) {pmode = pmode + 1; waitThree();} 
            
            if (pmode == 45) {pmode = pmode +17; waitThree();} 
            if (pmode == 46) {pmode = pmode +15; waitThree();} 
            if (pmode == 47) {pmode = pmode +13; waitThree();} 
            if (pmode == 48) {pmode = pmode +11; waitThree();} 
            if (pmode == 49) {pmode = pmode + 9; waitThree();} 
            if (pmode == 50) {pmode = pmode + 7; waitThree();} 
            if (pmode == 51) {pmode = pmode + 5; waitThree();} 
            if (pmode == 52) {pmode = pmode + 3; waitThree();} 
            if (pmode == 53) {pmode = pmode + 1; waitThree();} 

            if (pmode == 36) {pmode = pmode +17; waitThree();} 
            if (pmode == 37) {pmode = pmode +15; waitThree();} 
            if (pmode == 38) {pmode = pmode +13; waitThree();} 
            if (pmode == 39) {pmode = pmode +11; waitThree();} 
            if (pmode == 40) {pmode = pmode + 9; waitThree();} 
            if (pmode == 41) {pmode = pmode + 7; waitThree();} 
            if (pmode == 42) {pmode = pmode + 5; waitThree();} 
            if (pmode == 43) {pmode = pmode + 3; waitThree();} 
            if (pmode == 44) {pmode = pmode + 1; waitThree();} 

            if (pmode == 27) {pmode = pmode +17; waitThree();} 
            if (pmode == 28) {pmode = pmode +15; waitThree();} 
            if (pmode == 29) {pmode = pmode +13; waitThree();} 
            if (pmode == 30) {pmode = pmode +11; waitThree();} 
            if (pmode == 31) {pmode = pmode + 9; waitThree();} 
            if (pmode == 32) {pmode = pmode + 7; waitThree();} 
            if (pmode == 33) {pmode = pmode + 5; waitThree();} 
            if (pmode == 34) {pmode = pmode + 3; waitThree();} 
            if (pmode == 35) {pmode = pmode + 1; waitThree();}

            if (pmode == 18) {pmode = pmode +17; waitThree();} 
            if (pmode == 19) {pmode = pmode +15; waitThree();} 
            if (pmode == 20) {pmode = pmode +13; waitThree();} 
            if (pmode == 21) {pmode = pmode +11; waitThree();} 
            if (pmode == 22) {pmode = pmode + 9; waitThree();} 
            if (pmode == 23) {pmode = pmode + 7; waitThree();} 
            if (pmode == 24) {pmode = pmode + 5; waitThree();} 
            if (pmode == 25) {pmode = pmode + 3; waitThree();} 
            if (pmode == 26) {pmode = pmode + 1; waitThree();}

            if (pmode == 9) {pmode = pmode +17; waitThree();} 
            if (pmode == 10) {pmode = pmode +15; waitThree();} 
            if (pmode == 11) {pmode = pmode +13; waitThree();} 
            if (pmode == 12) {pmode = pmode +11; waitThree();} 
            if (pmode == 13) {pmode = pmode + 9; waitThree();} 
            if (pmode == 14) {pmode = pmode + 7; waitThree();} 
            if (pmode == 15) {pmode = pmode + 5; waitThree();} 
            if (pmode == 16) {pmode = pmode + 3; waitThree();} 
            if (pmode == 17) {pmode = pmode + 1; waitThree();}       
            
            if (pmode == 0) {pmode = pmode +17; waitThree();} 
            if (pmode == 1) {pmode = pmode +15; waitThree();} 
            if (pmode == 2) {pmode = pmode +13; waitThree();} 
            if (pmode == 3) {pmode = pmode +11; waitThree();} 
            if (pmode == 4) {pmode = pmode + 9; waitThree();} 
            if (pmode == 5) {pmode = pmode + 7; waitThree();} 
            if (pmode == 6) {pmode = pmode + 5; waitThree();} 
            if (pmode == 7) {pmode = pmode + 3; waitThree();} 
            if (pmode == 8) {pmode = pmode + 1; waitThree();} 

}
                

if(!(btns & BTN_RIGHT)) { //Right
/*
            if (pmode == 0) {pmode = 89; } 
            if (pmode == 1) {pmode = 88; } 
            if (pmode == 2) {pmode = 87; } 
            if (pmode == 3) {pmode = 86; } 
            if (pmode == 4) {pmode = 85; } 
            if (pmode == 5) {pmode = 84; } 
            if (pmode == 6) {pmode = 83; } 
            if (pmode == 7) {pmode = 82; } 
            if (pmode == 8) {pmode = 81; } 
*/

            if (pmode == 9) {pmode = pmode -1; waitThree();} 
            if (pmode == 10) {pmode = pmode -3; waitThree();} 
            if (pmode == 11) {pmode = pmode -5; waitThree();} 
            if (pmode == 12) {pmode = pmode -7; waitThree();} 
            if (pmode == 13) {pmode = pmode -9; waitThree();} 
            if (pmode == 14) {pmode = pmode -11; waitThree();} 
            if (pmode == 15) {pmode = pmode -13; waitThree();} 
            if (pmode == 16) {pmode = pmode -15; waitThree();} 
            if (pmode == 17) {pmode = pmode -17; waitThree();} 

            if (pmode == 18) {pmode = pmode -1; waitThree();} 
            if (pmode == 19) {pmode = pmode -3; waitThree();} 
            if (pmode == 20) {pmode = pmode -5; waitThree();} 
            if (pmode == 21) {pmode = pmode -7; waitThree();} 
            if (pmode == 22) {pmode = pmode -9; waitThree();}  
            if (pmode == 23) {pmode = pmode -11; waitThree();} 
            if (pmode == 24) {pmode = pmode -13; waitThree();} 
            if (pmode == 25) {pmode = pmode -15; waitThree();} 
            if (pmode == 26) {pmode = pmode -17; waitThree();} 
          
            if (pmode == 27) {pmode = pmode -1; waitThree();} 
            if (pmode == 28) {pmode = pmode -3; waitThree();} 
            if (pmode == 29) {pmode = pmode -5; waitThree();} 
            if (pmode == 30) {pmode = pmode -7; waitThree();} 
            if (pmode == 31) {pmode = pmode -9; waitThree();} 
            if (pmode == 32) {pmode = pmode -11; waitThree();} 
            if (pmode == 33) {pmode = pmode -13; waitThree();} 
            if (pmode == 34) {pmode = pmode -15; waitThree();} 
            if (pmode == 35) {pmode = pmode -17; waitThree();} 

            if (pmode == 36) {pmode = pmode -1; waitThree();} 
            if (pmode == 37) {pmode = pmode -3; waitThree();} 
            if (pmode == 38) {pmode = pmode -5; waitThree();} 
            if (pmode == 39) {pmode = pmode -7; waitThree();} 
            if (pmode == 40) {pmode = pmode -9; waitThree();} 
            if (pmode == 41) {pmode = pmode -11; waitThree();} 
            if (pmode == 42) {pmode = pmode -13; waitThree();} 
            if (pmode == 43) {pmode = pmode -15; waitThree();} 
            if (pmode == 44) {pmode = pmode -17; waitThree();} 
            
            if (pmode == 45) {pmode = pmode -1; waitThree();} 
            if (pmode == 46) {pmode = pmode -3; waitThree();} 
            if (pmode == 47) {pmode = pmode -5; waitThree();} 
            if (pmode == 48) {pmode = pmode -7; waitThree();} 
            if (pmode == 49) {pmode = pmode -9; waitThree();} 
            if (pmode == 50) {pmode = pmode -11; waitThree();} 
            if (pmode == 51) {pmode = pmode -13; waitThree();} 
            if (pmode == 52) {pmode = pmode -15; waitThree();} 
            if (pmode == 53) {pmode = pmode -17; waitThree();} 

            if (pmode == 54) {pmode = pmode -1; waitThree();} 
            if (pmode == 55) {pmode = pmode -3; waitThree();} 
            if (pmode == 56) {pmode = pmode -5; waitThree();} 
            if (pmode == 57) {pmode = pmode -7; waitThree();} 
            if (pmode == 58) {pmode = pmode -9; waitThree();} 
            if (pmode == 59) {pmode = pmode -11; waitThree();} 
            if (pmode == 60) {pmode = pmode -13; waitThree();} 
            if (pmode == 61) {pmode = pmode -15; waitThree();} 
            if (pmode == 62) {pmode = pmode -17; waitThree();} 

            if (pmode == 63) {pmode = pmode -1; waitThree();} 
            if (pmode == 64) {pmode = pmode -3; waitThree();} 
            if (pmode == 65) {pmode = pmode -5; waitThree();} 
            if (pmode == 66) {pmode = pmode -7; waitThree();} 
            if (pmode == 67) {pmode = pmode -9; waitThree();} 
            if (pmode == 68) {pmode = pmode -11; waitThree();} 
            if (pmode == 69) {pmode = pmode -13; waitThree();} 
            if (pmode == 70) {pmode = pmode -15; waitThree();} 
            if (pmode == 71) {pmode = pmode -17; waitThree();} 

            if (pmode == 72) {pmode = pmode -1; waitThree();} 
            if (pmode == 73) {pmode = pmode -3; waitThree();} 
            if (pmode == 74) {pmode = pmode -5; waitThree();} 
            if (pmode == 75) {pmode = pmode -7; waitThree();} 
            if (pmode == 76) {pmode = pmode -9; waitThree();} 
            if (pmode == 77) {pmode = pmode -11; waitThree();} 
            if (pmode == 78) {pmode = pmode -13; waitThree();} 
            if (pmode == 79) {pmode = pmode -15; waitThree();} 
            if (pmode == 80) {pmode = pmode -17; waitThree();} 
            
            if (pmode == 81) {pmode = pmode -1; waitThree();} 
            if (pmode == 82) {pmode = pmode -3; waitThree();} 
            if (pmode == 83) {pmode = pmode -5; waitThree();} 
            if (pmode == 84) {pmode = pmode -7; waitThree();} 
            if (pmode == 85) {pmode = pmode -9; waitThree();} 
            if (pmode == 86) {pmode = pmode -11; waitThree();} 
            if (pmode == 87) {pmode = pmode -13; waitThree();} 
            if (pmode == 88) {pmode = pmode -15; waitThree();} 
            if (pmode == 89) {pmode = pmode -17; waitThree();}   
 
        
}

if(!(btns & (BTN_L | BTN_R))) {  pmode = 48; waitThree();} //centre cursor
    

//quickly turns pixel off or on instead of having to wait for the brightness value to slowly dwindle

 if(!(btns & (BTN_B | BTN_A))){

      if (pmode == 0) { if (p00v == 1) { p00v = 255;} else p00v = 1;}
      if (pmode == 1) { if (p01v == 1) { p01v = 255;} else p01v = 1;} 
      if (pmode == 2) { if (p02v == 1) { p02v = 255;} else p02v = 1;}
      if (pmode == 3) { if (padv == 1) { padv = 255;} else padv = 1;} 
      if (pmode == 4) { if (paev == 1) { paev = 255;} else paev = 1;}
      if (pmode == 5) { if (pafv == 1) { pafv = 255;} else pafv = 1;} 
      if (pmode == 6) { if (pagv == 1) { pagv = 255;} else pagv = 1;}
      if (pmode == 7) { if (pahv == 1) { pahv = 255;} else pahv = 1;}
      if (pmode == 8) { if (paiv == 1) { paiv = 255;} else paiv = 1;}
      if (pmode == 9) { if (pajv == 1) { pajv = 255;} else pajv = 1;} 
      if (pmode == 10) { if (pakv == 1) { pakv = 255;} else pakv = 1;}
      if (pmode == 11) { if (palv == 1) { palv = 255;} else palv = 1;} 
      if (pmode == 12) { if (pamv == 1) { pamv = 255;} else pamv = 1;}
      if (pmode == 13) { if (panv == 1) { panv = 255;} else panv = 1;} 
      if (pmode == 14) { if (paov == 1) { paov = 255;} else paov = 1;}
      if (pmode == 15) { if (papv == 1) { papv = 255;} else papv = 1;}
      if (pmode == 16) { if (paqv == 1) { paqv = 255;} else paqv = 1;}
      if (pmode == 17) { if (parv == 1) { parv = 255;} else parv = 1;} 
      if (pmode == 18) { if (pasv == 1) { pasv = 255;} else pasv = 1;}
      if (pmode == 19) { if (patv == 1) { patv = 255;} else patv = 1;} 
      if (pmode == 20) { if (pauv == 1) { pauv = 255;} else pauv = 1;}
      if (pmode == 21) { if (pavv == 1) { pavv = 255;} else pavv = 1;} 
      if (pmode == 22) { if (pawv == 1) { pawv = 255;} else pawv = 1;}
      if (pmode == 23) { if (paxv == 1) { paxv = 255;} else paxv = 1;}
      if (pmode == 24) { if (payv == 1) { payv = 255;} else payv = 1;}
      if (pmode == 25) { if (pazv == 1) { pazv = 255;} else pazv = 1;} 
      if (pmode == 26) { if (pbav == 1) { pbav = 255;} else pbav = 1;}
      if (pmode == 27) { if (pbbv == 1) { pbbv = 255;} else pbbv = 1;} 
      if (pmode == 28) { if (pbcv == 1) { pbcv = 255;} else pbcv = 1;}
      if (pmode == 29) { if (pbdv == 1) { pbdv = 255;} else pbdv = 1;} 
      if (pmode == 30) { if (pbev == 1) { pbev = 255;} else pbev = 1;}
      if (pmode == 31) { if (pbfv == 1) { pbfv = 255;} else pbfv = 1;} 
      if (pmode == 32) { if (pbgv == 1) { pbgv = 255;} else pbgv = 1;}
      if (pmode == 33) { if (pbhv == 1) { pbhv = 255;} else pbhv = 1;}
      if (pmode == 34) { if (pbiv == 1) { pbiv = 255;} else pbiv = 1;}
      if (pmode == 35) { if (pbjv == 1) { pbjv = 255;} else pbjv = 1;} 
      if (pmode == 36) { if (pbkv == 1) { pbkv = 255;} else pbkv = 1;}
      if (pmode == 37) { if (pblv == 1) { pblv = 255;} else pblv = 1;} 
      if (pmode == 38) { if (pbmv == 1) { pbmv = 255;} else pbmv = 1;}
      if (pmode == 39) { if (pbnv == 1) { pbnv = 255;} else pbnv = 1;} 
      if (pmode == 40) { if (pbov == 1) { pbov = 255;} else pbov = 1;}
      if (pmode == 41) { if (pbpv == 1) { pbpv = 255;} else pbpv = 1;} 
      if (pmode == 42) { if (pbqv == 1) { pbqv = 255;} else pbqv = 1;}
      if (pmode == 43) { if (pbrv == 1) { pbrv = 255;} else pbrv = 1;}
      if (pmode == 44) { if (pbsv == 1) { pbsv = 255;} else pbsv = 1;}
      if (pmode == 45) { if (pbtv == 1) { pbtv = 255;} else pbtv = 1;} 
      if (pmode == 46) { if (pbuv == 1) { pbuv = 255;} else pbuv = 1;} 
      if (pmode == 47) { if (pbvv == 1) { pbvv = 255;} else pbvv = 1;} 
      if (pmode == 48) { if (p48v == 1) { p48v = 255;} else p48v = 1;} 
      if (pmode == 49) { if (p49v == 1) { p49v = 255;} else p49v = 1;} 
      if (pmode == 50) { if (p50v == 1) { p50v = 255;} else p50v = 1;}  
      if (pmode == 51) { if (p51v == 1) { p51v = 255;} else p51v = 1;}  
      if (pmode == 52) { if (pcav == 1) { pcav = 255;} else pcav = 1;}
      if (pmode == 53) { if (pcbv == 1) { pcbv = 255;} else pcbv = 1;}
      if (pmode == 54) { if (pccv == 1) { pccv = 255;} else pcvv = 1;}
      if (pmode == 55) { if (pcdv == 1) { pcdv = 255;} else pcdv = 1;}
      if (pmode == 56) { if (pcev == 1) { pcev = 255;} else pcev = 1;}
      if (pmode == 57) { if (pcfv == 1) { pcfv = 255;} else pcfv = 1;}
      if (pmode == 58) { if (pcgv == 1) { pcgv = 255;} else pcgv = 1;} 
      if (pmode == 59) { if (pchv == 1) { pchv = 255;} else pchv = 1;}
      if (pmode == 60) { if (pciv == 1) { pciv = 255;} else pciv = 1;} 
      if (pmode == 61) { if (pcjv == 1) { pcjv = 255;} else pcjv = 1;}
      if (pmode == 62) { if (pckv == 1) { pckv = 255;} else pckv = 1;} 
      if (pmode == 63) { if (pclv == 1) { pclv = 255;} else pclv = 1;}
      if (pmode == 64) { if (pcmv == 1) { pcmv = 255;} else pcmv = 1;}
      if (pmode == 65) { if (pcnv == 1) { pcnv = 255;} else pcnv = 1;}
      if (pmode == 66) { if (pcov == 1) { pcov = 255;} else pcov = 1;}
      if (pmode == 67) { if (pcpv == 1) { pcpv = 255;} else pcpv = 1;}
      if (pmode == 68) { if (pcqv == 1) { pcqv = 255;} else pcqv = 1;} 
      if (pmode == 69) { if (pcrv == 1) { pcrv = 255;} else pcrv = 1;}
      if (pmode == 70) { if (pcsv == 1) { pcsv = 255;} else pcsv = 1;} 
      if (pmode == 71) { if (pctv == 1) { pctv = 255;} else pctv = 1;}
      if (pmode == 72) { if (pcuv == 1) { pcuv = 255;} else pcuv = 1;}
      if (pmode == 73) { if (pcvv == 1) { pcvv = 255;} else pcvv = 1;}
      if (pmode == 74) { if (pcwv == 1) { pcwv = 255;} else pcwv = 1;}
      if (pmode == 75) { if (pcxv == 1) { pcxv = 255;} else pcxv = 1;}
      if (pmode == 76) { if (pcyv == 1) { pcyv = 255;} else pcyv = 1;}
      if (pmode == 77) { if (pczv == 1) { pczv = 255;} else pczv = 1;}
      if (pmode == 78) { if (pdav == 1) { pdav = 255;} else pdav = 1;} 
      if (pmode == 79) { if (pdbv == 1) { pdbv = 255;} else pdbv = 1;} 
      if (pmode == 80) { if (pdcv == 1) { pdcv = 255;} else pdcv = 1;}  
      if (pmode == 81) { if (pddv == 1) { pddv = 255;} else pddv = 1;} 
      if (pmode == 82) { if (pdev == 1) { pdev = 255;} else pdev = 1;}  
      if (pmode == 83) { if (pdfv == 1) { pdfv = 255;} else pdfv = 1;} 
      if (pmode == 84) { if (pdgv == 1) { pdgv = 255;} else pdgv = 1;} 
      if (pmode == 85) { if (pdhv == 1) { pdhv = 255;} else pdhv = 1;} 
      if (pmode == 86) { if (pdiv == 1) { pdiv = 255;} else pdiv = 1;} 
      if (pmode == 87) { if (pdjv == 1) { pdjv = 255;} else pdjv = 1;} 
      if (pmode == 88) { if (pdkv == 1) { pdkv = 255;} else pdkv = 1;} 
      if (pmode == 89) { if (pdlv == 1) { pdlv = 255;} else pdlv = 1;} 

     
  } 

//hue up there's no upper or lower limit on hue but i don't really care
if(!(btns & BTN_A)){
     if (pmode == 0) { p00h = p00h +5;}
      if (pmode == 1) { p01h = p01h +5;} 
      if (pmode == 2) { p02h = p02h +5;}
      if (pmode == 3) { padh = padh +5;} 
      if (pmode == 4) { paeh = paeh +5;}
      if (pmode == 5) { pafh = pafh +5;} 
      if (pmode == 6) { pagh = pagh +5;}
      if (pmode == 7) { pahh = pahh +5;}
      if (pmode == 8) { paih = paih +5;}
      if (pmode == 9) { pajh = pajh +5;} 
      if (pmode == 10) { pakh = pakh +5;}
      if (pmode == 11) { palh = palh +5;} 
      if (pmode == 12) { pamh = pamh +5;}
      if (pmode == 13) { panh = panh+5;} 
      if (pmode == 14) { paoh = paoh+5;}
      if (pmode == 15) { paph = paph+5;}
      if (pmode == 16) { paqh = paqh+5;}
      if (pmode == 17) { parh = parh+5;} 
      if (pmode == 18) { pash = pash+5;}
      if (pmode == 19) { path = path+5;} 
      if (pmode == 20) { pauh = pauh+5;}
      if (pmode == 21) { pavh = pavh+5;} 
      if (pmode == 22) { pawh = pawh+5;}
      if (pmode == 23) { paxh = paxh+5;}
      if (pmode == 24) { payh = payh+5;}
      if (pmode == 25) { pazh = pazh+5;} 
      if (pmode == 26) { pbah = pbah+5;}
      if (pmode == 27) { pbbh = pbbh+5;} 
      if (pmode == 28) { pbch = pbch+5;}
      if (pmode == 29) { pbdh = pbdh+5;} 
      if (pmode == 30) { pbeh = pbeh+5;}
      if (pmode == 31) { pbfh = pbfh+5;} 
      if (pmode == 32) { pbgh = pbgh+5;}
      if (pmode == 33) { pbhh = pbhh+5;}
      if (pmode == 34) { pbih = pbih+5;}
      if (pmode == 35) { pbjh = pbjh+5;} 
      if (pmode == 36) { pbkh = pbkh+5;}
      if (pmode == 37) { pblh = pblh+5;} 
      if (pmode == 38) { pbmh = pbmh+5;}
      if (pmode == 39) { pbnh = pbnh+5;} 
      if (pmode == 40) { pboh = pboh+5;}
      if (pmode == 41) { pbph = pbph+5;} 
      if (pmode == 42) { pbqh = pbqh+5;}
      if (pmode == 43) { pbrh = pbrh+5;}
      if (pmode == 44) { pbsh = pbsh+5;}
      if (pmode == 45) { pbth = pbth+5;} 
      if (pmode == 46) { pbuh = pbuh+5;} 
      if (pmode == 47) { pbvh = pbvh+5;}
      if (pmode == 48) { p48h = p48h +5;} 
      if (pmode == 49) { p49h = p49h+5;}
      if (pmode == 50) { p50h = p50h+5;} 
      if (pmode == 51) { p51h = p51h+5;}
      if (pmode == 52) { pcah = pcah+5;} 
      if (pmode == 53) { pcbh = pcbh+5;}
      if (pmode == 54) { pcch = pcch+5;}
      if (pmode == 55) { pcdh = pcdh+5;}
      if (pmode == 56) { pceh = pceh+5;}
      if (pmode == 57) { pcfh = pcfh+5;}
      if (pmode == 58) { pcgh = pcgh+5;} 
      if (pmode == 59) { pchh = pchh+5;}
      if (pmode == 60) { pcih = pcih+5;} 
      if (pmode == 61) { pcjh = pcjh+5;}
      if (pmode == 62) { pckh = pckh+5;} 
      if (pmode == 63) { pclh = pclh+5;}
      if (pmode == 64) { pcmh = pcmh+5;}
      if (pmode == 65) { pcnh = pcnh+5;}
      if (pmode == 66) { pcoh = pcoh+5;}
      if (pmode == 67) { pcph = pcph+5;}
      if (pmode == 68) { pcqh = pcqh+5;} 
      if (pmode == 69) { pcrh = pcrh+5;}
      if (pmode == 70) { pcsh = pcsh+5;} 
      if (pmode == 71) { pcth = pcth+5;}
      if (pmode == 72) { pcuh = pcuh+5;} 
      if (pmode == 73) { pcvh = pcvh+5;}
      if (pmode == 74) { pcwh = pcwh+5;}
      if (pmode == 75) { pcxh = pcxh+5;}
      if (pmode == 76) { pcyh = pcyh+5;}
      if (pmode == 77) { pczh = pczh+5;}
      if (pmode == 78) { pdah = pdah+5;} 
      if (pmode == 79) { pdbh = pdbh+5;}
      if (pmode == 80) { pdch = pdch+5;} 
      if (pmode == 81) { pddh = pddh+5;}
      if (pmode == 82) { pdeh = pdeh+5;} 
      if (pmode == 83) { pdfh = pdfh+5;}
      if (pmode == 84) { pdgh = pdgh+5;}
      if (pmode == 85) { pdhh = pdhh+5;}
      if (pmode == 86) { pdih = pdih+5;}
      if (pmode == 87) { pdjh = pdjh+5;}
      if (pmode == 88) { pdkh = pdkh+5;}
      if (pmode == 89) { pdlh = pdlh+5;}
}

//hue down
if(!(btns & BTN_B)){
     if (pmode == 0) { p00h = p00h -5;}
      if (pmode == 1) { p01h = p01h -5;} 
      if (pmode == 2) { p02h = p02h -5;}
      if (pmode == 3) { padh = padh -5;} 
      if (pmode == 4) { paeh = paeh -5;}
      if (pmode == 5) { pafh = pafh -5;} 
      if (pmode == 6) { pagh = pagh -5;}
      if (pmode == 7) { pahh = pahh -5;}
      if (pmode == 8) { paih = paih -5;}
      if (pmode == 9) { pajh = pajh -5;} 
      if (pmode == 10) { pakh = pakh -5;}
      if (pmode == 11) { palh = palh -5;} 
      if (pmode == 12) { pamh = pamh -5;}
      if (pmode == 13) { panh = panh-5;} 
      if (pmode == 14) { paoh = paoh-5;}
      if (pmode == 15) { paph = paph-5;}
      if (pmode == 16) { paqh = paqh-5;}
      if (pmode == 17) { parh = parh-5;} 
      if (pmode == 18) { pash = pash-5;}
      if (pmode == 19) { path = path-5;} 
      if (pmode == 20) { pauh = pauh-5;}
      if (pmode == 21) { pavh = pavh-5;} 
      if (pmode == 22) { pawh = pawh-5;}
      if (pmode == 23) { paxh = paxh-5;}
      if (pmode == 24) { payh = payh-5;}
      if (pmode == 25) { pazh = pazh-5;} 
      if (pmode == 26) { pbah = pbah-5;}
      if (pmode == 27) { pbbh = pbbh-5;} 
      if (pmode == 28) { pbch = pbch-5;}
      if (pmode == 29) { pbdh = pbdh-5;} 
      if (pmode == 30) { pbeh = pbeh-5;}
      if (pmode == 31) { pbfh = pbfh-5;} 
      if (pmode == 32) { pbgh = pbgh-5;}
      if (pmode == 33) { pbhh = pbhh-5;}
      if (pmode == 34) { pbih = pbih-5;}
      if (pmode == 35) { pbjh = pbjh-5;} 
      if (pmode == 36) { pbkh = pbkh-5;}
      if (pmode == 37) { pblh = pblh-5;} 
      if (pmode == 38) { pbmh = pbmh-5;}
      if (pmode == 39) { pbnh = pbnh-5;} 
      if (pmode == 40) { pboh = pboh-5;}
      if (pmode == 41) { pbph = pbph-5;} 
      if (pmode == 42) { pbqh = pbqh-5;}
      if (pmode == 43) { pbrh = pbrh-5;}
      if (pmode == 44) { pbsh = pbsh-5;}
      if (pmode == 45) { pbth = pbth-5;} 
      if (pmode == 46) { pbuh = pbuh-5;} 
      if (pmode == 47) { pbvh = pbvh-5;}
      if (pmode == 48) { p48h = p48h-5;} 
      if (pmode == 49) { p49h = p49h-5;}
      if (pmode == 50) { p50h = p50h-5;} 
      if (pmode == 51) { p51h = p51h-5;}
      if (pmode == 52) { pcah = pcah-5;} 
      if (pmode == 53) { pcbh = pcbh-5;}
      if (pmode == 54) { pcch = pcch-5;}
      if (pmode == 55) { pcdh = pcdh-5;}
      if (pmode == 56) { pceh = pceh-5;}
      if (pmode == 57) { pcfh = pcfh-5;}
      if (pmode == 58) { pcgh = pcgh-5;} 
      if (pmode == 59) { pchh = pchh-5;}
      if (pmode == 60) { pcih = pcih-5;} 
      if (pmode == 61) { pcjh = pcjh-5;}
      if (pmode == 62) { pckh = pckh-5;} 
      if (pmode == 63) { pclh = pclh-5;}
      if (pmode == 64) { pcmh = pcmh-5;}
      if (pmode == 65) { pcnh = pcnh-5;}
      if (pmode == 66) { pcoh = pcoh-5;}
      if (pmode == 67) { pcph = pcph-5;}
      if (pmode == 68) { pcqh = pcqh-5;} 
      if (pmode == 69) { pcrh = pcrh-5;}
      if (pmode == 70) { pcsh = pcsh-5;} 
      if (pmode == 71) { pcth = pcth-5;}
      if (pmode == 72) { pcuh = pcuh-5;} 
      if (pmode == 73) { pcvh = pcvh-5;}
      if (pmode == 74) { pcwh = pcwh-5;}
      if (pmode == 75) { pcxh = pcxh-5;}
      if (pmode == 76) { pcyh = pcyh-5;}
      if (pmode == 77) { pczh = pczh-5;}
      if (pmode == 78) { pdah = pdah-5;} 
      if (pmode == 79) { pdbh = pdbh-5;}
      if (pmode == 80) { pdch = pdch-5;} 
      if (pmode == 81) { pddh = pddh-5;}
      if (pmode == 82) { pdeh = pdeh-5;} 
      if (pmode == 83) { pdfh = pdfh-5;}
      if (pmode == 84) { pdgh = pdgh-5;}
      if (pmode == 85) { pdhh = pdhh-5;}
      if (pmode == 86) { pdih = pdih-5;}
      if (pmode == 87) { pdjh = pdjh-5;}
      if (pmode == 88) { pdkh = pdkh-5;}
      if (pmode == 89) { pdlh = pdlh-5;}
      
      
}
//value (brightness) up 
if(!(btns & BTN_R)){
     if (pmode == 0) { p00v = p00v +5;}
      if (pmode == 1) { p01v = p01v +5;} 
      if (pmode == 2) { p02v = p02v +5;}
      if (pmode == 3) { padv = padv +5;} 
      if (pmode == 4) { paev = paev +5;}
      if (pmode == 5) { pafv = pafv +5;} 
      if (pmode == 6) { pagv = pagv +5;}
      if (pmode == 7) { pahv = pahv +5;}
      if (pmode == 8) { paiv = paiv +5;}
      if (pmode == 9) { pajv = pajv +5;} 
      if (pmode == 10) { pakv = pakv +5;}
      if (pmode == 11) { palv = palv +5;} 
      if (pmode == 12) { pamv = pamv +5;}
      if (pmode == 13) { panv = panv+5;} 
      if (pmode == 14) { paov = paov+5;}
      if (pmode == 15) { papv = papv+5;}
      if (pmode == 16) { paqv = paqv+5;}
      if (pmode == 17) { parv = parv+5;} 
      if (pmode == 18) { pasv = pasv+5;}
      if (pmode == 19) { patv = patv+5;} 
      if (pmode == 20) { pauv = pauv+5;}
      if (pmode == 21) { pavv = pavv+5;} 
      if (pmode == 22) { pawv = pawv+5;}
      if (pmode == 23) { paxv = paxv+5;}
      if (pmode == 24) { payv = payv+5;}
      if (pmode == 25) { pazv = pazv+5;} 
      if (pmode == 26) { pbav = pbav+5;}
      if (pmode == 27) { pbbv = pbbv+5;} 
      if (pmode == 28) { pbcv = pbcv+5;}
      if (pmode == 29) { pbdv = pbdv+5;} 
      if (pmode == 30) { pbev = pbev+5;}
      if (pmode == 31) { pbfv = pbfv+5;} 
      if (pmode == 32) { pbgv = pbgv+5;}
      if (pmode == 33) { pbhv = pbhv+5;}
      if (pmode == 34) { pbiv = pbiv+5;}
      if (pmode == 35) { pbjv = pbjv+5;} 
      if (pmode == 36) { pbkv = pbkv+5;}
      if (pmode == 37) { pblv = pblv+5;} 
      if (pmode == 38) { pbmv = pbmv+5;}
      if (pmode == 39) { pbnv = pbnv+5;} 
      if (pmode == 40) { pbov = pbov+5;}
      if (pmode == 41) { pbpv = pbpv+5;} 
      if (pmode == 42) { pbqv = pbqv+5;}
      if (pmode == 43) { pbrv = pbrv+5;}
      if (pmode == 44) { pbsv = pbsv+5;}
      if (pmode == 45) { pbtv = pbtv+5;} 
      if (pmode == 46) { pbuv = pbuv+5;} 
      if (pmode == 47) { pbvv = pbvv+5;}
      if (pmode == 48) { p48v = p48v +5;} 
      if (pmode == 49) { p49v = p49v+5;}
      if (pmode == 50) { p50v = p50v+5;} 
      if (pmode == 51) { p51v = p51v+5;}
      if (pmode == 52) { pcav = pcav+5;} 
      if (pmode == 53) { pcbv = pcbv+5;}
      if (pmode == 54) { pccv = pccv+5;}
      if (pmode == 55) { pcdv = pcdv+5;}
      if (pmode == 56) { pcev = pcev+5;}
      if (pmode == 57) { pcfv = pcfv+5;}
      if (pmode == 58) { pcgv = pcgv+5;} 
      if (pmode == 59) { pchv = pchv+5;}
      if (pmode == 60) { pciv = pciv+5;} 
      if (pmode == 61) { pcjv = pcjv+5;}
      if (pmode == 62) { pckv = pckv+5;} 
      if (pmode == 63) { pclv = pclv+5;}
      if (pmode == 64) { pcmv = pcmv+5;}
      if (pmode == 65) { pcnv = pcnv+5;}
      if (pmode == 66) { pcov = pcov+5;}
      if (pmode == 67) { pcpv = pcpv+5;}
      if (pmode == 68) { pcqv = pcqv+5;} 
      if (pmode == 69) { pcrv = pcrv+5;}
      if (pmode == 70) { pcsv = pcsv+5;} 
      if (pmode == 71) { pctv = pctv+5;}
      if (pmode == 72) { pcuv = pcuv+5;} 
      if (pmode == 73) { pcvv = pcvv+5;}
      if (pmode == 74) { pcwv = pcwv+5;}
      if (pmode == 75) { pcxv = pcxv+5;}
      if (pmode == 76) { pcyv = pcyv+5;}
      if (pmode == 77) { pczv = pczv+5;}
      if (pmode == 78) { pdav = pdav+5;} 
      if (pmode == 79) { pdbv = pdbv+5;}
      if (pmode == 80) { pdcv = pdcv+5;} 
      if (pmode == 81) { pddv = pddv+5;}
      if (pmode == 82) { pdev = pdev+5;} 
      if (pmode == 83) { pdfv = pdfv+5;}
      if (pmode == 84) { pdgv = pdgv+5;}
      if (pmode == 85) { pdhv = pdhv+5;}
      if (pmode == 86) { pdiv = pdiv+5;}
      if (pmode == 87) { pdjv = pdjv+5;}
      if (pmode == 88) { pdkv = pdkv+5;}
      if (pmode == 89) { pdlv = pdlv+5;}
}
//value (brightness) down there probably should be a lower limit on this so it doesn't dip to exactly 0 and fuck with the rest of the code. NOTE: FIX THIS TEDIOUS SHIT LATER
if(!(btns & BTN_L)){
     if (pmode == 0) { p00v = p00v -5;}
      if (pmode == 1) { p01v = p01v -5;} 
      if (pmode == 2) { p02v = p02v -5;}
      if (pmode == 3) { padv = padv -5;} 
      if (pmode == 4) { paev = paev -5;}
      if (pmode == 5) { pafv = pafv -5;} 
      if (pmode == 6) { pagv = pagv -5;}
      if (pmode == 7) { pahv = pahv -5;}
      if (pmode == 8) { paiv = paiv -5;}
      if (pmode == 9) { pajv = pajv -5;} 
      if (pmode == 10) { pakv = pakv -5;}
      if (pmode == 11) { palv = palv -5;} 
      if (pmode == 12) { pamv = pamv -5;}
      if (pmode == 13) { panv = panv-5;} 
      if (pmode == 14) { paov = paov-5;}
      if (pmode == 15) { papv = papv-5;}
      if (pmode == 16) { paqv = paqv-5;}
      if (pmode == 17) { parv = parv-5;} 
      if (pmode == 18) { pasv = pasv-5;}
      if (pmode == 19) { patv = patv-5;} 
      if (pmode == 20) { pauv = pauv-5;}
      if (pmode == 21) { pavv = pavv-5;} 
      if (pmode == 22) { pawv = pawv-5;}
      if (pmode == 23) { paxv = paxv-5;}
      if (pmode == 24) { payv = payv-5;}
      if (pmode == 25) { pazv = pazv-5;} 
      if (pmode == 26) { pbav = pbav-5;}
      if (pmode == 27) { pbbv = pbbv-5;} 
      if (pmode == 28) { pbcv = pbcv-5;}
      if (pmode == 29) { pbdv = pbdv-5;} 
      if (pmode == 30) { pbev = pbev-5;}
      if (pmode == 31) { pbfv = pbfv-5;} 
      if (pmode == 32) { pbgv = pbgv-5;}
      if (pmode == 33) { pbhv = pbhv-5;}
      if (pmode == 34) { pbiv = pbiv-5;}
      if (pmode == 35) { pbjv = pbjv-5;} 
      if (pmode == 36) { pbkv = pbkv-5;}
      if (pmode == 37) { pblv = pblv-5;} 
      if (pmode == 38) { pbmv = pbmv-5;}
      if (pmode == 39) { pbnv = pbnv-5;} 
      if (pmode == 40) { pbov = pbov-5;}
      if (pmode == 41) { pbpv = pbpv-5;} 
      if (pmode == 42) { pbqv = pbqv-5;}
      if (pmode == 43) { pbrv = pbrv-5;}
      if (pmode == 44) { pbsv = pbsv-5;}
      if (pmode == 45) { pbtv = pbtv-5;} 
      if (pmode == 46) { pbuv = pbuv-5;} 
      if (pmode == 47) { pbvv = pbvv-5;}
      if (pmode == 48) { p48v = p48v -5;} 
      if (pmode == 49) { p49v = p49v-5;}
      if (pmode == 50) { p50v = p50v-5;} 
      if (pmode == 51) { p51v = p51v-5;}
      if (pmode == 52) { pcav = pcav-5;} 
      if (pmode == 53) { pcbv = pcbv-5;}
      if (pmode == 54) { pccv = pccv-5;}
      if (pmode == 55) { pcdv = pcdv-5;}
      if (pmode == 56) { pcev = pcev-5;}
      if (pmode == 57) { pcfv = pcfv-5;}
      if (pmode == 58) { pcgv = pcgv-5;} 
      if (pmode == 59) { pchv = pchv-5;}
      if (pmode == 60) { pciv = pciv-5;} 
      if (pmode == 61) { pcjv = pcjv-5;}
      if (pmode == 62) { pckv = pckv-5;} 
      if (pmode == 63) { pclv = pclv-5;}
      if (pmode == 64) { pcmv = pcmv-5;}
      if (pmode == 65) { pcnv = pcnv-5;}
      if (pmode == 66) { pcov = pcov-5;}
      if (pmode == 67) { pcpv = pcpv-5;}
      if (pmode == 68) { pcqv = pcqv-5;} 
      if (pmode == 69) { pcrv = pcrv-5;}
      if (pmode == 70) { pcsv = pcsv-5;} 
      if (pmode == 71) { pctv = pctv-5;}
      if (pmode == 72) { pcuv = pcuv-5;} 
      if (pmode == 73) { pcvv = pcvv-5;}
      if (pmode == 74) { pcwv = pcwv-5;}
      if (pmode == 75) { pcxv = pcxv-5;}
      if (pmode == 76) { pcyv = pcyv-5;}
      if (pmode == 77) { pczv = pczv-5;}
      if (pmode == 78) { pdav = pdav-5;} 
      if (pmode == 79) { pdbv = pdbv-5;}
      if (pmode == 80) { pdcv = pdcv-5;} 
      if (pmode == 81) { pddv = pddv-5;}
      if (pmode == 82) { pdev = pdev-5;} 
      if (pmode == 83) { pdfv = pdfv-5;}
      if (pmode == 84) { pdgv = pdgv-5;}
      if (pmode == 85) { pdhv = pdhv-5;}
      if (pmode == 86) { pdiv = pdiv-5;}
      if (pmode == 87) { pdjv = pdjv-5;}
      if (pmode == 88) { pdkv = pdkv-5;}
      if (pmode == 89) { pdlv = pdlv-5;}
}

//Saturation up. this is what an upper limit looks like. this was done cause improperly pushing a combination of buttons was accidentally taking saturation to 256, which is 0, which is drastically different and annoying.
if(!(btns & BTN_X)){
      if (pmode == 0) { p00s = p00s+5; if (p00s > 255) {p00s = 255;}}
      if (pmode == 1) { p01s = p01s+5; if (p01s > 255) {p01s = 255;}} 
      if (pmode == 2) { p02s = p02s+5; if (p02s > 255) {p02s = 255;}}
      if (pmode == 3) { pads = pads+5; if (pads > 255) {pads = 255;}} 
      if (pmode == 4) { paes = paes+5; if (paes > 255) {paes = 255;}}
      if (pmode == 5) { pafs = pafs+5; if (pafs > 255) {pafs = 255;}} 
      if (pmode == 6) { pags = pags+5; if (pags > 255) {pags = 255;}}
      if (pmode == 7) { pahs = pahs+5; if (pahs > 255) {pahs = 255;}}
      if (pmode == 8) { pais = pais+5; if (pais > 255) {pais = 255;}}
      if (pmode == 9) { pajs = pajs+5; if (pajs > 255) {pajs = 255;}} 
      if (pmode == 10) { paks = paks+5; if (paks > 255) {paks = 255;}}
      if (pmode == 11) { pals = pals+5; if (pals > 255) {pals = 255;}} 
      if (pmode == 12) { pams = pams+5; if (pams > 255) {pams = 255;}}
      if (pmode == 13) { pans = pans+5; if (pans > 255) {pans = 255;}} 
      if (pmode == 14) { paos = paos+5; if (paos > 255) {paos = 255;}}
      if (pmode == 15) { paps = paps+5; if (paps > 255) {paps = 255;}}
      if (pmode == 16) { paqs = paqs+5; if (paqs > 255) {paqs = 255;}}
      if (pmode == 17) { pars = pars+5; if (pars > 255) {pars = 255;}} 
      if (pmode == 18) { pass = pass+5; if (pass > 255) {pass = 255;}}
      if (pmode == 19) { pats = pats+5; if (pats > 255) {pats = 255;}} 
      if (pmode == 20) { paus = paus+5; if (paus > 255) {paus = 255;}}
      if (pmode == 21) { pavs = pavs+5; if (pavs > 255) {pavs = 255;}} 
      if (pmode == 22) { paws = paws+5; if (paws > 255) {paws = 255;}}
      if (pmode == 23) { paxs = paxs+5; if (paxs > 255) {paxs = 255;}}
      if (pmode == 24) { pays = pays+5; if (pays > 255) {pays = 255;}}
      if (pmode == 25) { pazs = pazs+5; if (pazs > 255) {pazs = 255;}} 
      if (pmode == 26) { pbas = pbas+5; if (pbas > 255) {pbas = 255;}}
      if (pmode == 27) { pbbs = pbbs+5; if (pbbs > 255) {pbbs = 255;}} 
      if (pmode == 28) { pbcs = pbcs+5; if (pbcs > 255) {pbcs = 255;}}
      if (pmode == 29) { pbds = pbds+5; if (pbds > 255) {pbds = 255;}} 
      if (pmode == 30) { pbes = pbes+5; if (pbes > 255) {pbes = 255;}}
      if (pmode == 31) { pbfs = pbfs+5; if (pbfs > 255) {pbfs = 255;}} 
      if (pmode == 32) { pbgs = pbgs+5; if (pbgs > 255) {pbgs = 255;}}
      if (pmode == 33) { pbhs = pbhs+5; if (pbhs > 255) {pbhs = 255;}}
      if (pmode == 34) { pbis = pbis+5; if (pbis > 255) {pbis = 255;}}
      if (pmode == 35) { pbjs = pbjs+5; if (pbjs > 255) {pbjs = 255;}} 
      if (pmode == 36) { pbks = pbks+5; if (pbks > 255) {pbks = 255;}}
      if (pmode == 37) { pbls = pbls+5; if (pbls > 255) {pbls = 255;}} 
      if (pmode == 38) { pbms = pbms+5; if (pbms > 255) {pbms = 255;}}
      if (pmode == 39) { pbns = pbns+5; if (pbns > 255) {pbns = 255;}} 
      if (pmode == 40) { pbos = pbos+5; if (pbos > 255) {pbos = 255;}}
      if (pmode == 41) { pbps = pbps+5; if (pbps > 255) {pbps = 255;}} 
      if (pmode == 42) { pbqs = pbqs+5; if (pbqs > 255) {pbqs = 255;}}
      if (pmode == 43) { pbrs = pbrs+5; if (pbrs > 255) {pbrs = 255;}}
      if (pmode == 44) { pbss = pbss+5; if (pbss > 255) {pbss = 255;}}
      if (pmode == 45) { pbts = pbts+5; if (pbts > 255) {pbts = 255;}} 
      if (pmode == 46) { pbus = pbus+5; if (pbus > 255) {pbus = 255;}} 
      if (pmode == 47) { pbvs = pbvs+5; if (pbvs > 255) {pbvs = 255;}}
      if (pmode == 48) { p48s = p48s+5; if (p48s > 255) {p48s = 255;}} 
      if (pmode == 49) { p49s = p49s+5; if (p49s > 255) {p49s = 255;}}
      if (pmode == 50) { p50s = p50s+5; if (p50s > 255) {p50s = 255;}} 
      if (pmode == 51) { p51s = p51s+5; if (p51s > 255) {p51s = 255;}}
      if (pmode == 52) { pcas = pcas+5; if (pcas > 255) {pcas = 255;}} 
      if (pmode == 53) { pcbs = pcbs+5; if (pcbs > 255) {pcbs = 255;}}
      if (pmode == 54) { pccs = pccs+5; if (pccs > 255) {pccs = 255;}}
      if (pmode == 55) { pcds = pcds+5; if (pcds > 255) {pcds = 255;}}
      if (pmode == 56) { pces = pces+5; if (pces > 255) {pces = 255;}}
      if (pmode == 57) { pcfs = pcfs+5; if (pcfs > 255) {pcfs = 255;}}
      if (pmode == 58) { pcgs = pcgs+5; if (pcgs > 255) {pcgs = 255;}} 
      if (pmode == 59) { pchs = pchs+5; if (pchs > 255) {pchs = 255;}}
      if (pmode == 60) { pcis = pcis+5; if (pcis > 255) {pcis = 255;}} 
      if (pmode == 61) { pcjs = pcjs+5; if (pcjs > 255) {pcjs = 255;}}
      if (pmode == 62) { pcks = pcks+5; if (pcks > 255) {pcks = 255;}} 
      if (pmode == 63) { pcls = pcls+5; if (pcls > 255) {pcls = 255;}}
      if (pmode == 64) { pcms = pcms+5; if (pcms > 255) {pcms = 255;}}
      if (pmode == 65) { pcns = pcns+5; if (pcns > 255) {pcns = 255;}}
      if (pmode == 66) { pcos = pcos+5; if (pcos > 255) {pcos = 255;}}
      if (pmode == 67) { pcps = pcps+5; if (pcps > 255) {pcps = 255;}}
      if (pmode == 68) { pcqs = pcqs+5; if (pcqs > 255) {pcqs = 255;}} 
      if (pmode == 69) { pcrs = pcrs+5; if (pcrs > 255) {pcrs = 255;}}
      if (pmode == 70) { pcss = pcss+5; if (pcss > 255) {pcss = 255;}} 
      if (pmode == 71) { pcts = pcts+5; if (pcts > 255) {pcts = 255;}}
      if (pmode == 72) { pcus = pcus+5; if (pcus > 255) {pcus = 255;}} 
      if (pmode == 73) { pcvs = pcvs+5; if (pcvs > 255) {pcvs = 255;}}
      if (pmode == 74) { pcws = pcws+5; if (pcws > 255) {pcws = 255;}}
      if (pmode == 75) { pcxs = pcxs+5; if (pcxs > 255) {pcxs = 255;}}
      if (pmode == 76) { pcys = pcys+5; if (pcys > 255) {pcys = 255;}}
      if (pmode == 77) { pczs = pczs+5; if (pczs > 255) {pczs = 255;}}
      if (pmode == 78) { pdas = pdas+5; if (pdas > 255) {pdas = 255;}} 
      if (pmode == 79) { pdbs = pdbs+5; if (pdbs > 255) {pdbs = 255;}}
      if (pmode == 80) { pdcs = pdcs+5; if (pdcs > 255) {pdcs = 255;}} 
      if (pmode == 81) { pdds = pdds+5; if (pdds > 255) {pdds = 255;}}
      if (pmode == 82) { pdes = pdes+5; if (pdes > 255) {pdes = 255;}} 
      if (pmode == 83) { pdfs = pdfs+5; if (pdfs > 255) {pdfs = 255;}}
      if (pmode == 84) { pdgs = pdgs+5; if (pdgs > 255) {pdgs = 255;}}
      if (pmode == 85) { pdhs = pdhs+5; if (pdhs > 255) {pdhs = 255;}}
      if (pmode == 86) { pdis = pdis+5; if (pdis > 255) {pdis = 255;}}
      if (pmode == 87) { pdjs = pdjs+5; if (pdjs > 255) {pdjs = 255;}}
      if (pmode == 88) { pdks = pdks+5; if (pdks > 255) {pdks = 255;}}
      if (pmode == 89) { pdls = pdls+5; if (pdls > 255) {pdls = 255;}}
}

//Saturation Down
if(!(btns & BTN_Y)){
     if (pmode == 0) { p00s = p00s-5;}
      if (pmode == 1) { p01s = p01s-5;} 
      if (pmode == 2) { p02s = p02s-5;}
      if (pmode == 3) { pads = pads-5;} 
      if (pmode == 4) { paes = paes-5;}
      if (pmode == 5) { pafs = pafs-5;} 
      if (pmode == 6) { pags = pags-5;}
      if (pmode == 7) { pahs = pahs-5;}
      if (pmode == 8) { pais = pais-5;}
      if (pmode == 9) { pajs = pajs-5;} 
      if (pmode == 10) { paks = paks-5;}
      if (pmode == 11) { pals = pals-5;} 
      if (pmode == 12) { pams = pams-5;}
      if (pmode == 13) { pans = pans-5;} 
      if (pmode == 14) { paos = paos-5;}
      if (pmode == 15) { paps = paps-5;}
      if (pmode == 16) { paqs = paqs-5;}
      if (pmode == 17) { pars = pars-5;} 
      if (pmode == 18) { pass = pass-5;}
      if (pmode == 19) { pats = pats-5;} 
      if (pmode == 20) { paus = paus-5;}
      if (pmode == 21) { pavs = pavs-5;} 
      if (pmode == 22) { paws = paws-5;}
      if (pmode == 23) { paxs = paxs-5;}
      if (pmode == 24) { pays = pays-5;}
      if (pmode == 25) { pazs = pazs-5;} 
      if (pmode == 26) { pbas = pbas-5;}
      if (pmode == 27) { pbbs = pbbs-5;} 
      if (pmode == 28) { pbcs = pbcs-5;}
      if (pmode == 29) { pbds = pbds-5;} 
      if (pmode == 30) { pbes = pbes-5;}
      if (pmode == 31) { pbfs = pbfs-5;} 
      if (pmode == 32) { pbgs = pbgs-5;}
      if (pmode == 33) { pbhs = pbhs-5;}
      if (pmode == 34) { pbis = pbis-5;}
      if (pmode == 35) { pbjs = pbjs-5;} 
      if (pmode == 36) { pbks = pbks-5;}
      if (pmode == 37) { pbls = pbls-5;} 
      if (pmode == 38) { pbms = pbms-5;}
      if (pmode == 39) { pbns = pbns-5;} 
      if (pmode == 40) { pbos = pbos-5;}
      if (pmode == 41) { pbps = pbps-5;} 
      if (pmode == 42) { pbqs = pbqs-5;}
      if (pmode == 43) { pbrs = pbrs-5;}
      if (pmode == 44) { pbss = pbss-5;}
      if (pmode == 45) { pbts = pbts-5;} 
      if (pmode == 46) { pbus = pbus-5;} 
      if (pmode == 47) { pbvs = pbvs-5;}
      if (pmode == 48) { p48s = p48s-5;} 
      if (pmode == 49) { p49s = p49s-5;}
      if (pmode == 50) { p50s = p50s-5;} 
      if (pmode == 51) { p51s = p51s-5;}
      if (pmode == 52) { pcas = pcas-5;} 
      if (pmode == 53) { pcbs = pcbs-5;}
      if (pmode == 54) { pccs = pccs-5;}
      if (pmode == 55) { pcds = pcds-5;}
      if (pmode == 56) { pces = pces-5;}
      if (pmode == 57) { pcfs = pcfs-5;}
      if (pmode == 58) { pcgs = pcgs-5;} 
      if (pmode == 59) { pchs = pchs-5;}
      if (pmode == 60) { pcis = pcis-5;} 
      if (pmode == 61) { pcjs = pcjs-5;}
      if (pmode == 62) { pcks = pcks-5;} 
      if (pmode == 63) { pcls = pcls-5;}
      if (pmode == 64) { pcms = pcms-5;}
      if (pmode == 65) { pcns = pcns-5;}
      if (pmode == 66) { pcos = pcos-5;}
      if (pmode == 67) { pcps = pcps-5;}
      if (pmode == 68) { pcqs = pcqs-5;} 
      if (pmode == 69) { pcrs = pcrs-5;}
      if (pmode == 70) { pcss = pcss-5;} 
      if (pmode == 71) { pcts = pcts-5;}
      if (pmode == 72) { pcus = pcus-5;} 
      if (pmode == 73) { pcvs = pcvs-5;}
      if (pmode == 74) { pcws = pcws-5;}
      if (pmode == 75) { pcxs = pcxs-5;}
      if (pmode == 76) { pcys = pcys-5;}
      if (pmode == 77) { pczs = pczs-5;}
      if (pmode == 78) { pdas = pdas-5;} 
      if (pmode == 79) { pdbs = pdbs-5;}
      if (pmode == 80) { pdcs = pdcs-5;} 
      if (pmode == 81) { pdds = pdds-5;}
      if (pmode == 82) { pdes = pdes-5;} 
      if (pmode == 83) { pdfs = pdfs-5;}
      if (pmode == 84) { pdgs = pdgs-5;}
      if (pmode == 85) { pdhs = pdhs-5;}
      if (pmode == 86) { pdis = pdis-5;}
      if (pmode == 87) { pdjs = pdjs-5;}
      if (pmode == 88) { pdks = pdks-5;}
      if (pmode == 89) { pdls = pdls-5;}
}

//THIS IS THE COPY AND PASTE FUNCTION. YOU CAN COPY THE HSV OF ANY OF YOUR PIXELS AND PASTE IT ONTO AS MANY OF THE OTHERS AS YOU LIKE. IT'S THE BEST THING EVER AND IT GAVE ME THE IDEA TO HAVE THE PALLET MODE WHERE YOU CAN COPY THE 
//PRETTY COLOURS I FOUND EARLIER

//brush copy (I KNOW THIS IS MESSY BUT I DIDNT DO THEM ALL AT ONCE AND IT WAS FASTER THIS WAY)
if(!(btns & (BTN_X | BTN_A))){


       if (pmode == 0) { brushv = p00v;  }
      if (pmode == 1) { brushv  = p01v;   } 
      if (pmode == 2) { brushv  = p02v;   }
      if (pmode == 3) { brushv  = padv;   } 
      if (pmode == 4) { brushv  = paev;   }
      if (pmode == 5) { brushv  = pafv;   } 
      if (pmode == 6) { brushv  = pagv;   }
      if (pmode == 7) { brushv  = pahv;   }
      if (pmode == 8) { brushv  = paiv;   }
      if (pmode == 9) { brushv  = pajv;   } 
      if (pmode == 10) { brushv  = pakv;   }
      if (pmode == 11) { brushv  = palv;   } 
      if (pmode == 12) { brushv = pamv;  }
      if (pmode == 13) { brushv  = panv;  } 
      if (pmode == 14) { brushv  = paov;  }
      if (pmode == 15) { brushv  = papv;  }
      if (pmode == 16) { brushv  = paqv;  }
      if (pmode == 17) { brushv  = parv;  } 
      if (pmode == 18) { brushv  = pasv;  }
      if (pmode == 19) { brushv  = patv;  } 
      if (pmode == 20) { brushv  = pauv;  }
      if (pmode == 21) { brushv = pavv;  } 
      if (pmode == 22) { brushv  = pawv;  }
      if (pmode == 23) { brushv  = paxv;  }
      if (pmode == 24) { brushv  = payv;  }
      if (pmode == 25) { brushv = pazv;  } 
      if (pmode == 26) { brushv  = pbav;  }
      if (pmode == 27) { brushv  = pbbv;  } 
      if (pmode == 28) { brushv  = pbcv;  }
      if (pmode == 29) { brushv  = pbdv;  } 
      if (pmode == 30) { brushv  = pbev;  }
      if (pmode == 31) { brushv  = pbfv;  } 
      if (pmode == 32) { brushv = pbgv;  }
      if (pmode == 33) { brushv  = pbhv;  }
      if (pmode == 34) { brushv  = pbiv;  }
      if (pmode == 35) { brushv = pbjv;  } 
      if (pmode == 36) { brushv  = pbkv;  }
      if (pmode == 37) { brushv = pblv;  } 
      if (pmode == 38) { brushv  = pbmv;  }
      if (pmode == 39) { brushv  = pbnv;  } 
      if (pmode == 40) { brushv  = pbov;  }
      if (pmode == 41) { brushv  = pbpv;  } 
      if (pmode == 42) { brushv  = pbqv;  }
      if (pmode == 43) { brushv  = pbrv;  }
      if (pmode == 44) { brushv  = pbsv;  }
      if (pmode == 45) { brushv  = pbtv;  } 
      if (pmode == 46) { brushv = pbuv;  } 
      if (pmode == 47) { brushv  = pbvv;  }
      if (pmode == 48) { brushv = p48v;  } 
      if (pmode == 49) { brushv = p49v;  }
      if (pmode == 50) { brushv  = p50v;  } 
      if (pmode == 51) { brushv = p51v;  }
      if (pmode == 52) { brushv  = pcav;  } 
      if (pmode == 53) { brushv  = pcbv;  }
      if (pmode == 54) { brushv  = pccv;  }
      if (pmode == 55) { brushv  = pcdv;  }
      if (pmode == 56) { brushv  = pcev;  }
      if (pmode == 57) { brushv  = pcfv;  }
      if (pmode == 58) { brushv = pcgv;  } 
      if (pmode == 59) { brushv  = pchv;  }
      if (pmode == 60) { brushv  = pciv;  } 
      if (pmode == 61) { brushv  = pcjv;  }
      if (pmode == 62) { brushv  = pckv;  } 
      if (pmode == 63) { brushv  = pclv;  }
      if (pmode == 64) { brushv  = pcmv;  }
      if (pmode == 65) { brushv  = pcnv;  }
      if (pmode == 66) { brushv  = pcov;  }
      if (pmode == 67) { brushv  = pcpv;  }
      if (pmode == 68) { brushv  = pcqv;  } 
      if (pmode == 69) { brushv  = pcrv;  }
      if (pmode == 70) { brushv  = pcsv;  } 
      if (pmode == 71) { brushv  = pctv;  }
      if (pmode == 72) { brushv  = pcuv;  } 
      if (pmode == 73) { brushv  = pcvv;  }
      if (pmode == 74) { brushv  = pcwv;  }
      if (pmode == 75) { brushv  = pcxv;  }
      if (pmode == 76) { brushv  = pcyv;  }
      if (pmode == 77) { brushv  = pczv;  }
      if (pmode == 78) { brushv  = pdav;  } 
      if (pmode == 79) { brushv  = pdbv;  }
      if (pmode == 80) { brushv  = pdcv;  } 
      if (pmode == 81) { brushv  = pddv;  }
      if (pmode == 82) { brushv  = pdev;  } 
      if (pmode == 83) { brushv  = pdfv;  }
      if (pmode == 84) { brushv  = pdgv;  }
      if (pmode == 85) { brushv  = pdhv;  }
      if (pmode == 86) { brushv  = pdiv;  }
      if (pmode == 87) { brushv  = pdjv;  }
      if (pmode == 88) { brushv  = pdkv;  }
      if (pmode == 89) { brushv  = pdlv;  }



       if (pmode == 0) { brushs = p00s;  }
      if (pmode == 1) { brushs  = p01s;   } 
      if (pmode == 2) { brushs  = p02s;   }
      if (pmode == 3) { brushs  = pads;   } 
      if (pmode == 4) { brushs  = paes;   }
      if (pmode == 5) { brushs  = pafs;   } 
      if (pmode == 6) { brushs  = pags;   }
      if (pmode == 7) { brushs  = pahs;   }
      if (pmode == 8) { brushs  = pais;   }
      if (pmode == 9) { brushs  = pajs;   } 
      if (pmode == 10) { brushs  = paks;   }
      if (pmode == 11) { brushs  = pals;   } 
      if (pmode == 12) { brushs = pams;  }
      if (pmode == 13) { brushs  = pans;  } 
      if (pmode == 14) { brushs  = paos;  }
      if (pmode == 15) { brushs  = paps;  }
      if (pmode == 16) { brushs  = paqs;  }
      if (pmode == 17) { brushs  = pars;  } 
      if (pmode == 18) { brushs  = pass;  }
      if (pmode == 19) { brushs  = pats;  } 
      if (pmode == 20) { brushs  = paus;  }
      if (pmode == 21) { brushs = pavs;  } 
      if (pmode == 22) { brushs  = paws;  }
      if (pmode == 23) { brushs  = paxs;  }
      if (pmode == 24) { brushs  = pays;  }
      if (pmode == 25) { brushs = pazs;  } 
      if (pmode == 26) { brushs  = pbas;  }
      if (pmode == 27) { brushs  = pbbs;  } 
      if (pmode == 28) { brushs  = pbcs;  }
      if (pmode == 29) { brushs  = pbds;  } 
      if (pmode == 30) { brushs  = pbes;  }
      if (pmode == 31) { brushs  = pbfs;  } 
      if (pmode == 32) { brushs = pbgs;  }
      if (pmode == 33) { brushs  = pbhs;  }
      if (pmode == 34) { brushs  = pbis;  }
      if (pmode == 35) { brushs = pbjs;  } 
      if (pmode == 36) { brushs  = pbks;  }
      if (pmode == 37) { brushs = pbls;  } 
      if (pmode == 38) { brushs  = pbms;  }
      if (pmode == 39) { brushs  = pbns;  } 
      if (pmode == 40) { brushs  = pbos;  }
      if (pmode == 41) { brushs  = pbps;  } 
      if (pmode == 42) { brushs  = pbqs;  }
      if (pmode == 43) { brushs  = pbrs;  }
      if (pmode == 44) { brushs  = pbss;  }
      if (pmode == 45) { brushs  = pbts;  } 
      if (pmode == 46) { brushs = pbus;  } 
      if (pmode == 47) { brushs  = pbvs;  }
      if (pmode == 48) { brushs = p48s;  } 
      if (pmode == 49) { brushs = p49s;  }
      if (pmode == 50) { brushs  = p50s;  } 
      if (pmode == 51) { brushs = p51s;  }
      if (pmode == 52) { brushs  = pcas;  } 
      if (pmode == 53) { brushs  = pcbs;  }
      if (pmode == 54) { brushs  = pccs;  }
      if (pmode == 55) { brushs  = pcds;  }
      if (pmode == 56) { brushs  = pces;  }
      if (pmode == 57) { brushs  = pcfs;  }
      if (pmode == 58) { brushs = pcgs;  } 
      if (pmode == 59) { brushs  = pchs;  }
      if (pmode == 60) { brushs  = pcis;  } 
      if (pmode == 61) { brushs  = pcjs;  }
      if (pmode == 62) { brushs  = pcks;  } 
      if (pmode == 63) { brushs  = pcls;  }
      if (pmode == 64) { brushs  = pcms;  }
      if (pmode == 65) { brushs  = pcns;  }
      if (pmode == 66) { brushs  = pcos;  }
      if (pmode == 67) { brushs  = pcps;  }
      if (pmode == 68) { brushs  = pcqs;  } 
      if (pmode == 69) { brushs  = pcrs;  }
      if (pmode == 70) { brushs  = pcss;  } 
      if (pmode == 71) { brushs  = pcts;  }
      if (pmode == 72) { brushs  = pcus;  } 
      if (pmode == 73) { brushs  = pcvs;  }
      if (pmode == 74) { brushs  = pcws;  }
      if (pmode == 75) { brushs  = pcxs;  }
      if (pmode == 76) { brushs  = pcys;  }
      if (pmode == 77) { brushs  = pczs;  }
      if (pmode == 78) { brushs  = pdas;  } 
      if (pmode == 79) { brushs  = pdbs;  }
      if (pmode == 80) { brushs  = pdcs;  } 
      if (pmode == 81) { brushs  = pdds;  }
      if (pmode == 82) { brushs  = pdes;  } 
      if (pmode == 83) { brushs  = pdfs;  }
      if (pmode == 84) { brushs  = pdgs;  }
      if (pmode == 85) { brushs  = pdhs;  }
      if (pmode == 86) { brushs  = pdis;  }
      if (pmode == 87) { brushs  = pdjs;  }
      if (pmode == 88) { brushs  = pdks;  }
      if (pmode == 89) { brushs  = pdls;  }

  
      if (pmode == 0) { brush = p00h; waitTwo(); }
      if (pmode == 1) { brush  = p01h;  waitTwo(); } 
      if (pmode == 2) { brush  = p02h;  waitTwo(); }
      if (pmode == 3) { brush  = padh;  waitTwo(); } 
      if (pmode == 4) { brush  = paeh;  waitTwo(); }
      if (pmode == 5) { brush  = pafh;  waitTwo(); } 
      if (pmode == 6) { brush  = pagh;  waitTwo(); }
      if (pmode == 7) { brush  = pahh;  waitTwo(); }
      if (pmode == 8) { brush  = paih;  waitTwo(); }
      if (pmode == 9) { brush  = pajh;  waitTwo(); } 
      if (pmode == 10) { brush  = pakh;  waitTwo(); }
      if (pmode == 11) { brush  = palh;  waitTwo(); } 
      if (pmode == 12) { brush = pamh; waitTwo(); }
      if (pmode == 13) { brush  = panh; waitTwo(); } 
      if (pmode == 14) { brush  = paoh; waitTwo(); }
      if (pmode == 15) { brush  = paph; waitTwo(); }
      if (pmode == 16) { brush  = paqh; waitTwo(); }
      if (pmode == 17) { brush  = parh; waitTwo(); } 
      if (pmode == 18) { brush  = pash; waitTwo(); }
      if (pmode == 19) { brush  = path; waitTwo(); } 
      if (pmode == 20) { brush  = pauh; waitTwo(); }
      if (pmode == 21) { brush = pavh; waitTwo(); } 
      if (pmode == 22) { brush  = pawh; waitTwo(); }
      if (pmode == 23) { brush  = paxh; waitTwo(); }
      if (pmode == 24) { brush  = payh; waitTwo(); }
      if (pmode == 25) { brush = pazh; waitTwo(); } 
      if (pmode == 26) { brush  = pbah; waitTwo(); }
      if (pmode == 27) { brush  = pbbh; waitTwo(); } 
      if (pmode == 28) { brush  = pbch; waitTwo(); }
      if (pmode == 29) { brush  = pbdh; waitTwo(); } 
      if (pmode == 30) { brush  = pbeh; waitTwo(); }
      if (pmode == 31) { brush  = pbfh; waitTwo(); } 
      if (pmode == 32) { brush = pbgh; waitTwo(); }
      if (pmode == 33) { brush  = pbhh; waitTwo(); }
      if (pmode == 34) { brush  = pbih; waitTwo(); }
      if (pmode == 35) { brush = pbjh; waitTwo(); } 
      if (pmode == 36) { brush  = pbkh; waitTwo(); }
      if (pmode == 37) { brush = pblh; waitTwo(); } 
      if (pmode == 38) { brush  = pbmh; waitTwo(); }
      if (pmode == 39) { brush  = pbnh; waitTwo(); } 
      if (pmode == 40) { brush  = pboh; waitTwo(); }
      if (pmode == 41) { brush  = pbph; waitTwo(); } 
      if (pmode == 42) { brush  = pbqh; waitTwo(); }
      if (pmode == 43) { brush  = pbrh; waitTwo(); }
      if (pmode == 44) { brush  = pbsh; waitTwo(); }
      if (pmode == 45) { brush  = pbth; waitTwo(); } 
      if (pmode == 46) { brush = pbuh; waitTwo(); } 
      if (pmode == 47) { brush  = pbvh; waitTwo(); }
      if (pmode == 48) { brush = p48h; waitTwo(); } 
      if (pmode == 49) { brush = p49h; waitTwo(); }
      if (pmode == 50) { brush  = p50h; waitTwo(); } 
      if (pmode == 51) { brush = p51h; waitTwo(); }
      if (pmode == 52) { brush  = pcah; waitTwo(); } 
      if (pmode == 53) { brush  = pcbh; waitTwo(); }
      if (pmode == 54) { brush  = pcch; waitTwo(); }
      if (pmode == 55) { brush  = pcdh; waitTwo(); }
      if (pmode == 56) { brush  = pceh; waitTwo(); }
      if (pmode == 57) { brush  = pcfh; waitTwo(); }
      if (pmode == 58) { brush = pcgh; waitTwo(); } 
      if (pmode == 59) { brush  = pchh; waitTwo(); }
      if (pmode == 60) { brush  = pcih; waitTwo(); } 
      if (pmode == 61) { brush  = pcjh; waitTwo(); }
      if (pmode == 62) { brush  = pckh; waitTwo(); } 
      if (pmode == 63) { brush  = pclh; waitTwo(); }
      if (pmode == 64) { brush  = pcmh; waitTwo(); }
      if (pmode == 65) { brush  = pcnh; waitTwo(); }
      if (pmode == 66) { brush  = pcoh; waitTwo(); }
      if (pmode == 67) { brush  = pcph; waitTwo(); }
      if (pmode == 68) { brush  = pcqh; waitTwo(); } 
      if (pmode == 69) { brush  = pcrh; waitTwo(); }
      if (pmode == 70) { brush  = pcsh; waitTwo(); } 
      if (pmode == 71) { brush  = pcth; waitTwo(); }
      if (pmode == 72) { brush  = pcuh; waitTwo(); } 
      if (pmode == 73) { brush  = pcvh; waitTwo(); }
      if (pmode == 74) { brush  = pcwh; waitTwo(); }
      if (pmode == 75) { brush  = pcxh; waitTwo(); }
      if (pmode == 76) { brush  = pcyh; waitTwo(); }
      if (pmode == 77) { brush  = pczh; waitTwo(); }
      if (pmode == 78) { brush  = pdah; waitTwo(); } 
      if (pmode == 79) { brush  = pdbh; waitTwo(); }
      if (pmode == 80) { brush  = pdch; waitTwo(); } 
      if (pmode == 81) { brush  = pddh; waitTwo(); }
      if (pmode == 82) { brush  = pdeh; waitTwo(); } 
      if (pmode == 83) { brush  = pdfh; waitTwo(); }
      if (pmode == 84) { brush  = pdgh; waitTwo(); }
      if (pmode == 85) { brush  = pdhh; waitTwo(); }
      if (pmode == 86) { brush  = pdih; waitTwo(); }
      if (pmode == 87) { brush  = pdjh; waitTwo(); }
      if (pmode == 88) { brush  = pdkh; waitTwo(); }
      if (pmode == 89) { brush  = pdlh; waitTwo(); }
      Serial.print("COPIED Pixel:"); Serial.println(pmode); Serial.print ("  Hue:"); Serial.println (brush); Serial.print ("  Saturation:"); Serial.println (brushs); Serial.print ("  Value:"); Serial.println (brushv); Serial.println ();
}

//brush Paste
if(!(btns & (BTN_B | BTN_Y))){

//if (pmode == 48) { p48s = brushs;} /////////////
      if (pmode == 0) { p00v = brushv;} 
      if (pmode == 1) { p01v = brushv;} 
      if (pmode == 2) { p02v = brushv;} 
      if (pmode == 3) { padv = brushv;} 
      if (pmode == 4) { paev = brushv;} 
      if (pmode == 5) { pafv = brushv;} 
      if (pmode == 6) { pagv = brushv;} 
      if (pmode == 7) { pahv = brushv;} 
      if (pmode == 8) { paiv = brushv;} 
      if (pmode == 9) { pajv = brushv;} 
      if (pmode == 10) { pakv = brushv;} 
      if (pmode == 11) { palv = brushv;} 
      if (pmode == 12) { pamv = brushv;} 
      if (pmode == 13) { panv = brushv;}  
      if (pmode == 14) { paov = brushv;} 
      if (pmode == 15) { papv = brushv;} 
      if (pmode == 16) { paqv = brushv;} 
      if (pmode == 17) { parv = brushv;} 
      if (pmode == 18) { pasv = brushv;} 
      if (pmode == 19) { patv = brushv;} 
      if (pmode == 20) { pauv = brushv;} 
      if (pmode == 21) { pavv = brushv;} 
      if (pmode == 22) { pawv = brushv;} 
      if (pmode == 23) { paxv = brushv;} 
      if (pmode == 24) { payv = brushv;} 
      if (pmode == 25) { pazv = brushv;} 
      if (pmode == 26) { pbav = brushv;} 
      if (pmode == 27) { pbbv = brushv;} 
      if (pmode == 28) { pbcv = brushv;} 
      if (pmode == 29) { pbdv = brushv;} 
      if (pmode == 30) { pbev = brushv;} 
      if (pmode == 31) { pbfv = brushv;} 
      if (pmode == 32) { pbgv = brushv;} 
      if (pmode == 33) { pbhv = brushv;} 
      if (pmode == 34) { pbiv = brushv;} 
      if (pmode == 35) { pbjv = brushv;} 
      if (pmode == 36) { pbkv = brushv;} 
      if (pmode == 37) { pblv = brushv;} 
      if (pmode == 38) { pbmv = brushv;} 
      if (pmode == 39) { pbnv = brushv;}  
      if (pmode == 40) { pbov = brushv;} 
      if (pmode == 41) { pbpv = brushv;}  
      if (pmode == 42) { pbqv = brushv;} 
      if (pmode == 43) { pbrv = brushv;} 
      if (pmode == 44) { pbsv = brushv;} 
      if (pmode == 45) { pbtv = brushv;} 
      if (pmode == 46) { pbuv = brushv;} 
      if (pmode == 47) { pbvv = brushv;}
      if (pmode == 48) { p48v = brushv;} 
      if (pmode == 49) { p49v = brushv;}
      if (pmode == 50) { p50v = brushv;} 
      if (pmode == 51) { p51v = brushv;} 
      if (pmode == 52) { pcav = brushv;} 
      if (pmode == 53) { pcbv = brushv;} 
      if (pmode == 54) { pccv = brushv;} 
      if (pmode == 55) { pcdv = brushv;} 
      if (pmode == 56) { pcev = brushv;} 
      if (pmode == 57) { pcfv = brushv;} 
      if (pmode == 58) { pcgv = brushv;}  
      if (pmode == 59) { pchv = brushv;} 
      if (pmode == 60) { pciv = brushv;}  
      if (pmode == 61) { pcjv = brushv;} 
      if (pmode == 62) { pckv = brushv;} 
      if (pmode == 63) { pclv = brushv;} 
      if (pmode == 64) { pcmv = brushv;} 
      if (pmode == 65) { pcnv = brushv;} 
      if (pmode == 66) { pcov = brushv;} 
      if (pmode == 67) { pcpv = brushv;} 
      if (pmode == 68) { pcqv = brushv;} 
      if (pmode == 69) { pcrv = brushv;} 
      if (pmode == 70) { pcsv = brushv;}  
      if (pmode == 71) { pctv = brushv;} 
      if (pmode == 72) { pcuv = brushv;}  
      if (pmode == 73) { pcvv = brushv;} 
      if (pmode == 74) { pcwv = brushv;} 
      if (pmode == 75) { pcxv = brushv;} 
      if (pmode == 76) { pcyv = brushv;} 
      if (pmode == 77) { pczv = brushv;} 
      if (pmode == 78) { pdav = brushv;}  
      if (pmode == 79) { pdbv = brushv;} 
      if (pmode == 80) { pdcv = brushv;}  
      if (pmode == 81) { pddv = brushv;} 
      if (pmode == 82) { pdev = brushv;}  
      if (pmode == 83) { pdfv = brushv;} 
      if (pmode == 84) { pdgv = brushv;} 
      if (pmode == 85) { pdhv = brushv;} 
      if (pmode == 86) { pdiv = brushv;} 
      if (pmode == 87) { pdjv = brushv;} 
      if (pmode == 88) { pdkv = brushv;} 
      if (pmode == 89) { pdlv = brushv;} 


      if (pmode == 0) { p00s = brushs;} 
      if (pmode == 1) { p01s = brushs;} 
      if (pmode == 2) { p02s = brushs;} 
      if (pmode == 3) { pads = brushs;} 
      if (pmode == 4) { paes = brushs;} 
      if (pmode == 5) { pafs = brushs;} 
      if (pmode == 6) { pags = brushs;} 
      if (pmode == 7) { pahs = brushs;} 
      if (pmode == 8) { pais = brushs;} 
      if (pmode == 9) { pajs = brushs;} 
      if (pmode == 10) { paks = brushs;} 
      if (pmode == 11) { pals = brushs;} 
      if (pmode == 12) { pams = brushs;} 
      if (pmode == 13) { pans = brushs;}  
      if (pmode == 14) { paos = brushs;} 
      if (pmode == 15) { paps = brushs;} 
      if (pmode == 16) { paqs = brushs;} 
      if (pmode == 17) { pars = brushs;} 
      if (pmode == 18) { pass = brushs;} 
      if (pmode == 19) { pats = brushs;} 
      if (pmode == 20) { paus = brushs;} 
      if (pmode == 21) { pavs = brushs;} 
      if (pmode == 22) { paws = brushs;} 
      if (pmode == 23) { paxs = brushs;} 
      if (pmode == 24) { pays = brushs;} 
      if (pmode == 25) { pazs = brushs;} 
      if (pmode == 26) { pbas = brushs;} 
      if (pmode == 27) { pbbs = brushs;} 
      if (pmode == 28) { pbcs = brushs;} 
      if (pmode == 29) { pbds = brushs;} 
      if (pmode == 30) { pbes = brushs;} 
      if (pmode == 31) { pbfs = brushs;} 
      if (pmode == 32) { pbgs = brushs;} 
      if (pmode == 33) { pbhs = brushs;} 
      if (pmode == 34) { pbis = brushs;} 
      if (pmode == 35) { pbjs = brushs;} 
      if (pmode == 36) { pbks = brushs;} 
      if (pmode == 37) { pbls = brushs;} 
      if (pmode == 38) { pbms = brushs;} 
      if (pmode == 39) { pbns = brushs;}  
      if (pmode == 40) { pbos = brushs;} 
      if (pmode == 41) { pbps = brushs;}  
      if (pmode == 42) { pbqs = brushs;} 
      if (pmode == 43) { pbrs = brushs;} 
      if (pmode == 44) { pbss = brushs;} 
      if (pmode == 45) { pbts = brushs;} 
      if (pmode == 46) { pbus = brushs;} 
      if (pmode == 47) { pbvs = brushs;}
      if (pmode == 48) { p48s = brushs;} 
      if (pmode == 49) { p49s = brushs;}
      if (pmode == 50) { p50s = brushs;} 
      if (pmode == 51) { p51s = brushs;} 
      if (pmode == 52) { pcas = brushs;} 
      if (pmode == 53) { pcbs = brushs;} 
      if (pmode == 54) { pccs = brushs;} 
      if (pmode == 55) { pcds = brushs;} 
      if (pmode == 56) { pces = brushs;} 
      if (pmode == 57) { pcfs = brushs;} 
      if (pmode == 58) { pcgs = brushs;}  
      if (pmode == 59) { pchs = brushs;} 
      if (pmode == 60) { pcis = brushs;}  
      if (pmode == 61) { pcjs = brushs;} 
      if (pmode == 62) { pcks = brushs;} 
      if (pmode == 63) { pcls = brushs;} 
      if (pmode == 64) { pcms = brushs;} 
      if (pmode == 65) { pcns = brushs;} 
      if (pmode == 66) { pcos = brushs;} 
      if (pmode == 67) { pcps = brushs;} 
      if (pmode == 68) { pcqs = brushs;} 
      if (pmode == 69) { pcrs = brushs;} 
      if (pmode == 70) { pcss = brushs;}  
      if (pmode == 71) { pcts = brushs;} 
      if (pmode == 72) { pcus = brushs;}  
      if (pmode == 73) { pcvs = brushs;} 
      if (pmode == 74) { pcws = brushs;} 
      if (pmode == 75) { pcxs = brushs;} 
      if (pmode == 76) { pcys = brushs;} 
      if (pmode == 77) { pczs = brushs;} 
      if (pmode == 78) { pdas = brushs;}  
      if (pmode == 79) { pdbs = brushs;} 
      if (pmode == 80) { pdcs = brushs;}  
      if (pmode == 81) { pdds = brushs;} 
      if (pmode == 82) { pdes = brushs;}  
      if (pmode == 83) { pdfs = brushs;} 
      if (pmode == 84) { pdgs = brushs;} 
      if (pmode == 85) { pdhs = brushs;} 
      if (pmode == 86) { pdis = brushs;} 
      if (pmode == 87) { pdjs = brushs;} 
      if (pmode == 88) { pdks = brushs;} 
      if (pmode == 89) { pdls = brushs;} 

  
     if (pmode == 0) { p00h = brush;} 
      if (pmode == 1) { p01h = brush;} 
      if (pmode == 2) { p02h = brush;} 
      if (pmode == 3) { padh = brush;} 
      if (pmode == 4) { paeh = brush;} 
      if (pmode == 5) { pafh = brush;} 
      if (pmode == 6) { pagh = brush;} 
      if (pmode == 7) { pahh = brush;} 
      if (pmode == 8) { paih = brush;} 
      if (pmode == 9) { pajh = brush;} 
      if (pmode == 10) { pakh = brush;} 
      if (pmode == 11) { palh = brush;} 
      if (pmode == 12) { pamh = brush;} 
      if (pmode == 13) { panh = brush;}  
      if (pmode == 14) { paoh = brush;} 
      if (pmode == 15) { paph = brush;} 
      if (pmode == 16) { paqh = brush;} 
      if (pmode == 17) { parh = brush;} 
      if (pmode == 18) { pash = brush;} 
      if (pmode == 19) { path = brush;} 
      if (pmode == 20) { pauh = brush;} 
      if (pmode == 21) { pavh = brush;} 
      if (pmode == 22) { pawh = brush;} 
      if (pmode == 23) { paxh = brush;} 
      if (pmode == 24) { payh = brush;} 
      if (pmode == 25) { pazh = brush;} 
      if (pmode == 26) { pbah = brush;} 
      if (pmode == 27) { pbbh = brush;} 
      if (pmode == 28) { pbch = brush;} 
      if (pmode == 29) { pbdh = brush;} 
      if (pmode == 30) { pbeh = brush;} 
      if (pmode == 31) { pbfh = brush;} 
      if (pmode == 32) { pbgh = brush;} 
      if (pmode == 33) { pbhh = brush;} 
      if (pmode == 34) { pbih = brush;} 
      if (pmode == 35) { pbjh = brush;} 
      if (pmode == 36) { pbkh = brush;} 
      if (pmode == 37) { pblh = brush;} 
      if (pmode == 38) { pbmh = brush;} 
      if (pmode == 39) { pbnh = brush;}  
      if (pmode == 40) { pboh = brush;} 
      if (pmode == 41) { pbph = brush;}  
      if (pmode == 42) { pbqh = brush;} 
      if (pmode == 43) { pbrh = brush;} 
      if (pmode == 44) { pbsh = brush;} 
      if (pmode == 45) { pbth = brush;} 
      if (pmode == 46) { pbuh = brush;} 
      if (pmode == 47) { pbvh = brush;}
      if (pmode == 48) { p48h = brush;} 
      if (pmode == 49) { p49h = brush;}
      if (pmode == 50) { p50h = brush;} 
      if (pmode == 51) { p51h = brush;} 
      if (pmode == 52) { pcah = brush;} 
      if (pmode == 53) { pcbh = brush;} 
      if (pmode == 54) { pcch = brush;} 
      if (pmode == 55) { pcdh = brush;} 
      if (pmode == 56) { pceh = brush;} 
      if (pmode == 57) { pcfh = brush;} 
      if (pmode == 58) { pcgh = brush;}  
      if (pmode == 59) { pchh = brush;} 
      if (pmode == 60) { pcih = brush;}  
      if (pmode == 61) { pcjh = brush;} 
      if (pmode == 62) { pckh = brush;} 
      if (pmode == 63) { pclh = brush;} 
      if (pmode == 64) { pcmh = brush;} 
      if (pmode == 65) { pcnh = brush;} 
      if (pmode == 66) { pcoh = brush;} 
      if (pmode == 67) { pcph = brush;} 
      if (pmode == 68) { pcqh = brush;} 
      if (pmode == 69) { pcrh = brush;} 
      if (pmode == 70) { pcsh = brush;}  
      if (pmode == 71) { pcth = brush;} 
      if (pmode == 72) { pcuh = brush;}  
      if (pmode == 73) { pcvh = brush;} 
      if (pmode == 74) { pcwh = brush;} 
      if (pmode == 75) { pcxh = brush;} 
      if (pmode == 76) { pcyh = brush;} 
      if (pmode == 77) { pczh = brush;} 
      if (pmode == 78) { pdah = brush;}  
      if (pmode == 79) { pdbh = brush;} 
      if (pmode == 80) { pdch = brush;}  
      if (pmode == 81) { pddh = brush;} 
      if (pmode == 82) { pdeh = brush;}  
      if (pmode == 83) { pdfh = brush;} 
      if (pmode == 84) { pdgh = brush;} 
      if (pmode == 85) { pdhh = brush;} 
      if (pmode == 86) { pdih = brush;} 
      if (pmode == 87) { pdjh = brush;} 
      if (pmode == 88) { pdkh = brush;} 
      if (pmode == 89) { pdlh = brush;} 
      Serial.print("PASTED To Pixel:"); Serial.println(pmode); Serial.print ("  Hue:"); Serial.println (brush); Serial.print ("  Saturation:"); Serial.println (brushs); Serial.print ("  Value:"); Serial.println (brushv); Serial.println ();
}


//Think red is really boring and you're sick of looking at it? you can now change the default hue from red to whatever. but be careful, it will change all of the pixels already lit up, so unless you want all your work to be
//that nice cyan you just found, don't use this except at the start. PS I have no undo function yet.
if(!(btns & (BTN_Y | BTN_A))){ //set defauly hue to current pixel colour
           
      if (pmode == 0) { defaultHue = p00h; waitTwo(); }
      if (pmode == 1) { defaultHue  = p01h;  waitTwo(); } 
      if (pmode == 2) { defaultHue  = p02h;  waitTwo(); }
      if (pmode == 3) { defaultHue  = padh;  waitTwo(); } 
      if (pmode == 4) { defaultHue  = paeh;  waitTwo(); }
      if (pmode == 5) { defaultHue  = pafh;  waitTwo(); } 
      if (pmode == 6) { defaultHue  = pagh;  waitTwo(); }
      if (pmode == 7) { defaultHue  = pahh;  waitTwo(); }
      if (pmode == 8) { defaultHue  = paih;  waitTwo(); }
      if (pmode == 9) { defaultHue  = pajh;  waitTwo(); } 
      if (pmode == 10) { defaultHue  = pakh;  waitTwo(); }
      if (pmode == 11) { defaultHue  = palh;  waitTwo(); } 
      if (pmode == 12) { defaultHue = pamh; waitTwo(); }
      if (pmode == 13) { defaultHue  = panh; waitTwo(); } 
      if (pmode == 14) { defaultHue  = paoh; waitTwo(); }
      if (pmode == 15) { defaultHue  = paph; waitTwo(); }
      if (pmode == 16) { defaultHue  = paqh; waitTwo(); }
      if (pmode == 17) { defaultHue  = parh; waitTwo(); } 
      if (pmode == 18) { defaultHue  = pash; waitTwo(); }
      if (pmode == 19) { defaultHue  = path; waitTwo(); } 
      if (pmode == 20) { defaultHue  = pauh; waitTwo(); }
      if (pmode == 21) { defaultHue = pavh; waitTwo(); } 
      if (pmode == 22) { defaultHue  = pawh; waitTwo(); }
      if (pmode == 23) { defaultHue  = paxh; waitTwo(); }
      if (pmode == 24) { defaultHue  = payh; waitTwo(); }
      if (pmode == 25) { defaultHue = pazh; waitTwo(); } 
      if (pmode == 26) { defaultHue  = pbah; waitTwo(); }
      if (pmode == 27) { defaultHue  = pbbh; waitTwo(); } 
      if (pmode == 28) { defaultHue  = pbch; waitTwo(); }
      if (pmode == 29) { defaultHue  = pbdh; waitTwo(); } 
      if (pmode == 30) { defaultHue  = pbeh; waitTwo(); }
      if (pmode == 31) { defaultHue  = pbfh; waitTwo(); } 
      if (pmode == 32) { defaultHue = pbgh; waitTwo(); }
      if (pmode == 33) { defaultHue  = pbhh; waitTwo(); }
      if (pmode == 34) { defaultHue  = pbih; waitTwo(); }
      if (pmode == 35) { defaultHue = pbjh; waitTwo(); } 
      if (pmode == 36) { defaultHue  = pbkh; waitTwo(); }
      if (pmode == 37) { defaultHue = pblh; waitTwo(); } 
      if (pmode == 38) { defaultHue  = pbmh; waitTwo(); }
      if (pmode == 39) { defaultHue  = pbnh; waitTwo(); } 
      if (pmode == 40) { defaultHue  = pboh; waitTwo(); }
      if (pmode == 41) { defaultHue  = pbph; waitTwo(); } 
      if (pmode == 42) { defaultHue  = pbqh; waitTwo(); }
      if (pmode == 43) { defaultHue  = pbrh; waitTwo(); }
      if (pmode == 44) { defaultHue  = pbsh; waitTwo(); }
      if (pmode == 45) { defaultHue  = pbth; waitTwo(); } 
      if (pmode == 46) { defaultHue = pbuh; waitTwo(); } 
      if (pmode == 47) { defaultHue  = pbvh; waitTwo(); }
      if (pmode == 48) { defaultHue = p48h; waitTwo(); } 
      if (pmode == 49) { defaultHue = p49h; waitTwo(); }
      if (pmode == 50) { defaultHue  = p50h; waitTwo(); } 
      if (pmode == 51) { defaultHue = p51h; waitTwo(); }
      if (pmode == 52) { defaultHue  = pcah; waitTwo(); } 
      if (pmode == 53) { defaultHue  = pcbh; waitTwo(); }
      if (pmode == 54) { defaultHue  = pcch; waitTwo(); }
      if (pmode == 55) { defaultHue  = pcdh; waitTwo(); }
      if (pmode == 56) { defaultHue  = pceh; waitTwo(); }
      if (pmode == 57) { defaultHue  = pcfh; waitTwo(); }
      if (pmode == 58) { defaultHue = pcgh; waitTwo(); } 
      if (pmode == 59) { defaultHue  = pchh; waitTwo(); }
      if (pmode == 60) { defaultHue  = pcih; waitTwo(); } 
      if (pmode == 61) { defaultHue  = pcjh; waitTwo(); }
      if (pmode == 62) { defaultHue  = pckh; waitTwo(); } 
      if (pmode == 63) { defaultHue  = pclh; waitTwo(); }
      if (pmode == 64) { defaultHue  = pcmh; waitTwo(); }
      if (pmode == 65) { defaultHue  = pcnh; waitTwo(); }
      if (pmode == 66) { defaultHue  = pcoh; waitTwo(); }
      if (pmode == 67) { defaultHue  = pcph; waitTwo(); }
      if (pmode == 68) { defaultHue  = pcqh; waitTwo(); } 
      if (pmode == 69) { defaultHue  = pcrh; waitTwo(); }
      if (pmode == 70) { defaultHue  = pcsh; waitTwo(); } 
      if (pmode == 71) { defaultHue  = pcth; waitTwo(); }
      if (pmode == 72) { defaultHue  = pcuh; waitTwo(); } 
      if (pmode == 73) { defaultHue  = pcvh; waitTwo(); }
      if (pmode == 74) { defaultHue  = pcwh; waitTwo(); }
      if (pmode == 75) { defaultHue  = pcxh; waitTwo(); }
      if (pmode == 76) { defaultHue  = pcyh; waitTwo(); }
      if (pmode == 77) { defaultHue  = pczh; waitTwo(); }
      if (pmode == 78) { defaultHue  = pdah; waitTwo(); } 
      if (pmode == 79) { defaultHue  = pdbh; waitTwo(); }
      if (pmode == 80) { defaultHue  = pdch; waitTwo(); } 
      if (pmode == 81) { defaultHue  = pddh; waitTwo(); }
      if (pmode == 82) { defaultHue  = pdeh; waitTwo(); } 
      if (pmode == 83) { defaultHue  = pdfh; waitTwo(); }
      if (pmode == 84) { defaultHue  = pdgh; waitTwo(); }
      if (pmode == 85) { defaultHue  = pdhh; waitTwo(); }
      if (pmode == 86) { defaultHue  = pdih; waitTwo(); }
      if (pmode == 87) { defaultHue  = pdjh; waitTwo(); }
      if (pmode == 88) { defaultHue  = pdkh; waitTwo(); }
      if (pmode == 89) { defaultHue  = pdlh; waitTwo(); }

      
      Serial.print("All Pixels This Hue:");  Serial.println (defaultHue); Serial.println ();

 p00h = defaultHue; //0
 p01h = defaultHue; //1
 p02h = defaultHue; //2
 padh = defaultHue; //3
 paeh = defaultHue; //4
 pafh = defaultHue; //5
 pagh = defaultHue; //6
 pahh = defaultHue; //7
 paih = defaultHue; //8
 pajh = defaultHue; //9
 pakh = defaultHue; //etc
 palh = defaultHue; 
 pamh = defaultHue;
 panh = defaultHue; 
 paoh = defaultHue;
 paph = defaultHue;
 paqh = defaultHue;
 parh = defaultHue; 
 pash = defaultHue;
 path = defaultHue; 
 pauh = defaultHue;
 pavh = defaultHue; 
 pawh = defaultHue;
 paxh = defaultHue;
 payh = defaultHue;
 pazh = defaultHue; 
 pbah = defaultHue;
 pbbh = defaultHue; 
 pbch = defaultHue;
 pbdh = defaultHue; 
 pbeh = defaultHue;
 pbfh = defaultHue; 
 pbgh = defaultHue;
 pbhh = defaultHue;
 pbih = defaultHue;
 pbjh = defaultHue; 
 pbkh = defaultHue;
 pblh = defaultHue; 
 pbmh = defaultHue;
 pbnh = defaultHue; 
 pboh = defaultHue;
 pbph = defaultHue;
 pbqh = defaultHue;
 pbrh = defaultHue;
 pbsh = defaultHue;
 pbth = defaultHue; 
 pbuh = defaultHue;
 pbvh = defaultHue;
 p48h = defaultHue;
 p49h = defaultHue;
 p50h = defaultHue;
 p51h = defaultHue;
 pcah = defaultHue;
 pcbh = defaultHue;
 pcch = defaultHue;
 pcdh = defaultHue;
 pceh = defaultHue;
 pcfh = defaultHue;
 pcgh = defaultHue;
 pchh = defaultHue;
 pcih = defaultHue;
 pcjh = defaultHue;
 pckh = defaultHue; 
 pclh = defaultHue;
 pcmh = defaultHue;
 pcnh = defaultHue;
 pcoh = defaultHue;
 pcph = defaultHue;
 pcqh = defaultHue; 
 pcrh = defaultHue;
 pcsh = defaultHue; 
 pcth = defaultHue;
 pcuh = defaultHue; 
 pcvh = defaultHue;
 pcwh = defaultHue;
 pcxh = defaultHue;
 pcyh = defaultHue;
 pczh = defaultHue;
 pdah = defaultHue;
 pdbh = defaultHue;
 pdch = defaultHue;
 pddh = defaultHue;
 pdeh = defaultHue;
 pdfh = defaultHue;
 pdgh = defaultHue;
 pdhh = defaultHue;
 pdih = defaultHue;
 pdjh = defaultHue;
 pdkh = defaultHue;
 pdlh = defaultHue;
      
} 


if(!(btns & (BTN_X | BTN_Y))){ //in case your picture disappears cause you've switched modes. this brings it back.
 
showPicture ();
} }
}//checkPaintSNES ends

