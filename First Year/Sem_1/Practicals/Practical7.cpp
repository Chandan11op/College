// Write a Program to check whether the number is even or odd.
#include<stdio.h>
#include<conio.h>
//program to check whether the number is even or odd
int main()
{
    int num1;
    //Initialize and read in a value for num1
    printf("\n Enter any Number:");
    scanf("%d",&num1);
    if((num1%2)==0)//checking condition for even or odd
    {
        printf("\n %d Number is Even.",num1);
    }
    else
    {
        printf("\n%d Number is Odd.",num1);
    }
    getch();
    return 0;
}
