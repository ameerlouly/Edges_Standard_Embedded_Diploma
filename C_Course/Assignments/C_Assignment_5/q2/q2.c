/*
================================================================
	Name		: q2.c
	Created on	: Aug. 5 2024
	Author		: Ameer Louly
	Description	: struct for inch and feet and add
=================================================================
 */
#include <stdio.h>

struct distance
{
    int inch;
    int ft;
};

int main(void)
{
    struct distance d1, d2, result;
    scanf("%d %d", &d1.inch, &d2.inch);
    scanf("%d %d", &d1.ft, &d2.ft);
    
    result.inch = d1.inch + d2.inch;
    while(result.inch >= 12)
    {
        result.inch -= 12;
        result.ft++;
    }

    result.ft = d1.ft + d2.ft;

    printf("\n%d inch, %d feet", result.inch, result.ft);
}
