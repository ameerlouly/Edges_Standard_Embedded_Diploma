/*
==================================================================================================================================
	Name		: main.c
	Created on	: Aug 7, 2024
	Author		: Ameer Louly
	Description	:
==================================================================================================================================
 */
#include <stdio.h>
#include "Linked_List.h"


int main(void)
{

	insertAtFirst(60);
	insertAtFirst(5);
	insertAtFirst(23);
	insertAtFirst(50);
	insertAtFirst(10);
	insertAtFirst(3);
	insertAtFirst(11);

	printList();

	printf("Middle Element: %d\n", findMiddle());

	int x;
	fifthFromBack(&x);
	printf("Fifth Element from the back: %d\n", x);

	insertAndAdd(15, 3);

	printList();

	printf("Middle Element: %d\n", findMiddle());

	fifthFromBack(&x);
	printf("Fifth Element from the back: %d\n", x);
	printf("Sum of List: %d\n", sumOfList());
	printf("Maximum in List: %d\n", maxInList());
}
