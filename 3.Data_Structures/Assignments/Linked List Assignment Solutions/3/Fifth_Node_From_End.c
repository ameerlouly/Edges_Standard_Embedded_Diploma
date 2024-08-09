/*
 ============================================================================
 Name        : Fifth_Node_From_End.c
 Author      : Mohamed Tarek
 Date        : 21/7/2017
 Description : Function that return the data of the 5th node from the end of linked list.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//Create Linked List
void insertAtLast(int data)
{
   // Allocate memory for new node
   struct node *link = (struct node*) malloc(sizeof(struct node));

   // insert the data to the new node and make the next point to null
   link->data = data;
   link->next = NULL;

   // If head is empty, create new list
   if(head==NULL)
   {
      head = link;
      return;
   }

   current = head;

   // loop until reach the last node in the old list
   while(current->next != NULL)
   {
	   current = current->next;
   }

   // Make the last node in the old list point to new node
   current->next = link;
}

//display the list
void printList(void)
{
   struct node *ptr = head;

   printf("[head] =>");

   //start looping from the head until the last node
   while(ptr != NULL)
   {
      printf(" %d =>",ptr->data);
      ptr = ptr->next;
   }

   printf(" [null]\n");
}

// calculate the list size
int sizeOfList(void)
{
   int size = 0;

   // check if the linked list is empty
   if(head==NULL)
   {
      printf("List size : %d ", size);
      return -1;
   }

   current = head;
   size = 1;
   while(current->next != NULL)
   {
      current = current->next;
      size++;
   }
   return size;
}

//find the data of the middle node in linked list
void fifthElmentFromEnd(int *fifth)
{
	struct node *ptr = head;
	// check if the list is empty
	if(head==NULL)
	{
		printf("Empty Linked List \n");
		return;
	}
	// check if the list has only one node
	if(head->next == NULL)
	{
		*fifth = head->data;
		return;
	}
	//check if the array size is greater than or equal 5
	if(sizeOfList() >= 5)
	{
		while(ptr->next->next->next->next->next != NULL)
		{
			//increment step by step until reached the 5th element from the end
			ptr = ptr->next;
		}
		*fifth = ptr->data;
	}
	else
	{
		printf("Linked List Size is smaller than 5\n");
	}
}

int main(void)
{
	int fifthElement;
	insertAtLast(10);
	insertAtLast(20);
	insertAtLast(30);
	insertAtLast(1);
	insertAtLast(40);
	insertAtLast(56);
	insertAtLast(44);

	// print the list
	printList();

	// get the 5th element from the end
	fifthElmentFromEnd(&fifthElement);

	// print data of the 5th node from the end
	printf("The data of the 5th node from the end : %d\n",fifthElement);
	return 0;
}
