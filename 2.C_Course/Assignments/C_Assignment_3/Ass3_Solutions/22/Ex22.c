/**************************************************************************************************
 Name        : ex22.c
 Author      : Mohamed Tarek
 Description : Assignment 3 - Ex 22
 **************************************************************************************************/

#include <stdio.h>

#define ERROR 0
#define SUCCESS 1

/* Function to remove duplicate elements, This function returns new size of modified array */
int removeDuplicates(int arr_old[], int n_old, int arr_new[], int *n_new)
{
	int i=0;

    /* Return, if array is empty */
    if (n_old==0)
        return ERROR;

    for (i=0 ; i<n_old-1 ; i++)
    {
    	/* If current element is not equal to next element then store that current element in the new array */
        if (arr_old[i] != arr_old[i+1])
        {
        	arr_new[*n_new] = arr_old[i];
        	(*n_new)++;
        }

    }

    /* Store the last element as whether it is unique or repeated, it hasn't stored previously */
    arr_new[*n_new] = arr_old[i];
    (*n_new)++;

    return SUCCESS;
}

int main(void)
{
	int arr1[10] = {1,2,3,3,3,4,4,5,5,5};
	int arr2[10];
	int arr2_usedSize = 0;
	int ret,i;

	/* the function shall remove the repeated numbers in arr1 and create a new array arr2 with size equals to arr2_usedSize */
	ret = removeDuplicates(arr1,10,arr2,&arr2_usedSize);

	if(ret == SUCCESS)
	{
		for(i=0;i<arr2_usedSize;i++)
		{
			printf("%d \t",arr2[i]);
		}
	}
}