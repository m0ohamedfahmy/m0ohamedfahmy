#include <avr/io.h>
#include "config.h"
int result[5];
void ADC_Channel_Increment(){
    int counter = 0;
        ADC_channel(counter++);   
    //*********** IF Print reading ADC to LCD ***********//    
       /*
        ADC_start_conversion();
        int x = ADC_read();
        if (counter == 4) {
            lcd_goto(_ROW1, 0);
        }
        lcd_write_num(x);
        lcd_write(' '); */
        ////////////////////////////////////////////////////////////////////////////
        _delay_ms(200);
        if (counter == 5) {
            counter = 0;
            lcd_clear();
        }
}
void ADC_Save_Read(){
    
        for (int i = 0; i < 5; i++) {
            ADC_channel(i);
            ADC_start_conversion();
            result[i] = ADC_read();
            lcd_clear();
        }
}
void Operations_Move_Hand(){
     if (result[0] == 1023 &&
                result[1] == 461 &&
                result[2] == 1023 &&
                result[3] == 461 &&
                result[4] == 1023) {
            Write_you();
        } else if (result[0] == 1023 &&
                result[1] == 1023 &&
                result[2] == 461 &&
                result[3] == 461 &&
                result[4] == 1023) {
            Write_I_M_Watching();
        } else if (result[0] == 461 &&
                result[1] == 1023 &&
                result[2] == 461 &&
                result[3] == 461 &&
                result[4] == 0) {
            Write_REALLY_I_LOVE_YOU();
        } else if (result[0] == 461 &&
                result[1] == 1023 &&
                result[2] == 461 &&
                result[3] == 1023 &&
                result[4] == 461) {
            Write_I_LOVE_YOU();
        } else if (result[0] == 1023 &&
                result[1] == 461 &&
                result[2] == 0 &&
                result[3] == 1023 &&
                result[4] == 461) {
            Write_THIS_IS_TERRIBLE();
        } else if (result[0] == 461 &&
                result[1] == 1023 &&
                result[2] == 0 &&
                result[3] == 461 &&
                result[4] == 1023) {
            Write_I_WISH_YOU_A_HAPPY_LIFE();
        } else if (result[0] == 0 &&
                result[1] == 461 &&
                result[2] == 1023 &&
                result[3] == 0 &&
                result[4] == 461) {
            Write_EXCELLENT_WORK();
        }
}