//chat page is basically instructional/interactive messages sent over the serial to remind me what everything does.

void welcome () { //startup mode flashes through red, blue and green on all pixels so you can see which are dead while a welcome message loads
   for(int i = 0; i < LED_COUNT; i++) {
   leds[i] = CHSV(0, 255, 255); }
   LEDS.show(); 
   
   Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix(); 
   Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix(); 
   Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix();
   Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix(); 
   
   for(int i = 0; i < LED_COUNT; i++) {
   leds[i] = CHSV(96, 255, 255); }
   LEDS.show(); 
   
   Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix(); 
   Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix(); 
   Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix(); 
   Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix(); 
   
   for(int i = 0; i < LED_COUNT; i++) {
   leds[i] = CHSV(160, 255, 255); }
   LEDS.show(); 
   
   Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix(); Serial.print("."); waitSix(); 
   Serial.println("."); 
 Serial.println(); 
 Serial.println(); 
 Serial.println(); 
 Serial.println(); 
 Serial.println(); 
 Serial.println(); 
 Serial.println(); 
 Serial.println(); 
 Serial.println(); 
 Serial.println(); 
 Serial.println(); 
 Serial.println(); 
 Serial.println(); waitTwo();
   
   clearsheet ();
   
   Serial.print("            "); Serial.print("W"); waitSix(); Serial.print("E"); waitSix(); Serial.print("L"); waitSix(); Serial.print("C"); waitSix(); Serial.print("O"); waitSix(); 
   Serial.print("M"); waitSix(); Serial.print("E"); waitSix(); Serial.print(" "); waitSix(); Serial.print("B"); waitSix(); Serial.print("A"); waitSix(); 
   Serial.print("C"); waitSix(); Serial.print("K"); waitSix(); Serial.print(","); waitSix(); Serial.print(" "); waitSix(); Serial.print("C"); waitSix(); Serial.print("O"); waitSix();
   Serial.print("M"); waitSix(); Serial.print("M"); waitSix(); Serial.print("A"); waitSix(); Serial.print("N"); waitSix(); Serial.print("D"); waitSix(); 
   Serial.print("E"); waitSix(); Serial.println("R");  waitSeven();
 
 Serial.println(); 
 Serial.println(); 
 Serial.println(); 
 Serial.println(); 
}


void showindex() { // basic menu and list of commands
Serial.println();
Serial.println("Electronic Video Agent (EVA)");
waitEight();
Serial.println("Last Updated 28-10-2016"); //////////////////////////////////////////////////////UPDATE DATE i'll find a way to automate this later
waitEight();
Serial.println();
Serial.println("Input Index:");
waitTwo();
Serial.println();
Serial.println("m0: Random Burst");
Serial.println("m1: The Old M88 Rainbow");
Serial.println("m2: Random Red");
Serial.println("m3: RGB Pixel Test Mode");
Serial.println("m4: All White");
Serial.println("m99: Paint Mode");
Serial.println("q: Show Tuortial");
Serial.println("r: Reset");
Serial.println("i: Show Index");
Serial.println(".: PSU OFF");
Serial.println(",: PSU ON");

}

void tutorial() { //this is from an old thing i made. Kept it here cause some of it will be useful later.

 Serial.println();
 Serial.println("This is your 3 step tutorial");
 Serial.println("1)To choose your colour:" );  
 Serial.println("Please select a hue between 0 and 255");
 Serial.println("Enter the letter h and your number (eg h160) in the box above and hit 'send'");
 Serial.println();
 Serial.println("Some examples are:");
 Serial.println("Red Orange Yolo Green Aqua Blue Purple Pink");
 Serial.println("0     32    64   96   128  160   192   224");
 Serial.println();
 Serial.println();
 Serial.println("2)You can also change the speed of the pulse:");
 Serial.println("The fastest speed is 0, The default speed is 9, and the slowest speed is 25");
 Serial.println("18 is twice as slow as 9, while 4 is about twice as fast");
 Serial.println("Enter the letter d and your number (eg d4) in the box above and hit 'send'");
 Serial.println();
 Serial.println();
 Serial.println("3)The final variable is the duration of brightest and darkest points in the pulse");
 Serial.println("OP set this at 200ms and 800ms respectively");
 Serial.println("You can change these with x and y the same way you changed the other settings");
 Serial.println("The max for both is 60000 (a minute)");
 Serial.println();
 Serial.println();
 Serial.println("If you want to see this tutorial again, just enter the letter q and hit send");
 Serial.println();
 Serial.println();
  
} 

void layoutSideways () { //usefule to be able to call up a map of all the pixels whenever
Serial.println();
Serial.println("Pixel layout is staggered and wired serpentine:");
Serial.println("  81            63            45            27.           9" );
Serial.println("         80            62            44.           26.           8");
Serial.println("  82            64.           46            28            10.");
Serial.println("         79            61            43            25            7");
Serial.println("  83            65            47            29            11");
Serial.println("         78.           60            42            24            6");
Serial.println("  84            66            48            30.           12.");
Serial.println("         XX            59            41.           23            5");
Serial.println("  85            67            49.           31            13");
Serial.println("         76.           58            40            22            4");
Serial.println("  86            68            50            32            14");
Serial.println("         75            57            39            21            3");
Serial.println("  87            69            51            33            15");
Serial.println("         74            56            38            20            2");
Serial.println("  88            70            52            34            16");
Serial.println("         73            55            37            19            1");
Serial.println("  89            71            53            35            17");
Serial.println("         72            54            36            18            0");
Serial.println();
Serial.println("Pixels Marked with a . have blown their Green LED, 77 is completely dead");
}



