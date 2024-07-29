/*
================================================================
	Name		: ex10.c
	Created on	: Jul 29, 2024
	Author		: Ameer Louly
	Description	: reverse a string in its place;
=================================================================
*/
#include <stdio.h>
#include <string.h>

void rev_str(char *arr)
{
	int size = strlen(arr);

	for(int i = 0; i < size / 2; i++)
	{
		arr[i] ^= arr[size - i - 1];
		arr[size - i - 1] ^= arr[i];
		arr[i] ^= arr[size - i - 1];
	}

}

int main(void)
{
	char str[] = "Let's try this string out";
	printf("%s\n", str);
	rev_str(str);
	printf("%s\n", str);

}
