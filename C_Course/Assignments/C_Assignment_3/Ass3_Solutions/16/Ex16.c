/**************************************************************************************************
 Name        : ex16.c
 Author      : Mohamed Tarek
 Description : Assignment 3 - Ex 16
 **************************************************************************************************/
 
#include <stdio.h>

void Reverse_Array(int Array_size, int* Array)
{
	int i = 0, temp;
	while(i <  (Array_size / 2))
	{
		temp = Array[i];
		Array[i] = Array[Array_size - 1 - i];
		Array[Array_size - 1 - i] = temp;
		i++;
	}
}

int main(void)
{
	int i;
	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	/* Print the array before call the reverse function */
	for(i=0;i<10;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");

	Reverse_Array(10,array);

	/* Print the array after call the reverse function */
	for(i=0;i<10;i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}