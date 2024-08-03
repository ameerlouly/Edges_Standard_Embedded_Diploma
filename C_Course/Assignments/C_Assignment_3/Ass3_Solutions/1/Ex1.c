/**************************************************************************************************
 Name        : ex1.c
 Author      : Mohamed Tarek
 Description : Assignment 3 - Ex 1
 **************************************************************************************************/

#include <stdio.h>

#define ARR_SIZE 5

int summation(int numbers_size, int* numbers)
{
	int sum = 0,i;
	for(i=0;i<numbers_size;i++)
	{
		sum += numbers[i];
	}
	return sum;
}

int main(void)
{
	int arr[ARR_SIZE];
	int i;
	int res = 0;
	printf("Please enter the arrat elements : \n");

	/* loop for all the array elements to fill the array elements */
	for(i=0;i<ARR_SIZE;i++)
	{
		/* take array element by element */
		scanf("%d",&arr[i]);
	}

	res = summation(ARR_SIZE,arr);

	printf("The Sum of the array elements : %d",res);

	return 0;
}