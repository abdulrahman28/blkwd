// This library is created on 03/11/2021 by Yusuf Abdulrahman aka Blaze
// The code is for blinking of LED without delay

#ifndef blkwd_h
#define blkwd_h

#include "Arduino.h"


//Blink Without Delay
class blkwd
{
public:
  blkwd(unsigned int p);
  void idle(); 
  void flash(float toff);
  void at(float t);
  void toggle(float ton, float toff);
  
private:
  unsigned long pms = 0, cms;
  unsigned int state = 0, t1, t2, pin;
};


#endif