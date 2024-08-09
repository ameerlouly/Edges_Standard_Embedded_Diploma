/*
 * Exercise5.c
 *
 * Created: 11/22/2013 2:43:10 PM
 * Author: Mohamed Tarek
 */

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	unsigned char num = 0;
	DDRD  = DDRD & ~(1<<PD4); // configure pin 4 in PORTD as input pin
	DDRC |= 0x0F; // configure first four pins of PORTC as output pins
	
	// initialize the 7-segment with value 0 by clear the first four bits in PORTC
	PORTC &= 0xF0;
	
    while(1)
    {
		if( PIND & (1<<PD4) ) // check if the push button at PD4 is pressed or not
		{
			_delay_ms(30);
			if( PIND & (1<<PD4) ) //second check due to switch bouncing
			{
				// check if overflow occurs at the 7-segment as its maximum count is 9
				if((PORTC & 0x0F) == 9)
				{
					num = 0;
				}
				else
				{
					// increment 7-segment every press
					num++;
				}
				// Display the required number on the 7-segment
				PORTC = (PORTC & 0xF0) | (num & 0x0F);
			}
			while( PIND & (1<<PD4) ){} // wait until switch is released
		}									   
    }
}
