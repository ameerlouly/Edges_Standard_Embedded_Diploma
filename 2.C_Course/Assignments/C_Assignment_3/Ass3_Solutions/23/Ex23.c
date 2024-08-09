/**************************************************************************************************
 Name        : ex23.c
 Author      : Mohamed Tarek
 Description : Assignment 3 - Ex 23
 **************************************************************************************************/

#include <stdio.h>

void PrintFreqCharacters(char str[])
{
	int i;

	/* array to store how many times each character exist in the input string.
	 * The number of times the character exist is stored in the array element or index corresponding to the ASCII of this character.
	 * array is 256 as the ASCII table size is 256 */
	int freq[256] = {0}; /* Initialize all the array elements with ZERO value */

	for(i = 0; str[i] != '\0'; i++)
	{
		freq[str[i]]++; /* Increment the value of this array element */
	}

	for(i = 0; i < 256; i++)
	{
		if(freq[i] != 0)
		{
			printf("%c %d\n", i, freq[i]);
		}
	}
}

int main(void)
{
	char str[100];

	gets(str); /* Get string from user */

	PrintFreqCharacters(str); /* Call the function and Pass string */

	return 0;
}