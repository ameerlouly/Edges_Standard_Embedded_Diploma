/**************************************************************************************************
 Name        : ex1.c
 Author      : Mohamed Tarek
 Description : Assignment 4 - Ex 1
 **************************************************************************************************/
 
#include<stdio.h>

int main(void)
{
   int numArray[10];
   int i, sum = 0;
   int *ptr;

   printf("\nEnter 10 elements : ");

   for (i = 0; i < 10; i++)
      scanf("%d", &numArray[i]);

   ptr = numArray; /* point to the first array element */

   for (i = 0; i < 10; i++)
   {
      sum = sum + *ptr;
      ptr++; // increment pointer to the next array element
   }

   printf("The sum of array elements : %d", sum);

   return 0;
}
