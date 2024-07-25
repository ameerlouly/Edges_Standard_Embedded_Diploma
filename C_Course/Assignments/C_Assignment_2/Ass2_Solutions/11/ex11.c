/**************************************************************************************************
 Name        : ex11.c
 Author      : Mohamed Tarek
 Description : Assignment 2 - Ex 11
 **************************************************************************************************/

#include <stdio.h>

int isPowerOf2(int number)
{
	int i;

	if(number == 0)
	{
		return 0;
	}
	else if(number == 1)
	{
		return 1;
	}
	else
	{
		while(1)
		{
			/* Check if the number can be divided by 2 */
			if((number % 2) == 0)
			{
				/*
				 * Divide the number by 2 every time in case the number is power three
				 * after multiple division it will be equals to 3 then return 1 as the
				 * number is power 2
				 */
				if(number == 2)
				{
					return 1;
				}
				number = number / 2;
			}
			else
			{
				return 0;
			}
		}
	}
}

int main(void)
{
	int num,res;
	scanf("%d",&num);
	res = isPowerOf2(num);
	if(res == 1)
	{
		printf("%d is power of 2\n",num);
	}
	else
	{
		printf("%d is not power of 2\n",num);
	}
	return 0;
}
