/*
================================================================
	Name		: q21.c
	Created on	: Jul 26, 2024
	Author		: test
	Description	: Same as q20 but inclusive
=================================================================
 */
#include <stdio.h>

void descInclusive(unsigned char LowerValue, unsigned char UpperValue, unsigned char *output_arr, int *output_arr_size)
{
	if(LowerValue >= UpperValue)
	{
		output_arr[0] = output_arr[1] = 0xFF;
		*output_arr_size = 2;
		return;
	}

	int j = 0;
	for(char i = UpperValue; i >= LowerValue; i--)
		output_arr[j++] = i;
	*output_arr_size = j;
}

int main(void)
{
	unsigned char arr[10];
	int size;
	descInclusive(50, 100, arr, &size);

	for(int i = 0; i < size; i++)
		printf("%d,\t", arr[i]);

	return 0;
}


