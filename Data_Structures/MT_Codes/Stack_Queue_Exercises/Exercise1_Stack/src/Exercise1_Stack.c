/*
 ============================================================================
 Name        : Exercise1_Stack.c
 Author      : Mohamed Tarek
 Date        : 6/3/2019
 Description : Example to implement the stack data structure.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
   int data;
   struct node *next;
};

struct node *top = NULL;

//insert node at the top of the list
void Push(int data)
{
   //create a new node
   struct node *link = (struct node*) malloc(sizeof(struct node));

   //store data in the node
   link->data = data;

   //point the next pointer to the old top node
   link->next = top;

   //point the top to the new first node
   top = link;
}

//remove node from the top of the list
void Pop(void)
{
   //point to the top using the deleted_node
   struct node *deleted_node = top;

   // check if the Stack is empty
   if(top == NULL)
   {
	   return;
   }

   //make the the top point to the next node
   top = top->next;

   // remove the current top node
   free(deleted_node);
}

// read the value from the top node
int Peek(void)
{
	// read the top value
	return top->data;
}

//display the list
void printList(void)
{
   struct node *ptr = top;

   printf("[top] =>");

   //start looping from the top node
   while(ptr != NULL)
   {
      printf(" %d =>",ptr->data);
      ptr = ptr->next;
   }

   printf(" [null]\n");
}

int main(void)
{
	Push(10);

	// print the list
	printList();

	Push(20);

	// print the list
	printList();

	Push(30);

	// print the list
	printList();

	printf("The value of the Top node : %d\n",Peek());

	Push(1);

	// print the list
	printList();

	Push(40);

	// print the list
	printList();

	Push(56);

	// print the list
	printList();

	Pop();

	// print the list
	printList();

	printf("The value of the Top node : %d\n",Peek());

	Pop();

	// print the list
	printList();

	printf("The value of the Top node : %d\n",Peek());
	return 0;
}
