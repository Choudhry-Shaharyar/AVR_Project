/* 
 * File:   newmain.c
 * Author: Shaharyar

 */

#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
    
/*
 * 
 */
int main(int argc, char** argv) {
 DDRD = 0b11111111;    // defines portD as an input// turns everything on
 PORTD = 0b00000000;
            while (1) { // the is an infinite while loop so that the if statement is always being checked

//            // checks to see if PD2 is pressed on PIND
            if((PIND & (1 << PD4)) != 0){ // PD2 acts as an input
               PORTD = 0b0010000; // turn on PD4 by modifying the bits
            }
   
  } 
    return (0);
}
 

