/*
==================================================================================================================================
	Name		: main.c
	Created on	: Aug 8, 2024
	Author		: Ameer Louly
	Description	: Main Program to test my functions
==================================================================================================================================
 */
#include "Stacks_And_Queues.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	push(7);
	printList_stack();

	pop();
	printList_stack();

	pop();
	printList_stack();

	pop();
	printList_stack();

	pop();
	printList_stack();

	printf("\n\n\n Queues:\n");
	Enqueue(10);
	Enqueue(20);
	Enqueue(30);
	Enqueue(40);
	Enqueue(50);
	Enqueue(60);

	printList_queue();

	Dequeue();
	printList_queue();

	Dequeue();
	printList_queue();

	Dequeue();
	printList_queue();

	Dequeue();
	printList_queue();


}


