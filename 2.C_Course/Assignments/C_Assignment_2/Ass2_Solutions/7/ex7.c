/**************************************************************************************************
 Name        : ex1.c
 Author      : Mohamed Tarek
 Description : Assignment 2 - Ex 7
 **************************************************************************************************/
 
#include <stdio.h>

void multiply(int num1,int num2)
{
	if(num1%num2==0)
    {
        printf("\n%d is multiply of %d\n",num1,num2);
    }
    else
    {
        printf("\n%d is not multiply of %d\n",num1,num2);
    }
}

int main()
{
    int input1,input2;
    printf("Please enter the two numbers : ");
    scanf("%d %d",&input1,&input2);
    multiply(input1,input2);
    return 0;
}
