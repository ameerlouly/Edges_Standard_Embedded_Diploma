/**************************************************************************************************
 Name        : ex6.c
 Author      : Mohamed Tarek
 Description : Assignment 1 - Ex 6
 **************************************************************************************************/
 
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
    int integer1; /* first number to be input by user */
    int integer2; /* second number to be input by user */
    int result; /* variable in which result will be stored */
    printf( "Enter first integer:\n" ); /* prompt */
    scanf( "%d", &integer1 ); /* read an integer */
    printf( "Enter second integer:\n" ); /* prompt */
    scanf( "%d", &integer2 ); /* read an integer */
    if(integer1 > integer2)
	{
		printf("integer1 is greater than integer2\n");
	}
	else if(integer1 < integer2)
	{
		printf("integer2 is greater than integer1\n");
	}
	else
	{
		printf("both numbers are equal\n");
	}
    return 0;
}
