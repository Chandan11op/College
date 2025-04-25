//Write a program that solves Quadratic equation
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float a, b, c, x1, x2, determinant, realpart, imaginarypart;
    printf("Enter coefficients a, b and c:");
    scanf("%f %f %f",&a, &b, &c);
    determinant = b*b-4*a*c;
    if(determinant>0)
    {
        x1=(-b+sqrt(determinant))/(2*a);
        x2=(-b-sqrt(determinant))/(2*a);
        printf("Roots are real and different.");
        printf("\n x1 = %.3f",x1);
        printf("\n x2 = %.3f",x2);
    }
    else if(determinant == 0)
    {
        printf("Roots are real and same.");
        x1=(-b+sqrt(determinant))/(2*a);
        printf("\n x1 = %.3f",x1);
        printf("\n x2 = %.3f",x2);
    } else {
        realpart=-b/(2*a);
        imaginarypart=sqrt(-determinant)/(2*a);
        printf("\nRoots are complex and different.");
        printf("\n x1=%.3f+%.3fi",realpart,imaginarypart);
        printf("\n x2=%.3f+%.3fi",realpart,imaginarypart);
    }
    return 0;
}
