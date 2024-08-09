/*
================================================================
	Name		: struct.c
	Created on	: Jul 30, 2024
	Author		: Ameer Louly
	Description	: Testings structs during session
=================================================================
 */
#include <stdio.h>

struct employee
{
	char f_name[10];
	char l_name[20];
	int age;
	char gender;
	double salary;
}emp1, emp2;

void main(void)
{
	emp2.age = 15;
}
