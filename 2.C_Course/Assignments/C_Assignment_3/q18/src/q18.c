/*
================================================================
	Name		: q18.c
	Created on	: Jul 24, 2024
	Author		: test
	Description	: Max numbers of consecutive occurence in an array
=================================================================
 */
#include <stdio.h>
#define SIZE 10


int maxFreq(const int *arr, int size)
{
	int max, counter;
	max = counter = 0;

	for(int i = 0; i < size; i++)
	{
		counter = 0;

		for(int j = 0; j < size; j++)\
			if(arr[j] == arr[i])
				counter++;

		if(counter > max)
			max = counter;
	}

	return max;
}

int main(void)
{
	int arr[SIZE] = {1, 1, 1, 3, 3, 3, 3, 4, 5, 6};

	printf("%d", maxFreq(arr, SIZE));
}
