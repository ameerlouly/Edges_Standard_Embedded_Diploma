/*
================================================================
	Name		: q10.c
	Created on	: Jul 27, 2024
	Author		: Ameer Louly
	Description	: Swap two pointers
=================================================================
 */

#include <stdio.h>

void swapPtr(int **ptr1, int **ptr2)
{
    **ptr1 ^= **ptr2;
    **ptr2 ^= **ptr1;
    **ptr1 ^= **ptr2;
}

int main(void)
{
    int x = 10, y = 2;

    int* ptrX = &x;
    int* ptrY = &y;

    printf("%d %d\n", *ptrX, *ptrY);

    swapPtr(&ptrX, &ptrY);

    printf("%d %d\n", *ptrX, *ptrY);
}