/* Write a program to blink P0.0 LED using active high LED using 100 ms delay */

#include<LPC21XX.H>

#include "header.h"

main(){

	IODIR0 = 0x1;	// P0.0 is setting as output direction
	
	while(1){
	
		IOSET0 = 0x1;	// P0.0 pin act as HIGH (TURN ON)
		
		delay_ms(100);	
		
		IOCLR0 = 0x1;	// P0.0 pin act as LOW (TURN OFF)
		
		delay_ms(100);	
	
	}

}

