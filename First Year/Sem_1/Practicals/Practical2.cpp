//Write a Program to print area of circle using #define preprocessor.

#include<stdio.h>
#include<conio.h>
#define PI 3.14

int main()
{
    int radius;
    float area;
    printf("Enter radius=");
    scanf("%d",&radius);
    area = PI*radius*radius;
    printf("\nArea of circle:%2f",area);
    getch();
    return 0;
}
