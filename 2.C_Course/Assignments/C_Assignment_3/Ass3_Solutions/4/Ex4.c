/**************************************************************************************************
 Name        : ex4.c
 Author      : Mohamed Tarek
 Description : Assignment 3 - Ex 4
 **************************************************************************************************/
 
#include <stdio.h>

void selection_sorting(int array[],const int size)
{
    int i,j,min,temp;
    for(i=0;i<size-1;i++)
    {
		/* Assume that the current position contains the smallest number */
        min=i;
		/* Loop to get the position of smallest number in the array start from position i to the end of the loop */
        for(j=i+1;j<size;j++)
		{
            if(array[min]>array[j])
			{
				min=j;
			}
        }
		/* Swap value between the current postion and the smallest position */
        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
}
int main()
{
    const int arr_size = 5;
    int arr[arr_size],i,j;

    printf("Enter the required numbers to be sorted:\n");
    for(i=0;i<arr_size;i++)
	{
        scanf("%d",&arr[i]);
    }

    printf("Array Before Sorting: \n");
    for(i=0;i<arr_size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
	
	/* pass the array to be sorted using function */
    selection_sorting(arr,arr_size); 

    printf("Array After Sorting: \n");
    for(i=0;i<arr_size;i++)
	{
        printf("%d\t",arr[i]);
    }

    return 0;
}
