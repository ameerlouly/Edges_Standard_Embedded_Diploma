/**************************************************************************************************
 Name        : ex9.c
 Author      : Mohamed Tarek
 Description : Assignment 1 - Ex 9
 **************************************************************************************************/

#include <stdio.h>

int main()
{
    float grade;
    printf("Please enter the student grade : ");
    scanf("%f",&grade);
	
    if(grade>=85)
    {
        printf("Excellent");
    }
    else if(85>grade && grade>=75)
    {
        printf("Very Good");
    }
    else if(75>grade && grade>=65)
    {
        printf("Good");
    }
    else if(65>grade && grade>=50)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}
