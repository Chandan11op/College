//Write a Program for function call by value.
#include<stdio.h>
#include<conio.h>
//program for function call by value
void swap(int num1, int num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}
int main()
{
    int n1=27,n2=11;
    printf("\nBefore swap");
    printf("\nNumber 1:%d",n1);
    printf("\nNumber 2:%d",n2);
    swap(n1,n2);
    printf("\nAfter Swap");
    printf("\nNumber 1:%d",n1);
    printf("\nNumber 2:%d",n2);
    return 0;
}
