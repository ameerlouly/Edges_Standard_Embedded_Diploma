/**************************************************************************************************
 Name        : ex7.c
 Author      : Mohamed Tarek
 Description : Assignment 4 - Ex 7
 **************************************************************************************************/
 
#include <stdio.h>

#define MAX_SIZE 10

void SWAP(int *ptr1,int *ptr2)
{
	*ptr1 = *ptr1 ^ *ptr2;
	*ptr2 = *ptr1 ^ *ptr2;
	*ptr1 = *ptr1 ^ *ptr2;
}

int main () {

	void (*ptr_func)(int*,int*);
	int num1 = 10,num2 = 15;

	ptr_func = SWAP; //point to the SWAP function

	printf("Before SWAP Call : num1 = %d num2 = %d\n",num1,num2);

	// call SWAP API through the function pointer
	(*ptr_func)(&num1,&num2); // or ptr_func(&num1,&num2);

	printf("After SWAP Call : num1 = %d num2 = %d\n",num1,num2);

	return 0;
}
