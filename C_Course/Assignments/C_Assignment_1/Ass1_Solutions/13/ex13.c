/**************************************************************************************************
 Name        : ex13.c
 Author      : Mohamed Tarek
 Description : Assignment 1 - Ex 13
 **************************************************************************************************/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main()
{
    int input;
    int i;
    int isPrime = TRUE; /* flag to indicate that the number is prime or not */
    printf("Please enter the required number : ");
    scanf("%d",&input);

	if ((input == 0) || (input == 1))
		isPrime = FALSE;

    for(i=2;i<=(input/2);i++)
    {
		/* Check if the input number can be divided by i */
        if(input%i == 0)
        {
            isPrime = FALSE; /* this number is not a prime number */
            /* Terminate the loop as no need to continue the loop iterations. Because This is a not prime number. */
			break;
        }
    }

    /* in case the isPrime still equals TRUE which means that the number can not be divided
       by another number */
    if(isPrime == TRUE)
    {
        printf("\n%d is a prime number\n",input);
    }
    else
    {
    	printf("\n%d is not prime number\n",input);
    }

    return 0;
}
