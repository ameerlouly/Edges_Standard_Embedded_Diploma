/*
================================================================
	Name		: q4.c
	Created on	: Aug. 5 2024
	Author		: Ameer Louly
	Description	: Find the difference between two time periods using structs
=================================================================
 */
#include <stdio.h>

typedef struct
{
    int hr;
    int min;
    int sec;
} time;

int diff_sec(time *t1, time *t2)   //Returns the difference between 2 time stamps in seconds
{
    int tot1 = t1->hr * 60 * 60 + t1->min * 60 + t1->sec;
    int tot2 = t2->hr * 60 * 60 + t2->min * 60 + t2->sec;
    return tot2 - tot1;
}

void main(void)
{
    time t1, t2;
    scanf("%d %d %d", &t1.hr, &t1.min, &t1.sec);
    scanf("%d %d %d", &t2.hr, &t2.min, &t2.sec);
    printf("Diff in Seconds: %d", diff_sec(&t1, &t2));
    time result;
    result.sec = diff_sec(&t1, &t2);
    while(result.sec >= 60)
    {
        result.sec -= 60;
        result.min++;
    }

    while(result.min >= 60)
    {
        result.min -= 60;
        result.hr++;
    }

    printf("\n%d:%d:%d", result.hr, result.min, result.sec);
}

