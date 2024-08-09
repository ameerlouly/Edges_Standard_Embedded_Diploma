/*
 * Exercise3.c
 *
 * Created: 1/21/2014 11:29:49 PM
 * Author: Mohamed Tarek
 */

#include <avr/io.h>
#include <avr/interrupt.h>

#define NUMBER_OF_COMPARE_MTACHES_PER_HALF_SECOND 2

/* global variable contain the ticks count of the timer */
unsigned char g_tick = 0;

/* Interrupt Service Routine for timer0 compare mode */
ISR(TIMER0_COMP_vect)
{
	g_tick++;

	if(g_tick == NUMBER_OF_COMPARE_MTACHES_PER_HALF_SECOND)
	{
		PORTC = PORTC ^ (1<<PC0);   //toggle led every 0.5 second
		g_tick = 0;                 //clear the tick counter again to count a new 0.5 second
	}
}

/* Description:
 * For System Clock = 1Mhz and prescaler F_CPU/1024.
 * Timer frequency will be around 1Khz, Ttimer = 1ms
 * For compare value equals to 250 the timer will generate compare match interrupt every 250ms.
 * Compare interrupt will be generated every 250ms, so we need two compare interrupts to count 0.5 second.
 */
void Timer0_Init_CTC_Mode(unsigned char tick)
{
	TCNT0 = 0;    // Set Timer initial value to 0

	OCR0  = tick; // Set Compare Value

	TIMSK |= (1<<OCIE0); // Enable Timer0 Compare Interrupt

	/* Configure timer0 control register
	 * 1. Non PWM mode FOC0=1
	 * 2. CTC Mode WGM01=1 & WGM00=0
	 * 3. No need for OC0 in this example so COM00=0 & COM01=0
	 * 4. clock = F_CPU/1024 CS00=1 CS01=0 CS02=1
	 */
	TCCR0 = (1<<FOC0) | (1<<WGM01) | (1<<CS02) | (1<<CS00);
}

int main(void)
{
	DDRC  |= (1<<PC0);            // Configure the led pin as output pin.
	PORTC &= ~(1<<PC0);           // LED is off at the beginning (Positive Logic).

	SREG  |= (1<<7);              // Enable global interrupts in MC.

	Timer0_Init_CTC_Mode(250);    // Start the timer.

    while(1)
    {

    }
}
