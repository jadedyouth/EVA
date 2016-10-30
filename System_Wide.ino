void software_Reset(){ //resets the software, this is a soft reset: the loops and integers will start again but apparently deep storage or something isnt
  asm volatile ("  jmp 0");  
} 

//cause you don't want pixels from the last mode squatting in your new mode
void clearsheet () { 
  for(int i = 0; i < LED_COUNT; i++) {
   leds[i] = CHSV(0, 0, 0); }
   LEDS.show(); }

//reads the voltage from the mains
void voltage () { 
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.0 / 1023.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):

//if it's off it tells me over the serial
if (voltage <3) { 
  Serial.print("Warning: Mains Voltage Too Low:"); Serial.print(" "); Serial.print(voltage); Serial.println("v");
  Serial.println("Lighting Disabled To Avoid Overheating");
  Serial.println("Please Reconnect Mains Power or send , over the serial"); }

 
  
while (voltage < 3){
  clearsheet (); //lights off
  int sensorValue = analogRead(A0); //check again and if connected, then continue. 
 float voltage = sensorValue * (5.0 / 1023.0); 
 checkinput (); snesIn (); //always looking for inputs
if (voltage > 3) { Serial.println(""); Serial.println("That's Better, Thanks Babe");break;} //lets you know everything is ok if the voltage comes back

  
} }

void PSU_ON () {digitalWrite(psupin, HIGH);   } //turns psu and pin 13 led on
void PSU_OFF () {digitalWrite(psupin, LOW);  } //turns psu and pin 13 led off. seems like a waste of a pin. maybe i can get it to do something that only needs to work with the PSU on.

void pause (){ //cause sometimes you need to stop and smell the roses...ahem i mean read the serial monitor
int cnt = 0;
while (cnt <1) {
while (Serial.available() > 0){ //cause you don't want to be stuck in pause forever
  Trec = Serial.read();
if (Trec == 'P') {cnt = 2;} //capital P. serial is case sensitive. 
}}  
}

//timing  IF IT CAUSES CONFLICT LATER GIVE THEM DIFFERENT NAMES
void waitOne () { 
unsigned long startTime = millis();
while(millis() - startTime < 250){}
}
void waitTwo() { 
unsigned long startTime = millis();
while(millis() - startTime < 1000){}
}
void waitThree() { 
unsigned long startTime = millis();
while(millis() - startTime < 150){}
}
void waitFour() { 
unsigned long startTime = millis();
while(millis() - startTime < 20){} //replaces thisdelay from the old funkboxing program. thisdelay was a variable. if you want it to be a variable again make "20" "thisdelay" or something.
}
void waitFive() { 
unsigned long startTime = millis();
while(millis() - startTime < 500){}
}
void waitSix() { 
unsigned long startTime = millis();
while(millis() - startTime < 100){}
}
void waitSeven() { 
unsigned long startTime = millis();
while(millis() - startTime < 5000){}
}
void waitEight() { 
unsigned long startTime = millis();
while(millis() - startTime < 600){}
}
void waitNine() { 
unsigned long startTime = millis();
while(millis() - startTime < 30){}
}



