/*
================================================================
	Name		: q15.c
	Created on	: Jul 24, 2024
	Author		: test
	Description	: basically its strcat
=================================================================
 */
#include <stdio.h>

void concat(char *c1, char *c2)
{
	int i = 0, j = 0;
	while(c1[i])
		i++;
	while(c2[j])
		c1[i++] = c2[j++];
	c1[i] = c2[j];
}

int main(void)
{
	char c1[] = "Ameer ";
	char c2[] = "Louly";
	concat(c1, c2);
	printf("%s", c1);
}
