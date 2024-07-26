/*
================================================================
	Name		: q1.c
	Created on	: Jul. 26 2024
	Author		: Ameer Louly
	Description	: Sum of array using pointers
=================================================================
 */
#include <stdio.h>
#define SIZE 6

int sumArr(int *arr, int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
        sum += *(arr + i);
        
    return sum;
}

int main(void)
{
    int arr[SIZE] = {1, 2, 3, 4, 5, 6};

    printf("%d", sumArr(arr, SIZE));
}