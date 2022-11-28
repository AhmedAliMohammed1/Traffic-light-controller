/*
 * TrafficLight_ECU.h
 *
 *  Created on: Nov 28, 2022
 *      Author: Ahmed
 */

#ifndef TRAFFICLIGHT_ECU_H_
#define TRAFFICLIGHT_ECU_H_
#include "Light_control.h"
#include "dc_motor.h"
#include "Seven_Seg.h"
#include "Light_control.h"
#include <avr/io.h>
#include <avr/interrupt.h>
#include "Timer0.h"
#include "common_macros.h"
#include "std_types.h"
#include "util/delay.h"
#define Red_SEQ 30
#define Green_SEQ 30
#define YELLOW_SEQ 5
typedef enum{
	RED,YELLOW,GREEN
}Traffic_colors;
void Traffic_control();
#endif /* TRAFFICLIGHT_ECU_H_ */
