/*
 * ex3.c
 *
 *  Created on: Jul 18, 2024
 *      Author: ameer
 */

#include <stdio.h>

void isPositive(int x)
{
	if (x > 0)
		printf("Positive\n");
	else if (x < 0)
		printf("Negative");
	else
		printf("0");
}

void main(void)
{
	int x = 5;
	isPositive(x);
}

