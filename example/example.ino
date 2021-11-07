/* The library is developed by Yusuf Abdulrahman aka Blaze
The library is to blink LED at regular interval without using delay
The library uses millis and it will be very helpful in multitasking project
It can also be adopted to motor control @ regular interval control
blkwd.idle() - to turn on LED for 0.1 and Switching off @ 2sec interval
blkwd.flash(5) - to turn on LED for 0.1sec and Switching off @ 5sec interval(Time specified)
blkwd.at(3) - to turn on LED @ 3sec specified and Switching off @ 3sec interval(Time specified)
blkwd.toggle(1,3) - to turn on LED @ 1sec specified and Switching off @ 3sec interval(Time specified)

For further enquiries or upgrade on the library, pls contact me: yusufabdulrahman05@gmail.com, +2347039886387
*/

#include<blkwd.h> // Calling the Function of blkwd

blkwd blkwd(13);//Selecting the pin of the LED, pin 13

void setup() { 
}

void loop() {
  blkwd.idle();//Blink LED @ pin 13 by turning it ON 0.1sec znd switching it OFF 2sec
 

}
