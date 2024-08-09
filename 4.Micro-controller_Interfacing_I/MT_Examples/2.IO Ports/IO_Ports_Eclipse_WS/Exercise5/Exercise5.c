/*
 * Exercise5.c
 *
 *  Created on: Jul 12, 2022
 *  Author: Mohamed Tarek
 */
#include <avr/io.h>

int main(void)
{
	DDRD &= ~(1<<3);    // Configure pin 3 in PORTD as input pin

	DDRC|= (1<<5);      // Configure pin 5 in PORTC as output pin
	PORTC &= ~(1<<5);   // Set pin 5 in PORTC with value 0 at the beginning(BUZZER OFF)

	while(1)
	{
		if(!(PIND & (1<<3)))       // check if the push button at PD3 is pressed or not
		{
			PORTC |= (1<<5);       // Set pin 5 in PORTC with value 1 (BUZZER ON)
		}
		else
		{
			PORTC &= ~(1<<5);      // Set pin 5 in PORTC with value 0 (BUZZER OFF)
		}
	}
}


