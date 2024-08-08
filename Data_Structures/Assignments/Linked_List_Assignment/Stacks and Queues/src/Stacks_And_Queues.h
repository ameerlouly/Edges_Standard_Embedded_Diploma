/*
==================================================================================================================================
	Name		: Stacks_And_Queues.h
	Created on	: Aug 8, 2024
	Author		: Ameer Louly
	Description	:
==================================================================================================================================
 */

#ifndef STACKS_AND_QUEUES_H_
#define STACKS_AND_QUEUES_H_

typedef int elemtype;

struct node;
typedef struct node* link;
typedef struct node
{
	elemtype elem;
	link next;
} node;

	/*Stack Functions*/
void push(const elemtype e);
void pop(void);
elemtype peek_stack(void);
void printList_stack(void);

	/*Queue Functions*/
void Enqueue(const elemtype e);
void Dequeue(void);
elemtype peek_queue(void);
void printList_queue(void);

#endif /* STACKS_AND_QUEUES_H_ */
