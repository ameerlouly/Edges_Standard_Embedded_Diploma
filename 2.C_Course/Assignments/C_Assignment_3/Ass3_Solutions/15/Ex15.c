/**************************************************************************************************
 Name        : ex15.c
 Author      : Mohamed Tarek
 Description : Assignment 3 - Ex 15
 **************************************************************************************************/
 
#include <stdio.h>

void string_cat(char str1[],char str2[])
{
	int i, j;
	/* This loop is to store the length of str1 in i
	 * It just counts the number of characters in str1
	 * You can also use strlen instead of this.
	 */
	for(i=0; str1[i]!='\0'; ++i);

	/* This loop would concatenate the string str2 at
	 * the end of str1
	 */
	for(j=0; str2[j]!='\0'; ++j, ++i)
	{
		str1[i]=str2[j];
	}
	/* \0 represents end of string */
	str1[i]='\0';
}

int main()
{
   char s1[100], s2[50];
   printf("\nEnter first string: ");
   gets(s1);
   printf("\nEnter second string: ");
   gets(s2);

   string_cat(s1,s2);
   printf("\nOutput: %s",s1);

   return 0;
}
