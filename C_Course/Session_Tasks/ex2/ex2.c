/*
 * ex2.c
 *
 *  Created on: Jul 16, 2024
 *      Author: ameer
 */
#include <stdio.h>

int main()
{
	unsigned int age;
	printf("Enter Age: ");
	scanf("%d", &age);

	if(0 <= age && 12 >= age)
		printf("Child\n");
	else if(age <= 19)
		printf("Teenager\n");
	else if(age <= 35)
		printf("Young Adult\n");
	else if(age <= 55)
		printf("Adult\n");
	else
		printf("Senior\n");
}
