/*
 * main_mcu_init.c
 *
 * Created: 3/31/2023 5:20:46 PM
 *  Author: andre
 */ 
#include "main_mcu_init.h"

void init_data(void)
{
	softTimerCnt0 = SW_TIMER0_RELOAD;
}

void port_init(void)
{
	DDRD = 0xFF;
	PORTD = 0x00;
	
	DDRB = 0xFF;
	PORTB = 0x00;
}

void timer0_init(void)
{
	 TCCR0A = (1 << WGM01); // Timer0 in CTC mode
	 TCCR0B = (1 << CS02); // prescaler 256
	 OCR0A = 62; 

	 TIMSK0 |= (1 << OCIE0A);
}

void timer1_init(void)
{
	 TCCR1A |= (1 << WGM10) | (1 << COM1A1); // Fast PWM, non-inverted output on OC1A pin (PD6)
	 TCCR1B |= (1 << WGM12) | (1 << CS11);
}

void init_devices(void)
{
	port_init();
	timer0_init();
	timer1_init();
	sei();	
}