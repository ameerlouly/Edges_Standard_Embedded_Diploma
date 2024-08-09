/*
 * Challenge1_Eta32mini.c
 *
 *  Created on: Aug 10, 2022
 *  Author: Mohamed Tarek
 */

#include <avr/io.h>
#include <avr/interrupt.h>

#define NUMBER_OF_OVERFLOWS_PER_SECOND 250

/* global variable contain the ticks count of the timer */
unsigned char g_tick=0;

/* global variable contain the 7-seg count value */
unsigned char g_num = 0;

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

ISR(TIMER0_OVF_vect)
{
	g_tick++;
	if(g_tick == NUMBER_OF_OVERFLOWS_PER_SECOND)
	{
		// check if overflow occurs at the 7-segment as its maximum count is 9
		if(g_num == 9)
		{
			g_num = 0;
		}
		else
		{
			// increment 7-segment every second
			g_num++;
		}
		Eta32mini_SevenSegment_Display(g_num); // Display the digit on the 7-segment
		g_tick=0; // reset the ticks counter
	}
}

/* Description:
 * For System Clock=16Mhz and timer prescaler is F_CPU/256.
 * Timer frequency will be around 64Khz, Ttimer = 15.625us
 * For initial timer counter = 0, overflow will occur every 4ms (0 --> 255 --> 0)
 * Overflow interrupt will be generated every 4ms, so we need 250 overflow interrupts to count second.
 */
void Timer0_Init_Normal_Mode(void)
{
	TCNT0 = 0; // Set Timer initial value to 0

	TIMSK = (1<<TOIE0); // Enable Timer0 Overflow Interrupt

	/* configure the timer
	 * 1. Non PWM mode FOC0=1
	 * 2. Normal Mode WGM01=0 & WGM00=0
	 * 3. Normal Mode COM00=0 & COM01=0
	 * 4. clock = F_CPU/256 CS00=0 CS01=0 CS02=1
	 */
	TCCR0 = (1<<FOC0) | (1<<CS02);
}

int main(void)
{
	SREG  |= (1<<7);   // Enable global interrupts in MC.

	// Configure pins as output from PA1 --> PA7
	DDRA  |= 0xFE;

	DDRC  |= (1<<6);              // configure pin 6 in PORTC as output pin

	// Set pin 6 in PORTC with value 1 to enable the BJT NPN transistor to connect the first 7-segment common to the ground(common cathode)
	PORTC |= (1<<6);

	Eta32mini_SevenSegment_Display(g_num); // Display ZERO value on the 7-segment at the beginning

	Timer0_Init_Normal_Mode();    // Start the timer.

	while(1)
	{

	}
}


