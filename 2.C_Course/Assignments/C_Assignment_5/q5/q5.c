/*
================================================================
	Name		: q5.c
	Created on	: Aug. 6 2024
	Author		: Ameer Louly
	Description	: 2 functions one to scan the data of 10 students in array of structs
                  and other to print them
=================================================================
 */
#include <stdio.h>
#define SIZE 10

typedef struct
{
    char name[20];
    char id[9];
    int grade;
} std;

void scanstd(std *students, int size);
void printstd(std *students, int size);

void main(void)
{
    std data[SIZE];
    scanstd(data, SIZE);
    printstd(data, SIZE);
}


void scanstd(std *students, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("\nStudent %d: \n", i + 1);
        scanf(" %s", (students + i)->name);
        scanf(" %s", (students + i)->id);
        scanf("%d", &(students + i)->grade);
    }
}

void printstd(std *students, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("Student %d: ", i + 1);
        printf("Name: %s\n", (students + i)->name);
        printf("ID: %s\n", (students + i)->id);
        printf("Grade: %d\n\n\n", (students + i)->grade);
    }
}





