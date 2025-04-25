//Write a program to print area of square using #define preprocessor as functions.
#include<stdio.h>
#include<conio.h>
#define SQUARE(x) x*x

int main()
{
    int num;
    printf("Enter any Number:");
    scanf("%d", &num);
    printf("\n The Square is :%d",SQUARE(num));
    getch();
    return 0;
} 
