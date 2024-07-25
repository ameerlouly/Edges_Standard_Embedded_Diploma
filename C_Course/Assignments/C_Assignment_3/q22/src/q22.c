/*
================================================================
	Name		: q22.c
	Created on	: Jul 26, 2024
	Author		: test
	Description	: Removes all duplicates in an array
=================================================================
 */
#include <stdio.h>
#define SMOOTH_OP 1
#define ROUGH_OP 0

int removeDuplicates(int arr_old[], int n_old, int arr_new[], int *n_new)
{
	if(n_old == 0)
	{
		*n_new = 0;
		return ROUGH_OP;
	}

	*n_new = 0;
	for(int oldArrIndex = 0; oldArrIndex < n_old; oldArrIndex++)
	{
		if(arr_old[oldArrIndex] == arr_old[oldArrIndex + 1])
			continue;
		arr_new[(*n_new)++] = arr_old[oldArrIndex];
	}
	return SMOOTH_OP;
}

int main(void)
{
	int arr1[] = {1,2,3,3,3,4,4,5,5,5};
	int arr2[10];
	int size2;
	for(int i = 0; i < 10; i++)
		printf("%d, ", arr1[i]);

	printf("\n");

	if(removeDuplicates(arr1, 10, arr2, &size2))
		for(int i = 0; i < size2; i++)
			printf("%d, ", arr2[i]);
	else
		printf("Failed OP\n");
}


