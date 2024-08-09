/*
 * Challenge1.c
 *
 *  Created on: Jun 4, 2017
 *  Author: Mohamed Tarek
 */

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC  |= 0x07;	 // Configure the first 3-pins in PORTC as output pins
	PORTC &= 0xF8;   // Turn off the 3-leds at the beginning by clear the first 3-bits in PORTC

	while(1)
	{
		PORTC = (PORTC & 0xF8) | 0x01;   // Turn on the first led only (PC0=1,PC1=0,PC2=0)
		_delay_ms(500);

		PORTC = (PORTC & 0xF8) | 0x02;   // Turn on the second led only (PC0=0,PC1=1,PC2=0)
		_delay_ms(500);

		PORTC = (PORTC & 0xF8) | 0x04;   // Turn on the third led only (PC0=0,PC1=0,PC2=1)
		_delay_ms(500);
	}
}



