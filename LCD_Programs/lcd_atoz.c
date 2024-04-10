/* write a program to display A-Z at home position of LCD */

#include<LPC21XX.H>

#include "header.h"

main(){

	lcd_init();
	
	while(1){
	
		for(int i = 0; i < 26; i++){
	
			lcd_cmd(0x80);
			
			lcd_data('A' + i);
				
			delay_ms(200);
			
			lcd_cmd(0x01);
		}
	}
}