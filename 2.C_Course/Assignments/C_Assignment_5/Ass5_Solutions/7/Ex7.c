/**************************************************************************************************
 Name        : ex7.c
 Author      : Mohamed Tarek
 Description : Assignment 5 - Ex 7
 **************************************************************************************************/

#include <stdio.h>

enum fan_level{
	Level1,
	Level2,
	Level3
};

int main()
{
	enum fan_level fan1 = Level1;

	printf("Level1 = %d\n",fan1);

	if(fan1 == Level1)
	{
		fan1 = Level2;
	}

	printf("Level2 = %d\n",fan1);

	if(fan1 == Level2)
	{
		fan1 = Level3;
	}

	printf("Level3 = %d\n",fan1);

	return 0;
}