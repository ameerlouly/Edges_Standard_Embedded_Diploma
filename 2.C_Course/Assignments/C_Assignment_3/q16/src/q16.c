/*
================================================================
	Name		: q16.c
	Created on	: Jul 24, 2024
	Author		: test
	Description	: Reverse Arrays
=================================================================
 */

#include <stdio.h>
#define SIZE 5

void rev(int* arr, int size)
{
	for(int i = 0; i < size / 2; i++)
	{
		arr[i] ^= arr[size - i - 1];
		arr[size - i - 1] ^= arr[i];
		arr[i] ^= arr[size - i - 1];
	}
}

int main(void)
{
	int arr[SIZE] = {1, 2, 3, 4, 5};
	for(int i = 0; i < SIZE; i++)
		printf("%d\t", arr[i]);
	printf("\n");
	rev(arr, SIZE);

	for(int i = 0; i < SIZE; i++)
			printf("%d\t", arr[i]);
}
