/**************************************************************************************************
 Name        : ex1.c
 Author      : Mohamed Tarek
 Description : Assignment 2 - Ex 5
 **************************************************************************************************/
#include <stdio.h>

int CheckEvenOrOdd(unsigned int Number)
{
	if((Number % 2) == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main(void) {
	int number;
	printf("Please enter the number : ");
	scanf("%d",&number);
	if(CheckEvenOrOdd(number) == 0)
	{
		printf("%d is Even Number\n",number);
	}
	else
	{
		printf("%d is Odd Number\n",number);
	}
	return 0;
}
