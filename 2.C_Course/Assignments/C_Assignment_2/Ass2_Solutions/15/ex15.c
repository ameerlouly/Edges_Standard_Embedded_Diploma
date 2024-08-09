/**************************************************************************************************
 Name        : ex15.c
 Author      : Mohamed Tarek
 Description : Assignment 2 - Ex15
 **************************************************************************************************/
 
#include <stdio.h>

int CountOnes(unsigned int Number)
{
	unsigned int mask=0x80000000;
	unsigned int i;
	int ones_count=0;
	/*
     * start looping from index n-1 to 0 and check every bit
     * if it is equals to one increment ones_count
     * if it is zero do nothing
     */
	for(i=0;i<32;i++)
	{
		if((Number<<i) & mask)
		{
			++ones_count;
		}
	}
	return ones_count;
}

int main(void)
{
	unsigned int num1 = 0x00000FFF;
	int count; 
	count = CountOnes(num1);
	printf("%d",count);
}