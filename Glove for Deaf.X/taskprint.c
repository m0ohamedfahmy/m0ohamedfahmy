#include<avr/io.h>
#include"config.h"

void Write_you() {
    char str[] = "YOU";
    lcd_goto(_ROW1, 5);
    lcd_write_str(str);
    _delay_ms(500);
}
void Write_I_M_Watching(){
   char str[] = "I'M Watching";
            lcd_goto(_ROW1, 1);
            lcd_write_str(str);
            _delay_ms(500); 
}
void Write_REALLY_I_LOVE_YOU(){
   char str[] = "REALLY ";
            lcd_goto(_ROW0, 6);
            lcd_write_str(str);
            char str1[] = "I LOVE YOU";
            lcd_goto(_ROW1, 4);
            lcd_write_str(str1);
            _delay_ms(500); 
}
void Write_I_LOVE_YOU(){
    char str[] = "I LOVE YOU";
            lcd_goto(_ROW1, 1);
            lcd_write_str(str);
            _delay_ms(500);
}
void Write_THIS_IS_TERRIBLE(){
    char str[] = "THIS IS TERRIBLE";
            lcd_goto(_ROW0, 1);
            lcd_write_str(str);
            _delay_ms(500);
}
void Write_I_WISH_YOU_A_HAPPY_LIFE(){
     char str[] = "I WISH YOU";
            lcd_goto(_ROW0, 3);
            lcd_write_str(str);
            char str1[] = "A HAPPY LIFE";
            lcd_goto(_ROW1, 2);
            lcd_write_str(str1);
            _delay_ms(500);
}
void Write_EXCELLENT_WORK(){
    char str[] = "EXCELLENT WORK";
            lcd_goto(_ROW0, 1);
            lcd_write_str(str);
            _delay_ms(500);
}