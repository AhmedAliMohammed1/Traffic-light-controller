/*  module:PWM
 *
 *  file name:pwm.h
 *
 *  Description:header file for the AVR PWM driver
 *
 *  Author: Mohamed Abdulghani
 */

#ifndef PWM_H_
#define PWM_H_

#include "std_types.h"

#define MAXIMUM_TIMER0_COUNT           255

void PWM_Timer0_Start(uint8 duty_cycle);

#endif /* PWM_H_ */
