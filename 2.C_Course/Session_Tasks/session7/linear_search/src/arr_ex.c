/*
 * arr_ex.c
 *
 *  Created on: Jul 22, 2024
 *      Author: ameer
 */
#include <stdio.h>
#include "search.h"
#define SIZE 8

int main()
{
	int arr[SIZE] = {10, 12, 18, 20, 21, 100, 200, 27};
	printf("%d\n", Linear_Search(arr, SIZE, 18));
}
