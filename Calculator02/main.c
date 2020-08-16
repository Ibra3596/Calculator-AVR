/*
 * Calculator02.c
 *
 * Created: 8/16/2020 12:51:30 PM
 * Author : Ibrahim
 */ 

//#include "DIO.h"
//#include "LCD.h"
//#include "KeyPad.h"
#include "Calculator.h"
#include "Stack.h"




int main(void)
{
    LCD_Init();
	KeyPad_Init();
	
	
	uint8 button	= 0;
	uint8 operation = 0;
	uint8 result	= 0;
		
	stack inputs ;
	stack term1 ;
	stack term2 ;
	
	init_stack(&inputs);
	init_stack(&term1);
	init_stack(&term2);
	
    while (1) 
    {
		button = KeyPad_GetValue();
		LCD_WriteData(button);
		if (button == '=')
		{
			array_analizer(&inputs , &term1 , &term2 , &operation);
			result = Do_Operation(&term1 , &term2 , operation);
			LCD_GoTo( 1 , 5);
			LCD_Write_Intiger(result);
		}
		else
		{
			push(&inputs , button);
		}
		
		
    }
}

