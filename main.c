/*
 * main.c
 *
 *  Created on: Sep 10, 2022
 *      Author: Lenovo
 */

#include <avr/io.h>
#include <util/delay.h>

int main()
{

	DDRA&=(~(1<<0));
	DDRA&=(~(1<<1));
	DDRA&=(~(1<<2));
	DDRC|=(1<<0);
	DDRC|=(1<<1);
	DDRB|=((1<<3));
	PORTB|=((1<<3));
	TCCR0|=(1<<3);
	TCCR0|=(1<<6);
	TCCR0&=(~(1<<4));
	TCCR0|=((1<<5));
	TCCR0|=(1<<2);
	TCCR0&=(~(1<<1));
	TCCR0|=(1<<0);

	OCR0=255;
	while(1)
	{
		OCR0=255*0.5;
		/*_delay_ms(1000);
		OCR0=255*0.25;
		_delay_ms(1000);
		OCR0=255*1;
		_delay_ms(1000);*/
		if(PINA &(1<0))
		{
			PORTC|=(1<<0);
			PORTC&=(~(1<<1));
		}
		else if(PINA &(1<1))
		{
			PORTC|=(1<<1);
						PORTC&=(~(1<<0));
		}
	}
	return 0;
}
