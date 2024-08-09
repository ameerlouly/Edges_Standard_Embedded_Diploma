/**************************************************************************************************
 Name        : ex9.c
 Author      : Mohamed Tarek
 Description : Assignment 4 - Ex 9
 **************************************************************************************************/
#include <stdio.h>

char arr[4];

char* lastLetters(char* word)
{
	char *ptr = word;

	/* loop until the pointer ptr reaches the NULL terminator */
	while(*ptr != '\0')
	{
		ptr++;
	}
	/* get the last character in the string word */
	arr[0] = *(--ptr);
	arr[1] = ' ';
	/* get the second last character in the string word */
	arr[2] = *(--ptr);
	
	/* Add the null terminator */
	arr[3] = '\0';
	
	return arr;
}

int main(void)
{
	char str[10] = "Embedded";
	printf("%s",lastLetters(str));
	return 0;
}

	