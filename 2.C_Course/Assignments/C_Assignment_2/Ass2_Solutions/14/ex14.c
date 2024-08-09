/**************************************************************************************************
 Name        : ex14.c
 Author      : Mohamed Tarek
 Description : Assignment 2 - Ex 14
 **************************************************************************************************/
 
#include <stdio.h>

long fibonacci( long n ); /* function prototype */

int main( void )
{
	long result;
	long number;

	/* obtain integer from user */
	printf( "Enter an integer: " );
	scanf( "%ld", &number );

	/* calculate fibonacci value for number input by user */
	result = fibonacci( number );

	printf( "Fibonacci( %ld ) = %ld\n", number, result );
	return 0;
}

/* Recursive definition of function fibonacci */
long fibonacci( long n )
{
	if ( n == 0 || n == 1 )
	{
		/* base case */
		return n;
	}
	else
	{ /* recursive step */
		return fibonacci( n - 1 ) + fibonacci( n - 2 );
	}
}