/*
================================================================
	Name		: q19.c
	Created on	: Jul 24, 2024
	Author		: test
	Description	: Basically strcmp, compares two functions
=================================================================
 */
#include <stdio.h>
#define ARE_EQUAL 0
#define NOT_EQUAL 1

int compareArray(int *arr1, int *arr2, int size1, int size2)
{

	if(size1 != size2)
		return 1;
	for(int i = 0; i < size1; i++)
		if(arr1[i] != arr2[i])
			return NOT_EQUAL;
	return ARE_EQUAL;
}

int main(void)
{
	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[] = {1, 2, 3, 4, 5};

	if(compareArray(arr1, arr2, 5, 5))
		printf("Not equal");
	else
		printf("Equal");
}
