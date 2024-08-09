/**************************************************************************************************
 Name        : ex9.c
 Author      : Mohamed Tarek
 Description : Assignment 2 - Ex 9
 **************************************************************************************************/
 
#include <stdio.h>

void swap(int *ptr1, int *ptr2)
{
	int temp;
	temp  = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

/********************************************************** 
 ***** Another Method without using the Temp variable *****
 
void swap(int *ptr1, int *ptr2)
{
	int temp;
	*ptr1 = *ptr1 + *ptr2;
	*ptr2 = *ptr1 - *ptr2;
	*ptr1 = *ptr1 - *ptr2;
}

************************************************************/

int main(void)
{
	int a = 3, b = 2;
	printf ("Number before swapping : a=%d b=%d\n",a,b);
	swap(&a,&b);
	printf ("Number after swapping : a=%d b=%d\n",a,b);
	return 0;
}


