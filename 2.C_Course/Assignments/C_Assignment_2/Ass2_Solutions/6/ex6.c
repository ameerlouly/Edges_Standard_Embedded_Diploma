/**************************************************************************************************
 Name        : ex1.c
 Author      : Mohamed Tarek
 Description : Assignment 2 - Ex 6
 **************************************************************************************************/
 
#include <stdio.h>

void convert_lower_to_upper(char ch)
{
	/* according to ASCII table charaters from A --> Z are from 97 --> 122 */
    if((ch >= 'a') && (ch <='z'))
    {
        printf("\nCapital letter character is : %c",ch-32);
    }
    else
    {
        printf("\nInvaild input character");
    }
}

int main()
{
    char ch;
    printf("please enter small letter character to convert it to capital letter:");
    scanf("%c",&ch);
    convert_lower_to_upper(ch);
    return 0;
}
