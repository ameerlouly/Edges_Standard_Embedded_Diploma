/**************************************************************************************************
 Name        : ex16.c
 Author      : Mohamed Tarek
 Description : Assignment 1 - Ex 16
 **************************************************************************************************/

#include <stdio.h>

int main()
{
    int num, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while(num != 0)
    {
		/* Get the first digit from the right */
        remainder = num%10;
		
		/* in the reversedNumber(result number) multiply the old value by 10 to added ZERO to the right
		   then added the new digit(remainder) to the right */
        reversedNumber = reversedNumber*10 + remainder;
		
		/* Divide number by 10 to get the next digit to right before the next loop iteration */
        num /= 10;
    }

    printf("Reversed Number = %d", reversedNumber);

    return 0;
}
