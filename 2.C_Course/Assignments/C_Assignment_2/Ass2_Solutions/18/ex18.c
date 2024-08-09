/**************************************************************************************************
 Name        : ex18.c
 Author      : Mohamed Tarek
 Description : Assignment 2 - Ex18
 **************************************************************************************************/

#include <stdio.h>

int IsPowerOfThree(unsigned int Number)
{
	if((Number == 1) || (Number == 0))
	{
		return 1;
	}
	else
	{
		while(1)
		{
			/* Check if the number can be divided by 3 */
			if((Number % 3) == 0)
			{
			    /* Divide the number by 3 every time in case the number is power three
			    after multiple division it will be equals to 3 then return 0 as the
			    number is power 3 */
				if(Number == 3)
				{
					return 0;
				}
				Number = Number / 3;
			}
			else
			{
				return 1;
			}
		}
	}
}

int main(void)
{
	int num;
	int res;
	scanf("%d",&num);
	res = IsPowerOfThree(num);
	if(res == 0)
	{
		printf("%d is power of 3\n",num);
	}
	else
	{
		printf("%d is not power of 3\n",num);
	}
	return 0;
}
