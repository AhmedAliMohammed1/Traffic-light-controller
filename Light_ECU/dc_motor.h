/*  module:DC_MOTOR
 *
 *  file name:dc_motor.h
 *
 *  Description:header file for the AVR dc_motor driver
 *
 *  Author: Mohamed Abdulghani
 */

#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_

#include"std_types.h"

#define DC_MOTOR_PORT_ID            PORTB_ID
#define DC_MOTOR_PIN1_ID            PIN0_ID
#define DC_MOTOR_PIN2_ID            PIN1_ID

typedef enum {
	STOP, CLOCKWISE, ANTICLOCKWISE
} DcMotor_State;

void DcMotor_Init(void);

void DcMotor_Rotate(DcMotor_State state);

#endif /* DC_MOTOR_H_ */
