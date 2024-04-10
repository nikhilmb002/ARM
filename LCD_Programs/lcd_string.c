/* write a program to display string char by char */

#include<LPC21XX.H>

#include "header.h"

main(){

	lcd_init();
	
	while(1){
		
		lcd_cmd(0x80);
		
		lcd_string("Embedded system");
	
	}

}