/**************************************************************************************************
 Name        : ex16.c
 Author      : Mohamed Tarek
 Description : Assignment 2 - Ex16
 **************************************************************************************************/
 
#include <stdio.h>

int CountOnes(unsigned char Number)
{
	unsigned char mask=0x80;
	unsigned char i;
	int ones_count=0;
	/*
     * start looping from index n-1 to 0 and check every bit
     * if it is equals to one increment ones_count
     * if it is zero do nothing
     */
	for(i=0;i<8;i++)
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
	unsigned char num1 = 0b10011010;
	int count; 
	count = CountOnes(num1);
	printf("%d",count);
}