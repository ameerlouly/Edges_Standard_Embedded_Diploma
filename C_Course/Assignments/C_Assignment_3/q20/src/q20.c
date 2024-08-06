/*
================================================================
	Name		: q20.c
	Created on	: Jul 26, 2024
	Author		: Ameer Louly
	Description	: returns an array containing the values between 2 8-bit numbers
				  in descending order exclusive
=================================================================
 */
#include <stdio.h>

void descExclusive(unsigned char LowerValue, unsigned char UpperValue, unsigned char *output_arr, int *output_arr_size)
{
	if(LowerValue >= UpperValue || UpperValue - 1 == LowerValue)
	{
		output_arr[0] = output_arr[1] = 0xFF;
		*output_arr_size = 2;
		return;
	}

	int j = 0;
	for(char i = UpperValue - 1; i > LowerValue; i--)
		output_arr[j++] = i;
	*output_arr_size = j;
}

int main(void)
{
	unsigned char arr[10];
	int size;
	descExclusive(50, 100, arr, &size);

	for(int i = 0; i < size; i++)
		printf("%d,\t", arr[i]);

	return 0;
}
