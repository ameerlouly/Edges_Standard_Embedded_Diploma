/*
 * ex1.c
 *
 *  Created on: Jul 16, 2024
 *      Author: ameer
 */
#include <stdio.h>

int main()
{
	int grade, age;
	int isSuccess;
	printf("Enter Your Grade: ");
	scanf("%d", &grade);

	switch(grade)
	{
	case 10:
	case 12:
		printf("Enter age: ");
		scanf("%d", &age);
		if(15 <= age && 18 >= age)
		{
			printf("Did you succeed in the past exam?(0: yes, 1: no)");
			scanf(" %d", &isSuccess);
			switch(isSuccess)
			{
			case 0:
				printf("Eligible");
				break;
			case 1:
				printf("Not Eligible");
			}
			break;
		}
		else

	default:
		printf("Not Eligible");
	}
}

