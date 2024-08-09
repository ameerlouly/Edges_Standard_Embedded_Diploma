/*
================================================================
	Name		: q4.c
	Created on	: Jul. 26 2024
	Author		: Ameer Louly
	Description	: Find smallest value in array using pointers
=================================================================
 */
#include <stdio.h>
#define SIZE 10

int smallValue(int *arr, int size)
{
    int small = *arr;

    for(int i = 1; i < size; i++)
        if(arr[i] < small)
            small = arr[i];

    return small;
}

int main(void)
{
    int arr[SIZE] = {3, 2, 4, 5, 1, 8, 4, 6, 9, 10};

    printf("%d", smallValue(arr, SIZE));
}