/**************************************************************************************************
 Name        : ex5.c
 Author      : Mohamed Tarek
 Description : Assignment 1 - Ex 5
 **************************************************************************************************/

#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");

    /* Reads character input from the user */
    scanf("%c", &c);

    /*
       %d displays the integer value of a character
       %c displays the actual character
    */
    printf("ASCII value of %c = %d", c, c);
    return 0;
}
