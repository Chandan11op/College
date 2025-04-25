//Write a program to find the sum of squares of digits of numbers
#include<stdio.h>
#include<conio.h>

int main()
{
    int num,i,sum=0;
    // initialize and read in a value for num.
    printf("\nEnter Number:");
    scanf("%d",&num);
    //calculating the sum square of digit
    for(i=1;i<=num;i++)
    {
        sum=sum+(i*i);
    }
    printf("\nSum of square of digits = %d",sum);
    return 0;
}
