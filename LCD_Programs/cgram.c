/* write a program to print customized character using CGRAM */

#include<LPC21XX.H>

#include "header.h"

unsigned char a[] = {0x00, 0x0A, 0x1F, 0x1F, 0xE, 0x04, 0x00, 0x00};

	void lcd_cgram(void){
		
		lcd_cmd(0x40);
		
		for(int i = 0; i < 8; i++){
		
			lcd_data(a[i]);
		
		}
	}
	
	
	main(){
	
		lcd_init();
		
		lcd_cgram();
		
		lcd_cmd(0x80);
		
		lcd_data(0);
		
	}