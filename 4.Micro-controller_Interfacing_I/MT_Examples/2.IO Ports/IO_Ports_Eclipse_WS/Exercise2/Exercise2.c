/*
 * Exercise2.c
 *
 * Created: 11/22/2013 2:17:05 PM
 * Author: Mohamed Tarek
 */


#include <avr/io.h>
#include <util/delay.h> // for delay function

int main(void)
{
	DDRC = DDRC | (1<<PC2);   // Configure pin 2 in PORTC as output pin

	PORTC &= ~(1<<PC2);       // Set pin 2 in PORTC with value 0 at the beginning(LED OFF)

    while(1)
    {
    	PORTC = PORTC & ~(1<<PC2);   // Set pin 2 in PORTC with value 0 (LED OFF)
		_delay_ms(1000);
		PORTC = PORTC | (1<<PC2);    // Set pin 2 in PORTC with value 1 (LED ON)
		_delay_ms(1000);
		/************ Another Method *************
		PORTC = PORTC ^ (1<<PC2);    // Toggle value of pin 2 in PORTC (LED Toggle)
		_delay_ms(1000);
		******************************************/
    }
}
