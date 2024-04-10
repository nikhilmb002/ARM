#include<LPC21XX.H>

#include "header.h"

#define THRE ((U0LSR >> 5) & 1)

#define RDR (U0LSR & 1)

void uart0_init (u32 baud){

	int a[] = {15, 60, 30, 15, 15};
	
	PINSEL0 |= 0x5;
	
	unsigned int result = 0, pclk;
	
	pclk = a[VPBDIV] * 1000000;
	
	result = pclk / (16 * baud);
	
	U0LCR = 0x83;	//8N1 , DLAB = 1
	
	U0DLL = result & 0xff;	// lower byte result
	
	U0DLM = (result >> 8) & 0xff;	// upper byte 
	
	U0LCR = 0x03;	// 8N1, DLAB = 0
}

void uart0_tx(u8 data){

	U0THR = data;
		
	while(THRE == 0);
}

u8 uart0_rx(void){
	
	while(RDR == 0);
	
	return U0RBR;
}

void uart0_tx_string(s8 *ptr){

	while(*ptr != 0){
	
		U0THR = *ptr;
		
		while(THRE == 0);
		
		ptr++;
	
	}
}