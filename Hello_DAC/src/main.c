/*
 * main.c
 *
 *  Created on: Apr 18, 2024
 *      Author: User
 */
#include "../include/STD_TYPES.h"
#include "../include/BIT_MATH.h"
#include "../include/RCC_interface.h"
#include "../include/GPIO_interface.h"
#include "../include/Myarr.h"
#include "../include/STK_interface.h"



void main(void)
{
	RCC_voidInit();
	MSTK_voidInit();
	RCC_voidEnablePeripheralClock(RCC_AHB,RCC_AHB_GPIOAEN);
	MGPIO_voidSetPinOutputSpeed(GPIO_PORTA , GPIO_PIN0,GPIO_LOW_SPEED);
	MGPIO_voidSetPinOutputSpeed(GPIO_PORTA , GPIO_PIN1,GPIO_LOW_SPEED);
	MGPIO_voidSetPinOutputSpeed(GPIO_PORTA , GPIO_PIN2,GPIO_LOW_SPEED);
	MGPIO_voidSetPinOutputSpeed(GPIO_PORTA , GPIO_PIN3,GPIO_LOW_SPEED);
	MGPIO_voidSetPinOutputSpeed(GPIO_PORTA , GPIO_PIN4,GPIO_LOW_SPEED);
	MGPIO_voidSetPinOutputSpeed(GPIO_PORTA , GPIO_PIN5,GPIO_LOW_SPEED);
	MGPIO_voidSetPinOutputSpeed(GPIO_PORTA , GPIO_PIN6,GPIO_LOW_SPEED);
	MGPIO_voidSetPinOutputSpeed(GPIO_PORTA , GPIO_PIN7,GPIO_LOW_SPEED);
	MGPIO_voidSetPinMode(GPIO_PORTA, GPIO_PIN0, GPIO_OUTPUT);
	MGPIO_voidSetPinMode(GPIO_PORTA, GPIO_PIN1, GPIO_OUTPUT);
	MGPIO_voidSetPinMode(GPIO_PORTA, GPIO_PIN2, GPIO_OUTPUT);
	MGPIO_voidSetPinMode(GPIO_PORTA, GPIO_PIN3, GPIO_OUTPUT);
	MGPIO_voidSetPinMode(GPIO_PORTA, GPIO_PIN4, GPIO_OUTPUT);
	MGPIO_voidSetPinMode(GPIO_PORTA, GPIO_PIN5, GPIO_OUTPUT);
	MGPIO_voidSetPinMode(GPIO_PORTA, GPIO_PIN6, GPIO_OUTPUT);
	MGPIO_voidSetPinMode(GPIO_PORTA, GPIO_PIN7, GPIO_OUTPUT);
	while(1)
	{
		for (u32 Local_LoopCounter=0 ; Local_LoopCounter<56080;Local_LoopCounter++)
		{
		MGPIO_voidSetPinValue(GPIO_PORTA , GPIO_PIN0 , GET_BIT(MyMusic_raw[Local_LoopCounter],0));
		MGPIO_voidSetPinValue(GPIO_PORTA , GPIO_PIN1 , GET_BIT(MyMusic_raw[Local_LoopCounter],1));
		MGPIO_voidSetPinValue(GPIO_PORTA , GPIO_PIN2 , GET_BIT(MyMusic_raw[Local_LoopCounter],2));
		MGPIO_voidSetPinValue(GPIO_PORTA , GPIO_PIN3 , GET_BIT(MyMusic_raw[Local_LoopCounter],3));
		MGPIO_voidSetPinValue(GPIO_PORTA , GPIO_PIN4 , GET_BIT(MyMusic_raw[Local_LoopCounter],5));
		MGPIO_voidSetPinValue(GPIO_PORTA , GPIO_PIN5 , GET_BIT(MyMusic_raw[Local_LoopCounter],5));
		MGPIO_voidSetPinValue(GPIO_PORTA , GPIO_PIN6 , GET_BIT(MyMusic_raw[Local_LoopCounter],6));
		MGPIO_voidSetPinValue(GPIO_PORTA , GPIO_PIN7 , GET_BIT(MyMusic_raw[Local_LoopCounter],7));
		MSTK_voidSetBusyWait(255);

		}

	}
}





