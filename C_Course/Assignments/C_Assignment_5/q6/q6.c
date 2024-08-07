/*
================================================================
	Name		: q6.c
	Created on	: Aug 6, 2024
	Author		: Ameer Louly
	Description	: Creates union with first and last name
=================================================================
 */
#include <stdio.h>

typedef union
{
    char first_name[30];
    char last_name[30];   
} family_name;

int main(void)
{
    family_name n1;
    scanf("%s", n1.first_name);
    printf("%s\n%ld", n1.last_name, sizeof(family_name));
    return 0;
}
