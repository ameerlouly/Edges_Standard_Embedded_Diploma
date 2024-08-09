/**************************************************************************************************
 Name        : ex17.c
 Author      : Mohamed Tarek
 Description : Assignment 1 - Ex 17
 **************************************************************************************************/

#include <stdio.h>
int main()
{
    int num;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while(num != 0)
    {
		/* Divide number by 10 to get the next digit to right before the next loop iteration */
    	num /= 10;
		
		/* Increment the number of digits */
        ++count;
    }
	
    printf("Number of digits: %d", count);
    return 0;
}
