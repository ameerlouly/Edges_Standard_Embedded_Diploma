/**************************************************************************************************
 Name        : ex1.c
 Author      : Mohamed Tarek
 Description : Assignment 2 - Ex 3
 **************************************************************************************************/
#include <stdio.h>

void check_positive_negative(int in)
{
	if( in > 0 )
	{
		printf("\nThe input number is Positive");
	}
	else if (in < 0)
	{
		printf("\nThe input number is Negative");
	}
	else
	{
		printf("\nThe input number is Zero");
	}
}

int main(void) {
	int num;
	printf("Please enter a number : ");
	scanf("%d",&num);
	check_positive_negative(num);
	return 0;
}