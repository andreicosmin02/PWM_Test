/*
 * ex1.c
 *
 * Created: 3/31/2023 5:16:25 PM
 * Author : andre
 */ 

#include "main_config.h"

#include <avr/io.h>
#include <util/delay.h>

#include "main_defines.h"
#include "main_mcu_init.h"
#include "main_func.h"

uint8_t valori_pwm[] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
uint8_t i = 0;



int main(void)
{
	init_data();
	init_devices();
    while (1) 
    {
		if (softTimerCnt0 == 0)
		{
			OCR1A = (uint8_t)(valori_pwm[i] / 100.0 * 255);
			i = (i < sizeof(valori_pwm) / sizeof(valori_pwm[0]))? i + 1: 0;

			softTimerCnt0 = SW_TIMER0_RELOAD;
		}
    }
}

