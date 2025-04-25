//Write a program to print 5 numbers using #define preprocessor directive array size.
#include<stdio.h>
#include<conio.h>
#define SIZE 5

    int main()
    {
    int num[SIZE],i;
    for(i=0;i<SIZE;i++)
    {
        printf("Enter any number:");
        scanf("\n%d", &num[i]);
    }
    printf("\nArray elements are:\n");
    for(i=0;i<SIZE;i++)
    {
        printf("%d\t", num[i]);
    }
    getch();
    return 0;
}
