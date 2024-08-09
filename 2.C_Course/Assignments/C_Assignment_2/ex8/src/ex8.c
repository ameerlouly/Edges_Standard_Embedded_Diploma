/*
 * ex8.c
 *
 *  Created on: Jul 18, 2024
 *      Author: ameer
 */
#include <stdio.h>

int isPrime(int x)
{
	if(x == 2)
		return 1;
    for(int i = x - 1; i * i >= x - 1; i--)
        if(x % i == 0)
            return 0;
    return 1;
}

void printPrime(int first, int second)
{
	for(int i = first; i <= second; i++)
		if(isPrime(i))
			printf("%d\n", i);
}

int main(void)
{
	printPrime(5, 200);
}
