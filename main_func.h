/*
 * main_func.h
 *
 * Created: 3/31/2023 5:18:20 PM
 *  Author: andre
 */ 


#ifndef MAIN_FUNC_H_
#define MAIN_FUNC_H_

#include "main_config.h"
#include "main_defines.h"

#include <avr/io.h>
#include <avr/wdt.h>
#include <avr/interrupt.h>

void togglePin(volatile uint8_t *port, uint8_t pin);
ISR(TIMER0_COMPA_vect);

#endif /* MAIN_FUNC_H_ */