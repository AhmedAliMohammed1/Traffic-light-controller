/*
 * Timer0.h
 *
 *  Created on: Nov 28, 2022
 *      Author: Ahmed
 */

#ifndef TIMER0_H_
#define TIMER0_H_
#include "gpio.h"
#include <avr/io.h>
#include <avr/interrupt.h>
#include "common_macros.h"
void Timer0_init();
void Timer0_setCallBack(void(*a_ptr)(void));

#endif /* TIMER0_H_ */
