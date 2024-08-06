/*
================================================================
	Name		: stack.h
	Created on	: Aug 6, 2024
	Author		: Ameer Louly
	Description	: Contains stack definitions function protoyepe
=================================================================
 */

#ifndef STACK_H_
#define STACK_H_

struct node
{
	int data;
	struct data* next;
};

void push(const int e);
void pop(void);


#endif /* STACK_H_ */
