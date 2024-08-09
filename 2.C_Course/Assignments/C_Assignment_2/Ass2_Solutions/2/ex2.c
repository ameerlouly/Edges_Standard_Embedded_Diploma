/**************************************************************************************************
 Name        : ex1.c
 Author      : Mohamed Tarek
 Description : Assignment 2 - Ex 2
 **************************************************************************************************/
 
#include <stdio.h>

void check_alphabet(char ch_in)
{
	if( ((ch_in >= 'A') && (ch_in <= 'Z')) || ((ch_in >= 'a') && (ch_in <= 'z')) )
	{
		printf("\nThe input character is Alphabet");
	}
	else
	{
		printf("\nThe input character is not Alphabet");
	}
}

int main(void) {
	char ch;
	printf("Please enter a character : ");
	scanf("%c",&ch);
	check_alphabet(ch);
	return 0;
}