/*
================================================================
	Name		: q11.c
	Created on	: Jul 27, 2024
	Author		: Ameer Louly
	Description	: Swaps the two 16 bits of a 32 bit number
=================================================================
 */
#include <stdio.h>

void swapBinary(unsigned int *num)
{
    int temp = *num & 0xFFFF0000;
    temp >>= 16;
    *num <<= 16;
    *num += temp;
}

void swapBinary_anotherMethod(unsigned int *num)
{
    short* ptr1 = (short *)num;
    short* ptr2 = ptr1 + 1;
    *ptr1 ^= *ptr2;
    *ptr2 ^= *ptr1;
    *ptr1 ^= *ptr2;
}

int main(void)
{
    unsigned int x = 0x1234abcd;
    printf("%X\n", x);
    swapBinary(&x);
    printf("%X\n", x);
    swapBinary_anotherMethod(&x);
    printf("%X\n", x);
}
