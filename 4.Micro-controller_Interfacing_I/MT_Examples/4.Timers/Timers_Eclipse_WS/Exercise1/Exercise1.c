/*
 * Exercise1.c
 *
 *  Created on: Jun 1, 2021
 *  Author: Mohamed Tarek
 */

#include <avr/io.h>

/* Description:
 * For System Clock=1Mhz and timer prescaler is F_CPU/1024.
 * Timer frequency will be around 1Khz, Ttimer = 1ms
 * For initial timer counter = 0, overflow will occur every 256ms (0 --> 255 --> 0)
 */
void Timer0_Delay(void)
{
	TCNT0 = 0; // Set Timer0 initial value to 0

	/* Configure the timer control register
	 * 1. Non PWM mode FOC0=1
	 * 2. Normal Mode WGM01=0 & WGM00=0
	 * 3. Normal Mode COM00=0 & COM01=0
	 * 4. clock = F_CPU/1024 CS00=1 CS01=0 CS02=1
	 */
	TCCR0 = (1<<FOC0) | (1<<CS02) | (1<<CS00);

	while(!(TIFR & (1<<TOV0))); // Wait until the Timer0 Overflow occurs (wait until TOV0 = 1)

	TIFR |= (1<<TOV0); // Clear TOV0 bit by set its value

	TCCR0 = 0; // Stop Timer0 by clear the Clock bits (CS00, CS01 and CS02)
}

int main(void)
{
	unsigned char count = 0;
	DDRC  |= (1<<PC0);  // Configure the led pin as output pin.
	PORTC &= ~(1<<PC0); // LED is OFF at the beginning (Positive Logic).

    while(1)
    {
    	PORTC |= (1<<PC0); // LED is ON

    	// Wait for half second
    	for(count = 0; count < 2; count++)
    	{
    		Timer0_Delay();
    	}

    	PORTC &= ~(1<<PC0); // LED is OFF

    	// Wait for half second
    	for(count = 0; count < 2; count++)
    	{
    		Timer0_Delay();
    	}
    }
}



