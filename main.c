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
 * @Edgar Gutierrez
 */

#include "TM4C123GH6PM.h"

#include "SysTick_Delay.h"
//#include "UART0.h"
#include "string.h"
#include "GPIO.h"
#include "UART1.h"

int main(void)
{
	SysTick_Delay_Init();
	
	UART1_Init();
	
//	RGB_LED_Init();
	
	while(1)
	{
		UART1_Output_Character(0x55);
		SysTick_Delay1ms(500);
	}
//		char str_buffer[64];
//		UART0_Output_String("Enter Your Name(s): ");
//		UART0_Input_String(str_buffer, 64);
//		UART0_Output_Newline();
//		
//		UART0_Output_String("Name(s) Received: ");
//		UART0_Output_String(str_buffer);
//		UART0_Output_Newline();
//		SysTick_Delay1ms(500);
//		
////		char str_buffer[32];
//		UART0_Output_String("Enter a character: ");
//		UART0_Input_String(str_buffer, 64);
//		UART0_Output_Newline();
//		
//		UART0_Output_String("Character Received: ");
//		UART0_Output_String(str_buffer);
//		UART0_Output_Newline();
//		SysTick_Delay1ms(500);
//		
//		
////	UART0_Output_String("Hello World");
////	UART0_Output_Newline();
////	SysTick_Delay1ms(500);
//		
//		UART0_Output_String("Enter Decimal Number: ");
//		uint32_t input_decimal = UART0_Input_Unsigned_Decimal();
//		UART0_Output_Newline();
//		SysTick_Delay1ms(500);
//		UART0_Output_String("Output Decimal: ");
//		UART0_Output_Unsigned_Decimal(input_decimal);
//		UART0_Output_Newline();
//		SysTick_Delay1ms(500);
//		
//		UART0_Output_String("Enter Hexadecimal value: ");
//		uint32_t digit  = UART0_Input_Unsigned_Hexadecimal();
//		UART0_Output_Newline();
//		SysTick_Delay1ms(500);
//		UART0_Output_String("Hexadecimal Received: ");
//		UART0_Output_Unsigned_Hexadecimal(digit);
//		UART0_Output_Newline();
//		SysTick_Delay1ms(500);
			
//			char str_buffer[64];
//			UART0_Output_String("Enter Command: ");
//			UART0_Input_String(str_buffer, 64);
//			//UART0_Output_Newline();
//			
//			
			
//			 if (strcmp(str_buffer, "RGB LED RED") == 0) 
//				 {
//            RGB_LED_Output(RGB_LED_RED);
//            //UART0_Output_String("RGB LED RED");
//            UART0_Output_Newline();
//        }
//        // Check if the input string is "RGB LED GREEN"
//        else if (strcmp(str_buffer, "RGB LED GREEN") == 0) 
//					{
//            RGB_LED_Output(RGB_LED_GREEN);
//            //UART0_Output_String("RGB LED GREEN");
//            UART0_Output_Newline();
//        }
//        // Check if the input string is "RGB LED BLUE"
//        else if (strcmp(str_buffer, "RGB LED BLUE") == 0) 
//					{
//            RGB_LED_Output(RGB_LED_BLUE);
//            //UART0_Output_String("RGB LED BLUE");
//            UART0_Output_Newline();
//        }
//					
//				else if (strcmp(str_buffer, "RGB LED CYCLE") == 0) 
//					{
//						RGB_LED_Output(RGB_LED_RED);
//						SysTick_Delay1ms(500);
//						RGB_LED_Output(RGB_LED_GREEN);
//						SysTick_Delay1ms(500);
//            RGB_LED_Output(RGB_LED_BLUE);
//						SysTick_Delay1ms(500);
//						RGB_LED_Output(RGB_LED_OFF);
//						SysTick_Delay1ms(500);
//						
//            //UART0_Output_String("RGB LED BLUE");
//            UART0_Output_Newline();
//					}
//						else if (strcmp(str_buffer, "RGB LED OFF") == 0) 
//					{
//            RGB_LED_Output(RGB_LED_OFF);
//            //UART0_Output_String("RGB LED OFF");
//            UART0_Output_Newline();
//        
//        }

//        SysTick_Delay1ms(1000);
			
//			{
//			if (strcmp(str_buffer, "RGB LED RED") == 0) 
//				
//			RGB_LED_Output(RGB_LED_RED);
//			UART0_Output_String("RGB LED RED");
//			UART0_Input_String(str_buffer, 64);
//			SysTick_Delay1ms(1000);
//			
//			UART0_Output_Newline();
//		}
//			{
//			if (strcmp(str_buffer, "RGB LED GREEN ") == 0) 
//				
//			RGB_LED_Output(RGB_LED_GREEN);
//			UART0_Output_String("RGB LED GREEN");
//			UART0_Input_String(str_buffer, 64);
//			SysTick_Delay1ms(1000);
//			
//			UART0_Output_Newline();
//		}
//			{
//			
//			if (strcmp(str_buffer, "RGB LED BLUE") == 0) 
//				
//			RGB_LED_Output(RGB_LED_BLUE);
//			UART0_Output_String("RGB LED BLUE");
//			UART0_Input_String(str_buffer, 64);
//			SysTick_Delay1ms(1000);
//			
//			UART0_Output_Newline();
//			SysTick_Delay1ms(1000);
//		}


	}

