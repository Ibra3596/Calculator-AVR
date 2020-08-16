/*
 * Calculator.h
 *
 * Created: 8/16/2020 12:54:46 PM
 *  Author: Ibrahim
 */ 


#ifndef CALCULATOR_H_
#define CALCULATOR_H_
#include "STD.h"
#include "KeyPad.h"
#include "LCD.h"
#include "Stack.h"


void array_analizer(stack* inputs , stack* term1 , stack* term2 , uint8* operation);

sint16 Do_Operation(stack* term1 , stack* term2 , uint8 operation);

//uint16  string_to_int( uint8* arr);

uint16  stack_to_int( stack* s);



#endif /* CALCULATOR_H_ */