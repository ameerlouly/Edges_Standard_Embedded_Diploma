/**************************************************************************************************
 Name        : ex12.c
 Author      : Mohamed Tarek
 Description : Assignment 2 - Ex 12
 **************************************************************************************************/
 
#include <stdio.h>

unsigned int CalcualteHeatingTime(unsigned int WaterTemperature)
{
    unsigned int result;
    if(WaterTemperature > 100)
         result = 0;
    else if(WaterTemperature > 90)
         result = 1;
    else if((WaterTemperature <= 90) && (WaterTemperature > 60))
         result = 3;
    else if((WaterTemperature <= 60) && (WaterTemperature > 30))
         result = 5;
    else if((WaterTemperature <= 30) && (WaterTemperature >= 0))
         result = 7;
    return result;
}

int main(void)
{
	printf("%d",CalcualteHeatingTime(10));
	printf("\n%d",CalcualteHeatingTime(35));
	return 0;
}