// Write a Program to Check whether the given number is greater than 5 or not.
#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    //Initialize and read in a value for num1
    printf("\nEnter an integer between 1 and 10:");
    scanf("%d",&num);
    if(num>5)
    {
        printf("You entered %d which is greater than 5\n", num);
    }else{
        printf("You entered %d which is not greater than 5\n", num);    
    }
    getch();
    return 0;
}
