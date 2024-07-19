/*
 * ex14.c
 *
 *  Created on: Jul 19, 2024
 *      Author: ameer
 */
#include <stdio.h>

int printFibo(int n1, int n2, int n)
{
	if(n2 >= n)
		return n2;

	return printf("%d", 0 + printFibo(1, 1, n));
}

int main(void)
{
	printFibo(0, 1, 100);
	return 0;
}
