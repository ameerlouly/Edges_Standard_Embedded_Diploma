/*
 * linear_search.c
 *
 *  Created on: Jul 22, 2024
 *      Author: ameer
 */
int Linear_Search(int* a, int size, int num)
{
	for(int i = 0; i < size; i++)
		if(*(a + i) == num)
			return i;
	return -1;
}
