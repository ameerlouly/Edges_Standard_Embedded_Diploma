/**************************************************************************************************
 Name        : ex10.c
 Author      : Mohamed Tarek
 Description : Assignment 3 - Ex 10
 **************************************************************************************************/
 
#include <stdio.h>

void upper_to_lower(char s[])
{
	int i=0;
	while(s[i] != '\0') /* loop until the end of the string */
	{
		if((s[i]>='A') && (s[i]<='Z'))
		{
			/* the difference between any small letter and captial letter is 32 according to the ASCII table
			   so in case the character is captial letter increment it by 32 to be small letter */
			s[i] = s[i] + 32;
		}
		i++; // increment to fet the next array element
	}
}

int main(void)
{
	char str[20];
	printf("Please enter ther required sting message : ");
	gets(str);
	printf("\n");
	upper_to_lower(str);
	printf("Message after converting : %s\n",str);
	return 0;
}


