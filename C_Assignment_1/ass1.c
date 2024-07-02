/*
 * ass1.c
 *
 *  Created on: Jul 2, 2024
 *      Author: test
 */
#include<stdio.h>
#include<math.h>
#define pi 3.14159265358979323846

//1

void simp1()
{
    int x, y;
    printf("Enter 2 Numbers: ");
    scanf("%d %d", &x, &y);
    printf("%d\n\n\n", (x + y) * 3 - 10);
}


//2
void printName()
{
    printf("Ameer Louly\n");
    printf("Excellent\n\n\n");
}

//3
int toF(int c)
{
    return c * (9/5) + 32;
}

//4
void circlCalc(int r)
{
    int area = pi * r * r;
    int circum = 2 * pi * r;

    printf("Area = %d    Circumference = %d\n\n\n", area, circum);
}

//5
void printASCII(char c)
{
    printf("%d", c);
}

//6
void findRelation(int x ,int y)
{
    if(x == y)
        printf("%d and %d are Equal\n\n\n", x, y);
    else if(x > y)
        printf("%d is bigger than %d\n\n\n", x, y);
    else
        printf("%d is smaller than %d\n\n\n", x, y);
}

//7
int findSmallest(int x, int  y, int z)
{
    if(x <= y && x <= z)
        return x;
    else if(y <= x && y <= z)
        return y;
    else
        return z;
}      

//8
int isSquare(int x)
{
    if(x > 0)
    {
        double sqr = sqrt(x);
        return sqr * sqr == x;
    }
    
    return 0;
}

//9
void findGrade(int grad)
{
    if(grad >= 85)
    {
        printf("Excellent\n\n\n");
    }
    else if(grad >= 75 && grad < 85)
    {
        printf("Very Good\n\n\n");
    }
    else if(grad >= 65 && grad < 75)
    {
        printf("Good\n\n\n");
    }
    else if(grad >= 50 && grad < 65)
    {
        printf("Pass\n\n\n");
    }
    else
    {
        printf("Fail\n\n\n");
    }
}

//10
void simpCalc()
{
    float x, y;
    int z;
    printf("Enter Two Numbers: ");
    scanf("%f %f", &x, &y);

    printf("Choose operation:\n 1 -  add +\n 2 - subtract -\n 3 - multiply *\n 4 - Divide \n");
    scanf("%d", &z);

    switch(z)
    {
        case 1:
            printf("Result = %f\n\n\n", x + y);
            break;
        case 2:
            printf("Result = %f\n\n\n", x - y);
            break;
        case 3:
            printf("Result = %f\n\n\n", x * y);
            break;
        case 4:
            printf("Result = %f\n\n\n", x / y);
            break;
        default:
            printf("Incorrect Input\n\n\n");

    }
}

//11
int sumInt(int x)
{
    int sum = 0;

    for(int i = 0; i <= x; i++)
        sum += i;

    return sum;
}

//12
int findFact(int x)
{
    int fact = 1;

    while(x)
        fact *= x--;

    return fact;
}

//13
int isPrime(int x)
{
	if(x == 2)
		return 1;
    for(int i = x - 1; i >= x/2; i--)
        if(x % i == 0)
            return 0;
    return 1;
}

//14
void printAlphabet()
{
    char i;
    for(i = 'A'; i <= 'Z'; i++)
        printf("%c ", i);
    printf("\n\n\n");
}

//15
int power(int x, int n)
{
	int r = 2;
    for(int i = 1; i < n; i++)
        r *= x;
    return r;
}

//16
void reverseNum(int num)
{
    int r, newnum = 0;

    while(num)
    {
        r = num % 10;
        newnum = newnum * 10 + r;
        num /= 10;
    }

    printf("%d\n\n\n", newnum);
}

//17
int numDigits(int num)
{
    int n = 0;
    while(num)
    {
        n++;
        num /= 10;
    }

    return n;
}

//18
void pyramid1(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
}

//19
void pyramid2(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i; j++)
            printf("*");
        printf("\n");
    }
}

//20
void pyramid3(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n - i; j++)
            printf(" ");

        for(int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
}
