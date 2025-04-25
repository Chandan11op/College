//Program to print 1 to 10 numbers using while loop.

#include<stdio.h>
#include<conio.h>

int main()
{
    int num1;
    num1=1;
    while(num1<=10)
    {
        printf("\t%d", num1);
        num1++;
    }
    getch();
    return 0;
}
