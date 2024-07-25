/**************************************************************************************************
 Name        : ex17.c
 Author      : Mohamed Tarek
 Description : Assignment 2 - Ex17
 **************************************************************************************************/

#include <stdio.h>

int maximum_XOR(int a,int b)
{
	int max_xor = 0;
	int temp = 0;
	int i,j;
	for(i=a;i<=b;i++)
	{
		for(j=i;j<=b;j++)
		{
			temp = i ^ j;
			if(temp > max_xor)
			{
				max_xor = temp;
			}
		}
	}
	return max_xor;
}

int main(void)
{
	printf("Maximum XOR : %d",maximum_XOR(10,15));
	return 0;
}