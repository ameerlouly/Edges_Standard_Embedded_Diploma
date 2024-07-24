/*
================================================================
	Name		: q14.c
	Created on	: Jul 24, 2024
	Author		: test
	Description	: Reverses Strings
=================================================================
 */
#include <stdio.h>

int findLength(const char *c)
{
	int counter = 0;
	while(c[counter])
		counter++;
	return counter;
}

void strrev(char* c)
{
	int len = findLength(c);
	char temp;
	for(int i = 0; i < len / 2; i++)
	{
		temp = c[i];
		c[i] = c[len - i - 1];
		c[len - i - 1] = temp;
	}
}

int main(void)
{
	char c[] = "Lets test this out";
	printf("%s\n", c);
	strrev(c);
	printf("%s\n", c);
}

