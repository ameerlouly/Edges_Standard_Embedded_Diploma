/**************************************************************************************************
 Name        : ex12.c
 Author      : Mohamed Tarek
 Description : Assignment 4 - Ex 12
 **************************************************************************************************/
#include <stdio.h>

#define ARRAY_SIZE 15

int OddRepetitionNumberInArray(int *arr,int arr_size)
{
	int i,j;
	int count = 0;
	int index = 0;
	for(i=0;i<arr_size;i++)
	{
		for(j = 0; j < arr_size;j++)
		{
			/* Count the number of times that this element value exist in the array */
			if(arr[i] == arr[j])
			{
				index = i;
				count++;
			}
		}
		/* check if the count is odd number then we found number */
		if(count%2 != 0)
		{
			break;
		}
		/* reset the count value before check for the next array element */
		count = 0;
	}
	return arr[index];
}

int main(void)
{
	int arr[ARRAY_SIZE] = {1,2,3,1,2,3,1,1,1,1,3,3,3};

	int num = OddRepetitionNumberInArray(arr,ARRAY_SIZE);

	printf("number is : %d",num); /* It should be 3 */

	return 0;
}