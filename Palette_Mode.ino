//has almost identical functionality as the paint mode, except you cant change the colours. only highlight, copy and return to paint mode and paste.
//select toggles you between paint and palette modes. 
//pallet mode only has 4 half arsed colours right now but the thing works.
//More Naming Conventions: cause most funcitons and integers are identical to paint mode, it was easier to just stick an extra p in front of everything.
void paletteInput (){
 if (mode > 99) {
  btns = Spad.getButtons(false);
  if(!(btns & BTN_SELECT)) {mode = 99;}
  if(!(btns & (BTN_X | BTN_Y))){showPalette ();}
  if(!(btns & (BTN_L | BTN_R))) {  ppmode = 48; waitThree();} //centre cursor

if(!(btns & BTN_UP)) { //up

   if (ppmode >= 0 & ppmode <= 8)  { ppmode = ppmode + 1; if (ppmode > 8) {ppmode = 0;} waitThree();}  
      if (ppmode >= 9 & ppmode <= 17) { ppmode = ppmode - 1; if (ppmode < 9) {ppmode = 17;} waitThree();} 
      if (ppmode >= 18 & ppmode <= 26) { ppmode = ppmode + 1; if (ppmode > 26) {ppmode = 18;} waitThree();}  
      if (ppmode >= 27 & ppmode <= 35) { ppmode = ppmode - 1; if (ppmode < 27) {ppmode = 35;} waitThree();} 
      if (ppmode >= 36 & ppmode <= 44) { ppmode = ppmode + 1; if (ppmode > 44) {ppmode = 36;} waitThree();}  
      if (ppmode >= 45 & ppmode <= 53) { ppmode = ppmode - 1; if (ppmode < 45) {ppmode = 53;} waitThree();} 
      if (ppmode >= 54 & ppmode <= 62) { ppmode = ppmode + 1; if (ppmode > 62) {ppmode = 54;} waitThree();}  
      if (ppmode >= 63 & ppmode <= 71) { ppmode = ppmode - 1; if (ppmode < 63) {ppmode = 71;} waitThree();} 
      if (ppmode >= 72 & ppmode <= 80) { ppmode = ppmode + 1; if (ppmode > 80) {ppmode = 72;} waitThree();}  
      if (ppmode >= 81 & ppmode <= 89) { ppmode = ppmode - 1; if (ppmode < 81) {ppmode = 89;} waitThree();} 
}
    


if(!(btns & BTN_DOWN)) { //down

if (ppmode >= 0 & ppmode <= 8) { ppmode = ppmode - 1; if (ppmode < 0) {ppmode = 8;} waitThree();}  
      if (ppmode >= 9 & ppmode <= 17) { ppmode = ppmode + 1; if (ppmode > 17) {ppmode = 9;} waitThree();} 
      if (ppmode >= 18 & ppmode <= 26) { ppmode = ppmode - 1; if (ppmode < 18) {ppmode = 26;} waitThree();}  
      if (ppmode >= 27 & ppmode <= 35) { ppmode = ppmode + 1; if (ppmode > 35) {ppmode = 27;} waitThree();} 
      if (ppmode >= 36 & ppmode <= 44) { ppmode = ppmode - 1; if (ppmode < 36) {ppmode = 44;} waitThree();}  
      if (ppmode >= 45 & ppmode <= 53) { ppmode = ppmode + 1; if (ppmode > 53) {ppmode = 45;} waitThree();} 
      if (ppmode >= 54 & ppmode <= 62) { ppmode = ppmode - 1; if (ppmode < 54) {ppmode = 62;} waitThree();}  
      if (ppmode >= 63 & ppmode <= 71) { ppmode = ppmode + 1; if (ppmode > 71) {ppmode = 63;} waitThree();} 
      if (ppmode >= 72 & ppmode <= 80) { ppmode = ppmode - 1; if (ppmode < 72) {ppmode = 80;} waitThree();}  
      if (ppmode >= 81 & ppmode <= 89) { ppmode = ppmode + 1; if (ppmode > 89) {ppmode = 81;} waitThree();} 
}  


if(!(btns & BTN_LEFT)) { //left
/*
  
            if (ppmode == 81) {ppmode = 8; } 
            if (ppmode == 82) {ppmode = 7; } 
            if (ppmode == 83) {ppmode = 6; } 
            if (ppmode == 84) {ppmode = 5; } 
            if (ppmode == 85) {ppmode = 4; } 
            if (ppmode == 86) {ppmode = 3; } 
            if (ppmode == 87) {ppmode = 2; } 
            if (ppmode == 88) {ppmode = 1; } 
            if (ppmode == 89) {ppmode = 0; }
         
        */
            if (ppmode == 72) {ppmode = ppmode +17; waitThree();} 
            if (ppmode == 73) {ppmode = ppmode +15; waitThree();} 
            if (ppmode == 74) {ppmode = ppmode +13; waitThree();} 
            if (ppmode == 75) {ppmode = ppmode +11; waitThree();} 
            if (ppmode == 76) {ppmode = ppmode + 9; waitThree();} 
            if (ppmode == 77) {ppmode = ppmode + 7; waitThree();} 
            if (ppmode == 78) {ppmode = ppmode + 5; waitThree();} 
            if (ppmode == 79) {ppmode = ppmode + 3; waitThree();} 
            if (ppmode == 80) {ppmode = ppmode + 1; waitThree();} 
            
            if (ppmode == 63) {ppmode = ppmode +17; waitThree();} 
            if (ppmode == 64) {ppmode = ppmode +15; waitThree();} 
            if (ppmode == 65) {ppmode = ppmode +13; waitThree();} 
            if (ppmode == 66) {ppmode = ppmode +11; waitThree();} 
            if (ppmode == 67) {ppmode = ppmode + 9; waitThree();} 
            if (ppmode == 68) {ppmode = ppmode + 7; waitThree();} 
            if (ppmode == 69) {ppmode = ppmode + 5; waitThree();} 
            if (ppmode == 70) {ppmode = ppmode + 3; waitThree();} 
            if (ppmode == 71) {ppmode = ppmode + 1; waitThree();} 

            if (ppmode == 54) {ppmode = ppmode +17; waitThree();} 
            if (ppmode == 55) {ppmode = ppmode +15; waitThree();} 
            if (ppmode == 56) {ppmode = ppmode +13; waitThree();} 
            if (ppmode == 57) {ppmode = ppmode +11; waitThree();} 
            if (ppmode == 58) {ppmode = ppmode + 9; waitThree();} 
            if (ppmode == 59) {ppmode = ppmode + 7; waitThree();} 
            if (ppmode == 60) {ppmode = ppmode + 5; waitThree();} 
            if (ppmode == 61) {ppmode = ppmode + 3; waitThree();} 
            if (ppmode == 62) {ppmode = ppmode + 1; waitThree();} 
            
            if (ppmode == 45) {ppmode = ppmode +17; waitThree();} 
            if (ppmode == 46) {ppmode = ppmode +15; waitThree();} 
            if (ppmode == 47) {ppmode = ppmode +13; waitThree();} 
            if (ppmode == 48) {ppmode = ppmode +11; waitThree();} 
            if (ppmode == 49) {ppmode = ppmode + 9; waitThree();} 
            if (ppmode == 50) {ppmode = ppmode + 7; waitThree();} 
            if (ppmode == 51) {ppmode = ppmode + 5; waitThree();} 
            if (ppmode == 52) {ppmode = ppmode + 3; waitThree();} 
            if (ppmode == 53) {ppmode = ppmode + 1; waitThree();} 

            if (ppmode == 36) {ppmode = ppmode +17; waitThree();} 
            if (ppmode == 37) {ppmode = ppmode +15; waitThree();} 
            if (ppmode == 38) {ppmode = ppmode +13; waitThree();} 
            if (ppmode == 39) {ppmode = ppmode +11; waitThree();} 
            if (ppmode == 40) {ppmode = ppmode + 9; waitThree();} 
            if (ppmode == 41) {ppmode = ppmode + 7; waitThree();} 
            if (ppmode == 42) {ppmode = ppmode + 5; waitThree();} 
            if (ppmode == 43) {ppmode = ppmode + 3; waitThree();} 
            if (ppmode == 44) {ppmode = ppmode + 1; waitThree();} 

            if (ppmode == 27) {ppmode = ppmode +17; waitThree();} 
            if (ppmode == 28) {ppmode = ppmode +15; waitThree();} 
            if (ppmode == 29) {ppmode = ppmode +13; waitThree();} 
            if (ppmode == 30) {ppmode = ppmode +11; waitThree();} 
            if (ppmode == 31) {ppmode = ppmode + 9; waitThree();} 
            if (ppmode == 32) {ppmode = ppmode + 7; waitThree();} 
            if (ppmode == 33) {ppmode = ppmode + 5; waitThree();} 
            if (ppmode == 34) {ppmode = ppmode + 3; waitThree();} 
            if (ppmode == 35) {ppmode = ppmode + 1; waitThree();}

            if (ppmode == 18) {ppmode = ppmode +17; waitThree();} 
            if (ppmode == 19) {ppmode = ppmode +15; waitThree();} 
            if (ppmode == 20) {ppmode = ppmode +13; waitThree();} 
            if (ppmode == 21) {ppmode = ppmode +11; waitThree();} 
            if (ppmode == 22) {ppmode = ppmode + 9; waitThree();} 
            if (ppmode == 23) {ppmode = ppmode + 7; waitThree();} 
            if (ppmode == 24) {ppmode = ppmode + 5; waitThree();} 
            if (ppmode == 25) {ppmode = ppmode + 3; waitThree();} 
            if (ppmode == 26) {ppmode = ppmode + 1; waitThree();}

            if (ppmode == 9) {ppmode = ppmode +17; waitThree();} 
            if (ppmode == 10) {ppmode = ppmode +15; waitThree();} 
            if (ppmode == 11) {ppmode = ppmode +13; waitThree();} 
            if (ppmode == 12) {ppmode = ppmode +11; waitThree();} 
            if (ppmode == 13) {ppmode = ppmode + 9; waitThree();} 
            if (ppmode == 14) {ppmode = ppmode + 7; waitThree();} 
            if (ppmode == 15) {ppmode = ppmode + 5; waitThree();} 
            if (ppmode == 16) {ppmode = ppmode + 3; waitThree();} 
            if (ppmode == 17) {ppmode = ppmode + 1; waitThree();}       
            
            if (ppmode == 0) {ppmode = ppmode +17; waitThree();} 
            if (ppmode == 1) {ppmode = ppmode +15; waitThree();} 
            if (ppmode == 2) {ppmode = ppmode +13; waitThree();} 
            if (ppmode == 3) {ppmode = ppmode +11; waitThree();} 
            if (ppmode == 4) {ppmode = ppmode + 9; waitThree();} 
            if (ppmode == 5) {ppmode = ppmode + 7; waitThree();} 
            if (ppmode == 6) {ppmode = ppmode + 5; waitThree();} 
            if (ppmode == 7) {ppmode = ppmode + 3; waitThree();} 
            if (ppmode == 8) {ppmode = ppmode + 1; waitThree();} 

}
                

if(!(btns & BTN_RIGHT)) { //Right
/*
            if (ppmode == 0) {ppmode = 89; } 
            if (ppmode == 1) {ppmode = 88; } 
            if (ppmode == 2) {ppmode = 87; } 
            if (ppmode == 3) {ppmode = 86; } 
            if (ppmode == 4) {ppmode = 85; } 
            if (ppmode == 5) {ppmode = 84; } 
            if (ppmode == 6) {ppmode = 83; } 
            if (ppmode == 7) {ppmode = 82; } 
            if (ppmode == 8) {ppmode = 81; } 
*/

            if (ppmode == 9) {ppmode = ppmode -1; waitThree();} 
            if (ppmode == 10) {ppmode = ppmode -3; waitThree();} 
            if (ppmode == 11) {ppmode = ppmode -5; waitThree();} 
            if (ppmode == 12) {ppmode = ppmode -7; waitThree();} 
            if (ppmode == 13) {ppmode = ppmode -9; waitThree();} 
            if (ppmode == 14) {ppmode = ppmode -11; waitThree();} 
            if (ppmode == 15) {ppmode = ppmode -13; waitThree();} 
            if (ppmode == 16) {ppmode = ppmode -15; waitThree();} 
            if (ppmode == 17) {ppmode = ppmode -17; waitThree();} 

            if (ppmode == 18) {ppmode = ppmode -1; waitThree();} 
            if (ppmode == 19) {ppmode = ppmode -3; waitThree();} 
            if (ppmode == 20) {ppmode = ppmode -5; waitThree();} 
            if (ppmode == 21) {ppmode = ppmode -7; waitThree();} 
            if (ppmode == 22) {ppmode = ppmode -9; waitThree();}  
            if (ppmode == 23) {ppmode = ppmode -11; waitThree();} 
            if (ppmode == 24) {ppmode = ppmode -13; waitThree();} 
            if (ppmode == 25) {ppmode = ppmode -15; waitThree();} 
            if (ppmode == 26) {ppmode = ppmode -17; waitThree();} 
          
            if (ppmode == 27) {ppmode = ppmode -1; waitThree();} 
            if (ppmode == 28) {ppmode = ppmode -3; waitThree();} 
            if (ppmode == 29) {ppmode = ppmode -5; waitThree();} 
            if (ppmode == 30) {ppmode = ppmode -7; waitThree();} 
            if (ppmode == 31) {ppmode = ppmode -9; waitThree();} 
            if (ppmode == 32) {ppmode = ppmode -11; waitThree();} 
            if (ppmode == 33) {ppmode = ppmode -13; waitThree();} 
            if (ppmode == 34) {ppmode = ppmode -15; waitThree();} 
            if (ppmode == 35) {ppmode = ppmode -17; waitThree();} 

            if (ppmode == 36) {ppmode = ppmode -1; waitThree();} 
            if (ppmode == 37) {ppmode = ppmode -3; waitThree();} 
            if (ppmode == 38) {ppmode = ppmode -5; waitThree();} 
            if (ppmode == 39) {ppmode = ppmode -7; waitThree();} 
            if (ppmode == 40) {ppmode = ppmode -9; waitThree();} 
            if (ppmode == 41) {ppmode = ppmode -11; waitThree();} 
            if (ppmode == 42) {ppmode = ppmode -13; waitThree();} 
            if (ppmode == 43) {ppmode = ppmode -15; waitThree();} 
            if (ppmode == 44) {ppmode = ppmode -17; waitThree();} 
            
            if (ppmode == 45) {ppmode = ppmode -1; waitThree();} 
            if (ppmode == 46) {ppmode = ppmode -3; waitThree();} 
            if (ppmode == 47) {ppmode = ppmode -5; waitThree();} 
            if (ppmode == 48) {ppmode = ppmode -7; waitThree();} 
            if (ppmode == 49) {ppmode = ppmode -9; waitThree();} 
            if (ppmode == 50) {ppmode = ppmode -11; waitThree();} 
            if (ppmode == 51) {ppmode = ppmode -13; waitThree();} 
            if (ppmode == 52) {ppmode = ppmode -15; waitThree();} 
            if (ppmode == 53) {ppmode = ppmode -17; waitThree();} 

            if (ppmode == 54) {ppmode = ppmode -1; waitThree();} 
            if (ppmode == 55) {ppmode = ppmode -3; waitThree();} 
            if (ppmode == 56) {ppmode = ppmode -5; waitThree();} 
            if (ppmode == 57) {ppmode = ppmode -7; waitThree();} 
            if (ppmode == 58) {ppmode = ppmode -9; waitThree();} 
            if (ppmode == 59) {ppmode = ppmode -11; waitThree();} 
            if (ppmode == 60) {ppmode = ppmode -13; waitThree();} 
            if (ppmode == 61) {ppmode = ppmode -15; waitThree();} 
            if (ppmode == 62) {ppmode = ppmode -17; waitThree();} 

            if (ppmode == 63) {ppmode = ppmode -1; waitThree();} 
            if (ppmode == 64) {ppmode = ppmode -3; waitThree();} 
            if (ppmode == 65) {ppmode = ppmode -5; waitThree();} 
            if (ppmode == 66) {ppmode = ppmode -7; waitThree();} 
            if (ppmode == 67) {ppmode = ppmode -9; waitThree();} 
            if (ppmode == 68) {ppmode = ppmode -11; waitThree();} 
            if (ppmode == 69) {ppmode = ppmode -13; waitThree();} 
            if (ppmode == 70) {ppmode = ppmode -15; waitThree();} 
            if (ppmode == 71) {ppmode = ppmode -17; waitThree();} 

            if (ppmode == 72) {ppmode = ppmode -1; waitThree();} 
            if (ppmode == 73) {ppmode = ppmode -3; waitThree();} 
            if (ppmode == 74) {ppmode = ppmode -5; waitThree();} 
            if (ppmode == 75) {ppmode = ppmode -7; waitThree();} 
            if (ppmode == 76) {ppmode = ppmode -9; waitThree();} 
            if (ppmode == 77) {ppmode = ppmode -11; waitThree();} 
            if (ppmode == 78) {ppmode = ppmode -13; waitThree();} 
            if (ppmode == 79) {ppmode = ppmode -15; waitThree();} 
            if (ppmode == 80) {ppmode = ppmode -17; waitThree();} 
            
            if (ppmode == 81) {ppmode = ppmode -1; waitThree();} 
            if (ppmode == 82) {ppmode = ppmode -3; waitThree();} 
            if (ppmode == 83) {ppmode = ppmode -5; waitThree();} 
            if (ppmode == 84) {ppmode = ppmode -7; waitThree();} 
            if (ppmode == 85) {ppmode = ppmode -9; waitThree();} 
            if (ppmode == 86) {ppmode = ppmode -11; waitThree();} 
            if (ppmode == 87) {ppmode = ppmode -13; waitThree();} 
            if (ppmode == 88) {ppmode = ppmode -15; waitThree();} 
            if (ppmode == 89) {ppmode = ppmode -17; waitThree();}   
 
        
}

//copy
if(!(btns & (BTN_X | BTN_A))){

      if (ppmode == 0) { brushv = pp00v;  }
      if (ppmode == 1) { brushv  = pp01v;   } 
      if (ppmode == 2) { brushv  = pp02v;   }
      if (ppmode == 3) { brushv  = ppadv;   } 
      if (ppmode == 4) { brushv  = ppaev;   }
      if (ppmode == 5) { brushv  = ppafv;   } 
      if (ppmode == 6) { brushv  = ppagv;   }
      if (ppmode == 7) { brushv  = ppahv;   }
      if (ppmode == 8) { brushv  = ppaiv;   }
      if (ppmode == 9) { brushv  = ppajv;   } 
      if (ppmode == 10) { brushv  = ppakv;   }
      if (ppmode == 11) { brushv  = ppalv;   } 
      if (ppmode == 12) { brushv = ppamv;  }
      if (ppmode == 13) { brushv  = ppanv;  } 
      if (ppmode == 14) { brushv  = ppaov;  }
      if (ppmode == 15) { brushv  = ppapv;  }
      if (ppmode == 16) { brushv  = ppaqv;  }
      if (ppmode == 17) { brushv  = pparv;  } 
      if (ppmode == 18) { brushv  = ppasv;  }
      if (ppmode == 19) { brushv  = ppatv;  } 
      if (ppmode == 20) { brushv  = ppauv;  }
      if (ppmode == 21) { brushv = ppavv;  } 
      if (ppmode == 22) { brushv  = ppawv;  }
      if (ppmode == 23) { brushv  = ppaxv;  }
      if (ppmode == 24) { brushv  = ppayv;  }
      if (ppmode == 25) { brushv = ppazv;  } 
      if (ppmode == 26) { brushv  = ppbav;  }
      if (ppmode == 27) { brushv  = ppbbv;  } 
      if (ppmode == 28) { brushv  = ppbcv;  }
      if (ppmode == 29) { brushv  = ppbdv;  } 
      if (ppmode == 30) { brushv  = ppbev;  }
      if (ppmode == 31) { brushv  = ppbfv;  } 
      if (ppmode == 32) { brushv = ppbgv;  }
      if (ppmode == 33) { brushv  = ppbhv;  }
      if (ppmode == 34) { brushv  = ppbiv;  }
      if (ppmode == 35) { brushv = ppbjv;  } 
      if (ppmode == 36) { brushv  = ppbkv;  }
      if (ppmode == 37) { brushv = ppblv;  } 
      if (ppmode == 38) { brushv  = ppbmv;  }
      if (ppmode == 39) { brushv  = ppbnv;  } 
      if (ppmode == 40) { brushv  = ppbov;  }
      if (ppmode == 41) { brushv  = ppbpv;  } 
      if (ppmode == 42) { brushv  = ppbqv;  }
      if (ppmode == 43) { brushv  = ppbrv;  }
      if (ppmode == 44) { brushv  = ppbsv;  }
      if (ppmode == 45) { brushv  = ppbtv;  } 
      if (ppmode == 46) { brushv = ppbuv;  } 
      if (ppmode == 47) { brushv  = ppbvv;  }
      if (ppmode == 48) { brushv = pp48v;  } 
      if (ppmode == 49) { brushv = pp49v;  }
      if (ppmode == 50) { brushv  = pp50v;  } 
      if (ppmode == 51) { brushv = pp51v;  }
      if (ppmode == 52) { brushv  = ppcav;  } 
      if (ppmode == 53) { brushv  = ppcbv;  }
      if (ppmode == 54) { brushv  = ppccv;  }
      if (ppmode == 55) { brushv  = ppcdv;  }
      if (ppmode == 56) { brushv  = ppcev;  }
      if (ppmode == 57) { brushv  = ppcfv;  }
      if (ppmode == 58) { brushv = ppcgv;  } 
      if (ppmode == 59) { brushv  = ppchv;  }
      if (ppmode == 60) { brushv  = ppciv;  } 
      if (ppmode == 61) { brushv  = ppcjv;  }
      if (ppmode == 62) { brushv  = ppckv;  } 
      if (ppmode == 63) { brushv  = ppclv;  }
      if (ppmode == 64) { brushv  = ppcmv;  }
      if (ppmode == 65) { brushv  = ppcnv;  }
      if (ppmode == 66) { brushv  = ppcov;  }
      if (ppmode == 67) { brushv  = ppcpv;  }
      if (ppmode == 68) { brushv  = ppcqv;  } 
      if (ppmode == 69) { brushv  = ppcrv;  }
      if (ppmode == 70) { brushv  = ppcsv;  } 
      if (ppmode == 71) { brushv  = ppctv;  }
      if (ppmode == 72) { brushv  = ppcuv;  } 
      if (ppmode == 73) { brushv  = ppcvv;  }
      if (ppmode == 74) { brushv  = ppcwv;  }
      if (ppmode == 75) { brushv  = ppcxv;  }
      if (ppmode == 76) { brushv  = ppcyv;  }
      if (ppmode == 77) { brushv  = ppczv;  }
      if (ppmode == 78) { brushv  = ppdav;  } 
      if (ppmode == 79) { brushv  = ppdbv;  }
      if (ppmode == 80) { brushv  = ppdcv;  } 
      if (ppmode == 81) { brushv  = ppddv;  }
      if (ppmode == 82) { brushv  = ppdev;  } 
      if (ppmode == 83) { brushv  = ppdfv;  }
      if (ppmode == 84) { brushv  = ppdgv;  }
      if (ppmode == 85) { brushv  = ppdhv;  }
      if (ppmode == 86) { brushv  = ppdiv;  }
      if (ppmode == 87) { brushv  = ppdjv;  }
      if (ppmode == 88) { brushv  = ppdkv;  }
      if (ppmode == 89) { brushv  = ppdlv;  }



      if (ppmode == 0) { brushs = pp00s;  }
      if (ppmode == 1) { brushs  = pp01s;   } 
      if (ppmode == 2) { brushs  = pp02s;   }
      if (ppmode == 3) { brushs  = ppads;   } 
      if (ppmode == 4) { brushs  = ppaes;   }
      if (ppmode == 5) { brushs  = ppafs;   } 
      if (ppmode == 6) { brushs  = ppags;   }
      if (ppmode == 7) { brushs  = ppahs;   }
      if (ppmode == 8) { brushs  = ppais;   }
      if (ppmode == 9) { brushs  = ppajs;   } 
      if (ppmode == 10) { brushs  = ppaks;   }
      if (ppmode == 11) { brushs  = ppals;   } 
      if (ppmode == 12) { brushs = ppams;  }
      if (ppmode == 13) { brushs  = ppans;  } 
      if (ppmode == 14) { brushs  = ppaos;  }
      if (ppmode == 15) { brushs  = ppaps;  }
      if (ppmode == 16) { brushs  = ppaqs;  }
      if (ppmode == 17) { brushs  = ppars;  } 
      if (ppmode == 18) { brushs  = ppass;  }
      if (ppmode == 19) { brushs  = ppats;  } 
      if (ppmode == 20) { brushs  = ppaus;  }
      if (ppmode == 21) { brushs = ppavs;  } 
      if (ppmode == 22) { brushs  = ppaws;  }
      if (ppmode == 23) { brushs  = ppaxs;  }
      if (ppmode == 24) { brushs  = ppays;  }
      if (ppmode == 25) { brushs = ppazs;  } 
      if (ppmode == 26) { brushs  = ppbas;  }
      if (ppmode == 27) { brushs  = ppbbs;  } 
      if (ppmode == 28) { brushs  = ppbcs;  }
      if (ppmode == 29) { brushs  = ppbds;  } 
      if (ppmode == 30) { brushs  = ppbes;  }
      if (ppmode == 31) { brushs  = ppbfs;  } 
      if (ppmode == 32) { brushs = ppbgs;  }
      if (ppmode == 33) { brushs  = ppbhs;  }
      if (ppmode == 34) { brushs  = ppbis;  }
      if (ppmode == 35) { brushs = ppbjs;  } 
      if (ppmode == 36) { brushs  = ppbks;  }
      if (ppmode == 37) { brushs = ppbls;  } 
      if (ppmode == 38) { brushs  = ppbms;  }
      if (ppmode == 39) { brushs  = ppbns;  } 
      if (ppmode == 40) { brushs  = ppbos;  }
      if (ppmode == 41) { brushs  = ppbps;  } 
      if (ppmode == 42) { brushs  = ppbqs;  }
      if (ppmode == 43) { brushs  = ppbrs;  }
      if (ppmode == 44) { brushs  = ppbss;  }
      if (ppmode == 45) { brushs  = ppbts;  } 
      if (ppmode == 46) { brushs = ppbus;  } 
      if (ppmode == 47) { brushs  = ppbvs;  }
      if (ppmode == 48) { brushs = pp48s;  } 
      if (ppmode == 49) { brushs = pp49s;  }
      if (ppmode == 50) { brushs  = pp50s;  } 
      if (ppmode == 51) { brushs = pp51s;  }
      if (ppmode == 52) { brushs  = ppcas;  } 
      if (ppmode == 53) { brushs  = ppcbs;  }
      if (ppmode == 54) { brushs  = ppccs;  }
      if (ppmode == 55) { brushs  = ppcds;  }
      if (ppmode == 56) { brushs  = ppces;  }
      if (ppmode == 57) { brushs  = ppcfs;  }
      if (ppmode == 58) { brushs = ppcgs;  } 
      if (ppmode == 59) { brushs  = ppchs;  }
      if (ppmode == 60) { brushs  = ppcis;  } 
      if (ppmode == 61) { brushs  = ppcjs;  }
      if (ppmode == 62) { brushs  = ppcks;  } 
      if (ppmode == 63) { brushs  = ppcls;  }
      if (ppmode == 64) { brushs  = ppcms;  }
      if (ppmode == 65) { brushs  = ppcns;  }
      if (ppmode == 66) { brushs  = ppcos;  }
      if (ppmode == 67) { brushs  = ppcps;  }
      if (ppmode == 68) { brushs  = ppcqs;  } 
      if (ppmode == 69) { brushs  = ppcrs;  }
      if (ppmode == 70) { brushs  = ppcss;  } 
      if (ppmode == 71) { brushs  = ppcts;  }
      if (ppmode == 72) { brushs  = ppcus;  } 
      if (ppmode == 73) { brushs  = ppcvs;  }
      if (ppmode == 74) { brushs  = ppcws;  }
      if (ppmode == 75) { brushs  = ppcxs;  }
      if (ppmode == 76) { brushs  = ppcys;  }
      if (ppmode == 77) { brushs  = ppczs;  }
      if (ppmode == 78) { brushs  = ppdas;  } 
      if (ppmode == 79) { brushs  = ppdbs;  }
      if (ppmode == 80) { brushs  = ppdcs;  } 
      if (ppmode == 81) { brushs  = ppdds;  }
      if (ppmode == 82) { brushs  = ppdes;  } 
      if (ppmode == 83) { brushs  = ppdfs;  }
      if (ppmode == 84) { brushs  = ppdgs;  }
      if (ppmode == 85) { brushs  = ppdhs;  }
      if (ppmode == 86) { brushs  = ppdis;  }
      if (ppmode == 87) { brushs  = ppdjs;  }
      if (ppmode == 88) { brushs  = ppdks;  }
      if (ppmode == 89) { brushs  = ppdls;  }

  
      if (ppmode == 0) { brush = pp00h; waitTwo(); }
      if (ppmode == 1) { brush  = pp01h;  waitTwo(); } 
      if (ppmode == 2) { brush  = pp02h;  waitTwo(); }
      if (ppmode == 3) { brush  = ppadh;  waitTwo(); } 
      if (ppmode == 4) { brush  = ppaeh;  waitTwo(); }
      if (ppmode == 5) { brush  = ppafh;  waitTwo(); } 
      if (ppmode == 6) { brush  = ppagh;  waitTwo(); }
      if (ppmode == 7) { brush  = ppahh;  waitTwo(); }
      if (ppmode == 8) { brush  = ppaih;  waitTwo(); }
      if (ppmode == 9) { brush  = ppajh;  waitTwo(); } 
      if (ppmode == 10) { brush  = ppakh;  waitTwo(); }
      if (ppmode == 11) { brush  = ppalh;  waitTwo(); } 
      if (ppmode == 12) { brush = ppamh; waitTwo(); }
      if (ppmode == 13) { brush  = ppanh; waitTwo(); } 
      if (ppmode == 14) { brush  = ppaoh; waitTwo(); }
      if (ppmode == 15) { brush  = ppaph; waitTwo(); }
      if (ppmode == 16) { brush  = ppaqh; waitTwo(); }
      if (ppmode == 17) { brush  = pparh; waitTwo(); } 
      if (ppmode == 18) { brush  = ppash; waitTwo(); }
      if (ppmode == 19) { brush  = ppath; waitTwo(); } 
      if (ppmode == 20) { brush  = ppauh; waitTwo(); }
      if (ppmode == 21) { brush = ppavh; waitTwo(); } 
      if (ppmode == 22) { brush  = ppawh; waitTwo(); }
      if (ppmode == 23) { brush  = ppaxh; waitTwo(); }
      if (ppmode == 24) { brush  = ppayh; waitTwo(); }
      if (ppmode == 25) { brush = ppazh; waitTwo(); } 
      if (ppmode == 26) { brush  = ppbah; waitTwo(); }
      if (ppmode == 27) { brush  = ppbbh; waitTwo(); } 
      if (ppmode == 28) { brush  = ppbch; waitTwo(); }
      if (ppmode == 29) { brush  = ppbdh; waitTwo(); } 
      if (ppmode == 30) { brush  = ppbeh; waitTwo(); }
      if (ppmode == 31) { brush  = ppbfh; waitTwo(); } 
      if (ppmode == 32) { brush = ppbgh; waitTwo(); }
      if (ppmode == 33) { brush  = ppbhh; waitTwo(); }
      if (ppmode == 34) { brush  = ppbih; waitTwo(); }
      if (ppmode == 35) { brush = ppbjh; waitTwo(); } 
      if (ppmode == 36) { brush  = ppbkh; waitTwo(); }
      if (ppmode == 37) { brush = ppblh; waitTwo(); } 
      if (ppmode == 38) { brush  = ppbmh; waitTwo(); }
      if (ppmode == 39) { brush  = ppbnh; waitTwo(); } 
      if (ppmode == 40) { brush  = ppboh; waitTwo(); }
      if (ppmode == 41) { brush  = ppbph; waitTwo(); } 
      if (ppmode == 42) { brush  = ppbqh; waitTwo(); }
      if (ppmode == 43) { brush  = ppbrh; waitTwo(); }
      if (ppmode == 44) { brush  = ppbsh; waitTwo(); }
      if (ppmode == 45) { brush  = ppbth; waitTwo(); } 
      if (ppmode == 46) { brush = ppbuh; waitTwo(); } 
      if (ppmode == 47) { brush  = ppbvh; waitTwo(); }
      if (ppmode == 48) { brush = pp48h; waitTwo(); } 
      if (ppmode == 49) { brush = pp49h; waitTwo(); }
      if (ppmode == 50) { brush  = pp50h; waitTwo(); } 
      if (ppmode == 51) { brush = pp51h; waitTwo(); }
      if (ppmode == 52) { brush  = ppcah; waitTwo(); } 
      if (ppmode == 53) { brush  = ppcbh; waitTwo(); }
      if (ppmode == 54) { brush  = ppcch; waitTwo(); }
      if (ppmode == 55) { brush  = ppcdh; waitTwo(); }
      if (ppmode == 56) { brush  = ppceh; waitTwo(); }
      if (ppmode == 57) { brush  = ppcfh; waitTwo(); }
      if (ppmode == 58) { brush = ppcgh; waitTwo(); } 
      if (ppmode == 59) { brush  = ppchh; waitTwo(); }
      if (ppmode == 60) { brush  = ppcih; waitTwo(); } 
      if (ppmode == 61) { brush  = ppcjh; waitTwo(); }
      if (ppmode == 62) { brush  = ppckh; waitTwo(); } 
      if (ppmode == 63) { brush  = ppclh; waitTwo(); }
      if (ppmode == 64) { brush  = ppcmh; waitTwo(); }
      if (ppmode == 65) { brush  = ppcnh; waitTwo(); }
      if (ppmode == 66) { brush  = ppcoh; waitTwo(); }
      if (ppmode == 67) { brush  = ppcph; waitTwo(); }
      if (ppmode == 68) { brush  = ppcqh; waitTwo(); } 
      if (ppmode == 69) { brush  = ppcrh; waitTwo(); }
      if (ppmode == 70) { brush  = ppcsh; waitTwo(); } 
      if (ppmode == 71) { brush  = ppcth; waitTwo(); }
      if (ppmode == 72) { brush  = ppcuh; waitTwo(); } 
      if (ppmode == 73) { brush  = ppcvh; waitTwo(); }
      if (ppmode == 74) { brush  = ppcwh; waitTwo(); }
      if (ppmode == 75) { brush  = ppcxh; waitTwo(); }
      if (ppmode == 76) { brush  = ppcyh; waitTwo(); }
      if (ppmode == 77) { brush  = ppczh; waitTwo(); }
      if (ppmode == 78) { brush  = ppdah; waitTwo(); } 
      if (ppmode == 79) { brush  = ppdbh; waitTwo(); }
      if (ppmode == 80) { brush  = ppdch; waitTwo(); } 
      if (ppmode == 81) { brush  = ppddh; waitTwo(); }
      if (ppmode == 82) { brush  = ppdeh; waitTwo(); } 
      if (ppmode == 83) { brush  = ppdfh; waitTwo(); }
      if (ppmode == 84) { brush  = ppdgh; waitTwo(); }
      if (ppmode == 85) { brush  = ppdhh; waitTwo(); }
      if (ppmode == 86) { brush  = ppdih; waitTwo(); }
      if (ppmode == 87) { brush  = ppdjh; waitTwo(); }
      if (ppmode == 88) { brush  = ppdkh; waitTwo(); }
      if (ppmode == 89) { brush  = ppdlh; waitTwo(); }
      Serial.print("COPIED Pixel:"); Serial.println(ppmode); Serial.print ("  Hue:"); Serial.println (brush); Serial.print ("  Saturation:"); Serial.println (brushs); Serial.print ("  Value:"); Serial.println (brushv); Serial.println ();
}

  
  }}

  
void paletteMode (){
paletteInput();

switch (ppmode) {
  case 0:  pp00(); break;     
  case 1:  pp01 (); break; 
  case 2:  pp02 (); break;
  case 3:  ppad (); break;   
  case 4:  ppae (); break; 
  case 5:  ppaf (); break; 
  case 6:  ppag (); break; 
  case 7:  ppah (); break; 
  case 8:  ppai (); break; 
  case 9:  ppaj (); break; 
  case 10: ppak (); break; 
  case 11: ppal (); break; 
  case 12: ppam (); break; 
  case 13: ppan (); break;
  case 14: ppao (); break; 
  case 15: ppap (); break;
  case 16: ppaq (); break; 
  case 17: ppar (); break; 
  case 18: ppas (); break; 
  case 19: ppat (); break;
  case 20: ppau (); break; 
  case 21: ppav (); break;
  case 22: ppaw (); break;
  case 23: ppax (); break; 
  case 24: ppay (); break;
  case 25: ppaz (); break;
  case 26: ppba (); break; 
  case 27: ppbb (); break;
  case 28: ppbc (); break;
  case 29: ppbd (); break;
  case 30: ppbe (); break;
  case 31: ppbf (); break;
  case 32: ppbg (); break;
  case 33: ppbh (); break;
  case 34: ppbi (); break;
  case 35: ppbj (); break;
  case 36: ppbk (); break;
  case 37: ppbl (); break;
  case 38: ppbm (); break;
  case 39: ppbn (); break;
  case 40: ppbo (); break;
  case 41: ppbp (); break;
  case 42: ppbq (); break;
  case 43: ppbr (); break;
  case 44: ppbs (); break;
  case 45: ppbt (); break;
  case 46: ppbu (); break;
  case 47: ppbv (); break;
  case 48: pp48 (); break;
  case 49: pp49 (); break;
  case 50: pp50 (); break;
  case 51: pp51 (); break;
  case 52: ppca (); break;
  case 53: ppcb (); break;
  case 54: ppcc (); break;
  case 55: ppcd (); break;
  case 56: ppce (); break;
  case 57: ppcf (); break;
  case 58: ppcg (); break;
  case 59: ppch (); break;
  case 60: ppci (); break;
  case 61: ppcj (); break;
  case 62: ppck (); break;
  case 63: ppcl (); break;
  case 64: ppcm (); break;
  case 65: ppcn (); break;
  case 66: ppco (); break;
  case 67: ppcp (); break;
  case 68: ppcq (); break;
  case 69: ppcr (); break; 
  case 70: ppcs (); break;
  case 71: ppct (); break;
  case 72: ppcu (); break;
  case 73: ppcv (); break;
  case 74: ppcw (); break;
  case 75: ppcx (); break;
  case 76: ppcy (); break;
  case 77: ppcz (); break;
  case 78: ppda (); break;
  case 79: ppdb (); break;
  case 80: ppdc (); break;
  case 81: ppdd (); break;
  case 82: ppde (); break;
  case 83: ppdf (); break;
  case 84: ppdg (); break;
  case 85: ppdh (); break;
  case 86: ppdi (); break;
  case 87: ppdj (); break;
  case 88: ppdk (); break;
  case 89: ppdl (); break;
  default: break;
  break;
 
  }
  
}

//Palette pixel 0
void pp00 () {
   leds[0] = CHSV(pp00h, pp00s, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
   leds[0] = CHSV(pp00h, pp00s, pp00v); 
   LEDS.show(); 
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (pp00h); 
    Serial.print ("  Saturation:"); Serial.println (pp00s);
    Serial.print ("  Value:"); Serial.println (pp00v); Serial.println();}

}
//Palette Pixel 1
void pp01 () {
   leds[1] = CHSV(pp01h, pp01s, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[1] = CHSV(pp01h, pp01s, pp01v); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (pp01h); 
    Serial.print ("  Saturation:"); Serial.println (pp01s);
    Serial.print ("  Value:"); Serial.println (pp01v); Serial.println();}
}
//Palette Pixel 2
void pp02 () {
   leds[2] = CHSV(pp02h, pp02s, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[2] = CHSV(pp02h, pp02s, pp02v); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (pp02h); 
    Serial.print ("  Saturation:"); Serial.println (pp02s);
    Serial.print ("  Value:"); Serial.println (pp02v); Serial.println();}
}
//Palette Pixel 3
void ppad () {
   leds[3] = CHSV(ppadh, ppads, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[3] = CHSV(ppadh, ppads, ppadv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppadh); 
    Serial.print ("  Saturation:"); Serial.println (ppads);
    Serial.print ("  Value:"); Serial.println (ppadv); Serial.println();}
}
//Palette Pixel 4
void ppae () {
   leds[4] = CHSV(ppaeh, ppaes, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[4] = CHSV(ppaeh, ppaes, ppaev); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppaeh); 
    Serial.print ("  Saturation:"); Serial.println (ppaes);
    Serial.print ("  Value:"); Serial.println (ppaev); Serial.println();}
}
//Palette Pixel 5
void ppaf () {
   leds[5] = CHSV(ppafh, ppafs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[5] = CHSV(ppafh, ppafs, ppafv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppafh); 
    Serial.print ("  Saturation:"); Serial.println (ppafs);
    Serial.print ("  Value:"); Serial.println (ppafv); Serial.println();}
}
//Palette Pixel 6
void ppag () {
   leds[6] = CHSV(ppagh, ppags, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[6] = CHSV(ppagh, ppags, ppagv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppagh); 
    Serial.print ("  Saturation:"); Serial.println (ppags);
    Serial.print ("  Value:"); Serial.println (ppagv); Serial.println();}
}
//Palette Pixel 7
void ppah () {
   leds[7] = CHSV(ppahh, ppahs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[7] = CHSV(ppahh, ppahs, ppahv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppahh); 
    Serial.print ("  Saturation:"); Serial.println (ppahs);
    Serial.print ("  Value:"); Serial.println (ppahv); Serial.println();}
}
//Palette Pixel 8
void ppai () {
   leds[8] = CHSV(ppaih, ppais, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[8] = CHSV(ppaih, ppais, ppaiv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppaih); 
    Serial.print ("  Saturation:"); Serial.println (ppais);
    Serial.print ("  Value:"); Serial.println (ppaiv); Serial.println();}
}
//Palette Pixel 9
void ppaj () {
   leds[9] = CHSV(ppajh, ppajs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[9] = CHSV(ppajh, ppajs, ppajv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppajh); 
    Serial.print ("  Saturation:"); Serial.println (ppajs);
    Serial.print ("  Value:"); Serial.println (ppajv); Serial.println();}
}
//Palette Pixel 10
void ppak () {
   leds[10] = CHSV(ppakh, ppaks, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[10] = CHSV(ppakh, ppaks, ppakv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppakh); 
    Serial.print ("  Saturation:"); Serial.println (ppaks);
    Serial.print ("  Value:"); Serial.println (ppakv); Serial.println();}
}
//Palette Pixel 11
void ppal () {
   leds[11] = CHSV(ppalh, ppals, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[11] = CHSV(ppalh, ppals, ppalv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppalh); 
    Serial.print ("  Saturation:"); Serial.println (ppals);
    Serial.print ("  Value:"); Serial.println (ppalv); Serial.println();}
}
//Palette Pixel 12
void ppam () {
   leds[12] = CHSV(ppamh, ppams, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[12] = CHSV(ppamh, ppams, ppamv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppamh); 
    Serial.print ("  Saturation:"); Serial.println (ppams);
    Serial.print ("  Value:"); Serial.println (ppamv); Serial.println();}
}
//Palette Pixel 13
void ppan () {
   leds[13] = CHSV(ppanh, ppans, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[13] = CHSV(ppanh, ppans, ppanv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppanh); 
    Serial.print ("  Saturation:"); Serial.println (ppans);
    Serial.print ("  Value:"); Serial.println (ppanv); Serial.println();}
}
//Palette Pixel 14
void ppao () {
   leds[14] = CHSV(ppaoh, ppaos, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[14] = CHSV(ppaoh, ppaos, ppaov); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppaoh); 
    Serial.print ("  Saturation:"); Serial.println (ppaos);
    Serial.print ("  Value:"); Serial.println (ppaov); Serial.println();}
}
//Palette Pixel 15
void ppap () {
   leds[15] = CHSV(ppaph, ppaps, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[15] = CHSV(ppaph, ppaps, ppapv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppaph); 
    Serial.print ("  Saturation:"); Serial.println (ppaps);
    Serial.print ("  Value:"); Serial.println (ppapv); Serial.println();}
}
//Palette Pixel 16
void ppaq () {
   leds[16] = CHSV(ppaqh, ppaqs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[16] = CHSV(ppaqh, ppaqs, ppaqv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppaqh); 
    Serial.print ("  Saturation:"); Serial.println (ppaqs);
    Serial.print ("  Value:"); Serial.println (ppaqv); Serial.println();}
}
//Palette Pixel 17
void ppar () {
   leds[17] = CHSV(pparh, ppars, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[17] = CHSV(pparh, ppars, pparv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (pparh); 
    Serial.print ("  Saturation:"); Serial.println (ppars);
    Serial.print ("  Value:"); Serial.println (pparv); Serial.println();}
}
//Palette Pixel 18
void ppas () {
   leds[18] = CHSV(ppash, ppass, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[18] = CHSV(ppash, ppass, ppasv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppash); 
    Serial.print ("  Saturation:"); Serial.println (ppass);
    Serial.print ("  Value:"); Serial.println (ppasv); Serial.println();}
}
//Palette Pixel 19
void ppat () {
   leds[19] = CHSV(ppath, ppats, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[19] = CHSV(ppath, ppats, ppatv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppath); 
    Serial.print ("  Saturation:"); Serial.println (ppats);
    Serial.print ("  Value:"); Serial.println (ppatv); Serial.println();}
}
//Palette Pixel 20
void ppau () { 
   leds[20] = CHSV(ppauh, ppaus, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[21] = CHSV(ppauh, ppaus, ppauv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppauh); 
    Serial.print ("  Saturation:"); Serial.println (ppaus);
    Serial.print ("  Value:"); Serial.println (ppauv); Serial.println();}
}
//Palette Pixel 21
void ppav () {
   leds[21] = CHSV(ppavh, ppavs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[21] = CHSV(ppavh, ppavs, ppavv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppavh); 
    Serial.print ("  Saturation:"); Serial.println (ppavs);
    Serial.print ("  Value:"); Serial.println (ppavv); Serial.println();}
}
//Palette Pixel 22
void ppaw () {
   leds[22] = CHSV(ppawh, ppaws, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[22] = CHSV(ppawh, ppaws, ppawv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppawh); 
    Serial.print ("  Saturation:"); Serial.println (ppaws);
    Serial.print ("  Value:"); Serial.println (ppawv); Serial.println();}
}
//Palette Pixel 23
void ppax () {
   leds[23] = CHSV(ppaxh, ppaxs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[23] = CHSV(ppaxh, ppaxs, ppaxv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppaxh); 
    Serial.print ("  Saturation:"); Serial.println (ppaxs);
    Serial.print ("  Value:"); Serial.println (ppaxv); Serial.println();}
}
//Palette Pixel 24
void ppay () {
   leds[24] = CHSV(ppayh, ppays, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[24] = CHSV(ppayh, ppays, ppayv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppayh); 
    Serial.print ("  Saturation:"); Serial.println (ppays);
    Serial.print ("  Value:"); Serial.println (ppayv); Serial.println();}
}
//Palette Pixel 25
void ppaz () {
   leds[25] = CHSV(ppazh, ppazs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[25] = CHSV(ppazh, ppazs, ppazv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppazh); 
    Serial.print ("  Saturation:"); Serial.println (ppazs);
    Serial.print ("  Value:"); Serial.println (ppazv); Serial.println();}
}
//Palette Pixel 26
void ppba () {
   leds[26] = CHSV(ppbah, ppbas, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[26] = CHSV(ppbah, ppbas, ppbav); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppbah); 
    Serial.print ("  Saturation:"); Serial.println (ppbas);
    Serial.print ("  Value:"); Serial.println (ppbav); Serial.println();}
}
//Palette Pixel 27
void ppbb () {
   leds[27] = CHSV(ppbbh, ppbbs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[27] = CHSV(ppbbh, ppbbs, ppbbv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppbbh); 
    Serial.print ("  Saturation:"); Serial.println (ppbbs);
    Serial.print ("  Value:"); Serial.println (ppbbv); Serial.println();}
}
//Palette Pixel 28
void ppbc () {
   leds[28] = CHSV(ppbch, ppbcs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
    leds[28] = CHSV(ppbch, ppbcs, ppbcv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppbch); 
    Serial.print ("  Saturation:"); Serial.println (ppbcs);
    Serial.print ("  Value:"); Serial.println (ppbcv); Serial.println();}
}
//Palette Pixel 29
void ppbd () {
  leds[29] = CHSV(ppbdh, ppbds, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[29] = CHSV(ppbdh, ppbds, ppbdv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppbdh); 
    Serial.print ("  Saturation:"); Serial.println (ppbds);
    Serial.print ("  Value:"); Serial.println (ppbdv); Serial.println();}
}
//Palette Pixel 30
void ppbe () {
  leds[30] = CHSV(ppbeh, ppbes, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[30] = CHSV(ppbeh, ppbes, ppbev); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppbeh); 
    Serial.print ("  Saturation:"); Serial.println (ppbes);
    Serial.print ("  Value:"); Serial.println (ppbev); Serial.println();}
}
//Palette Pixel 31
void ppbf () {
  leds[31] = CHSV(ppbfh, ppbfs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[31] = CHSV(ppbfh, ppbfs, ppbfv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppbgh); 
    Serial.print ("  Saturation:"); Serial.println (ppbgs);
    Serial.print ("  Value:"); Serial.println (ppbgv); Serial.println();}
}
//Palette Pixel 32
void ppbg () {
  leds[32] = CHSV(ppbgh, ppbgs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[32] = CHSV(ppbgh, ppbgs, ppbgv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppbgh); 
    Serial.print ("  Saturation:"); Serial.println (ppbgs);
    Serial.print ("  Value:"); Serial.println (ppbgv); Serial.println();}
}
//Palette Pixel 33
void ppbh () {
  leds[33] = CHSV(ppbhh, ppbhs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[33] = CHSV(ppbhh, ppbhs, ppbhv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppbhh); 
    Serial.print ("  Saturation:"); Serial.println (ppbhs);
    Serial.print ("  Value:"); Serial.println (ppbhv); Serial.println();}
}
//Palette Pixel 34
void ppbi () {
  leds[34] = CHSV(ppbih, ppbis, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[34] = CHSV(ppbih, ppbis, ppbiv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppbih); 
    Serial.print ("  Saturation:"); Serial.println (ppbis);
    Serial.print ("  Value:"); Serial.println (ppbiv); Serial.println();}
}
//Palette Pixel 35
void ppbj () {
  leds[35] = CHSV(ppbjh, ppbjs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[35] = CHSV(ppbjh, ppbjs, ppbjv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppbjh); 
    Serial.print ("  Saturation:"); Serial.println (ppbjs);
    Serial.print ("  Value:"); Serial.println (ppbjv); Serial.println();}
}
//Palette Pixel 36
void ppbk () {
  leds[36] = CHSV(ppbkh, ppbks, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[36] = CHSV(ppbkh, ppbks, ppbkv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppbkh); 
    Serial.print ("  Saturation:"); Serial.println (ppbks);
    Serial.print ("  Value:"); Serial.println (ppbkv); Serial.println();}
}
//Palette Pixel 37
void ppbl () {
  leds[37] = CHSV(ppblh, ppbls, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[37] = CHSV(ppblh, ppbls, ppblv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppblh); 
    Serial.print ("  Saturation:"); Serial.println (ppbls);
    Serial.print ("  Value:"); Serial.println (ppblv); Serial.println();}
}
//Palette Pixel 38
void ppbm () {
  leds[38] = CHSV(ppbmh, ppbms, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[38] = CHSV(ppbmh, ppbms, ppbmv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppbmh); 
    Serial.print ("  Saturation:"); Serial.println (ppbms);
    Serial.print ("  Value:"); Serial.println (ppbmv); Serial.println();}
}
//Palette Pixel 39
void ppbn () {
  leds[39] = CHSV(ppbnh, ppbns, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[39] = CHSV(ppbnh, ppbns, ppbnv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppbnh); 
    Serial.print ("  Saturation:"); Serial.println (ppbns);
    Serial.print ("  Value:"); Serial.println (ppbnv); Serial.println();}
}
//Palette Pixel 40
void ppbo () {
  leds[40] = CHSV(ppboh, ppbos, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[40] = CHSV(ppboh, ppbos, ppbov); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppboh); 
    Serial.print ("  Saturation:"); Serial.println (ppbos);
    Serial.print ("  Value:"); Serial.println (ppbov); Serial.println();}
}
//Palette Pixel 41
void ppbp () {
  leds[41] = CHSV(ppbph, ppbps, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[41] = CHSV(ppbph, ppbps, ppbpv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppbph); 
    Serial.print ("  Saturation:"); Serial.println (ppbps);
    Serial.print ("  Value:"); Serial.println (ppbpv); Serial.println();}
}
//Palette Pixel 42
void ppbq() {
  leds[42] = CHSV(ppbqh, ppbqs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[42] = CHSV(ppbqh, ppbqs, ppbqv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppbqh); 
    Serial.print ("  Saturation:"); Serial.println (ppbqs);
    Serial.print ("  Value:"); Serial.println (ppbqv); Serial.println();}
}
//Palette Pixel 43
void ppbr() {
  leds[43] = CHSV(ppbrh, ppbrs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[43] = CHSV(ppbrh, ppbrs, ppbrv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppbrh); 
    Serial.print ("  Saturation:"); Serial.println (ppbrs);
    Serial.print ("  Value:"); Serial.println (ppbrv); Serial.println();}
}
//Palette Pixel 44
void ppbs() {
  leds[44] = CHSV(ppbsh, ppbss, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[44] = CHSV(ppbsh, ppbss, ppbsv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println ("44"); Serial.print ("  Hue:"); Serial.println (ppbsh); Serial.print ("  Saturation:"); Serial.println (ppbss); Serial.print ("  Value:"); Serial.println (ppbsv); Serial.println();}
}
//Palette Pixel 45
void ppbt() {
  leds[45] = CHSV(ppbth, ppbts, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[45] = CHSV(ppbth, ppbts, ppbtv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println ("45"); Serial.print ("  Hue:"); Serial.println (ppbth); Serial.print ("  Saturation:"); Serial.println (ppbts); Serial.print ("  Value:"); Serial.println (ppbtv); Serial.println();}
}
//Palette Pixel 46
void ppbu() {
  leds[46] = CHSV(ppbuh, ppbus, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[46] = CHSV(ppbuh, ppbus, ppbuv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println ("46"); Serial.print ("  Hue:"); Serial.println (ppbuh); Serial.print ("  Saturation:"); Serial.println (ppbus); Serial.print ("  Value:"); Serial.println (ppbuv); Serial.println();}
}
//Palette Pixel 47
void ppbv() {
  leds[47] = CHSV(ppbvh, ppbvs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[47] = CHSV(ppbvh, ppbvs, ppbvv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();

unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println ("47"); Serial.print ("  Hue:"); Serial.println (ppbvh); Serial.print ("  Saturation:"); Serial.println (ppbvs); Serial.print ("  Value:"); Serial.println (ppbvv); Serial.println();}


}
//Palette Pixel 48
void pp48() {
  leds[48] = CHSV(pp48h, pp48s, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[48] = CHSV(pp48h, pp48s, pp48v); 
    LEDS.show();
waitOne (); paletteInput (); 
checkpaintserial ();

unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println ("48"); Serial.print ("  Hue:"); Serial.println (pp48h); Serial.print ("  Saturation:"); Serial.println (pp48s); Serial.print ("  Value:"); Serial.println (pp48v); Serial.println();}

}
//Palette Pixel 49
void pp49() {
  leds[49] = CHSV(pp49h, pp49s, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[49] = CHSV(pp49h, pp49s, pp49v); 
    LEDS.show();
waitOne (); paletteInput (); 
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println ("49"); Serial.print ("  Hue:"); Serial.println (pp49h); Serial.print ("  Saturation:"); Serial.println (pp49s); Serial.print ("  Value:"); Serial.println (pp49v); Serial.println();}


}
//Palette Pixel 50
void pp50() {
  leds[50] = CHSV(pp50h, pp50s, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[50] = CHSV(pp50h, pp50s, pp50v); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println ("50"); Serial.print ("  Hue:"); Serial.println (pp50h); Serial.print ("  Saturation:"); Serial.println (pp50s); Serial.print ("  Value:"); Serial.println (pp50v); Serial.println();}

}
//Palette Pixel 51
void pp51() {
  leds[51] = CHSV(pp51h, pp51s, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[51] = CHSV(pp51h, pp51s, pp51v); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println ("51"); Serial.print ("  Hue:"); Serial.println (pp51h); Serial.print ("  Saturation:"); Serial.println (pp51s); Serial.print ("  Value:"); Serial.println (pp51v); Serial.println();}
}
//Palette Pixel 52
void ppca() {
  leds[52] = CHSV(ppcah, ppcas, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[52] = CHSV(ppcah, ppcas, ppcav); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppcah); 
    Serial.print ("  Saturation:"); Serial.println (ppcas);
    Serial.print ("  Value:"); Serial.println (ppcav); Serial.println();}
}
//Palette Pixel 53
void ppcb() {
  leds[53] = CHSV(ppcbh, ppcbs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[53] = CHSV(ppcbh, ppcbs, ppcbv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppcbh); 
    Serial.print ("  Saturation:"); Serial.println (ppcbs);
    Serial.print ("  Value:"); Serial.println (ppcbv); Serial.println();}
}
//Palette Pixel 54
void ppcc() {
  leds[54] = CHSV(ppcch, ppccs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[54] = CHSV(ppcch, ppccs, ppccv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppcch); 
    Serial.print ("  Saturation:"); Serial.println (ppccs);
    Serial.print ("  Value:"); Serial.println (ppccv); Serial.println();}
}
//Palette Pixel 55
void ppcd() {
  leds[55] = CHSV(ppcdh, ppcds, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[55] = CHSV(ppcdh, ppcds, ppcdv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppcdh); 
    Serial.print ("  Saturation:"); Serial.println (ppcds);
    Serial.print ("  Value:"); Serial.println (ppcdv); Serial.println();}
}
//Palette Pixel 56
void ppce() {
  leds[56] = CHSV(ppceh, ppces, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[56] = CHSV(ppceh, ppces, ppcev); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppceh); 
    Serial.print ("  Saturation:"); Serial.println (ppces);
    Serial.print ("  Value:"); Serial.println (ppcev); Serial.println();}
}
//Palette Pixel 57
void ppcf() {
  leds[57] = CHSV(ppcfh, ppcfs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[57] = CHSV(ppcfh, ppcfs, ppcfv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppcfh); 
    Serial.print ("  Saturation:"); Serial.println (ppcfs);
    Serial.print ("  Value:"); Serial.println (ppcfv); Serial.println();}
}
//Palette Pixel 58
void ppcg() {
  leds[58] = CHSV(ppcgh, ppcgs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[58] = CHSV(ppcgh, ppcgs, ppcgv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppcgh); 
    Serial.print ("  Saturation:"); Serial.println (ppcgs);
    Serial.print ("  Value:"); Serial.println (ppcgv); Serial.println();}
}
//Palette Pixel 59
void ppch() {
  leds[59] = CHSV(ppchh, ppchs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[59] = CHSV(ppchh, ppchs, ppchv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppchh); 
    Serial.print ("  Saturation:"); Serial.println (ppchs);
    Serial.print ("  Value:"); Serial.println (ppchv); Serial.println();}
}
//Palette Pixel 60
void ppci() {
  leds[60] = CHSV(ppcih, ppcis, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[60] = CHSV(ppcih, ppcis, ppciv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppcih); 
    Serial.print ("  Saturation:"); Serial.println (ppcis);
    Serial.print ("  Value:"); Serial.println (ppciv); Serial.println();}
}
//Palette Pixel 61
void ppcj() {
  leds[61] = CHSV(ppcjh, ppcjs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[61] = CHSV(ppcjh, ppcjs, ppcjv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppcjh); 
    Serial.print ("  Saturation:"); Serial.println (ppcjs);
    Serial.print ("  Value:"); Serial.println (ppcjv); Serial.println();}
}
//Palette Pixel 62
void ppck() {
  leds[62] = CHSV(ppckh, ppcks, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[62] = CHSV(ppckh, ppcks, ppckv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppckh); 
    Serial.print ("  Saturation:"); Serial.println (ppcks);
    Serial.print ("  Value:"); Serial.println (ppckv); Serial.println();}
}
//Palette Pixel 63
void ppcl() {
  leds[63] = CHSV(ppclh, ppcls, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[63] = CHSV(ppclh, ppcls, ppclv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppcmh); 
    Serial.print ("  Saturation:"); Serial.println (ppcms);
    Serial.print ("  Value:"); Serial.println (ppcmv); Serial.println();}
}
//Palette Pixel 64
void ppcm() {
  leds[64] = CHSV(ppcmh, ppcms, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[64] = CHSV(ppcmh, ppcms, ppcmv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppcmh); 
    Serial.print ("  Saturation:"); Serial.println (ppcms);
    Serial.print ("  Value:"); Serial.println (ppcmv); Serial.println();}
}
//Palette Pixel 65
void ppcn() {
  leds[65] = CHSV(ppcnh, ppcns, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[65] = CHSV(ppcnh, ppcns, ppcnv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppcnh); 
    Serial.print ("  Saturation:"); Serial.println (ppcns);
    Serial.print ("  Value:"); Serial.println (ppcnv); Serial.println();}
}
//Palette Pixel 66
void ppco() {
  leds[66] = CHSV(ppcoh, ppcos, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[66] = CHSV(ppcoh, ppcos, ppcov); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppcoh); 
    Serial.print ("  Saturation:"); Serial.println (ppcos);
    Serial.print ("  Value:"); Serial.println (ppcov); Serial.println();}
}
//Palette Pixel 67
void ppcp() {
  leds[67] = CHSV(ppcph, ppcps, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[67] = CHSV(ppcph, ppcps, ppcpv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppcph); 
    Serial.print ("  Saturation:"); Serial.println (ppcps);
    Serial.print ("  Value:"); Serial.println (ppcpv); Serial.println();}
}
//Palette Pixel 68
void ppcq() {
  leds[68] = CHSV(ppcqh, ppcqs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[68] = CHSV(ppcqh, ppcqs, ppcqv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppcqh); 
    Serial.print ("  Saturation:"); Serial.println (ppcqs);
    Serial.print ("  Value:"); Serial.println (ppcqv); Serial.println();}
}
//Palette Pixel 69 LOL
void ppcr() {
  leds[69] = CHSV(ppcrh, ppcrs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[69] = CHSV(ppcrh, ppcrs, ppcrv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.print (ppmode); Serial.println(" lol");
    Serial.print ("  Hue:"); Serial.println (ppcrh); 
    Serial.print ("  Saturation:"); Serial.println (ppcrs);
    Serial.print ("  Value:"); Serial.println (ppcrv); Serial.println();}
}
//Palette Pixel 70
void ppcs() {
  leds[70] = CHSV(ppcsh, ppcss, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[70] = CHSV(ppcsh, ppcss, ppcsv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppcsh); 
    Serial.print ("  Saturation:"); Serial.println (ppcss);
    Serial.print ("  Value:"); Serial.println (ppcsv); Serial.println();}
}
//Palette Pixel 71
void ppct() {
  leds[71] = CHSV(ppcth, ppcts, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[71] = CHSV(ppcth, ppcts, ppctv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppcth); 
    Serial.print ("  Saturation:"); Serial.println (ppcts);
    Serial.print ("  Value:"); Serial.println (ppctv); Serial.println();}
}
//Palette Pixel 72
void ppcu() {
  leds[72] = CHSV(ppcuh, ppcus, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[72] = CHSV(ppcuh, ppcus, ppcuv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppcuh); 
    Serial.print ("  Saturation:"); Serial.println (ppcus);
    Serial.print ("  Value:"); Serial.println (ppcuv); Serial.println();}
}
//Palette Pixel 73
void ppcv() {
  leds[73] = CHSV(ppcvh, ppcvs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[73] = CHSV(ppcvh, ppcvs, ppcvv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppcvh); 
    Serial.print ("  Saturation:"); Serial.println (ppcvs);
    Serial.print ("  Value:"); Serial.println (ppcvv); Serial.println();}
}
//Palette Pixel 74
void ppcw() {
  leds[74] = CHSV(ppcwh, ppcws, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[74] = CHSV(ppcwh, ppcws, ppcwv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppcwh); 
    Serial.print ("  Saturation:"); Serial.println (ppcws);
    Serial.print ("  Value:"); Serial.println (ppcwv); Serial.println();}
}
//Palette Pixel 75
void ppcx() {
  leds[75] = CHSV(ppcxh, ppcxs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[75] = CHSV(ppcxh, ppcxs, ppcxv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppcxh); 
    Serial.print ("  Saturation:"); Serial.println (ppcxs);
    Serial.print ("  Value:"); Serial.println (ppcxv); Serial.println();}
}
//Palette Pixel 76
void ppcy() {
  leds[76] = CHSV(ppcyh, ppcys, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[76] = CHSV(ppcyh, ppcys, ppcyv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppcyh); 
    Serial.print ("  Saturation:"); Serial.println (ppcys);
    Serial.print ("  Value:"); Serial.println (ppcyv); Serial.println();}
}
//Palette Pixel 77
void ppcz() {
  leds[77] = CHSV(ppczh, ppczs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[77] = CHSV(ppczh, ppczs, ppczv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppczh); 
    Serial.print ("  Saturation:"); Serial.println (ppczs);
    Serial.print ("  Value:"); Serial.println (ppczv); Serial.println();}
}
//Palette Pixel 78
void ppda() {
  leds[78] = CHSV(ppdah, ppdas, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[78] = CHSV(ppdah, ppdas, ppdav); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppdah); 
    Serial.print ("  Saturation:"); Serial.println (ppdas);
    Serial.print ("  Value:"); Serial.println (ppdav); Serial.println();}
}
//Palette Pixel 79
void ppdb() {
  leds[79] = CHSV(ppdbh, ppdbs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[79] = CHSV(ppdbh, ppdbs, ppdbv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppdbh); 
    Serial.print ("  Saturation:"); Serial.println (ppdbs);
    Serial.print ("  Value:"); Serial.println (ppdbv); Serial.println();}
}
//Palette Pixel 80
void ppdc() {
  leds[80] = CHSV(ppdch, ppdcs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[80] = CHSV(ppdch, ppdcs, ppdcv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppddh); 
    Serial.print ("  Saturation:"); Serial.println (ppdds);
    Serial.print ("  Value:"); Serial.println (ppddv); Serial.println();}
}
//Palette Pixel 81
void ppdd() {
  leds[81] = CHSV(ppddh, ppdds, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[81] = CHSV(ppddh, ppdds, ppddv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppddh); 
    Serial.print ("  Saturation:"); Serial.println (ppdds);
    Serial.print ("  Value:"); Serial.println (ppddv); Serial.println();}
}
//Palette Pixel 82
void ppde() {
  leds[82] = CHSV(ppdeh, ppdes, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[82] = CHSV(ppdeh, ppdes, ppdev); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppdeh); 
    Serial.print ("  Saturation:"); Serial.println (ppdes);
    Serial.print ("  Value:"); Serial.println (ppdev); Serial.println();}
}
//Palette Pixel 83
void ppdf() {
  leds[83] = CHSV(ppdfh, ppdfs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[83] = CHSV(ppdfh, ppdfs, ppdfv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppdfh); 
    Serial.print ("  Saturation:"); Serial.println (ppdfs);
    Serial.print ("  Value:"); Serial.println (ppdfv); Serial.println();}
}
//Palette Pixel 84
void ppdg() {
  leds[84] = CHSV(ppdgh, ppdgs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[84] = CHSV(ppdgh, ppdgs, ppdgv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppdgh); 
    Serial.print ("  Saturation:"); Serial.println (ppdgs);
    Serial.print ("  Value:"); Serial.println (ppdgv); Serial.println();}
}
//Palette Pixel 85
void ppdh() {
  leds[85] = CHSV(ppdhh, ppdhs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[85] = CHSV(ppdhh, ppdhs, ppdhv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppdhh); 
    Serial.print ("  Saturation:"); Serial.println (ppdhs);
    Serial.print ("  Value:"); Serial.println (ppdhv); Serial.println();}
}
//Palette Pixel 86
void ppdi() {
  leds[86] = CHSV(ppdih, ppdis, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[86] = CHSV(ppdih, ppdis, ppdiv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppdih); 
    Serial.print ("  Saturation:"); Serial.println (ppdis);
    Serial.print ("  Value:"); Serial.println (ppdiv); Serial.println();}
}
//Palette Pixel 87
void ppdj() {
  leds[87] = CHSV(ppdjh, ppdjs, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[87] = CHSV(ppdjh, ppdjs, ppdjv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppdjh); 
    Serial.print ("  Saturation:"); Serial.println (ppdjs);
    Serial.print ("  Value:"); Serial.println (ppdjv); Serial.println();}
}
//Palette Pixel 88
void ppdk() {
  leds[88] = CHSV(ppdkh, ppdks, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[88] = CHSV(ppdkh, ppdks, ppdkv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppdkh); 
    Serial.print ("  Saturation:"); Serial.println (ppdks);
    Serial.print ("  Value:"); Serial.println (ppdkv); Serial.println();}
}
//Palette Pixel 89
void ppdl() {
  leds[89] = CHSV(ppdlh, ppdls, 0); 
   LEDS.show(); 
waitOne (); paletteInput (); 
  leds[89] = CHSV(ppdlh, ppdls, ppdlv); 
    LEDS.show();
waitOne (); paletteInput ();  
checkpaintserial ();
unsigned long currentMillisPaintSec = millis();
if (currentMillisPaintSec - previousMillisPaintSec >= intervalPaintSec) { previousMillisPaintSec = currentMillisPaintSec;
    Serial.print ("Pixel:"); Serial.println (ppmode); 
    Serial.print ("  Hue:"); Serial.println (ppdlh); 
    Serial.print ("  Saturation:"); Serial.println (ppdls);
    Serial.print ("  Value:"); Serial.println (ppdlv); Serial.println();}
}

void showPalette () { 
leds[0] = CHSV(pp00h, pp00s, pp00v); 
leds[1] = CHSV(pp01h, pp01s, pp01v); 
leds[2] = CHSV(pp02h, pp02s, pp02v); 
leds[3] = CHSV(ppadh, ppads, ppadv);   
leds[4] = CHSV(ppaeh, ppaes, ppaev); 
leds[5] = CHSV(ppafh, ppafs, ppafv);  
leds[6] = CHSV(ppagh, ppags, ppagv); 
leds[7] = CHSV(ppahh, ppahs, ppahv);  
leds[8] = CHSV(ppaih, ppais, ppaiv); 
leds[9] = CHSV(ppajh, ppajs, ppajv); 
leds[10] = CHSV(ppakh, ppaks, ppakv); 
leds[11] = CHSV(ppalh, ppals, ppalv);  
leds[12] = CHSV(ppamh, ppams, ppamv); 
leds[13] = CHSV(ppanh, ppans, ppanv);  
leds[14] = CHSV(ppaoh, ppaos, ppaov); 
leds[15] = CHSV(ppaph, ppaps, ppapv); 
leds[16] = CHSV(ppaqh, ppaqs, ppaqv); 
leds[17] = CHSV(pparh, ppars, pparv);  
leds[18] = CHSV(ppash, ppass, ppasv); 
leds[19] = CHSV(ppath, ppats, ppatv); 
leds[20] = CHSV(ppauh, ppaus, ppauv); 
leds[21] = CHSV(ppavh, ppavs, ppavv); 
leds[22] = CHSV(ppawh, ppaws, ppawv); 
leds[23] = CHSV(ppaxh, ppaxs, ppaxv); 
leds[24] = CHSV(ppayh, ppays, ppayv); 
leds[25] = CHSV(ppazh, ppazs, ppazv); 
leds[26] = CHSV(ppbah, ppbas, ppbav); 
leds[27] = CHSV(ppbbh, ppbbs, ppbbv); 
leds[28] = CHSV(ppbch, ppbcs, ppbcv);  
leds[29] = CHSV(ppbdh, ppbds, ppbdv); 
leds[30] = CHSV(ppbeh, ppbes, ppbev); 
leds[31] = CHSV(ppbfh, ppbfs, ppbfv); 
leds[32] = CHSV(ppbgh, ppbgs, ppbgv); 
leds[33] = CHSV(ppbhh, ppbhs, ppbhv); 
leds[34] = CHSV(ppbih, ppbis, ppbiv); 
leds[35] = CHSV(ppbjh, ppbjs, ppbjv); 
leds[36] = CHSV(ppbkh, ppbks, ppbkv);
leds[37] = CHSV(ppblh, ppbls, ppblv); 
leds[38] = CHSV(ppbmh, ppbms, ppbmv);
leds[39] = CHSV(ppbnh, ppbns, ppbnv); 
leds[40] = CHSV(ppboh, ppbos, ppbov); 
leds[41] = CHSV(ppbph, ppbps, ppbpv); 
leds[42] = CHSV(ppbqh, ppbqs, ppbqv); 
leds[43] = CHSV(ppbrh, ppbrs, ppbrv); 
leds[44] = CHSV(ppbsh, ppbss, ppbsv); 
leds[45] = CHSV(ppbth, ppbts, ppbtv); 
leds[46] = CHSV(ppbuh, ppbus, ppbuv); 
leds[47] = CHSV(ppbvh, ppbvs, ppbvv);  
leds[48] = CHSV(pp48h, pp48s, pp48v); 
leds[49] = CHSV(pp49h, pp49s, pp49v); 
leds[50] = CHSV(pp50h, pp50s, pp50v); 
leds[51] = CHSV(pp51h, pp51s, pp51v); 
leds[52] = CHSV(ppcah, ppcas, ppcav); 
leds[53] = CHSV(ppcbh, ppcbs, ppcbv); 
leds[54] = CHSV(ppcch, ppccs, ppccv); 
leds[55] = CHSV(ppcdh, ppcds, ppcdv); 
leds[56] = CHSV(ppceh, ppces, ppcev); 
leds[57] = CHSV(ppcfh, ppcfs, ppcfv); 
leds[58] = CHSV(ppcgh, ppcgs, ppcgv); 
leds[59] = CHSV(ppchh, ppchs, ppchv); 
leds[60] = CHSV(ppcih, ppcis, ppciv); 
leds[61] = CHSV(ppcjh, ppcjs, ppcjv); 
leds[62] = CHSV(ppckh, ppcks, ppckv); 
leds[63] = CHSV(ppclh, ppcls, ppclv); 
leds[64] = CHSV(ppcmh, ppcms, ppcmv); 
leds[65] = CHSV(ppcnh, ppcns, ppcnv); 
leds[66] = CHSV(ppcoh, ppcos, ppcov); 
leds[67] = CHSV(ppcph, ppcps, ppcpv); 
leds[68] = CHSV(ppcqh, ppcqs, ppcqv); 
leds[69] = CHSV(ppcrh, ppcrs, ppcrv); 
leds[70] = CHSV(ppcsh, ppcss, ppcsv);
leds[71] = CHSV(ppcth, ppcts, ppctv); 
leds[72] = CHSV(ppcuh, ppcus, ppcuv); 
leds[73] = CHSV(ppcvh, ppcvs, ppcvv); 
leds[74] = CHSV(ppcwh, ppcws, ppcwv); 
leds[75] = CHSV(ppcxh, ppcxs, ppcxv); 
leds[76] = CHSV(ppcyh, ppcys, ppcyv);
leds[77] = CHSV(ppczh, ppczs, ppczv); 
leds[78] = CHSV(ppdah, ppdas, ppdav); 
leds[79] = CHSV(ppdbh, ppdbs, ppdbv); 
leds[80] = CHSV(ppdch, ppdcs, ppdcv);
leds[81] = CHSV(ppddh, ppdds, ppddv); 
leds[82] = CHSV(ppdeh, ppdes, ppdev); 
leds[83] = CHSV(ppdfh, ppdfs, ppdfv);
leds[84] = CHSV(ppdgh, ppdgs, ppdgv); 
leds[85] = CHSV(ppdhh, ppdhs, ppdhv); 
leds[86] = CHSV(ppdih, ppdis, ppdiv); 
leds[87] = CHSV(ppdjh, ppdjs, ppdjv); 
leds[88] = CHSV(ppdkh, ppdks, ppdkv); 
leds[89] = CHSV(ppdlh, ppdls, ppdlv); 
  LEDS.show(); }
