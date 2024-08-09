/*
 * Challenge4.c
 *
 *  Created on: Jul 7, 2021
 *  Author: Mohamed Tarek
 */

#include <avr/io.h>

int main(void)
{
	DDRC &= ~(1<<PC0);	/* Set the PIR pin as input pin */

	DDRB |= (1<<PB0);	/* Set the LED pin as output pin */
	PORTB &= ~(1<<PB0); /* Set pin 0 in PORTB with value 0 at the beginning(LED OFF) */

    while(1)
    {
    	if(PINC & (1<<PC0)) /* Check for high signal (motion detected) */
    	{
    		PORTB |= (1<<PB0); /* LED ON when the motion is detect */
    	}
    	else
    	{
    		PORTB &= ~(1<<PB0); /* LED OFF */
    	}
	}
}


