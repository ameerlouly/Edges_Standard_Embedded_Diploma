/**************************************************************************************************
 Name        : ex5.c
 Author      : Mohamed Tarek
 Description : Assignment 5 - Ex 5
 **************************************************************************************************/
 
#include <stdio.h>

#define MAX_NUM_STUDENTS 10

struct student
{
  char name[30];
  int id;
  float grade;
};

void fillStudentsInformation(struct student *st_ptr, int size);
void printStudentsInformation(struct student *st_ptr, int size);

int main()
{
	struct student students[MAX_NUM_STUDENTS];
	// Pass the array of structures to fill it
    fillStudentsInformation(students,MAX_NUM_STUDENTS);
    printStudentsInformation(students,MAX_NUM_STUDENTS);
    return 0;
}

void fillStudentsInformation(struct student *st_ptr, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
    	printf("Please Enter Name, Id and Grade for student number %d :",i+1);
    	// take inputs from user
    	scanf("%s %d %f",st_ptr->name,&(st_ptr->id),&(st_ptr->grade));
    	printf("\n");
    	st_ptr++; // increment the pointer to get the next structure in the array
    }
}

void printStudentsInformation(struct student *st_ptr, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		// print student information
		printf("Student Number %d Information : \n",i+1);
		printf("Name : %s \n",st_ptr->name);
		printf("Id : %d \n",st_ptr->id);
		printf("Grade : %f \n",st_ptr->grade);
		st_ptr++; // increment the pointer to get the next structure in the array
	}
}

/*********************************** Another Method *****************************************
void printStudentsInformation(struct student *st_ptr, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("Student Number %d Information : \n",i+1);
		printf("Name : %s \n",st_ptr[i].name);
		printf("Id : %d \n",st_ptr[i].id);
		printf("Grade : %f \n",st_ptr[i].grade);
	}
}
********************************************************************************************/
