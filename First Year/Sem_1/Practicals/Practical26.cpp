//Write a program to dereferencing of pointers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int T, *S;
    clrscr();
    T=10;
    S= &T;
    printf("\n%d",*S); //will give value of T.
    printf("\n%d",*&T); //will give value of T.
    printf("\n%u",&T); //will give address of T.
    printf("\n%u",S); //will give address of T.
    printf("\n%u",&T); //will give address of S.
    getch();
    return 0;
}
