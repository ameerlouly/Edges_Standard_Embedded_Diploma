/*
==================================================================================================================================
	Name		: QueueProgram.c
	Created on	: Aug 8, 2024
	Author		: Ameer Louly
	Description	: Function Definitions for Queue
==================================================================================================================================
 */
#include "Stacks_And_Queues.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

link front = NULL, rear = NULL;

void Enqueue(const elemtype e)
{
	link add = (link)malloc(sizeof(node));
	add->elem = e;
	add->next = NULL;

	if(front == NULL)
	{
		front = add;
		rear = add;
	}

	rear->next = add;
	rear = add;
}
void Dequeue(void)
{
	link delete_node = front;

	front = front->next;
	free(delete_node);
}

elemtype peek_queue(void)
{
	return front->elem;
}

void printList_queue(void)
{
	link current = front;

	while(current)
	{
		printf("%d\t", current->elem);
		current = current->next;
	}

	printf("\n");
}


