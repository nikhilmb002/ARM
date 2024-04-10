/* write a program to shift string char by char */

#include<LPC21XX.H>

#include "header.h"

main(){

	lcd_init();
	
	while(1){
	
		for(int i = 0; i < 16; i++){
			
			lcd_cmd(0x80+i);
			
			lcd_string("Embedded system");
			
			delay_ms(200);
			
			lcd_cmd(0x01);		
		}
	}
}

