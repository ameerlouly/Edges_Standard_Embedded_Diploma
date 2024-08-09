/*
================================================================
	Name		: q9.c
	Created on	: Jul. 27 2024
	Author		: Ameer Louly
	Description	: take a string reverse the last 2 letters with a space in between in a new string
=================================================================
 */

#include <stdio.h>
#include <string.h>

void string_games(char *str, char *dest)
{
    int size = strlen(str);

    dest[0] = str[size - 1];
    dest[1] = ' ';
    dest[2] = str[size - 2];
    dest[3] = '\0';
}

int main(void)
{
    char name[] = "Ameer";
    char dest[4];

    string_games(name, dest);

    printf("%s", dest);
}