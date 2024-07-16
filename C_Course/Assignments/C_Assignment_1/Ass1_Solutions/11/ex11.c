/**************************************************************************************************
 Name        : ex11.c
 Author      : Mohamed Tarek
 Description : Assignment 1 - Ex 11
 **************************************************************************************************/

#include <stdio.h>

int main()
{
    int sum=0;
    int i;
    for(i=1;i<=100;i++)
    {
        sum += i;
    }
    printf("sum of the first 100 integer numbers equals : %d\n",sum);

	/* Check if the sum of the 100 number is correct */
    if(sum == 5050)
    {
        printf("sum of the first 100 integer numbers is correct\n");
    }
    else
    {
        printf("sum of the first 100 integer numbers is not correct\n");
    }

    return 0;
}
