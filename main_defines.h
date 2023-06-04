/*
 * main_defines.h
 *
 * Created: 3/31/2023 5:18:02 PM
 *  Author: andre
 */ 


#ifndef MAIN_DEFINES_H_
#define MAIN_DEFINES_H_

#include <stdint.h>
#include <stdbool.h>

#define LED0_PORT PORTD
#define LED0_PIN PIND4

#define LED1_PORT PORTD
#define LED1_PIN PIND5

#define LED2_PORT PORTD
#define LED2_PIN PIND6

#define SW_TIMER0_RELOAD 200

uint16_t softTimerCnt0;

#endif /* MAIN_DEFINES_H_ */