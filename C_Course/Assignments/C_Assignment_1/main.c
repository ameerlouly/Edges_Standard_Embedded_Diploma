/*
 * ass_1.c
 *
 *  Created on: Jul 2, 2024
 *      Author: Ameer Louly
 */
#include <stdio.h>
#include "ass1.h"

int main()
{
	int n, x, y, z;
	char c;
	while(1)
	{
		printf("Choose Example 1 - 21: ");
		scanf("%d", &n);

		if(n == 0)
			break;

		switch(n)
		{
			case 1:
				printf("Simple calculations:\n");
				simp1();
				break;
			case 2:
				printName();
				break;
			case 3:
				printf("Enter Degree in Celsius: ");
				scanf("%d", &x);
				printf("%d\n\n", toF(x));
				break;
			case 4:
				printf("Enter Radius: ");
				scanf("%d", &x);
				circlCalc(x);
				break;
			case 5:
				printf("Enter character: ");
				scanf("%c", &c);
				printASCII(c);
				break;
			case 6:
				printf("Enter 2 Numbers: ");
				scanf("%x %x", &x, &y);
				findRelation(x, y);
				break;
			case 7:
				printf("Enter 3 Numbers: ");
				scanf("%x %x %x", &x, &y, &z);
				printf("%d is the smallest\n\n", findSmallest(x, y ,z));
				break;
			case 8:
				printf("Enter Number: ");
				scanf("%d", &x);
				if(isSquare(x))
					printf("Perfect Square!\n\n");
				else
					printf("NOT Perfect Square!\n\n");
				break;
			case 9:
				printf("Enter Grade: ");
				scanf("%d", &x);
				findGrade(x);
				break;
			case 10:
				simpCalc();
				break;
			case 11:
				printf("Enter number: ");
				scanf("%d", &x);
				printf("Sum up to %d = %d\n\n", x, sumInt(x));
				break;
			case 12:
				printf("Enter number: ");
				scanf("%d", &x);
				printf("Factorial = %d\n\n", findFact(x));
				break;
			case 13:
				printf("Enter Number: ");
				scanf("%d", &x);
				if(isPrime(x))
					printf("Prime!\n\n");
				else
					printf("NOT Prime!\n\n");
				break;
			case 14:
				printAlphabet();
				break;
			case 15:
				printf("Enter 2 Numbers: ");
				scanf("%d %d", &x, &y);
				printf("%d power of %d = %d\n\n", x, y, power(x, y));
				break;
			case 16:
				printf("Enter number: ");
				scanf("%d", &x);
				reverseNum(x);
				break;
			case 17:
				printf("Enter number: ");
				scanf("%d", &x);
				printf("%d has %x digits\n\n", x, numDigits(x));
				break;
			case 18:
				printf("Enter number: ");
				scanf("%d", &x);
				pyramid1(x);
				break;
			case 19:
				printf("Enter number: ");
				scanf("%d", &x);
				pyramid2(x);
				break;
			case 20:
				printf("Enter number: ");
				scanf("%d", &x);
				pyramid3(x);
				break;
			case 21:
				printf("Enter number: ");
				scanf("%d", &x);
				printX(x);
				break;
		}
	}
}
