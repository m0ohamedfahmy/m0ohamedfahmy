/* 
 * File:   config.h
 * Author: mohamed
 *
 * Created on November 14, 2021, 10:53 AM
 */

#ifndef CONFIG_H
#define	CONFIG_H

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#define F_CPU 16000000UL
#include <util/delay.h>

#define ON     1
#define OFF    0

#define _PA    0
#define _PB    1
#define _PC    2
#define _PD    3


#define IN     0
#define OUT    1
#include "IO.h"
#include "LCD8bit.h"
#include "ADC.h"
#include <avr/interrupt.h>
#include "taskprint.h"
#include"loop.h"
#endif	/* CONFIG_H */

