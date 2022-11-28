/*
 * Seven_Seg.c
 *
 *  Created on: Nov 28, 2022
 *      Author: Ahmed
 */
#include "Seven_Seg.h"
void seven_seg_init(){
	GPIO_setupPortDirection(PORTC_ID,PORT_OUTPUT);
}
void seven_seg_deinit(){
	GPIO_setupPortDirection(PORTC_ID,PORT_INPUT);
}
