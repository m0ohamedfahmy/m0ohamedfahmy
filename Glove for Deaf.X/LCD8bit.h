/* 
 * File:   LCD8bit.h
 * Author: mohamed
 *
 * Created on November 14, 2021, 10:52 AM
 */

#ifndef LCD8BIT_H
#define	LCD8BIT_H

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif
#define lcd_data_Dir        _PD
#define lcd_data            _PD

#define lcd_cotrol          _PC
#define lcd_cotrol_Dir      _PC
#define RS                  PC0
#define RW                  PC1
#define EN                  PC2

#define _8bit             0x38
#define _D_o_c_Off        0x0c
#define entry             0x06
#define _return           0x02
#define _ROW0              0
#define _ROW1              1

void lcd_init();
void lcd_write(char data);
void lcd_write_str(char * str);
void lcd_write_num(int  num);
void lcd_write_cmd(char cmd);
void lcd_enabel();
void lcd_clear();
void lcd_goto(int ROW ,int column);
#endif	/* LCD8BIT_H */

