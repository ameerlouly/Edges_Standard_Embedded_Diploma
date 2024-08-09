/*
 * ex19.c
 *
 *  Created on: Jul 22, 2024
 *      Author: test
 */
#include <stdio.h>

unsigned short contOnes(unsigned short num)
{
	unsigned short i, counter = 0;
    unsigned short max = 0;
	for(i = 0; i < 16; i++)
    {
		if((num >> i) & 1)
            while((num >> i++) & 1)
                counter++;
        if(counter > max)
            max = counter;
        counter = 0;    
    }

	return max;
}

unsigned int contOnes_alt(unsigned int num)
{
    int counter = 0;
    while(num)
    {
       counter++;
       num &= num >> 1;
    }
    return counter;
}

int main(void)
{
	printf("%d\n", contOnes(53621));
	printf("%d\n", contOnes_alt(53621));
	return 0;
}
