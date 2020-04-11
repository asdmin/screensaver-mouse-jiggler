/*
 *  NAME: ScreenSaver Mouse Jiggler
 *  DATE: 2016-10-20
 *  DESC: Arduino based mouse emulator, preventing computer screen-saver from
 *  	  kicking in and locking desktop (eg. during forensic investigation).
 *  AUTHOR: nshadov
 *  VERSION: 1.0
 */
 

#include <Mouse.h>

// This is runned once, during device initialization

void setup()
{
  Mouse.begin();
}



// Main loop - move mouse back and forth every 5 seconds

void loop()
{
    delay(60000);
    Mouse.move(5,0,0);
    delay(60000);
    Mouse.move(0,5,0);
    delay(60000);
    Mouse.move(-5,0,0);
    delay(60000);
    Mouse.move(0,-5,0);
}
