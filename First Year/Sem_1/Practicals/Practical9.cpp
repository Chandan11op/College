// Write a Program to enter a number from the user and display the month name. if number>13 then display “invalid input” using switch case.
#include<stdio.h>
#include<conio.h>

int main()
{
    int num1;
    //initialize and read in a value for num1.
    printf("\nEnter month number:");
    scanf("\n%d", &num1);
    switch(num1)
    {
        case 1:printf("January.");
        break;
        case 2:printf("February.");
        break;
        case 3:printf("March.");
        break;
        case 4:printf("April.");
        break;
        case 5:printf("May.");
        break;
        case 6:printf("June.");
        break;
        case 7:printf("July.");
        break;
        case 8:printf("August.");
        break;
        case 9:printf("September.");
        break;
        case 10:printf("October.");
        break;
        case 11:printf("November.");
        break;
        case 12:printf("December.");
        break;
        default:printf("INVALID INPUT.");
    }
    getch();
    return 0;
}
