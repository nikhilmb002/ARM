/* communication between two microcontrollers by using UART */

/* main_uart0_tx.c */

#include <LPC21XX.H>

#include "header.h"

main(){

	u8 i;
	
	uart0_init(9600);
	
	while(1){
	
		for(i = 0; i < 26; i++){
	
			uart0_tx('A' + i);
		
			delay_ms(100);
	
		}
	}
}

