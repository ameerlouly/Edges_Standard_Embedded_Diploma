/*
================================================================
	Name		: q3.c
	Created on	: Aug. 5 2024
	Author		: Ameer Louly
	Description	: struct for complex numbers and add using function
=================================================================
 */
#include <stdio.h>

struct complex
{
    int real;
    int img;
};

void add(struct complex* c1, struct complex* c2)
{
    c1->real += c2->real;
    c1->img += c2->img;
}

void main(void)
{
    struct complex c1, c2;

    scanf("%d %d", &c1.real, &c1.img);
    scanf("%d %d", &c2.real, &c2.img);

    add(&c1, &c2);

    printf("\n Result = %d + %di", c1.real, c1.img);
}
