/*
 * @file main.c
 *
 * @brief Main source code for the UART program.
 *
 * This file contains the main entry point and function definitions for the UART program.
 *
 * @note For more information regarding the UART module, refer to the
 * Universal Asynchronous Receivers / Transmitters (UARTs) section
 * of the TM4C123GH6PM Microcontroller Datasheet.
 *   - Link: https://www.ti.com/lit/gpn/TM4C123GH6PM
 *
 * @author
 */

#include "TM4C123GH6PM.h"
#include "string.h"
#include "SysTick_Delay.h"
#include "UART0.h"
#include "GPIO.h"
#include "stdio.h"
#include "UART1.h"

int main(void)
{
//	SysTick_Delay_Init();
//	
//	UART0_Init();
//	
//	RGB_LED_Init();
//	
//	while(1)
//{

//char Invalid_CMD[64] = "Invalid Command. Try Again";
//char RGB_LED_RED_CMD[] = "RGB LED RED";
//char RGB_LED_GREEN_CMD[] = "RGB LED GREEN";
//char RGB_LED_BLUE_CMD[] = "RGB LED BLUE";
//char RGB_LED_CYCLE_CMD[] = "RGB LED CYCLE";

//UART0_Output_String("Enter Command: ");
//UART0_Input_String(Invalid_CMD, 64);
//if(strcmp(Invalid_CMD, RGB_LED_RED_CMD) == 0)
//{
//RGB_LED_Output(RGB_LED_RED);
//SysTick_Delay1ms(1000);
//UART0_Output_Newline();
//}
//else if
//(strcmp(Invalid_CMD, RGB_LED_GREEN_CMD) == 0)
//{
//RGB_LED_Output(RGB_LED_GREEN);
//SysTick_Delay1ms(1000);
//UART0_Output_Newline();
//}
//else if
//(strcmp(Invalid_CMD, RGB_LED_BLUE_CMD) == 0)
//{
//RGB_LED_Output(RGB_LED_BLUE);
//SysTick_Delay1ms(1000);
//UART0_Output_Newline();
//}
//else if(strcmp(Invalid_CMD, RGB_LED_CYCLE_CMD) == 0)
//{
//RGB_LED_Output(RGB_LED_RED);
//SysTick_Delay1ms(1000);
//RGB_LED_Output(RGB_LED_GREEN);
//SysTick_Delay1ms(1000);
//RGB_LED_Output(RGB_LED_BLUE);
//SysTick_Delay1ms(1000);
//RGB_LED_Output(RGB_LED_OFF);
//SysTick_Delay1ms(1000);
//UART0_Output_Newline();

//}
//else
//{
//UART0_Output_Newline();
//UART0_Output_String("Invalid Command. Try Again");
//RGB_LED_Output(RGB_LED_OFF);
//SysTick_Delay1ms(1000);
//UART0_Output_Newline();

//}
//}
//return 0;

		SysTick_Delay_Init();
		//23 60 45 
		UART1_Init();
		
		while(1)
		{
			UART1_Output_Character(0x55);
			SysTick_Delay1ms(500);
		}
}