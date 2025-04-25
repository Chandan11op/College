// Write a Program to find the factorial of a number using for loop.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,fact,i;
    fact=1;
    printf("\nEnter any Number:");
    scanf("%d",&num); //calculating the factorial
    for(i=1;i<=num;i++) 
    {
        fact=fact*i; 
    }
    printf("Factorial of %d = %d",num,fact); 
    getch();
    return 0; 
}
