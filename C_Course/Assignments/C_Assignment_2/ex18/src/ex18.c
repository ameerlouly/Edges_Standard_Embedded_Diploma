/*
 * ex18.c
 *
 *  Created on: Jul 22, 2024
 *      Author: test
 */
#include <stdio.h>
#include <stdbool.h>

int isPowerofThree(int n)
{
	if (n <= 0)
	        return 1;
	if (n % 3 == 0)
	        return isPowerofThree(n / 3);
	return 1;
}

int main()
{
	printf("%d", isPowerofThree(27));
	return 0;
}

