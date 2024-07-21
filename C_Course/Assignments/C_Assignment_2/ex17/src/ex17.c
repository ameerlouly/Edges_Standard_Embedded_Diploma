/*
 * ex17.c
 *
 *  Created on: Jul 21, 2024
 *      Author: test
 */
#include <stdio.h>

int maxXOR(int L, int R)
{
	int a, b;
	int max = L ^ R;

	for(a = L; a <= R; a++)
		for(b = a; b <= R; b++)
			if((a ^ b) > max)
				max = a ^ b;
	return max;
}

int main(void)
{
	printf("%d", maxXOR(10, 15));
	return 0;
}
