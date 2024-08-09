/*
 * ex6.c
 *
 *  Created on: Jul 22, 2024
 *      Author: ameer
 */
#include <stdio.h>

char toUpper(char c)
{
	if(c >= 'a' && c <= 'z')
		return c - ('a' - 'A');
	else
		return c;
}

int main()
{
	printf("%c", toUpper('c'));
}
