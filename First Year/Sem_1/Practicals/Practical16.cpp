//Write a program to print the Fibonacci series (Pg. 55).

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a,b,c,num;
    a=0;
    b=1;
    //initialize and read in a value for num
    printf("\nEnter number:");
    scanf("%d",&num);
    printf("\nFibonacci series up to %d term \n",num);
    // by default fibonaaci series starting values 0 and 1.
    printf("%d\t%d",a,b);
    // Remaining fibonacci series starting values calculating.
    for(i=3;i<=num;i++)
    {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
    }
    return 0;
}
