/*
================================================================
	Name		: q12.c
	Created on	: Jul 27, 2024
	Author		: Ameer Louly
	Description	: returns the number with odd numbers of repitions
=================================================================
 */
#include <stdio.h>

int odd_repititions(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        int counter = 0;
        for(int j = 0; j < size; j++)
            if(arr[j] == arr[i])
                counter++;
        if(counter & 1)
            return arr[i];
    }

    return 0xFFFFFFFF; // on failure of fiding the number with off repititions
}

int main(void)
{
    int arr[] = {1,23,1, 5, 15 ,3, 123, 329, 2, 3, 44, 50, 1234, 439};

    printf("%d", odd_repititions(arr, 14));c  
}