/*
================================================================
	Name		: q5.c
	Created on	: Jul. 26 2024
	Author		: Ameer Louly
	Description	: copy array into array with pointers
=================================================================
 */
#include <stdio.h>
#define SIZE 5

void copyArr(int *arr_target, int *arr_dest, int size)
{
    int *ptr1 = arr_target;
	int *ptr2 = arr_dest;
	for(int i = 0; i < size; i++)
		*(ptr2 + i) = *(ptr1 + i);
}

int main(void)
{
	int arr[SIZE] = {1, 2, 3, 5, 4};
	int arr2[SIZE];

	copyArr(arr, arr2, SIZE);

	printf("arr1:\n");
	for(int i = 0; i < SIZE; i++)
		printf("%d\t", arr[i]);

	printf("\narr2:\n");
	for(int i = 0; i < SIZE; i++)
		printf("%d\t", arr2[i]);

	
}