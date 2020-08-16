/*
 * Calculator.c
 *
 * Created: 8/16/2020 12:54:28 PM
 *  Author: Ibrahim
 */ 

#include "Calculator.h"





void array_analizer(stack* inputs , stack* term1 ,stack* term2 , uint8* operation)
{
	uint8 i = 0;
	uint8 toggle_secterm = 0;
	for (i=0 ; i <= (inputs->top) ; i++)
	{
		if((inputs->arr[i]) == '+' ||(inputs->arr[i]) == '-' ||(inputs->arr[i]) == '*' ||(inputs->arr[i]) == '/')
		{
			toggle_secterm = 1;
			*operation = inputs->arr[i];
		}
		
		
		switch(toggle_secterm)
		{
			case 0:
			push(term1,(inputs->arr[i]));
			break;
			
			case 1:
			push(term2,(inputs->arr[i]));
			break;
			
			default:
			break;
		}
		
	}
	
}

sint16 Do_Operation(stack* term1 , stack* term2 ,uint8 operation)
{
	uint16	 t1			= 0;
	uint16	 t2			= 0;
	sint16	 restult	= 0;
	
	t1 = stack_to_int(&term1);
	t2 = stack_to_int(&term2);
	
	switch(operation)
	{
		case '+':
		restult = t1 + t2 ;
		break;
		
		case '-':
		restult = t1 - t2 ;
		break;
		
		case '*':
		restult = t1 * t2 ;
		break;
		
		case '/':
		restult = t1 / t2 ;
		break;
		
		default:
		break;
	}
	return restult;
	
	
	
}


	
uint16  stack_to_int( stack* s)
{
	uint8 i = 0;
	uint16 value = 0;

	for ( i = 0; i <= s->top;  ++i)

	value = value * 10 + ((s->arr[i]) - '0');

	return value;
}

/*
uint16  string_to_int( uint8* arr)
{
	uint8 i = 0;
	uint16 value = 0;

	for ( i = 0; (arr[i]) != '\0';  ++i)

	value = value * 10 + ((arr[i]) - '0');

	return value;
}
*/