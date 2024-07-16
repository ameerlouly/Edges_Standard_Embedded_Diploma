/*
 * ex3.c
 *
 *  Created on: Jul 16, 2024
 *      Author: ameer
 */
#include <stdio.h>

int main()
{
	unsigned int month, year;

	switch(month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("31");
		break;
	case 2:
		if(year % 4 == 0)
			printf("29");
		else
			printf("28");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("30");
		break;
	default:
		printf("Incorrect month");
	}
}
