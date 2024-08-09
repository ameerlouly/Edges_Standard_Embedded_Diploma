/*
 * Challenge2.c
 *
 * Created: 9/5/2021 2:24:15 AM
 * Author: Mohamed Tarek
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRA  &=  ~(1<<PA3) & ~(1<<PA4); // Configure pin 3 and pin 4 in PORTA as input pin

	DDRD  = 0xFF; // Configure all pins in PORTD as output pins
	PORTD = 0;    // Turn off all LEDS
	
    while(1)
    {
		if(PINA & (1<<PA3))      // check if the first push button at PA3 is pressed or not
		{
			_delay_ms(30);
			if(PINA & (1<<PA3))  //second check due to switch bouncing
			{
				PORTD = 0x55;    // Turn on even LEDS numbers
				_delay_ms(500);
				PORTD = 0;       // Turn off all LEDS
				_delay_ms(500);
			}
		}
		else if(PINA & (1<<PA4)) // check if the second push button at PA4 is pressed or not
		{
			_delay_ms(30);
			if(PINA & (1<<PA4))  //second check due to switch bouncing
			{
				PORTD = 0xAA;    // Turn on odd LEDS numbers
				_delay_ms(500);
				PORTD = 0;       // Turn off all LEDS
				_delay_ms(500);
			}
		}
		else
		{
			PORTD = 0;           // Turn off all LEDS
		}
    }
}
