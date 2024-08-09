/*
==================================================================================================================================
	Name		: StudentSystemProgram.c
	Created on	: Aug 8, 2024
	Author		: Ameer Louly
	Description	: Contains Definitions of all system functions and head pointer initialization
==================================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "Student_System.h"

link head = NULL;

void addStudent(const struct student *const ptr)
{
	link current = head;	//sets new pointer current to start looping from the beginning of the list
	while(NULL != current)
	{
		if(ptr->id == current->data.id)	//Checks if ID already exists in List
		{
				/*Error Message*/
			printf("\nStudent Already Exist!\n");
			printf("If you want to update student info please use option 4!\n\n");
			return;	//Exit Function
		}

		current = current->next;	//moves current to next position in the list
	}	/*End of While Loop*/

		/*Student not repeated adds node to list*/
	link add = (link)malloc(sizeof(node)); // Dynamically Allocating memory for new Node

	if(NULL == add)	//Checks whether memory allocation is successful or not
	{
			/*Error Message*/
		printf("Allocation Fails\n\n");
		return;	//Exit Function
	}

		/*Student not repeated adds node to list*/
	add->data = *ptr;	//Copies input data to node

	add->next = head;	//Connects new node with head
	head = add;			//Changes the head to the new node

	printf("\nAdded Successfully!\n\n");

}	/*End of Function*/

void displayStudents(void)
{
	if(NULL == head)	//Checks for empty list
	{
		printf("No Student Registered!\nPlease Add Student data then try again...\n\n");
		return;
	}

	printf("\n"); //Prints New line for better data viewing

	link current = head;	//sets new pointer current to start looping from the beginning of the list
	while(NULL != current)	//Loops till the end of the list
	{
			/*Printing Each Student Data in Order*/
		printf("Student ID: %d\n", current->data.id);
		printf("Student Name: %s\n", current->data.name);
		printf("Student Age: %d\n", current->data.age);
		printf("Student GPA: %0.2f\n\n", current->data.gpa);

		current = current->next;	//moves current to next position in the list
	}	/*End of While Loop*/

}	/*End of Function*/

void searchStudentByID(const int id)
{
	printf("\n"); //Prints New line for better data viewing

	if(head == NULL)	//Checks for empty list
	{
		  /*Error Message*/
		printf("Empty List!\n");
		return;
	}

	link current = head; //sets new pointer current to start looping from the beginning of the list
	while(NULL != current)	//Loops till the end of the list
	{
		if(id == current->data.id)	//Checks for Student ID
		{
				/*Prints Student Data*/
			printf("Student ID: %d\n", current->data.id);
			printf("Student Name: %s\n", current->data.name);
			printf("Student Age: %d\n", current->data.age);
			printf("Student GPA: %0.2f\n\n", current->data.gpa);
			return;
		}	/*End of If condition*/

		current = current->next;	//moves current to next position in the list
	}	/*End of While Loop*/

	printf("Student Not Found!"); //Only if we exit from the while loop and student wasn't found

}	/*End of Function*/

void updateStudent(const int id)
{
	printf("\n"); //Prints New line for better data viewing

	if(head == NULL)	//Checks for empty list
	{
		/*Error Message*/
		printf("Empty List!\n");
		return;
	}

	link current = head; //sets new pointer current to start looping from the beginning of the list
	while(NULL != current)	//Loops till the end of the list
	{
		if(id == current->data.id)	//Checks for Student ID
		{
				/*Scans new Student Data*/
			printf("Enter Student Name: ");
			scanf(" %[^\n]s", current->data.name);

			printf("Enter Student Age: ");
			scanf(" %d", &current->data.age);

			printf("Enter Student GPA: ");
			scanf(" %f", &current->data.gpa);

			printf("\nUpdate Successful!\n"); //Success message
			return;
		}	/*End of If condition*/

		current = current->next;	//moves current to next position in the list
	}	/*End of While Loop*/

}	/*End of Function*/

float calculateAverageGPA(void)
{

	printf("\n"); //Prints New line for better data viewing

	if(head == NULL)	//Checks for empty list
	{
		/*Error Message*/
		printf("Empty List!\n");
		return 0.0; // Exit function, no average is calculated
	}

	int numberOfStudents = 0;	//Initializes number of students used for calculating average
	float sumOfGPAs = 0.0;	//Initializes sum of grades used for calculating average

	link current = head; //sets new pointer current to start looping from the beginning of the list
	while(NULL != current)	//Loops till the end of the list
	{
		numberOfStudents++;
		sumOfGPAs += current->data.gpa;

		current = current->next;	//moves current to next position in the list
	}	/*End of While Loop*/

	return sumOfGPAs / numberOfStudents; // Calculates and returns the Mean Average of all student GPAs

}	/*End of Function*/

void searchHighestGPA(void)
{
	printf("\n"); //Prints New line for better data viewing

	if(head == NULL)	//Checks for empty list
	{
		/*Error Message*/
		printf("Empty List!\n");
		return; // Exit function
	}

	link maxGPAptr = head;	//sets new pointer to hold the address of the node with the highest GPA
	link current = head->next;	//Starts Looping from the second node after head
	while(NULL != current)	//Loops till the end of the list
	{
		if(current->data.gpa > maxGPAptr->data.gpa) //checks if current node has higher GPA than maxGPAptr
			maxGPAptr = current;	//If true changes maxGPTptr to current node

		current = current->next;	//moves current to next position in the list
	}	/*End of While Loop*/


		/*Prints Top Student Data*/
	printf("The Top Student is:\n");
	printf("\tStudent ID: %d\n", maxGPAptr->data.id);
	printf("\tStudent Name: %s\n", maxGPAptr->data.name);
	printf("\tStudent Age: %d\n", maxGPAptr->data.age);
	printf("\tStudent GPA: %0.2f\n\n", maxGPAptr->data.gpa);


}	/*End of Function*/

void deleteStudent(int id)
{
	printf("\n"); //Prints New line for better data viewing

	if(head == NULL)	//Checks for empty list
	{
		/*Error Message*/
		printf("Empty List!\n");
			return; // Exit function
	}

	if(id == head->data.id)	//checks head node first
	{
			/*Student Found*/
		link delete_node = head;	//temporary pointer to free memory
		head = head->next;	//moves head to the next location
		free(delete_node);	//free memory
		printf("\nDeletion Successful!\n"); //success message
		return; //Exit Function, Deletion is successful
	}	/*End of If condition*/

	link prev = head;	//new pointer to point at previous node
	link current = head;	//sets new pointer current to start looping from the beginning of the list
	while(NULL != current)	//Loops till the end of the list
	{
		if(id == current->data.id)	//Checks for Student ID
		{
				/*Student Found*/
			link delete_node = current;	//temporary pointer to free memory
			prev->next = delete_node->next;	//connects nodes at either side of deleted node
			free(delete_node);	//free memory
			printf("\nDeletion Successful!\n");	//success message
			return;	//Exit Function, Deletion is successful
		}	/*End of If condition*/

		prev = current;	//Moves previous to next node
		current = current->next;	//moves current to next position in the list
	}	/*End of While Loop*/

	/*Exit While loop, student is not found*/
	printf("\nDeletion Failed!\nStudent Not Found...\n\n");

}	/*End of Function*/



