/*
 ============================================================================
 Name        : Find_Middle_Node_Data.c
 Author      : Mohamed Tarek
 Date        : 21/7/2017
 Description : Function that return the data of the middle node in linked list.
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

//find the data of the middle node in linked list
void findMiddleNode(int *mid)
{
	struct node *ptr1 = head;
	struct node *ptr2 = head;
	int step = 0;
	// check if the list is empty
	if(head==NULL)
	{
		printf("Empty Linked List \n");
		return;
	}
	// check if the list has only one node
	if(head->next == NULL)
	{
		*mid = head->data;
		return;
	}
	// increment one pointer by two steps and the other one by one step
	// in case the first one reached the end of the linked list.
	// the second will be point to the middle node
	while(ptr1->next != NULL)
	{
		ptr1 = ptr1->next;
		step++;
		if(step == 2)
		{
			ptr2 = ptr2->next;
			step = 0;
		}
	}
	*mid = ptr2->data;
}

int main(void)
{
	int middle;
	insertAtLast(10);
	insertAtLast(20);
	insertAtLast(30);
	insertAtLast(1);
	insertAtLast(40);
	insertAtLast(56);
	insertAtLast(44);

	// print the list
	printList();

	// get the middle element
	findMiddleNode(&middle);

	// print the middle node data
	printf("The data of the middle node : %d\n",middle);
	return 0;
}
