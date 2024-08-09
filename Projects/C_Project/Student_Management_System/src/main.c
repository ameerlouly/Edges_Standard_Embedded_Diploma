/*
==================================================================================================================================
	Name		: main.c
	Created on	: Aug 8, 2024
	Author		: Ameer Louly
	Description	: Main Program, Contains code for each function and all program states
==================================================================================================================================
 */
#include <stdio.h>
#include "Student_System.h"

int main(void)
{
	/*Sets buffer size to 0, to ensure console working properly*/
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);


	int selection; //input from user to choose option in program
	struct student user_input; //used to store input from user;
	int input_id; //used to store id input from user

	while(1)
	{
			/*Prints Option Menu*/
		printf("Enter Option Number to Choose it:\n\n");
		printf("1: Add Student\n");
		printf("2: Display Students\n");
		printf("3: Search for Student (with ID)\n");
		printf("4: Update Student (with ID)\n");
		printf("5: Delete Student (with ID)\n");
		printf("6: Calculate Average GPA\n");
		printf("7: Print Highest GPA Student info\n");
		printf("8: Exit Program\n\n");
		printf("Enter your selection: ");
		scanf("%d", &selection);	//gets selection option from user

		switch (selection)
		{
			case 1:
				/*Inputs Student Data from user in puts in in Structure called user_inpute*/
				printf("Enter Student ID: ");
				scanf(" %d", &user_input.id);

				printf("Enter Student Name: ");
				scanf(" %[^\n]s", user_input.name);

				printf("Enter Student Age: ");
				scanf(" %d", &user_input.age);

				printf("Enter Student GPA: ");
				scanf(" %f", &user_input.gpa);

				addStudent(&user_input);	//calls addStudent function and adds inputed data
				break;

			case 2:
				displayStudents();	//calls displayStudents Functions for viewing student data
				break;

			case 3:
				printf("Enter Student ID: ");
				scanf(" %d", &input_id); //Scan ID from user
				searchStudentByID(input_id); //Calls Function
				break;

			case 4:
				printf("Enter Student ID: ");
				scanf(" %d", &input_id); //Scan ID from user
				updateStudent(input_id); //Calls Function
				break;

			case 5:
				printf("Enter Student ID: ");
				scanf(" %d", &input_id); //Scan ID from user
				 deleteStudent(input_id);//Calls Function
				break;

			case 6:
				printf("Average GPA of all student: %0.2f\n\n", calculateAverageGPA());
				break;

			case 7:
				searchHighestGPA();
				break;

			case 8:
				printf("\n\nThanks for using our System!\nSee you later :D\n");
				return 0;

			default:
				printf("\n\nPlease Enter Valid Option from 1 to 8\n\n");
		}
	}

	return 0;
}

