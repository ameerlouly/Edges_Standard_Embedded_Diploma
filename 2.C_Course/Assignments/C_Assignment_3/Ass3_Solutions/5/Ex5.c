/**************************************************************************************************
 Name        : ex5.c
 Author      : Mohamed Tarek
 Description : Assignment 3 - Ex 5
 **************************************************************************************************/

#include <stdio.h>

int Linear_Search_Find_First(int Array_size,int *Array,int Item)
{
    int i;
    for(i=0;i<Array_size;i++)
	{
        if(Item==Array[i])
		{
			/* Element is found return the array index */
			return (i);
		}
    }
    return -1; /* element not found */
}

int main( void )
{
    const int size = 5;
    int i;
    int array[size];
    int location;
    int element;

    printf("Enter the required array: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter element for search: ");
    scanf("%d",&element);

	/* pass the array to the function */
    location = Linear_Search_Find_First(size,array,element);

    if(location == -1)
    {
        printf("\nElement not found\n");
    }
    else
    {
        printf("\nThe element at the location: %d",location);
    }
    return 0;

}