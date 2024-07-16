/**************************************************************************************************
 Name        : ex3.c
 Author      : Mohamed Tarek
 Description : Assignment 1 - Ex 3
 **************************************************************************************************/
 
#include <stdio.h>

int main()
{
    float temp_cel,temp_fah;
    printf("Please enter the temperature value in Celsius : ");
    scanf("%f",&temp_cel);
	
	/* Calculate the temp in Fahrenheit */
    temp_fah=((temp_cel*9)/5)+32;
	
    printf("\nThe temperature in Fahrenheit is : %f",temp_fah);
    return 0;
}
