/*
 * Exercise4.c
 *
 * Created: 11/22/2013 2:34:51 PM
 *  Author: Mohamed Tarek
 */

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	unsigned char flag = 0;    // button flag
	DDRB = DDRB & (~(1<<PB0)); // Configure pin 0 in PORTB as input pin
	PORTB |= (1<<PB0);         // Activate the internal pull up resistor at PB0
	
	DDRC = DDRC | (1<<PC0);    // Configure pin 0 in PORTC as output pin
	PORTC = PORTC | (1<<PC0);  // Set pin 0 in PORTC with value 1 at the beginning(LED OFF)
	
    while(1)
    {
		if(!(PINB & (1<<PB0))) // check if the push button at PB0 is pressed or not
		{
			_delay_ms(30);
			if(!(PINB & (1<<PB0))) //second check due to switch de-bouncing
			{
				if(flag == 0)
				{
					PORTC = PORTC ^ (1<<PC0); // Toggle value of pin 0 in PORTC (LED Toggle)
					//set the button flag value to 1 to not enter here again until the button is released.
					flag = 1;
				}
			}
		}
		else
		{
			// button is released reset the button flag to value 0 again.
			flag = 0;
		}
    }
}
