/*
 * Light_control.c
 *
 *  Created on: Nov 28, 2022
 *      Author: Ahmed
 */

#include "Light_control.h"
void Traffic_inint(){
	GPIO_setupPinDirection(Light_port,RED_PIN,PIN_OUTPUT);
	GPIO_setupPinDirection(Light_port,YELLOW_PIN,PIN_OUTPUT);
	GPIO_setupPinDirection(Light_port,GREEN_PIN,PIN_OUTPUT);

}
