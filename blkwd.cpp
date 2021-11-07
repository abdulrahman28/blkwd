// This library is created on 03/11/2021 by Yusuf Abdulrahman aka Blaze
// The code is for blinking of LED without delay

#include "Arduino.h"
#include "blkwd.h"

blkwd::blkwd(unsigned int p)
{
pinMode(p, OUTPUT);
pin = p;
}

void blkwd::idle()
{
  t1 = 100;
  t2 = 2000;

  cms = millis();
  if((state == 1) && (cms - pms >= t1))
  {
    state = 0;
    pms = cms;
    digitalWrite(pin, state);
   }
    else if((state == 0) && (cms - pms >= t2))
  {
    state = 1;
    pms = cms;
    digitalWrite(pin, state);
   }
}

void blkwd::flash(float toff)
{
  t1 = 100;
 toff *= 1000;

  cms = millis();
  if((state == 1) && (cms - pms >= t1))
  {
    state = 0;
    pms = cms;
    digitalWrite(pin, state);
   }
    else if((state == 0) && (cms - pms >= toff))
  {
    state = 1;
    pms = cms;
    digitalWrite(pin, state);
   }
}

void blkwd::at(float t)
{
  t *= 1000;

  cms = millis();
  if(cms - pms >= t)
  {
     pms = cms;
     if(state == 0) state = 1;
     else state = 0;
     digitalWrite(pin, state);
  }
}

void blkwd::toggle(float ton, float toff)
{
  ton *= 1000;
 toff *= 1000;

  cms = millis();
  if((state == 1) && (cms - pms >= ton))
  {
    state = 0;
    pms = cms;
    digitalWrite(pin, state);
   }
    else if((state == 0) && (cms - pms >= toff))
  {
    state = 1;
    pms = cms;
    digitalWrite(pin, state);
   }
}

