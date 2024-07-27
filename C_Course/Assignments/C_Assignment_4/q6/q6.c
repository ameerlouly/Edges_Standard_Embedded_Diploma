/*
================================================================
	Name		: q6.c
	Created on	: Jul. 27 2024
	Author		: Ameer Louly
	Description	: use array of pointers to to print all elemnts of an array
                  and its max value
=================================================================
 */
#include <stdio.h>
#define SIZE 5

int main(void)
{
    int arr[SIZE] = {5, 4, 3, 2, 1};

    int *ptr_arr[SIZE];

    for(int i = 0; i < SIZE; i++)
        ptr_arr[i] = arr + i;


    int max = **ptr_arr;
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d\t", *ptr_arr[i]);
        if(*ptr_arr[i] > max)
            max = *ptr_arr[i];
    }

    printf("\n%d", max);
    
}