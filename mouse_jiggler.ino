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

#define T_PERIOD 60000
#define T_INITIAL_DELAY 5000
#define T_JUMP 10
// Main loop - move mouse down and up every 5 seconds

void loop()
{
    delay(T_INITIAL_DELAY);
    Mouse.move(0,1,0);
    delay(T_JUMP);
    Mouse.move(0,-1,0);
    delay(T_PERIOD-T_INITIAL_DELAY-T_JUMP);
}
