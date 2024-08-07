/*
 ============================================================================
 Name        : Dynamic_Allocation_Example.c
 Author      : Mohamed Tarek
 Date        : 15/7/2017
 Description : Example to demonstrate the basic idea of Dynamic allocation.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h> //for malloc & free functions
#include <assert.h> //for assert

int main(void)
{
    int n,i;
    int *ptr;
	int sum=0;
    printf("Enter number of elements: ");
    scanf("%d",&n); //take the number of memory locations as input from the user
    ptr=(int*)malloc(n*sizeof(int)); //memory allocation using malloc
    assert(ptr != NULL);
    printf("\nEnter elements of array: ");
    for(i=0;i<n;++i)
    {
    	scanf("%d",ptr+i); // scanf("%d",&ptr[i]);
        sum+=*(ptr+i); // sum += ptr[i];
    }
    printf("\nSum = %d",sum);
    free(ptr); //delete the dynamic allocated memory
    return 0;
 }
