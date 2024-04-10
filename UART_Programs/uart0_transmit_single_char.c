/* write a program to send or transmit single character using UART0 */

#include<LPC21XX.H>

main(){

	/* UART0 initialisation */

	PINSEL0 |= 0x5;	
	
	U0LCR = 0x83;	// 8N1, DLAB
	
	U0DLL = 97;	// for 9600 bps
	
	U0DLM = 0;	// for 9600 bps
	
	U0LCR = 0x03;	// 8N1, DLAB = 0
	
	/* send one byte data */
	
	U0THR = 'A';
	
	while(((U0LSR >> 5) & 1) == 0);
}