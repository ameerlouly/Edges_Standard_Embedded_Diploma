/*
================================================================
	Name		: q3.c
	Created on	: Jul. 26 2024
	Author		: Ameer Louly
	Description	: get 10 numbers from user and print them in reverse using pointers
=================================================================
 */
#include <stdio.h>

int main(void)
{
    int arr[10];
    int *ptr = arr;

    for(int i = 0; i < 10; i++)
        scanf("%d", (ptr + i));

    for(int i = 9; i >= 0; i--)
        printf("%d\t", *(ptr + i));
}