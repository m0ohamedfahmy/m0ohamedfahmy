#include <avr/io.h>
#include "config.h"
#include "ADC.h"

void ADC_init( int Reference, int prescaler) {
   // ADMUX = 0x00;
   //ADMUX |= _channel;
    ADMUX |= (Reference << REFS0);
    ADCSRA &= 0xF8;
    ADCSRA |= prescaler;
    ADCSRA |= (1 << ADEN);
}
void ADC_channel(int _channel){
   ADMUX = 0x00;
   ADMUX |= _channel;  
}

void ADC_start_conversion() {
    ADCSRA |= (1<<ADSC);
}

int ADC_read() {
    while(!(ADCSRA & (1<<ADIF)));
    int data = ADCL;
    data |= (ADCH<<8);
    return data;
}
void init_Interrupt_ADC(){
    
    ADCSRA |=(1<<ADIE);
}