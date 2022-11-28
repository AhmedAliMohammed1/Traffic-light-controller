/*
 * TrafficLight_ECU.c
 *
 *  Created on: Nov 28, 2022
 *      Author: Ahmed
 */
#include "TrafficLight_ECU.h"
uint8 state=RED,SEQ=Red_SEQ,ticks=0,SEQ1=0,SEQ2=0;
int main(){
	SREG|=(1<<7);
	Timer0_init();
	Timer0_setCallBack(Traffic_control);
	Traffic_inint();
	DcMotor_Init();
	seven_seg_init();
	GPIO_setupPinDirection(PORTD_ID,PIN0_ID,PIN_OUTPUT);
	GPIO_setupPinDirection(PORTD_ID,PIN1_ID,PIN_OUTPUT);
	while(1){
		SEQ1=SEQ/10;
		SEQ2=SEQ%10;
		PORTD=0x01;
		PORTC=(PORTC&0xF0)|(SEQ1&0x0F);
		_delay_ms(1);
		PORTD=0x02;
		PORTC=(PORTC&0xF0)|(SEQ2&0x0F);
		_delay_ms(1);


	}

}
void Traffic_control(){
	ticks++;
	if(ticks==4){
		ticks=0;
	if(state==RED){
		SEQ--;
		GPIO_writePin(Light_port,RED_PIN,LOGIC_HIGH);
		DcMotor_Rotate(CLOCKWISE);
		if(SEQ==0){
			GPIO_writePin(Light_port,RED_PIN,LOGIC_LOW);
			state=YELLOW;
			SEQ=YELLOW_SEQ;

		}

	}else if(state==YELLOW){
		SEQ--;
		GPIO_writePin(Light_port,YELLOW_PIN,LOGIC_HIGH);
		DcMotor_Rotate(STOP);

		if(SEQ==0){
					GPIO_writePin(Light_port,YELLOW_PIN,LOGIC_LOW);
					state=GREEN;
					SEQ=Green_SEQ;

				}

	}else if(state==GREEN){
		SEQ--;
		GPIO_writePin(Light_port,GREEN_PIN,LOGIC_HIGH);
		DcMotor_Rotate(ANTICLOCKWISE);
		if(SEQ==0){
					GPIO_writePin(Light_port,GREEN_PIN,LOGIC_LOW);
					state=RED;
					SEQ=Red_SEQ;

				}
	}
}
}

