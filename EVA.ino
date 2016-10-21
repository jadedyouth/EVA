                         //Naming Conventions: with most definitions here I endeavor to use close signifiers eg (p = pixel, h = hue, rec = recieved. also mode = main mode and pmode = paint mode) ya dig?

//libraries
#include <FastLED.h>
#include <SNESpaduino.h>
#include <elapsedMillis.h>

//Sefinitions separated so they can easily be added or removed to save memory

//SYSTEM --------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int psupin = 13; //PSU ON and OFF A42 NPN Transistor attached between green and ground wires. the on board LED attached to pin 13 was annoying me at night, it now goes high and low with the PSU

//SNES input
SNESpaduino Spad(6, 7, 5); //clock, latch, data 
uint16_t btns;

//Serial input
#define SERIAL_BAUDRATE 115200 
#define SERIAL_TIMEOUT 5
int rec = 0; //where the serial in ASCII value is kept
int mode = 0; // default mode
int Trec = 0; //serial ASCII for getting out of the pause loop 

//PATTERNS -------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Imported from the old funkboxing program so I could run a couple of the patterns from there for now. Obviously not mine, but it'll either get improved or removed with time.
#define LED_COUNT 90        
#define LED_DT 3             //SERIAL DATA PIN
// #define LED_CK 13           //commented out for ws28 chip  
int BOTTOM_INDEX = 0;
int TOP_INDEX = int(LED_COUNT/2);
int EVENODD = LED_COUNT%2;
struct CRGB leds[LED_COUNT];
int ledsX[LED_COUNT][3]; 

// int thisdelay = 20;          //-FX LOOPS DELAY VAR //Replaced by waitFour
int thisstep = 10;           //-FX LOOPS DELAY VAR
int thishue = 0;             //-FX LOOPS DELAY VAR
int thissat = 255;           //-FX LOOPS DELAY VAR
int max_bright = 64;         //-SET MAX BRIGHTNESS TO 1/4

int thisindex = 0;           //-SET SINGLE LED VAR
int thisRED = 0;
int thisGRN = 0;
int thisBLU = 0;

int idex = 0;                //-LED INDEX (0 to LED_COUNT-1
int ihue = 0;                //-HUE (0-255)
int ibright = 0;             //-BRIGHTNESS (0-255)
int isat = 0;                //-SATURATION (0-255)
int bouncedirection = 0;     //-SWITCH FOR COLOR BOUNCE (0-1)
float tcount = 0.0;          //-INC VAR FOR SIN LOOPS
int lcount = 0;              //-ANOTHER COUNTING VAR


//---FIND INDEX OF HORIZONAL OPPOSITE LED
int horizontal_index(int i) {
  //-ONLY WORKS WITH INDEX < TOPINDEX
  if (i == BOTTOM_INDEX) {return BOTTOM_INDEX;}
  if (i == TOP_INDEX && EVENODD == 1) {return TOP_INDEX + 1;}
  if (i == TOP_INDEX && EVENODD == 0) {return TOP_INDEX;}
  return LED_COUNT - i;  
}

//---FIND INDEX OF ANTIPODAL OPPOSITE LED
int antipodal_index(int i) {
  int iN = i + TOP_INDEX;
  if (i >= TOP_INDEX) {iN = ( i + TOP_INDEX ) % LED_COUNT; }
  return iN;
}

//---FIND ADJACENT INDEX CLOCKWISE
int adjacent_cw(int i) {
  int r;
  if (i < LED_COUNT - 1) {r = i + 1;}
  else {r = 0;}
  return r;
}

//---FIND ADJACENT INDEX COUNTER-CLOCKWISE
int adjacent_ccw(int i) {
  int r;
  if (i > 0) {r = i - 1;}
  else {r = LED_COUNT - 1;}
  return r;
}

void copy_led_array(){
  for(int i = 0; i < LED_COUNT; i++ ) { //Go through entire led array
                                        //Making array "ledsX with two values
    ledsX[i][0] = leds[i].r;            //Set ledsX i [r..g..b] to equivilant current leds array
    ledsX[i][1] = leds[i].g;
    ledsX[i][2] = leds[i].b;
    
  } 
}

//PAINT AND PALLETTE MODE ---------------------------------------------------------------------------------------------------------------------------------------------------------------

//Timers
//these two slow down how often PHSV is printed (Pixel No, Hue, Saturation, Value)
unsigned long previousMillisPaintSec = 0;
const long intervalPaintSec = 2000;

//Definitions
int prec = 0; //Serial ASCII
int pmode = 48; //starts in the middle (pixel 48)
int ppmode = 48; //starts palette in middle (pixel 48)
int brush = 0; //Hue for copy/paste pixel HSV
int brushs = 0; //Saturation for copy/paste pixel HSV
int brushv = 0; //Value for copy/paste pixel HSV
int defaultHue = 0; //for changing the hue on all the pixels at once

//Needed to define the HSV for all 90 pixels
                    //More Naming Conventions: it wouldnt let me use numbers so i had to use letters. aa for 0, ab for 1, ac for 2 etc. so paah is pixel 0 hue, paas is pixel 0 saturation.
//Hues
int paah = defaultHue; //Pixel 0
int pabh = defaultHue; //1
int pach = defaultHue; //2
int padh = defaultHue; //3
int paeh = defaultHue; //4
int pafh = defaultHue; //5
int pagh = defaultHue; //6
int pahh = defaultHue; //7
int paih = defaultHue; //8
int pajh = defaultHue; //9
int pakh = defaultHue; //etc
int palh = defaultHue; 
int pamh = defaultHue;
int panh = defaultHue; 
int paoh = defaultHue;
int paph = defaultHue;
int paqh = defaultHue;
int parh = defaultHue; 
int pash = defaultHue;
int path = defaultHue; 
int pauh = defaultHue;
int pavh = defaultHue; 
int pawh = defaultHue;
int paxh = defaultHue;
int payh = defaultHue;
int pazh = defaultHue; 
int pbah = defaultHue;
int pbbh = defaultHue; 
int pbch = defaultHue;
int pbdh = defaultHue; 
int pbeh = defaultHue;
int pbfh = defaultHue; 
int pbgh = defaultHue;
int pbhh = defaultHue;
int pbih = defaultHue;
int pbjh = defaultHue; 
int pbkh = defaultHue;
int pblh = defaultHue; 
int pbmh = defaultHue;
int pbnh = defaultHue; 
int pboh = defaultHue;
int pbph = defaultHue;
int pbqh = defaultHue;
int pbrh = defaultHue;
int pbsh = defaultHue;
int pbth = defaultHue; 
int pbuh = defaultHue;
int pbvh = defaultHue;
int pbwh = defaultHue;
int pbxh = defaultHue;
int pbyh = defaultHue;
int pbzh = defaultHue;
int pcah = defaultHue;
int pcbh = defaultHue;
int pcch = defaultHue;
int pcdh = defaultHue;
int pceh = defaultHue;
int pcfh = defaultHue;
int pcgh = defaultHue;
int pchh = defaultHue;
int pcih = defaultHue;
int pcjh = defaultHue;
int pckh = defaultHue; 
int pclh = defaultHue;
int pcmh = defaultHue;
int pcnh = defaultHue;
int pcoh = defaultHue;
int pcph = defaultHue;
int pcqh = defaultHue; 
int pcrh = defaultHue;
int pcsh = defaultHue; 
int pcth = defaultHue;
int pcuh = defaultHue; 
int pcvh = defaultHue;
int pcwh = defaultHue;
int pcxh = defaultHue;
int pcyh = defaultHue;
int pczh = defaultHue;
int pdah = defaultHue;
int pdbh = defaultHue;
int pdch = defaultHue;
int pddh = defaultHue;
int pdeh = defaultHue;
int pdfh = defaultHue;
int pdgh = defaultHue;
int pdhh = defaultHue;
int pdih = defaultHue;
int pdjh = defaultHue;
int pdkh = defaultHue;
int pdlh = defaultHue;

//Saturations
int paas = 255;
int pabs = 255;
int pacs = 255;
int pads = 255;
int paes = 255;
int pafs = 255;
int pags = 255;
int pahs = 255;
int pais = 255;
int pajs = 255;
int paks = 255;
int pals = 255;
int pams = 255;
int pans = 255;
int paos = 255;
int paps = 255;
int paqs = 255;
int pars = 255;
int pass = 255;
int pats = 255;
int paus = 255;
int pavs = 255;
int paws = 255;
int paxs = 255;
int pays = 255;
int pazs = 255;
int pbas = 255;
int pbbs = 255;
int pbcs = 255;
int pbds = 255;
int pbes = 255;
int pbfs = 255;
int pbgs = 255;
int pbhs = 255;
int pbis = 255;
int pbjs = 255;
int pbks = 255;
int pbls = 255;
int pbms = 255;
int pbns = 255;
int pbos = 255;
int pbps = 255;
int pbqs = 255;
int pbrs = 255;
int pbss = 255;
int pbts = 255;
int pbus = 255;
int pbvs = 255;
int pbws = 255;
int pbxs = 255;
int pbys = 255;
int pbzs = 255;
int pcas = 255;
int pcbs = 255;
int pccs = 255;
int pcds = 255;
int pces = 255;
int pcfs = 255;
int pcgs = 255;
int pchs = 255;
int pcis = 255;
int pcjs = 255;
int pcks = 255;
int pcls = 255;
int pcms = 255;
int pcns = 255;
int pcos = 255;
int pcps = 255;
int pcqs = 255;
int pcrs = 255;
int pcss = 255;
int pcts = 255;
int pcus = 255;
int pcvs = 255;
int pcws = 255;
int pcxs = 255;
int pcys = 255;
int pczs = 255;
int pdas = 255;
int pdbs = 255;
int pdcs = 255;
int pdds = 255;
int pdes = 255;
int pdfs = 255;
int pdgs = 255;
int pdhs = 255;
int pdis = 255;
int pdjs = 255;
int pdks = 255;
int pdls = 255;

//Values
int paav = 0;
int pabv = 0;
int pacv = 0;
int padv = 0;
int paev = 0;
int pafv = 0;
int pagv = 0;
int pahv = 0;
int paiv = 0;
int pajv = 0;
int pakv = 0;
int palv = 0;
int pamv = 0;
int panv = 0;
int paov = 0;
int papv = 0;
int paqv = 0;
int parv = 0;
int pasv = 0;
int patv = 0;
int pauv = 0;
int pavv = 0;
int pawv = 0;
int paxv = 0;
int payv = 0;
int pazv = 0;
int pbav = 0;
int pbbv = 0;
int pbcv = 0;
int pbdv = 0;
int pbev = 0;
int pbfv = 0;
int pbgv = 0;
int pbhv = 0;
int pbiv = 0;
int pbjv = 0;
int pbkv = 0;
int pblv = 0;
int pbmv = 0;
int pbnv = 0;
int pbov = 0;
int pbpv = 0;
int pbqv = 0;
int pbrv = 0;
int pbsv = 0;
int pbtv = 0;
int pbuv = 0;
int pbvv = 0;
int pbwv = 0;
int pbxv = 0;
int pbyv = 0;
int pbzv = 0;
int pcav = 0;
int pcbv = 0;
int pccv = 0;
int pcdv = 0;
int pcev = 0;
int pcfv = 0;
int pcgv = 0;
int pchv = 0;
int pciv = 0;
int pcjv = 0;
int pckv = 0;
int pclv = 0;
int pcmv = 0;
int pcnv = 0;
int pcov = 0;
int pcpv = 0;
int pcqv = 0;
int pcrv = 0;
int pcsv = 0;
int pctv = 0;
int pcuv = 0;
int pcvv = 0;
int pcwv = 0;
int pcxv = 0;
int pcyv = 0;
int pczv = 0;
int pdav = 0;
int pdbv = 0;
int pdcv = 0;
int pddv = 0;
int pdev = 0;
int pdfv = 0;
int pdgv = 0;
int pdhv = 0;
int pdiv = 0;
int pdjv = 0;
int pdkv = 0;
int pdlv = 0;

//Needed to be done again for the fixed palette mode. Most of these have nothing stored in them yet. when they're needed for a colour, the inetgers for the relevant pixel are put together below. Empty spaces are used pixels.
//Hue
int ppaah = 0; //0
int ppabh = 0; //1
int ppach = 0; //2
int ppadh = 0; //3
int ppaeh = 0; //4
int ppafh = 0; //5
int ppagh = 0; //6
int ppahh = 0; //7
int ppaih = 0; //8
int ppajh = 0; //9
int ppakh = 0; //10
int ppalh = 0; //11
int ppamh = 0; //12
int ppanh = 0; //13
int ppaoh = 0; //14
int ppaph = 0; //15
int ppaqh = 0;
int pparh = 0; 
int ppash = 0;
int ppath = 0; 
int ppauh = 0; //20
int ppavh = 0; 
int ppawh = 0;
int ppaxh = 0;
int ppayh = 0;
int ppazh = 0; 
int ppbah = 0;
int ppbbh = 0; 
int ppbch = 0;
int ppbdh = 0; 
int ppbeh = 0; //30
int ppbfh = 0; 
int ppbgh = 0;
int ppbhh = 0;
int ppbih = 0;
int ppbjh = 0; 
int ppbkh = 0;
int ppblh = 0; 
int ppbmh = 0;
int ppbnh = 0; 
int ppboh = 0; //40
int ppbph = 0; //41

int ppbrh = 0; //43
int ppbsh = 0; //44
int ppbth = 0; //45
int ppbuh = 0; //46


int ppbxh = 0; //49
int ppbyh = 0; //50
int ppbzh = 0; //51
int ppcah = 0; //52
int ppcbh = 0; //53
int ppcch = 0; //54
int ppcdh = 0; //55
int ppceh = 0; //56
int ppcfh = 0; //57
int ppcgh = 0; //58
int ppchh = 0; //59

int ppcjh = 0; //61
int ppckh = 0; 
int ppclh = 0;
int ppcmh = 0;
int ppcnh = 0;
int ppcoh = 0;
int ppcph = 0;
int ppcqh = 0; 
int ppcrh = 0;
int ppcsh = 0; 
int ppcth = 0;
int ppcuh = 0; 
int ppcvh = 0;
int ppcwh = 0;
int ppcxh = 0;
int ppcyh = 0;
int ppczh = 0;
int ppdah = 0;
int ppdbh = 0;
int ppdch = 0;
int ppddh = 0;
int ppdeh = 0;
int ppdfh = 0;
int ppdgh = 0;
int ppdhh = 0;
int ppdih = 0;
int ppdjh = 0;
int ppdkh = 0;
int ppdlh = 0;

//Saturations
int ppaas = 255;
int ppabs = 255;
int ppacs = 255;
int ppads = 255;
int ppaes = 255;
int ppafs = 255;
int ppags = 255;
int ppahs = 255;
int ppais = 255;
int ppajs = 255;
int ppaks = 255;
int ppals = 255;
int ppams = 255;
int ppans = 255;
int ppaos = 255;
int ppaps = 255;
int ppaqs = 255;
int ppars = 255;
int ppass = 255;
int ppats = 255;
int ppaus = 255;
int ppavs = 255;
int ppaws = 255;
int ppaxs = 255;
int ppays = 255;
int ppazs = 255;
int ppbas = 255;
int ppbbs = 255;
int ppbcs = 255;
int ppbds = 255;
int ppbes = 255;
int ppbfs = 255;
int ppbgs = 255;
int ppbhs = 255;
int ppbis = 255;
int ppbjs = 255;
int ppbks = 255;
int ppbls = 255;
int ppbms = 255;
int ppbns = 255;
int ppbos = 255;
int ppbps = 255; //41

int ppbrs = 255; //43
int ppbss = 255; //44
int ppbts = 255; //45
int ppbus = 255; //46


int ppbxs = 255; //49
int ppbys = 255;
int ppbzs = 255;
int ppcas = 255;
int ppcbs = 255;
int ppccs = 255;
int ppcds = 255;
int ppces = 255;
int ppcfs = 255;
int ppcgs = 255; //58
int ppchs = 255; //59

int ppcjs = 255; //60
int ppcks = 255; //61
int ppcls = 255;
int ppcms = 255;
int ppcns = 255;
int ppcos = 255;
int ppcps = 255;
int ppcqs = 255;
int ppcrs = 255;
int ppcss = 255;
int ppcts = 255;
int ppcus = 255;
int ppcvs = 255;
int ppcws = 255;
int ppcxs = 255;
int ppcys = 255;
int ppczs = 255;
int ppdas = 255;
int ppdbs = 255;
int ppdcs = 255;
int ppdds = 255;
int ppdes = 255;
int ppdfs = 255;
int ppdgs = 255;
int ppdhs = 255;
int ppdis = 255;
int ppdjs = 255;
int ppdks = 255;
int ppdls = 255;

//Values 
int ppaav =  0; //0
int ppabv =  0; //1
int ppacv =  0;
int ppadv =  0;
int ppaev =  0;
int ppafv =  0;
int ppagv =  0;
int ppahv =  0;
int ppaiv =  0; //8
int ppajv =  0;
int ppakv =  0; //10
int ppalv =  0;
int ppamv =  0;
int ppanv =  0;
int ppaov =  0;
int ppapv =  0;
int ppaqv =  0; //16
int pparv =  0; //17
int ppasv =  0;
int ppatv =  0;
int ppauv =  0; //20
int ppavv =  0;
int ppawv =  0;
int ppaxv =  0;
int ppayv =  0;
int ppazv =  0;
int ppbav =  0;
int ppbbv =  0;
int ppbcv =  0;
int ppbdv =  0;
int ppbev =  0; //30
int ppbfv =  0;
int ppbgv =  0;
int ppbhv =  0;
int ppbiv =  0;
int ppbjv =  0;
int ppbkv =  0;
int ppblv =  0;
int ppbmv =  0;
int ppbnv =  0;
int ppbov =  0; //40
int ppbpv =  0; //41

int ppbrv =  0; //43
int ppbsv =  0; //44
int ppbtv =  0;//45
int ppbuv =  0; //46


int ppbxv = 0; //49
int ppbyv = 0; //50
int ppbzv = 0;
int ppcav = 0;
int ppcbv = 0;
int ppccv = 0;
int ppcdv = 0;
int ppcev = 0;
int ppcfv = 0;
int ppcgv = 0;
int ppchv = 0; //59

int ppcjv = 0; //61
int ppckv = 0; //62
int ppclv = 0; //63
int ppcmv = 0; //64
int ppcnv = 0; //65
int ppcov = 0; //66
int ppcpv = 0; //67
int ppcqv = 0; //68
int ppcrv = 0; //69 lol
int ppcsv = 0;
int ppctv = 0;
int ppcuv = 0;
int ppcvv = 0;
int ppcwv = 0;
int ppcxv = 0;
int ppcyv = 0;
int ppczv = 0;
int ppdav = 0;
int ppdbv = 0;
int ppdcv = 0; //80
int ppddv = 0; //81
int ppdev = 0; //82
int ppdfv = 0; //83
int ppdgv = 0; //84
int ppdhv = 0; //85
int ppdiv = 0; //86
int ppdjv = 0; //87
int ppdkv = 0; //88
int ppdlv = 0; //89

//Assigned Palettes HSV
//48 Burnt Orange
int ppbwh = 26; 
int ppbws = 230;
int ppbwv =  150;  
//47 lUCYD Pink
int ppbvh = 221; 
int ppbvs = 210; 
int ppbvv =  180;
//42 70's Apricot Cream
int ppbqh = 32; 
int ppbqs = 150;
int ppbqv =  180;  
//60 Off Red
int ppcih = 12; 
int ppcis = 2230; 
int ppciv = 130;  


void setup() {
pinMode(psupin, OUTPUT); //sets pin leading to the PSU transistor to output 

 Serial.begin(SERIAL_BAUDRATE);  //for chatting to the PC    
 Serial.setTimeout(SERIAL_TIMEOUT);
 LEDS.setBrightness(max_bright); 
 LEDS.addLeds<WS2811, LED_DT, GRB>(leds, LED_COUNT); //most of them still work ;)
   
   PSU_ON ();  //power supply on
clearsheet (); //turns off all the lights/clears out any previous commands
//welcome ();  //sends welcome message over serial

//showindex(); //sends a list of inputs/modes over the serial
waitFive(); //replaced my delays with loops that do nothing for specified times
 
//tutorial(); //Sends LED Dropsheet for dummies over the serial

}

void loop() {
  voltage (); //check to see if power is still on
  checkinput (); //check to see if there's anything from the keyboard coming in over the serial connection
  snesIn (); //check if anything has been pressed on the SNES Controller
  paletteInput (); //Checks SNES inputs in palatte mode

   switch (mode) { //main menu contains a couple of very basic LED patterns and paint and palette modes
  case 0: random_burst_md(); break;     
  case 1: new_rainbow_loop_md();  break; 
  case 2: random_red();  break;
  case 3: RedGreenBlue ();  break;   
  case 4: white ();  break;
  case 99: paintmode (); showPicture (); break; 
  case 100: paletteMode (); showPalette (); break;
  default: break;
  break;
 
  }
  
}
