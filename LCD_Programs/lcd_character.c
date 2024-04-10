/* write a program to print a character on LCD */

#include<LPC21XX.H>

#include "header.h"

main(){

	lcd_init();
	
	lcd_cmd(0x80);
	
	lcd_data('a');

}