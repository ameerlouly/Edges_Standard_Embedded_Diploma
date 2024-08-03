/**************************************************************************************************
 Name        : ex14.c
 Author      : Mohamed Tarek
 Description : Assignment 3 - Ex 14
 **************************************************************************************************/
 
#include<stdio.h>
#include<string.h>

void reverse_string(char s[])
{
	int i = 0, j;
	char temp;
	j = strlen(s) - 1;
	
	/* null will remained in the same place just start swapping the array element */
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}

int main() {
   char str[1000];
   printf("\nEnter the string :");
   gets(str);

   reverse_string(str);

   printf("\nReverse string is :%s", str);
   return (0);
}
