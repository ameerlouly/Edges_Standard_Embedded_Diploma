/*
================================================================
	Name		: q7.c
	Created on	: Jul 23, 2024
	Author		: ameer
	Description	: Counts the occurences of a target element
				  in an array
=================================================================
 */

#include <stdio.h>
#define SIZE 5

int countOccurrences(int* arr, int size, int target)
{
	int occurences = 0;
	for(int i = 0; i < size; i++)
		if(arr[i] == target)
			occurences++;
	return occurences;
}

int main(void)
{
	int arr[SIZE] = {1, 2, 2, 3, 5};
	printf("%d", countOccurrences(arr, SIZE, 2));
	return 0;
}
