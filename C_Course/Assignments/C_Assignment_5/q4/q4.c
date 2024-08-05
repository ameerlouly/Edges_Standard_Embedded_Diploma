/*
================================================================
	Name		: q4.c
	Created on	: Aug. 5 2024
	Author		: Ameer Louly
	Description	: Find the difference between two time periods using structs
=================================================================
 */
#include <stdio.h>

typedef struct time
{
    int hr;
    int min;
    int sec;
} time;

int diff(time *t1, time *t2)
{
    tot1 = t1->hr * 60 + t1->min + t1->sec / 60;
}
