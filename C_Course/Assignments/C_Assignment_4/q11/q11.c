/*
================================================================
	Name		: q11.c
	Created on	: Jul 27, 2024
	Author		: Ameer Louly
	Description	: Swaps the two 16 bits of a 32 bit number
=================================================================
 */
#include <stdio.h>

void swapBinary(int *num)
{
    int temp = *num & 0xFFFF0000;
    temp >>= 16;
    *num <<= 16;
    *num += temp;
}

int main(void)
{
    int x = 0x1234abcd;
    printf("%X\n", x);
    swapBinary(&x);
    printf("%X\n", x);
}