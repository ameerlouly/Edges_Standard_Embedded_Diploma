/*
 * ex1.c
 *
 *  Created on: Jul 18, 2024
 *      Author: ameer
 */
#include <stdio.h>

int cube(int);

int main()
{
	int x;
	scanf("%d", &x);
	printf("Cube = %d \n", cube(x));
}

int cube(int x)
{
	return x * x * x;
}
