// Write a program to compute the sum of all elements stored in an array.
#include<stdio.h>
#include<conio.h>
// to compute the sum of all elements stored in an array.
int main()
{
    int a[5];
    int i,sum=0;
    int *ptr;
    printf("\n Enter 5 Elements:");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    ptr=a; //a=&a[0]
    for(i=0;i<5;i++)
    {
        sum=sum+ *ptr;
        ptr++;
    }
    printf("The sum of array elements:%d",sum);
    return 0;
}
