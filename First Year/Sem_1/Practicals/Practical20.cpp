//Write a Program for function for call by reference.

#include<stdio.h>
#include<conio.h>

void swap(int *num1,int *num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int main()
{
    clrscr();
    int n1=27,n2=11;
    printf("\n before swap");
    printf("\nNumber 1:%d",n1);
    printf("\nNumber 2:%d",n2);
    swap(&n1,&n2);
    printf("\n after swap");
    printf("\nNumber 1:%d",n1);
    printf("\nNumber 2:%d",n2);
    getch();
    return 0;
}
