// Write a Program to find the largest of three numbers using if-else.
#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2,num3;
    printf("\nEnter any three numbers:");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2&&num1>num3)
    {
    printf("\n%d Number is greater number.",num1);
    }
    else if(num2>num1&&num2>num3)
    {
        printf("\n%d Number is greater number.",num2);
    }else{
    printf("\n%d Number is greater number.",num3);
    }
    return 0;
}
