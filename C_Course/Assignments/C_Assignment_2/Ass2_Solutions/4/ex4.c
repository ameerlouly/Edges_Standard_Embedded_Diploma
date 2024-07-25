/**************************************************************************************************
 Name        : ex1.c
 Author      : Mohamed Tarek
 Description : Assignment 2 - Ex 4
 **************************************************************************************************/
 
#include <stdio.h>

#define NO_ERROR_VALID_OPERATION 0
#define ERROR_INVALID_OPERATION 1

float operation(char op,float n1, float n2,int * error_ptr)
{
	float result;
	switch(op)
	{
		case '+' :
			result = n1 + n2;
			*error_ptr = NO_ERROR_VALID_OPERATION;
			break;
		case '-' :
			result = n1 - n2;
			*error_ptr = NO_ERROR_VALID_OPERATION;
			break;
		case '*' :
			result = n1 * n2;
			*error_ptr = NO_ERROR_VALID_OPERATION;
			break;
		case '/' :
			result = n1 / n2;
			*error_ptr = NO_ERROR_VALID_OPERATION;
			break;
		default  :
			printf("\nError Invalid Input Operation");
			*error_ptr = ERROR_INVALID_OPERATION;
			break;
	}
	return result;
}

int main(void) {
	char op;
	float num1,num2;
	float result;
	int error = NO_ERROR_VALID_OPERATION; // used to check if the input operation is valid or not
	printf("Please enter the required operation : ");
	scanf("%c",&op);
	printf("\nPlease enter the two numbers : ");
	scanf("%f %f",&num1,&num2);
	result = operation(op,num1,num2,&error);
	if(error == NO_ERROR_VALID_OPERATION)
	{
		printf("\nresult = %f",result);
	}
	else if(error == ERROR_INVALID_OPERATION)
	{
		printf("\nNo Results");
	}

	return 0;
}
