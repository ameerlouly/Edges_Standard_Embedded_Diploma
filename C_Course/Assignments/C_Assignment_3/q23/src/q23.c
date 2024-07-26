/*
================================================================
	Name		: q23.c
	Created on	: Jul 26, 2024
	Author		: Ameer Louly
	Description	: Frequency map of characters in a string
=================================================================
 */
#include <stdio.h>

void freqMap(char *string, int *freqArr, int *n_freqArr)
{
	int i = 0, j, flag = 1;
	// i is primary counter, counts through main array
	// j is secondary counter, used for checking characters or counting frequency
	*n_freqArr = 0;

	while(string[i]) /* Primary while loop */
	{
		flag = 1; //resets flag

		j = i - 1;	//Initializes second counter for checking characters
		while(j >= 0)		//Checks if the current character was checked for frequency before
		{
			if(string[i] == string[j])
			{
				flag = 0;	//flag is 0 if the character was checked before
				break;
			}
			j--;
		}

		j = 0;	//Initializes second counter for counting characters frequency
		if(flag == 1)	//only starts counting if flag is true
		{
			freqArr[(*n_freqArr)] = 0;

			while(string[j])
			{
				if(string[i] == string[j])
					freqArr[(*n_freqArr)] += 1;
				j++;
			}

			(*n_freqArr)++; //updates numbers of characters counted so far
		}/*End of if statement*/

		i++;
	}/* end of primary while loop */
}

int main(void)
{
	char s[] = "Lets try a harder string";
	int arr[100];
	int size;
	freqMap(s, arr, &size);

	for(int i = 0; i < size; i++)
		printf("%d\t", arr[i]);
}
