/*
 * ex16.c
 *
 *  Created on: Jul 21, 2024
 *      Author: test
 */
#include <stdio.h>

unsigned char countOnes(unsigned char num)
{
	unsigned char sum = 0;

	for(char i = 0; i < 8; i++)
		if((num >> i) & 1)
			sum++;

	return sum;
}

int main(void)
{
	printf("%d ", countOnes(0xFF));
	return 0;
}


