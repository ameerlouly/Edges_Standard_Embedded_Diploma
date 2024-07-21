/*
 * ex15.c
 *
 *  Created on: Jul 21, 2024
 *      Author: test
 */
#include <stdio.h>

unsigned int countOnes(unsigned int num)
{
	unsigned int sum = 0;

	for(char i = 0; i < 32; i++)
		if((num >> i) & 1)
			sum++;

	return sum;
}

int main(void)
{
	printf("%d ", countOnes(15));
	return 0;
}
