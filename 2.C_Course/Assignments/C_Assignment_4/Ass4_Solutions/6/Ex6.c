/**************************************************************************************************
 Name        : ex6.c
 Author      : Mohamed Tarek
 Description : Assignment 4 - Ex 6
 **************************************************************************************************/
 
#include <stdio.h>

#define MAX_SIZE 10

int main () {

	int  arr[MAX_SIZE] = {10, 100, 200, -1, 1000, 500, 20, 60, -50, 26};
	int i, *ptr[MAX_SIZE];
	int MAX = 0;

	for ( i = 0; i < MAX_SIZE; i++)
	{
		// assign the address of each array element to a pointer element
		ptr[i] = &arr[i];
	}

	for ( i = 0; i < MAX_SIZE; i++)
	{
		// print all the array elements using array of pointers
		printf("Value of arr[%d] = %d\n", i, *ptr[i] );
	}

	MAX = *ptr[0]; // assume that the maximum number is the first array element

	for ( i = 1; i < MAX_SIZE; i++)
	{
		if(MAX < *ptr[i])
		{
			MAX = *ptr[i];
		}
	}

	printf("Maximum Number = %d\n", MAX );

	return 0;
}
