/*
 * main_mcu_init.h
 *
 * Created: 3/31/2023 5:18:36 PM
 *  Author: andre
 */ 


#ifndef MAIN_MCU_INIT_H_
#define MAIN_MCU_INIT_H_

#include "main_config.h"
#include "main_defines.h"

#include <avr/wdt.h>
#include <avr/interrupt.h>

void init_data(void);
void port_init(void);
void timer0_init(void);
void timer1_init(void);
void init_devices(void);


#endif /* MAIN_MCU_INIT_H_ */