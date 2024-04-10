/* write a program to shift any character left to right and right to left */

#include<LPC21XX.H>

#include "header.h"

main(){

	lcd_init();
	
	while(1){
		
		for(int i = 0; i < 16; i++){
		
			lcd_cmd(0x80+i);
			
			lcd_data('A');
			
			lcd_cmd(0xcf - i);	// right to left
			
			lcd_data('E');
			
			delay_ms(200);
			
			lcd_cmd(0x01);
		
		}
	
	}

}