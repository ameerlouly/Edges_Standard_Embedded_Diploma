/*
 * q1.c
 *
 *  Created on: Jul 22, 2024
 *      Author: ameer
 */
#include <stdio.h>
#define SIZE 6

int summation(int numbers_size, int* numbers)
{
	int sum = 0;
	for(int i = 0; i < numbers_size; i++)
		sum += numbers[i];
	return sum;
}

int main(void)
{

	int arr[SIZE] = {10, 2, 6, 8, 9, 12};
	printf("%d", summation(SIZE, arr));
}
