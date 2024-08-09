/*
 * ex11.c
 *
 *  Created on: Jul 18, 2024
 *      Author: ameer
 */

#include<stdio.h>
#include<stdbool.h>

bool isPowerofTwo(int num)
{
	return num && (!(num & (num - 1)));
}

int main(void)
{
	printf("%d", isPowerofTwo(32));
	return 0;
}
