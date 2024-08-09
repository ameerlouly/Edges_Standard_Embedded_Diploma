/*
================================================================
	Name		: q24.c
	Created on	: Jul 26, 2024
	Author		: Ameer Louly
	Description	: Find the second biggest numbers in an array
=================================================================
 */
#include <stdio.h>
#define SIZE 10


int secMax(int *arr, int size)
{
	int max, sec_max;
	max = sec_max = arr[0];

	for(int i = 1; i < size; i++)
	{
		if(arr[i] > max)
		{
			sec_max = max;
			max = arr[i];
		}
	}

	return sec_max;
}

int main(void)
{
	int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	printf("%d\n", secMax(arr, SIZE));
}
