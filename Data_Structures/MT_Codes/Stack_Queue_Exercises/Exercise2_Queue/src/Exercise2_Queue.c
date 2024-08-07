/*
 ============================================================================
 Name        : Exercise2_Queue.c
 Author      : Mohamed Tarek
 Date        : 6/3/2019
 Description : Example to implement the Queue data structure.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
   int data;
   struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

//insert node at the end of the list
void Enqueue(int data)
{
	// Allocate memory for new node;
	struct node *link = (struct node*) malloc(sizeof(struct node));

	// insert the data to the new node and make the next point to null
	link->data = data;
	link->next = NULL;

	// If front is empty(empty queue), create new list
	if(front==NULL)
	{
		front = link;
		rear = link;
		return;
	}

	// make the last node in the old list point to the new node
	rear->next = link;

	// move the rear to the new last node
	rear = link;
}

//remove node from the front(head) of the list
void Dequeue(void)
{
   //point to the front(head) using the deleted_node
   struct node *deleted_node = front;

   // check if the Queue is empty
   if(front == NULL)
   {
	   return;
   }

   //make the the front(head) point to the next node
   front = front->next;

   // remove the current front(head) node
   free(deleted_node);
}

// read the value from the front(head) node
int Peek(void)
{
	// read the front(head) value
	return front->data;
}

//display the list
void printList(void)
{
   struct node *ptr = front;

   printf("[Front] =>");

   //start looping from the front(head) node
   while(ptr != NULL)
   {
      printf(" %d =>",ptr->data);
      ptr = ptr->next;
   }

   printf(" [null]\n");
}

int main(void)
{
	Enqueue(10);

	// print the list
	printList();

	Enqueue(20);

	// print the list
	printList();

	Enqueue(30);

	// print the list
	printList();

	printf("The value of the Front(Head) node : %d\n",Peek());

	Enqueue(1);

	// print the list
	printList();

	Enqueue(40);

	// print the list
	printList();

	Enqueue(56);

	// print the list
	printList();

	Dequeue();

	// print the list
	printList();

	printf("The value of the Front(Head) node : %d\n",Peek());

	Dequeue();

	// print the list
	printList();

	printf("The value of the Front(Head) node : %d\n",Peek());
	return 0;
}
