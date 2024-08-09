/*
 * Challenge1.c
 *
 * Created: 1/21/2014 11:29:49 PM
 *  Author: Mohamed Tarek
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>

#define NUMBER_OF_OVERFLOWS_PER_SECOND 122

/* global variable contain the ticks count of the timer */
unsigned char g_tick=0;

/* global variable contain the 7-seg count value */
unsigned char g_num = 0;

/* Description:
 * For System Clock=8Mhz and timer prescaler is F_CPU/256.
 * Timer frequency will be around 31.25Khz, Ttimer = 32us
 * For initial timer counter = 0, overflow will occur every 256ms (0 --> 255 --> 0)
 * Overflow interrupt will be generated every 8.192ms, so we need 122 overflow interrupts to count second.
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

ISR(TIMER0_OVF_vect)
{
	g_tick++;
	if(g_tick == NUMBER_OF_OVERFLOWS_PER_SECOND)
	{
		// check if overflow occurs at the 7-segment as its maximum count is 9
		if((PORTC & 0x0F) == 9)
		{
			g_num = 0;
			PORTC = (PORTC & 0xF0) | (g_num & 0x0F);
		}
		else
		{
			// increment 7-segment every interrupt
			g_num++;
			PORTC = (PORTC & 0xF0) | (g_num & 0x0F);
		}
		g_tick=0; // reset the ticks counter
	}	
}

int main(void)
{
	DDRC  |= 0x0F;               // Configure the first four pins in PORTC as output pins.
	PORTC &= 0xF0;               // Initialize the 7-seg display zero at the beginning.

	SREG  |= (1<<7);             // Enable global interrupts in MC.

	Timer0_Init_Normal_Mode();   // Start the timer.

    while(1)
    {			
       
    }
}
