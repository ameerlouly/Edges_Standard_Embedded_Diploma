/**************************************************************************************************
 Name        : ex21.c
 Author      : Mohamed Tarek
 Description : Assignment 1 - Ex 21
 **************************************************************************************************/

#include<stdio.h>

int main(void)
{
    int row,col,rows_cols;

    printf("Enter number of rows_cols: ");
    scanf("%d",&rows_cols);
    printf("\n");

    /* Loop for each row */
    for(row = 0;row < rows_cols;row++)
    {
    	/* Loop to draw * or space in each column in this row */
        for(col = 0;col < rows_cols;col++)
        {
            if( (col==row) || (col==rows_cols-row-1) )
            {
                printf(" *");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}