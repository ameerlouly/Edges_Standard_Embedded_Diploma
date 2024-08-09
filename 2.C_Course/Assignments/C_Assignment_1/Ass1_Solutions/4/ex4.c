/**************************************************************************************************
 Name        : ex4.c
 Author      : Mohamed Tarek
 Description : Assignment 1 - Ex 4
 **************************************************************************************************/

#include <stdio.h>

#define PI 3.14

int main()
{
    float radious,area,circumference;
    scanf("%f",&radious);
	
	/* Calculate the circle area */
    area=PI*radious*radious;
	
	/* Calculate the circle circumference */
    circumference=2*PI*radious;
	
    printf("Circle Area=%f\nCircle Circumference=%f\n",area,circumference);
    return 0;
}
