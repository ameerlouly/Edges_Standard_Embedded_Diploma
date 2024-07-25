/**************************************************************************************************
 Name        : ex1.c
 Author      : Mohamed Tarek
 Description : Assignment 2 - Ex 1
 **************************************************************************************************/

#include <stdio.h>

int cube(int x)
{
	return x * x * x;
}

int main(void) {
	int num;
	int result;
	printf("Please enter any number : ");
	scanf("%d",&num);
	result = cube(num);
	printf("\nThe cube value of %d is %d",num,result);
	return 0;
}