/*
 * Challenge3.c
 *
 * Created: 11/22/2013 2:43:10 PM
 *  Author: Mohamed Tarek
 */

#include <avr/io.h>
#include <util/delay.h>

/*
 * Common Cathode 7-Segment Connection in Eta32mini board:
 * A --> PA1
 * B --> PA2
 * C --> PA3
 * D --> PA4
 * E --> PA5
 * F --> PA6
 * G --> PA7
 */
void Eta32mini_SevenSegment_Display(unsigned char value)
{
	switch(value)
	{
	case 0:
		PORTA |= (1<<1);
		PORTA |= (1<<2);
		PORTA |= (1<<3);
		PORTA |= (1<<4);
		PORTA |= (1<<5);
		PORTA |= (1<<6);
		PORTA &= ~(1<<7);
		break;
	case 1:
		PORTA &= ~(1<<1);
		PORTA |= (1<<2);
		PORTA |= (1<<3);
		PORTA &= ~(1<<4);
		PORTA &= ~(1<<5);
		PORTA &= ~(1<<6);
		PORTA &= ~(1<<7);
		break;
	case 2:
		PORTA |= (1<<1);
		PORTA |= (1<<2);
		PORTA &= ~(1<<3);
		PORTA |= (1<<4);
		PORTA |= (1<<5);
		PORTA &= ~(1<<6);
		PORTA |= (1<<7);
		break;
	case 3:
		PORTA |= (1<<1);
		PORTA |= (1<<2);
		PORTA |= (1<<3);
		PORTA |= (1<<4);
		PORTA &= ~(1<<5);
		PORTA &= ~(1<<6);
		PORTA |= (1<<7);
		break;
	case 4:
		PORTA &= ~(1<<1);
		PORTA |= (1<<2);
		PORTA |= (1<<3);
		PORTA &= ~(1<<4);
		PORTA &= ~(1<<5);
		PORTA |= (1<<6);
		PORTA |= (1<<7);
		break;
	case 5:
		PORTA |= (1<<1);
		PORTA &= ~(1<<2);
		PORTA |= (1<<3);
		PORTA |= (1<<4);
		PORTA &= ~(1<<5);
		PORTA |= (1<<6);
		PORTA |= (1<<7);
		break;
	case 6:
		PORTA |= (1<<1);
		PORTA &= ~(1<<2);
		PORTA |= (1<<3);
		PORTA |= (1<<4);
		PORTA |= (1<<5);
		PORTA |= (1<<6);
		PORTA |= (1<<7);
		break;
	case 7:
		PORTA |= (1<<1);
		PORTA |= (1<<2);
		PORTA |= (1<<3);
		PORTA &= ~(1<<4);
		PORTA &= ~(1<<5);
		PORTA &= ~(1<<6);
		PORTA &= ~(1<<7);
		break;
	case 8:
		PORTA |= (1<<1);
		PORTA |= (1<<2);
		PORTA |= (1<<3);
		PORTA |= (1<<4);
		PORTA |= (1<<5);
		PORTA |= (1<<6);
		PORTA |= (1<<7);
		break;
	case 9:
		PORTA |= (1<<1);
		PORTA |= (1<<2);
		PORTA |= (1<<3);
		PORTA &= ~(1<<4);
		PORTA &= ~(1<<5);
		PORTA |= (1<<6);
		PORTA |= (1<<7);
		break;
	}
}

int main(void)
{
	unsigned char count = 0;

	DDRD  &= ~(1<<2) & ~(1<<3);      // configure pin 2 and 3 in PORTD as input pins

	DDRC  |= (1<<6);        // configure pin 6 in PORTC as output pin

	// Set pin 6 in PORTC with value 1 to enable the BJT NPN transistor to connect the first 7-segment common to the ground(common cathode)
	PORTC |= (1<<6);

	// configure pins as output from PA1 --> PA7
	DDRA  |= 0xFE;

	Eta32mini_SevenSegment_Display(count); // Display ZERO value on the 7-segment at the beginning

	while(1)
	{
		if( !(PIND & (1<<PD2)) ) // check if the push button at PD5 is pressed or not
		{
			_delay_ms(30);
			if( !(PIND & (1<<PD2)) ) //second check due to switch bouncing
			{
				if(count != 9)
				{
					// increment 7-segment every press
					count++;
				}
				Eta32mini_SevenSegment_Display(count); // Display the digit on the 7-segment
			}
			while( !(PIND & (1<<PD2)) ){} // wait until switch is released
		}
		else if(!(PIND & (1<<PD3)))
		{
			_delay_ms(30);
			if( !(PIND & (1<<PD3)) ) //second check due to switch bouncing
			{
				if(count != 0)
				{
					// decrement 7-segment every press
					count--;
				}
				Eta32mini_SevenSegment_Display(count); // Display the digit on the 7-segment
			}
			while( !(PIND & (1<<PD3)) ){} // wait until switch is released
		}
	}

}

