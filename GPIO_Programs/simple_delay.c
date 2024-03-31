/* Program to generate delay of 1 sec */

#include<LPC21XX.H>

main(){

	T0PC = 0;	// starting count value
	
	T0PR = 15000000 - 1;
	
	T0TC = 0;	
	
	T0TCR = 1;	// Starting Timer0
	
	while(T0TC < 1); // Waiting for Timer0	// Overflow condition 
	
	T0TCR = 0;	// stop Timer0
}