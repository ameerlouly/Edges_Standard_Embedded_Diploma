/**************************************************************************************************
 Name        : ex24.c
 Author      : Mohamed Tarek
 Description : Assignment 3 - Ex 24
 **************************************************************************************************/

#include <stdio.h>

#define MAX_SIZE 10     // Maximum array size

int secondLargestNumberInArray(int *arr, int size)
{

	int i,max1,max2;

	max1 = max2 = -2147483648; /* Minimum value for 4-bytes integer */

	/*
	 * Check for first largest and second
	 */
	for(i=0; i<size; i++)
	{
		if(arr[i] > max1)
		{
			/*
			 * If current element of the array is first largest
			 * then make current max as second max
			 * and then max as current array element
			 */
			max2 = max1;
			max1 = arr[i];
		}
		else if(arr[i] > max2 && arr[i] < max1)
		{
			/*
			 * If current array element is less than first largest
			 * but is greater than second largest then make it
			 * second largest
			 */
			max2 = arr[i];
		}
	}
	return max2;
}

int main(void)
{
    int arr[MAX_SIZE], i;
    int returnValue;

    /* Input array elements */
    printf("Enter elements in the array: ");
    for(i=0; i<MAX_SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    returnValue = secondLargestNumberInArray(arr,MAX_SIZE);

    printf("Second largest = %d", returnValue);

    return 0;
}
