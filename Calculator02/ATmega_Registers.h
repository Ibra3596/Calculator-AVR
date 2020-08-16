﻿/*
 * ATmega_Registers.h
 *
 * Created: 25/07/2020 06:28:44 م
 *  Author: Ali
 */ 


#ifndef ATMEGA_REGISTERS_H_
#define ATMEGA_REGISTERS_H_

#include "STD.h"

/*********************************  DIO  ********************************/

#define   DDRA    (*(volatile uint8*)(0x3A))
#define   PORTA   (*(volatile uint8*)(0x3B))
#define   PINA    (*(volatile uint8*)(0x39))

#define   DDRB    (*(volatile uint8*)(0x37))
#define   PORTB   (*(volatile uint8*)(0x38))
#define   PINB    (*(volatile uint8*)(0x36))

#define   DDRC    (*(volatile uint8*)(0x34))
#define   PORTC   (*(volatile uint8*)(0x35))
#define   PINC    (*(volatile uint8*)(0x33))

#define  PORTD    (*(volatile uint8*)(0x32))
#define  PIND     (*(volatile uint8*)(0x30))
#define  DDRD     (*(volatile uint8*)(0x31))

/***************************************External INT***************************************/


#define  SREG			(*(volatile uint8*)(0x5f))
#define  GICR			(*(volatile uint8*)(0x5B))
#define  GIFR			(*(volatile uint8*)(0x5A))
#define  MCUCR		    (*(volatile uint8*)(0x55))
#define  MCUCSR		    (*(volatile uint8*)(0x54))



/************************************ ADC ******************************************/

#define ADMUX			(*(volatile uint8*)(0x027))
#define ADCSRA			(*(volatile uint8*)(0x026))
#define ADCH			(*(volatile uint8*)(0x025))
#define ADCL			(*(volatile uint8*)(0x024))
#define ADC_Adjust		(*(volatile uint8*)(0x024))
#define SFIOR			(*(volatile uint8*)(0x050))



#endif /* ATMEGA_REGISTERS_H_ */