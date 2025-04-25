// Write a Program to check whether the number is positive,negative or zero.
#include<stdio.h>
#include<conio.h>
//program to check wether the number is positive ,negative or zero.
int main()
{
    int num1;
    //initialize and read in a value for num1.
    printf("\nEnter any number:");
    scanf("%d",&num1);
    if(num1>0)
    {
        printf("\n%d Number is positive.",num1);
    }
    else if(num1<0)
    {
        printf("\n%d Number is negative.",num1);
    }else{
        printf("\n%d Number is zero.",num1);
    }
    getch();
    return 0;
}
