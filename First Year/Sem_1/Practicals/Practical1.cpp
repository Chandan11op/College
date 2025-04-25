//Write a program to find the addition, subtraction,multiplication, division if two numbers. 
#include<stdio.h>
#include<conio.h>

int main()
{
int r1,r2,r3,r4,num1,num2;
num1=11,num2=9;
printf("\n num1 = %d num2 = %d",num1,num2);
r1=num1+num2;
printf("\n num1 + num2 = %d ",r1);
r2=num1-num2;
printf("\n num1 - num 2 = %d",r2);
r3=num1*num2;
printf("\n num1 * num2 = %d",r3);
r4=num1/num2;
printf("\n num1 / num2 = %d",r4);
getch();
return 0;
}
