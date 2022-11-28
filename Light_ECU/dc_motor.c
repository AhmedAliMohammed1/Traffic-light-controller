/*  module:DC_MOTOR
 *
 *  file name:dc_motor.c
 *
 *  Description:Source file for the AVR dc_motor driver
 *
 *  Author: Mohamed Abdulghani
 */
#include<avr/io.h>
#include"dc_motor.h"
#include"gpio.h"
#include"pwm.h"

void DcMotor_Init(void)
{
	GPIO_setupPinDirection(DC_MOTOR_PORT_ID,DC_MOTOR_PIN1_ID,PIN_OUTPUT);
	GPIO_setupPinDirection(DC_MOTOR_PORT_ID,DC_MOTOR_PIN2_ID,PIN_OUTPUT);
	GPIO_writePin(DC_MOTOR_PORT_ID,DC_MOTOR_PIN1_ID,LOGIC_LOW);
			GPIO_writePin(DC_MOTOR_PORT_ID,DC_MOTOR_PIN2_ID,LOGIC_LOW);
}

void DcMotor_Rotate(DcMotor_State state)
{
	switch(state)
	{
	case STOP:
		GPIO_writePin(DC_MOTOR_PORT_ID,DC_MOTOR_PIN1_ID,LOGIC_LOW);
		GPIO_writePin(DC_MOTOR_PORT_ID,DC_MOTOR_PIN2_ID,LOGIC_LOW);
		break;
	case CLOCKWISE:
		GPIO_writePin(DC_MOTOR_PORT_ID,DC_MOTOR_PIN1_ID,LOGIC_HIGH);
		GPIO_writePin(DC_MOTOR_PORT_ID,DC_MOTOR_PIN2_ID,LOGIC_LOW);
		break;
	case ANTICLOCKWISE:
		GPIO_writePin(DC_MOTOR_PORT_ID,DC_MOTOR_PIN1_ID,LOGIC_LOW);
		GPIO_writePin(DC_MOTOR_PORT_ID,DC_MOTOR_PIN2_ID,LOGIC_HIGH);
		break;
	}

}
