/*
 * main_func.c
 *
 * Created: 3/31/2023 5:20:30 PM
 *  Author: andre
 */ 

#include "main_func.h"

void togglePin(volatile uint8_t *port, uint8_t pin)
{
	*port ^= 1 << pin;
}

/*
void setPin(volatile uint8_t *port, uint8_t pin)
{
	*port |= 1 << pin;
}

void resetPin(volatile uint8_t *port, uint8_t pin)
{
	*port &= ~(1 << pin);
}
*/

ISR(TIMER0_COMPA_vect)
{
	softTimerCnt0--;
}