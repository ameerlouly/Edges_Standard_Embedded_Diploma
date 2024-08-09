/**************************************************************************************************
 Name        : ex13.c
 Author      : Mohamed Tarek
 Description : Assignment 3 - Ex 13
 **************************************************************************************************/
 
#include<stdio.h>

void remove_all_except_alphabet(char str[])
{
	int i, j;
	for(i = 0; str[i] != '\0'; ++i)
    {
        while ( !((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) &&  (str[i] != '\0') )
        {
        	/* Enter here in case the element is not alphabet and it is not equals to null */
            for(j = i; str[j] != '\0'; ++j)
            {
				/* remove this not alphabet character by making each element equals to the value of the next element */
                str[j] = str[j+1];
            }
        }
    }
}

int main()
{
    char line[1000];

    printf("Enter a string: ");
    gets(line);

    remove_all_except_alphabet(line);

    printf("Output String: ");
    puts(line);
    return 0;
}
