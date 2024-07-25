/**************************************************************************************************
 Name        : ex13.c
 Author      : Mohamed Tarek
 Description : Assignment 2 - Ex 13
 **************************************************************************************************/
 
#include <stdio.h>

int addNumbers(float a,float b)
{
	/* return the integer value for the addition between two float numbers */
	return (int)(a+b);
}

int main( void )
{
	float f1 = 3.5, f2 = 2.3;
	int res;
	res = addNumbers(f1,f2);
	printf("res = %d",res);
	return 0;
}