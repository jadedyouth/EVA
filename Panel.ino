
//potentiometer and button inputs

void checkPots () {

potOne = analogRead(A1) / 4;
potTwo = analogRead(A2) / 4;
potThree = analogRead(A3) / 4;
potFour = analogRead(A4);
potFive = analogRead(A5);

 butTwo = digitalRead(10); 
 if (butTwo == LOW){
 switch (butValTwo){
 case 0:  {butValTwo = 1; waitSix(); break; } 
 case 1:  {butValTwo = 0; waitSix(); break; } } }


 butOne = digitalRead(12);
 if (butOne == LOW){
 switch (butValOne){
 case 0:  {butValOne = 1; waitSix(); break; } 
 case 1:  {butValOne = 0; waitSix(); break; } } }


 butThree = digitalRead(11);
 if (butThree == LOW){

//paint mode
if (mode == 99){
//hue
     
      if (pmode == 0) { p00h = potOne;}
      if (pmode == 1) { p01h = potOne;} 
      if (pmode == 2) { p02h = potOne;}
      if (pmode == 3) { padh = potOne;} 
      if (pmode == 4) { paeh = potOne;}
      if (pmode == 5) { pafh = potOne;} 
      if (pmode == 6) { pagh = potOne;}
      if (pmode == 7) { pahh = potOne;}
      if (pmode == 8) { paih = potOne;}
      if (pmode == 9) { pajh = potOne;} 
      if (pmode == 10) { pakh = potOne;}
      if (pmode == 11) { palh = potOne;} 
      if (pmode == 12) { pamh = potOne;}
      if (pmode == 13) { panh = potOne;} 
      if (pmode == 14) { paoh = potOne;}
      if (pmode == 15) { paph = potOne;}
      if (pmode == 16) { paqh = potOne;}
      if (pmode == 17) { parh = potOne;} 
      if (pmode == 18) { pash = potOne;}
      if (pmode == 19) { path = potOne;} 
      if (pmode == 20) { pauh = potOne;}
      if (pmode == 21) { pavh = potOne;} 
      if (pmode == 22) { pawh = potOne;}
      if (pmode == 23) { paxh = potOne;}
      if (pmode == 24) { payh = potOne;}
      if (pmode == 25) { pazh = potOne;} 
      if (pmode == 26) { pbah = potOne;}
      if (pmode == 27) { pbbh = potOne;} 
      if (pmode == 28) { pbch = potOne;}
      if (pmode == 29) { pbdh = potOne;} 
      if (pmode == 30) { pbeh = potOne;}
      if (pmode == 31) { pbfh = potOne;} 
      if (pmode == 32) { pbgh = potOne;}
      if (pmode == 33) { pbhh = potOne;}
      if (pmode == 34) { pbih = potOne;}
      if (pmode == 35) { pbjh = potOne;} 
      if (pmode == 36) { pbkh = potOne;}
      if (pmode == 37) { pblh = potOne;} 
      if (pmode == 38) { pbmh = potOne;}
      if (pmode == 39) { pbnh = potOne;} 
      if (pmode == 40) { pboh = potOne;}
      if (pmode == 41) { pbph = potOne;} 
      if (pmode == 42) { pbqh = potOne;}
      if (pmode == 43) { pbrh = potOne;}
      if (pmode == 44) { pbsh = potOne;}
      if (pmode == 45) { pbth = potOne;} 
      if (pmode == 46) { pbuh = potOne;} 
      if (pmode == 47) { pbvh = potOne;}
      if (pmode == 48) { p48h = potOne;} 
      if (pmode == 49) { p49h = potOne;}
      if (pmode == 50) { p50h = potOne;} 
      if (pmode == 51) { p51h = potOne;}
      if (pmode == 52) { pcah = potOne;} 
      if (pmode == 53) { pcbh = potOne;}
      if (pmode == 54) { pcch = potOne;}
      if (pmode == 55) { pcdh = potOne;}
      if (pmode == 56) { pceh = potOne;}
      if (pmode == 57) { pcfh = potOne;}
      if (pmode == 58) { pcgh = potOne;} 
      if (pmode == 59) { pchh = potOne;}
      if (pmode == 60) { pcih = potOne;} 
      if (pmode == 61) { pcjh = potOne;}
      if (pmode == 62) { pckh = potOne;} 
      if (pmode == 63) { pclh = potOne;}
      if (pmode == 64) { pcmh = potOne;}
      if (pmode == 65) { pcnh = potOne;}
      if (pmode == 66) { pcoh = potOne;}
      if (pmode == 67) { pcph = potOne;}
      if (pmode == 68) { pcqh = potOne;} 
      if (pmode == 69) { pcrh = potOne;}
      if (pmode == 70) { pcsh = potOne;} 
      if (pmode == 71) { pcth = potOne;}
      if (pmode == 72) { pcuh = potOne;} 
      if (pmode == 73) { pcvh = potOne;}
      if (pmode == 74) { pcwh = potOne;}
      if (pmode == 75) { pcxh = potOne;}
      if (pmode == 76) { pcyh = potOne;}
      if (pmode == 77) { pczh = potOne;}
      if (pmode == 78) { pdah = potOne;} 
      if (pmode == 79) { pdbh = potOne;}
      if (pmode == 80) { pdch = potOne;} 
      if (pmode == 81) { pddh = potOne;}
      if (pmode == 82) { pdeh = potOne;} 
      if (pmode == 83) { pdfh = potOne;}
      if (pmode == 84) { pdgh = potOne;}
      if (pmode == 85) { pdhh = potOne;}
      if (pmode == 86) { pdih = potOne;}
      if (pmode == 87) { pdjh = potOne;}
      if (pmode == 88) { pdkh = potOne;}
      if (pmode == 89) { pdlh = potOne;}


   //saturation
    
     if (pmode == 0) { p00s = potTwo;}
      if (pmode == 1) { p01s = potTwo;} 
      if (pmode == 2) { p02s = potTwo;}
      if (pmode == 3) { pads = potTwo;} 
      if (pmode == 4) { paes = potTwo;}
      if (pmode == 5) { pafs = potTwo;} 
      if (pmode == 6) { pags = potTwo;}
      if (pmode == 7) { pahs = potTwo;}
      if (pmode == 8) { pais = potTwo;}
      if (pmode == 9) { pajs = potTwo;} 
      if (pmode == 10) { paks = potTwo;}
      if (pmode == 11) { pals = potTwo;} 
      if (pmode == 12) { pams = potTwo;}
      if (pmode == 13) { pans = potTwo;} 
      if (pmode == 14) { paos = potTwo;}
      if (pmode == 15) { paps = potTwo;}
      if (pmode == 16) { paqs = potTwo;}
      if (pmode == 17) { pars = potTwo;} 
      if (pmode == 18) { pass = potTwo;}
      if (pmode == 19) { pats = potTwo;} 
      if (pmode == 20) { paus = potTwo;}
      if (pmode == 21) { pavs = potTwo;} 
      if (pmode == 22) { paws = potTwo;}
      if (pmode == 23) { paxs = potTwo;}
      if (pmode == 24) { pays = potTwo;}
      if (pmode == 25) { pazs = potTwo;} 
      if (pmode == 26) { pbas = potTwo;}
      if (pmode == 27) { pbbs = potTwo;} 
      if (pmode == 28) { pbcs = potTwo;}
      if (pmode == 29) { pbds = potTwo;} 
      if (pmode == 30) { pbes = potTwo;}
      if (pmode == 31) { pbfs = potTwo;} 
      if (pmode == 32) { pbgs = potTwo;}
      if (pmode == 33) { pbhs = potTwo;}
      if (pmode == 34) { pbis = potTwo;}
      if (pmode == 35) { pbjs = potTwo;} 
      if (pmode == 36) { pbks = potTwo;}
      if (pmode == 37) { pbls = potTwo;} 
      if (pmode == 38) { pbms = potTwo;}
      if (pmode == 39) { pbns = potTwo;} 
      if (pmode == 40) { pbos = potTwo;}
      if (pmode == 41) { pbps = potTwo;} 
      if (pmode == 42) { pbqs = potTwo;}
      if (pmode == 43) { pbrs = potTwo;}
      if (pmode == 44) { pbss = potTwo;}
      if (pmode == 45) { pbts = potTwo;} 
      if (pmode == 46) { pbus = potTwo;} 
      if (pmode == 47) { pbvs = potTwo;}
      if (pmode == 48) { p48s = potTwo;} 
      if (pmode == 49) { p49s = potTwo;}
      if (pmode == 50) { p50s = potTwo;} 
      if (pmode == 51) { p51s = potTwo;}
      if (pmode == 52) { pcas = potTwo;} 
      if (pmode == 53) { pcbs = potTwo;}
      if (pmode == 54) { pccs = potTwo;}
      if (pmode == 55) { pcds = potTwo;}
      if (pmode == 56) { pces = potTwo;}
      if (pmode == 57) { pcfs = potTwo;}
      if (pmode == 58) { pcgs = potTwo;} 
      if (pmode == 59) { pchs = potTwo;}
      if (pmode == 60) { pcis = potTwo;} 
      if (pmode == 61) { pcjs = potTwo;}
      if (pmode == 62) { pcks = potTwo;} 
      if (pmode == 63) { pcls = potTwo;}
      if (pmode == 64) { pcms = potTwo;}
      if (pmode == 65) { pcns = potTwo;}
      if (pmode == 66) { pcos = potTwo;}
      if (pmode == 67) { pcps = potTwo;}
      if (pmode == 68) { pcqs = potTwo;} 
      if (pmode == 69) { pcrs = potTwo;}
      if (pmode == 70) { pcss = potTwo;} 
      if (pmode == 71) { pcts = potTwo;}
      if (pmode == 72) { pcus = potTwo;} 
      if (pmode == 73) { pcvs = potTwo;}
      if (pmode == 74) { pcws = potTwo;}
      if (pmode == 75) { pcxs = potTwo;}
      if (pmode == 76) { pcys = potTwo;}
      if (pmode == 77) { pczs = potTwo;}
      if (pmode == 78) { pdas = potTwo;} 
      if (pmode == 79) { pdbs = potTwo;}
      if (pmode == 80) { pdcs = potTwo;} 
      if (pmode == 81) { pdds = potTwo;}
      if (pmode == 82) { pdes = potTwo;} 
      if (pmode == 83) { pdfs = potTwo;}
      if (pmode == 84) { pdgs = potTwo;}
      if (pmode == 85) { pdhs = potTwo;}
      if (pmode == 86) { pdis = potTwo;}
      if (pmode == 87) { pdjs = potTwo;}
      if (pmode == 88) { pdks = potTwo;}
      if (pmode == 89) { pdls = potTwo;}

   //value
      
     if (pmode == 0) { p00v = potThree;}
      if (pmode == 1) { p01v = potThree;} 
      if (pmode == 2) { p02v = potThree;}
      if (pmode == 3) { padv = potThree;} 
      if (pmode == 4) { paev = potThree;}
      if (pmode == 5) { pafv = potThree;} 
      if (pmode == 6) { pagv = potThree;}
      if (pmode == 7) { pahv = potThree;}
      if (pmode == 8) { paiv = potThree;}
      if (pmode == 9) { pajv = potThree;} 
      if (pmode == 10) { pakv = potThree;}
      if (pmode == 11) { palv = potThree;} 
      if (pmode == 12) { pamv = potThree;}
      if (pmode == 13) { panv = potThree;} 
      if (pmode == 14) { paov = potThree;}
      if (pmode == 15) { papv = potThree;}
      if (pmode == 16) { paqv = potThree;}
      if (pmode == 17) { parv = potThree;} 
      if (pmode == 18) { pasv = potThree;}
      if (pmode == 19) { patv = potThree;} 
      if (pmode == 20) { pauv = potThree;}
      if (pmode == 21) { pavv = potThree;} 
      if (pmode == 22) { pawv = potThree;}
      if (pmode == 23) { paxv = potThree;}
      if (pmode == 24) { payv = potThree;}
      if (pmode == 25) { pazv = potThree;} 
      if (pmode == 26) { pbav = potThree;}
      if (pmode == 27) { pbbv = potThree;} 
      if (pmode == 28) { pbcv = potThree;}
      if (pmode == 29) { pbdv = potThree;} 
      if (pmode == 30) { pbev = potThree;}
      if (pmode == 31) { pbfv = potThree;} 
      if (pmode == 32) { pbgv = potThree;}
      if (pmode == 33) { pbhv = potThree;}
      if (pmode == 34) { pbiv = potThree;}
      if (pmode == 35) { pbjv = potThree;} 
      if (pmode == 36) { pbkv = potThree;}
      if (pmode == 37) { pblv = potThree;} 
      if (pmode == 38) { pbmv = potThree;}
      if (pmode == 39) { pbnv = potThree;} 
      if (pmode == 40) { pbov = potThree;}
      if (pmode == 41) { pbpv = potThree;} 
      if (pmode == 42) { pbqv = potThree;}
      if (pmode == 43) { pbrv = potThree;}
      if (pmode == 44) { pbsv = potThree;}
      if (pmode == 45) { pbtv = potThree;} 
      if (pmode == 46) { pbuv = potThree;} 
      if (pmode == 47) { pbvv = potThree;}
      if (pmode == 48) { p48v = potThree;} 
      if (pmode == 49) { p49v = potThree;}
      if (pmode == 50) { p50v = potThree;} 
      if (pmode == 51) { p51v = potThree;}
      if (pmode == 52) { pcav = potThree;} 
      if (pmode == 53) { pcbv = potThree;}
      if (pmode == 54) { pccv = potThree;}
      if (pmode == 55) { pcdv = potThree;}
      if (pmode == 56) { pcev = potThree;}
      if (pmode == 57) { pcfv = potThree;}
      if (pmode == 58) { pcgv = potThree;} 
      if (pmode == 59) { pchv = potThree;}
      if (pmode == 60) { pciv = potThree;} 
      if (pmode == 61) { pcjv = potThree;}
      if (pmode == 62) { pckv = potThree;} 
      if (pmode == 63) { pclv = potThree;}
      if (pmode == 64) { pcmv = potThree;}
      if (pmode == 65) { pcnv = potThree;}
      if (pmode == 66) { pcov = potThree;}
      if (pmode == 67) { pcpv = potThree;}
      if (pmode == 68) { pcqv = potThree;} 
      if (pmode == 69) { pcrv = potThree;}
      if (pmode == 70) { pcsv = potThree;} 
      if (pmode == 71) { pctv = potThree;}
      if (pmode == 72) { pcuv = potThree;} 
      if (pmode == 73) { pcvv = potThree;}
      if (pmode == 74) { pcwv = potThree;}
      if (pmode == 75) { pcxv = potThree;}
      if (pmode == 76) { pcyv = potThree;}
      if (pmode == 77) { pczv = potThree;}
      if (pmode == 78) { pdav = potThree;} 
      if (pmode == 79) { pdbv = potThree;}
      if (pmode == 80) { pdcv = potThree;} 
      if (pmode == 81) { pddv = potThree;}
      if (pmode == 82) { pdev = potThree;} 
      if (pmode == 83) { pdfv = potThree;}
      if (pmode == 84) { pdgv = potThree;}
      if (pmode == 85) { pdhv = potThree;}
      if (pmode == 86) { pdiv = potThree;}
      if (pmode == 87) { pdjv = potThree;}
      if (pmode == 88) { pdkv = potThree;}
      if (pmode == 89) { pdlv = potThree;} } }
    


} 

