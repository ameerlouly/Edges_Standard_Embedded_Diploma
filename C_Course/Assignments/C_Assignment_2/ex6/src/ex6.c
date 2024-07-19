/*
 * ex6.c
 *
 *  Created on: Jul 18, 2024
 *      Author: ameer
 */
#include <stdio.h>

char toUpper(char c)
{
	if(c >= 'A' && c <= 'Z')
		return c;
	else if(c >= 'a' && c <= 'z')
		return c - ('a' - 'A');
	else
		return c;
}

int main(void)
{
	printf("%c", toUpper('-'));
	return 0;
}

