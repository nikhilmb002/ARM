#include<LPC21XX.H>

#include "header.h"

void delay_ms(u32 i){
	
	int a[] = {15,60,30,15,15};

         unsigned int pclk;

         pclk = a[VPBDIV]*1000;

         T0PC = 0;

         T0PR = pclk - 1;

         T0TC = 0;

         T0TCR = 1;

         while(T0TC < i);

         T0TCR = 0;

}

void delay_sec(u32 i){

	int a[] = {15, 60, 30, 15, 15};
	
	unsigned int pclk;
	
	pclk = a[VPBDIV] * 1000000;
	
	T0PC = 0;
	
	T0PR = pclk - 1;
	
	T0TC = 0;
	
	T0TCR = 1;
	
	while(T0TC < i);
	
	T0TCR = 0;
	
}


