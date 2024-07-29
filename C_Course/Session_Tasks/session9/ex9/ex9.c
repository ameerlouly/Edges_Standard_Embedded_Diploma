/*
================================================================
	Name		: ex9.c
	Created on	: Jul 29, 2024
	Author		: Ameer Louly
	Description	: sum of all elements of mul-dim array
=================================================================
*/
#include <stdio.h>
#define ROWS 		2
#define COLUMNS 	2

int sum2d(int r, int c, int arr[][c])
{
	int sum = 0;

        for(int i = 0; i < r; i++)
                for(int j = 0; j < c; j++)
                        sum += arr[i][j];
        
	return sum;
}


int main(void)
{
	int arr[ROWS][COLUMNS] = {1, 2, 3, 4};
	
	printf("%d\n", sum2d(ROWS, COLUMNS, arr));
}
