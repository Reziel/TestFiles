#include <SME_basic.h>
#include <Arduino.h>

/*
 Shows The PWM functionalities on the RGB Led

 created 18 Jun 2015

 by Mik (smkk@amel-tech.com)
 */

long randNumberR, randNumberG, randNumberB;

void setup(){
    randomSeed(analogRead(0));
}

void loop(){
  randNumberR = random(0,128);
  randNumberG = random(0,128);
  randNumberB = random(0,128);

  ledGreenLight(randNumberG);
  ledBlueLight(randNumberB);
  ledRedLight(randNumberR);

  delay(500);
}
