/*
 * Timer0.c
 *
 *  Created on: Nov 28, 2022
 *      Author: Ahmed
 */
#include "Timer0.h"
static volatile void (*g_callBackPtr)(void) = NULL_PTR;

void Timer0_init(){
	TCNT0 = 0; //Set Timer initial value to 0

	TIMSK |= (1<<TOIE0); // Enable Timer0 Overflow Interrupt

	/* Configure the timer control register
	 * 1. Non PWM mode FOC0=1
	 * 2. Normal Mode WGM01=0 & WGM00=0
	 * 3. Normal Mode COM00=0 & COM01=0
	 * 4. clock = F_CPU/1024 CS00=1 CS01=0 CS02=1
	 */
	TCCR0 = (1<<FOC0) | (1<<CS02) | (1<<CS00);
}
ISR(TIMER0_OVF_vect)
{
	if(g_callBackPtr != NULL_PTR)
		{
			/* Call the Call Back function in the application after the edge is detected */
			(*g_callBackPtr)(); /* another method to call the function using pointer to function g_callBackPtr(); */
		}
	}
void Timer0_setCallBack(void(*a_ptr)(void))
{
	/* Save the address of the Call back function in a global variable */
	g_callBackPtr = a_ptr;// ahmed ali was here
}
