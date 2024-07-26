/*
================================================================
	Name		: q2.c
	Created on	: Jul. 26 2024
	Author		: Ameer Louly
	Description	: Length of String using pointer
=================================================================
 */
#include <stdio.h>

int main(void)
{
    char str[] = "What is the size of this?";
    char *ptr = str;
    int counter = 0;
    for(int i = 0; *(ptr + i); i++)
        counter++;

    printf("%d", counter);
}