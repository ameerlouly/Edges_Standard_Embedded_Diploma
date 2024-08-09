/**************************************************************************************************
 Name        : ex12.c
 Author      : Mohamed Tarek
 Description : Assignment 1 - Ex 12
 **************************************************************************************************/

#include <stdio.h>

int main()
{
    int input;
    long long fact = 1;
    int i;
    printf("Please enter the required number : ");
    scanf("%d",&input);
	
	/* Loop to calcuate the factorial for example (5! = 5 * 4 * 3 * 2 * 1) */
    for(i=1;i<=input;i++)
    {
        fact = fact * i;
    }
    printf("\nfactorial of %d is: %ld",input,fact);
    return 0;
}
