/* program to transmit character from A to Z using UART0*/

#include<LPC21XX.H>

#include "header.h"

main(){

	uart0_init(9600);
	
	while(1){
	
		for(int i = 0; i < 26; i++){
		
				uart0_tx('A' + i); 	// send 'A' - 'Z'

				delay_ms(50);
		}
	}
}