//Write a program for understanding address operator.
#include<stdio.h>
#include<conio.h>
int main()
{
    int S = 5;
    clrscr();
    int *myptr;
    myptr = &S;
    printf("\n Address of S :%u",&S);
    printf("\n Value of myptr is :%u",myptr);
    getch();
    return 0;
}
