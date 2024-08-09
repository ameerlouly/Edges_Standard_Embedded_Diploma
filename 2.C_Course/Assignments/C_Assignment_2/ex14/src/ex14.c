/*
 * ex14.c
 *
 *  Created on: Jul 19, 2024
 *      Author: ameer
 */
#include <stdio.h>

int printFibo(int n)
{
	if(n < 2)
		return n;

	return printFibo(n - 1) + printFibo(n - 2);
}

int main(void)
{
	printf("%d ", printFibo(20));
	return 0;
}
