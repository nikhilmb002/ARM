/* communication between two microcontrollers by using UART */

/* main_uart0_rx.c */

#include<LPC21XX.H>

#include "header.h"

main(){

	u8 temp, cnt = 0;
	
	uart0_init(9600);
	
	lcd_init();
	
	lcd_cmd(0x80);
	
	while(1){
		
		temp = uart0_rx();
		
		lcd_data(temp);
		
		cnt++;
		
		if(cnt == 16)
		
			lcd_cmd(0xC0);
			
		if(cnt == 32){
		
				lcd_cmd(0x1);
			
				cnt = 0;
		}
	}
}

