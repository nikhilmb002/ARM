/* program to transmit a string using UART0 */

#include<LPC21XX.H>

#include "header.h"

 main(){

	uart0_init(9600);
	
	uart0_tx_string("Embedded \r\n");
}

