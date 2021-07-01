/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/karissapatel/Labs/Lab1/src/Lab1.ino"


void setup();
void loop();
#line 3 "/Users/karissapatel/Labs/Lab1/src/Lab1.ino"
SYSTEM_MODE(MANUAL); // 
SYSTEM_THREAD(ENABLED); // 
 

void setup() {
  
  
  
  pinMode(D6, OUTPUT);
 

}


void loop() {
  digitalWrite(D6, LOW);
  delay(1000); 
  digitalWrite(D6, HIGH);
  delay(1000);

}