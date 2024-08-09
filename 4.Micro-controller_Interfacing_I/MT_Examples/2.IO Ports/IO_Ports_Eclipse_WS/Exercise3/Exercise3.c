/*
 * Exercise3.c
 *
 * Created: 11/22/2013 2:31:27 PM
 * Author: Mohamed Tarek
 */

#include <avr/io.h>

int main(void)
{
	DDRB &= ~(1<<PB0) & ~(1<<PB1);  // configure pin 0 and pin 1 in PORTB as input pins.
	DDRC |= (1<<PC0) | (1<<PC1);    // configure pin 0 and pin 1 in PORTC as output pins.
	
	// Set pin 0 and pin 1 in PORTC with value 1 at the beginning (LED1 and LED2 are OFF)
	PORTC |= (1<<PC0) | (1<<PC1);
	
    while(1)
    {
    	if(PINB & (1<<PB0))       // Check if the first switch at PB0 is pressed or not
    	{
    		PORTC &= ~(1<<PC0);   // Set pin 0 in PORTC with value 0 (LED1 ON)
    	}
    	else
    	{
    		PORTC |= (1<<PC0);    // Set pin 0 in PORTC with value 1 (LED1 OFF)
    	}
    	if(PINB & (1<<PB1))       // Check if the second switch at PB1 is pressed or not
    	{
    		PORTC &= ~(1<<PC1);   // Set pin 1 in PORTC with value 0 (LED2 ON)
    	}
    	else
    	{
    		PORTC |= (1<<PC1);    // Set pin 1 in PORTC with value 1 (LED2 OFF)
    	}
    }
}
