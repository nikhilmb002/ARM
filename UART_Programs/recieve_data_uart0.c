/* program to recieve data using UART0 */

#include<LPC21XX.H>

#include "header.h"

main(){
	
	u8 temp;
	
	uart0_init(9600);
	
	lcd_init();
	
	lcd_cmd(0x80);
	
	while(1){
		
		temp = uart0_rx();
		
		lcd_data(temp);
	
	}
}

