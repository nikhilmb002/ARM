/* Write a program to blink 8 active Low LEDs 5 times with a delay 100 ms */

#include<LPC21XX.H>

#include "header.h"

#define LED 0xFF

main(){

	IODIR0 = LED;
	
	for(int i = 0; i < 5; i++){
			
			IOCLR0 = LED;
			
			delay_ms(100);
			
			IOSET0 = LED;
			
			delay_ms(100);	
	}
}