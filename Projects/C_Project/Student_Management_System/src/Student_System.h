/*
==================================================================================================================================
	Name		: Student_System.h
	Created on	: Aug 8, 2024
	Author		: Ameer Louly
	Description	: Contains:
	 	 	 	  Node Definition
				  Function Prototypes and Descriptions
==================================================================================================================================
 */

#ifndef STUDENT_SYSTEM_H_
#define STUDENT_SYSTEM_H_

struct student
{
	int id;				/*Student ID*/
	char name[50];		/*Student Name*/
	int age;			/*Student Age*/
	float gpa;			/*Student GPA*/
};

	/*Defining the structure that represents a node in a linked list*/
struct node;
typedef struct node* link;
typedef struct node
{
	struct student data;
	link next;
} node;


	/*Function ProtoTypes and Descriptions*/
void addStudent(const struct student *const ptr);
/*
	• It adds a new student to the linked list. It first checks if the student's ID
	  already exists.

	• If the ID exists, it prints an error message and returns. If the ID does not
	  exist, it attempts to allocate memory for a new node.

	• If memory allocation fails, it prints an error message and returns.

	• If memory allocation is successful, it copies the student data to the new
	  node and adds the node to the end of the linked list.
*/

void displayStudents(void);
/*
	• Displays all students in the linked list.

	• If the list is empty, it prints a message indicating no students are present.
	  Otherwise, it traverses the list and prints the details of each student.
*/

void searchStudentByID(const int id);
/*
	• It searches for a student by their ID in the linked list.

	• If the student is found, it prints their details.

	• If the student is not found, it prints a message indicating the student was
	  not found.
 */

void updateStudent(const int id);
/*
	• Updates the details of a student with a given ID in the linked list.

	• If the student is found, then update the student's information (student
	  name, age, GPA).

	• If the student is not found, it prints a message indicating the student was
	  not found.
*/

float calculateAverageGPA(void);
/*
	• Calculates and returns the average GPA of all students in the linked list.

	• It traverses the list to sum the GPAs of all students and counts the number
	  of students.

	• If the list is empty, it returns 0.0.

	• Otherwise, it computes and returns the average GPA by dividing the total
	  sum of GPAs by the number of students.
*/

void searchHighestGPA(void);
/*
	• Searches for the student with the highest GPA in the linked list.

	• It traverses the list, keeping track of the student with the highest GPA
	encountered.
	• If the list is empty, it prints a message indicating that there are no students.
	• After finding the student with the highest GPA, it prints the details of that
	student.
*/

void deleteStudent(int id);
/*
	• Iterates through the linked list of students starting with the Head of it to
	  find the student with the given ID.

	• If the student is found, it adjusts the pointers to remove the node from the
	  list, frees the memory allocated for the node, and prints a success message.

	• If the student is not found, it prints a message indicating the student was
	  not found.
*/


#endif /* STUDENT_SYSTEM_H_ */
