/*
 * Light_control.h
 *
 *  Created on: Nov 28, 2022
 *      Author: Ahmed
 */

#ifndef LIGHT_CONTROL_H_
#define LIGHT_CONTROL_H_
#include "common_macros.h"
#include"std_types.h"
#include "gpio.h"
#define Light_port PORTA_ID
#define RED_PIN PIN2_ID
#define YELLOW_PIN PIN1_ID
#define GREEN_PIN PIN0_ID
void Traffic_inint();




#endif /* LIGHT_CONTROL_H_ */
