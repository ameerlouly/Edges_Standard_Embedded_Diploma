/*
================================================================
	Name		: q7.c
	Created on	: Jul. 27 2024
	Author		: Ameer Louly
	Description	: Swap function using bitwise operations using pointer to function
=================================================================
 */
#include <stdio.h>

void swap(int *x, int *y)
{
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
}

int main(void)
{
    int x = 8;
    int y = 10;

    void (*ptr)(int*, int*) = swap; //pointer to function

    printf("\n%d %d", x, y);

    (*ptr)(&x, &y);

    printf("\n%d %d", x, y);

}
