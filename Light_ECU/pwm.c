/*  module:PWM
 *
 *  file name:pwm.c
 *
 *  Description:Source file for the AVR PWM driver
 *
 *  Author: Mohamed Abdulghani
 */

#include"pwm.h"
#include<avr/io.h>
#include"gpio.h"

void PWM_Timer0_Start(uint8 duty_cycle)
{
	TCCR0=(1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS01);
	TCNT0=0;
	OCR0=(uint8)(((uint16) duty_cycle*MAXIMUM_TIMER0_COUNT)/(100));
	GPIO_setupPinDirection(PORTB_ID,PIN3_ID,PIN_OUTPUT);
}
