/**************************************************************************************************
 Name        : ex19.c
 Author      : Mohamed Tarek
 Description : Assignment 3 - Ex 19
 **************************************************************************************************/

#include <stdio.h>

#define ARR_SIZE 5

int CompareArray(int Array_size,int * Array1,int * Array2)
{
	int i;
	for(i=0;i<Array_size;i++)
	{
		if(Array1[i] != Array2[i])
		{
			/* if only one element in Array1 does not match the corresponding element in Array2 return 1 */
			return 1;
		}
	}
	/* both arrays are identical retrun 0*/
	return 0;
}


int main(void)
{
	int arr1[ARR_SIZE] = {1,2,3,4,5};
	int arr2[ARR_SIZE] = {1,2,3,4,4};
	int res = 0;
	
	res = CompareArray(ARR_SIZE,arr1,arr2);
	
	if(res == 0)
	{
		printf("Both arrays are identical \n");
	}
	else
	{
		printf("Both arrays are not identical \n");
	}
	
	return 0;
}