/*
================================================================
	Name		: q8.c
	Created on	: Jul. 27 2024
	Author		: Ameer Louly
	Description	: Swap arrays using pointers
=================================================================
 */
#include <stdio.h>
#define SIZE 5

void swap_arr(int *arr1, int *arr2, int size)
{
    int *ptr1 = arr1;
    int *ptr2 = arr2;

    for(int i = 0; i < size; i++)
    {
        ptr1[i] ^= ptr2[i];
        ptr2[i] ^= ptr1[i];
        ptr1[i] ^= ptr2[i];
    }
}

int main(void)
{
    int arr[SIZE] = {5, 4, 3, 8, 1};
    int arr2[SIZE] = {10, 84, 96, 46, 100};

    for(int i = 0; i < SIZE; i++)
    printf("%d\t", arr[i]);

    printf("\n");

    for(int i = 0; i < SIZE; i++)
    printf("%d\t", arr2[i]);

    printf("\n");

    swap_arr(arr, arr2, SIZE);

    for(int i = 0; i < SIZE; i++)
    printf("%d\t", arr[i]);

    printf("\n");

    for(int i = 0; i < SIZE; i++)
    printf("%d\t", arr2[i]);

    printf("\n");
}