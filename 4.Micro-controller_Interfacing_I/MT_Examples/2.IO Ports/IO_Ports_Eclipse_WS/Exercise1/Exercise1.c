/*
 * Exercise1.c
 *
 *  Created on: Jun 4, 2017
 *  Author: Mohamed Tarek
 */

#include <avr/io.h>

int main(void)
{
	/********** Initialization Code **********/
	DDRD &= ~(1<<2);  // Configure pin 2 in PORTD as input pin

	DDRC |= (1<<1);   // Configure pin 1 in PORTC as output pin
	PORTC &= ~(1<<1); // Set pin 1 in PORTC with value 0 at the beginning(LED OFF)

	while(1)
	{
		/********** Application Code **********/
		if(!(PIND & (1<<2)))       // check if the push button at PD2 is pressed or not
		{
			PORTC |= (1<<1);       // Set pin 1 in PORTC with value 1 (LED ON)
		}
		else
		{
			PORTC &= ~(1<<1);      // Set pin 1 in PORTC with value 0 (LED OFF)
		}
	}
}

