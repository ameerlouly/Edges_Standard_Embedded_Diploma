/*
================================================================
	Name		: q1.c
	Created on	: Aug. 5 2024
	Author		: Ameer Louly
	Description	: Stores name, role and marks for a student
                  in structure and display it
=================================================================
 */
#include <stdio.h>

struct student
{
    char name[10];
    char role[10];
    int mark;
};

int main(void)
{
    struct student st1;
    scanf("%s", st1.name);
    scanf(" %s ", st1.role);
    scanf(" %d", &st1.mark);

    printf("%s\n%s\n%d", st1.name, st1.role, st1.mark);
}