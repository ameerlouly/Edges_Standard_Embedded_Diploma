/*
 * Exercise2.c
 *
 * Created: 12/7/2013 9:08:25 PM
 * Author: Mohamed Tarek
 */ 

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

unsigned char g_Interrupt_Flag = 0;

/* External INT1 Interrupt Service Routine */
ISR(INT1_vect)
{
	// set the interrupt flag to indicate that INT1 occurs
	g_Interrupt_Flag = 1;
}

/* External INT1 enable and configuration function */
void INT1_Init(void)
{
	DDRD  &= (~(1<<PD3));  // Configure INT1/PD3 as input pin
	// Trigger INT1 with the falling edge
	MCUCR |= (1<<ISC11);
	MCUCR &= ~(1<<ISC10);
	GICR  |= (1<<INT1);    // Enable external interrupt pin INT1
	SREG  |= (1<<7);       // Enable interrupts by setting I-bit
}

int main(void)
{
	unsigned char Loop_idx;
	DDRC  |= 0x07;	 // Configure the first 3-pins in PORTC as output pins
	PORTC &= 0xF8;   // Turn off the 3-leds at the beginning by clear the first 3-bits in PORTC

	INT1_Init();    // Enable and configure external INT1

	while(1)
	{
		if(g_Interrupt_Flag == 0)
		{
			PORTC = (PORTC & 0xF8) | 0x01;   // Turn on the first led only (PC0=1,PC1=0,PC2=0)
			_delay_ms(500);

			PORTC = (PORTC & 0xF8) | 0x02;   // Turn on the second led only (PC0=0,PC1=1,PC2=0)
			_delay_ms(500);

			PORTC = (PORTC & 0xF8) | 0x04;   // Turn on the third led only (PC0=0,PC1=0,PC2=1)
			_delay_ms(500);
		}
		else if(g_Interrupt_Flag == 1)
		{
			for(Loop_idx=0;Loop_idx<5;Loop_idx++)
			{
				PORTC |= 0x07;                   // Turn on all the three leds (PC0=1,PC1=1,PC2=1)
				_delay_ms(500);
				PORTC &= 0xF8;                   // Turn off all the three leds (PC0=0,PC1=0,PC2=0)
				_delay_ms(500);
			}
			// reset the interrupt event flag to continue rolling the leds after executing the required code
			g_Interrupt_Flag = 0;
		}
	}
}
