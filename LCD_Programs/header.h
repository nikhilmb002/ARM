typedef unsigned int u32;

typedef signed int s32;

typedef unsigned char u8;

typedef signed char s8;

extern void delay_ms(u32);

extern void delay_sec(u32);

extern void lcd_data(u8);

extern void lcd_cmd(u32);

extern void lcd_init(void);

extern void lcd_string(s8 *);

