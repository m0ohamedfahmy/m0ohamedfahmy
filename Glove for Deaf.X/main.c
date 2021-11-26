/*
 * File:   main.c
 * Author: mohamed
 *
 * Created on November 14, 2021, 10:51 AM
 */
#include <avr/io.h>
#include "config.h"
#include "loop.h"
int main(void) {
    ADC_init(_VCC, _prescaler_128);
    lcd_init();
    while (1) {
        ADC_Channel_Increment();
        ADC_Save_Read();
        Operations_Move_Hand();
    }
    return 0;
}
