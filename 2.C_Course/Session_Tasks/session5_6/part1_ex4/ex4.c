/*
 * ex4.c
 *
 *  Created on: Jul 16, 2024
 *      Author: ameer
 */
#include <stdio.h>

int main()
{
	int start = 0, end = 0;

	printf("Enter Start: ");
	scanf("%d", &start);
	printf("Enter End: ");
	scanf("%d", &end);
	if(start > end)
	{
		start ^= end;
		end ^= start;
		start ^= end;
	}

	for(int i = start; i <= end; i++)
		if(i % 2 == 0)
			printf("%d \t", i);
	printf("\n");
}

