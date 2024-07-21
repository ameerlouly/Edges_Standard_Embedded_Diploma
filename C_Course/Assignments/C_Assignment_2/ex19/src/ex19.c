/*
 * ex19.c
 *
 *  Created on: Jul 22, 2024
 *      Author: test
 */
#include <stdio.h>

unsigned short contOnes(unsigned short num)
{
	unsigned short i, counter = 0;

	for(i = 0; i < 16; i++)
		if(((num >> i) & (1)) == 0)
			continue;
		else
			break;
	while((num >> i++) & 1)
		counter++;

	return counter;
}

int main(void)
{
	printf("%d", contOnes(31));
	return 0;
}
