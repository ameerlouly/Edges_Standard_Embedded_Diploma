/*
 * q4.c
 *
 *  Created on: Jul 22, 2024
 *      Author: ameer
 */
			/*Google Selection Sort*/
#include <stdio.h>
#define SIZE 10

void selectionSort(int *arr, int size)
{
	int lowest_index = 0;
	int flag = 0;
	for(int i = 0; i < size; i++)
	{
		lowest_index = i;
		flag = 0; //reset flag for new cycle
		for(int j = i; j < size; j++)
			if(arr[j] < arr[lowest_index])
			{
				lowest_index = j;
				flag = 1;
			}

		if(flag)
		{
			arr[i] ^= arr[lowest_index];
			arr[lowest_index] ^= arr[i];
			arr[i] ^= arr[lowest_index];
		}

	}
}

int main(void)
{
	int arr[SIZE] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	for(int i = 0; i < SIZE; i++)
		printf("%d\t", arr[i]);

	printf("\n");

	selectionSort(arr, SIZE);

	for(int i = 0; i < SIZE; i++)
		printf("%d\t", arr[i]);

}