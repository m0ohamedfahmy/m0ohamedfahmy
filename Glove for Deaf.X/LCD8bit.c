#include <avr/io.h>
#include "config.h"
#include <stdlib.h>

void lcd_init() {
    setPortDir(lcd_data_Dir, OUT);
    setPinDir(lcd_cotrol_Dir, RS, OUT);
    setPinDir(lcd_cotrol_Dir, RW, OUT);
    setPinDir(lcd_cotrol_Dir, EN, OUT);
    setPinData(lcd_cotrol, RW, OFF);

    /// config

    _delay_ms(10);
    lcd_clear();
    //_delay_ms(50);
    lcd_write_cmd(_8bit);
    _delay_ms(50);
    lcd_write_cmd(_D_o_c_Off);
    _delay_ms(50);
    lcd_write_cmd(entry);
    _delay_ms(50);
    lcd_write_cmd(_return);
    _delay_ms(50);

}

void lcd_enabel() {
    setPinData(lcd_cotrol, EN, ON);
    _delay_ms(1);
    setPinData(lcd_cotrol, EN, OFF);

}

void lcd_write(char data) {
    setPinData(lcd_cotrol, RS, ON);
    setPortData(lcd_data, data);
    lcd_enabel();
}

void lcd_write_cmd(char cmd) {
    setPinData(lcd_cotrol, RS, OFF);
    setPortData(lcd_data, cmd);
    lcd_enabel();

}

void lcd_clear() {
    lcd_write_cmd(0x01);
    _delay_ms(1);
}

void lcd_write_str(char * str) {
    for (int i = 0; str[i] != '\0'; i++) {

        lcd_write(str[i]);

    }


}

void lcd_write_num(int num) {
    char buffer[11];
    itoa(num, buffer, 10);
    lcd_write_str(buffer);

}

void lcd_goto(int ROW, int column) {
    switch (ROW) {
        case _ROW0:
            lcd_write_cmd(0x80 | column);
            break;
        case _ROW1:
            lcd_write_cmd(0xC0 | column);
            break;

    }


}
