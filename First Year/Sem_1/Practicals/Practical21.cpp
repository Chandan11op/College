// Write a Program to find the largest value that is stored in the array.

#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],max,num,c,pos=1;
    clrscr();
    printf("Enter the number of elements in array\n");
    scanf("%d",&num);
    printf("Enter %d integers\n", num);
    for(c=0;c<num;c++) 
    {
        scanf("%d",&a[c]); 
    }
    max = a[0];
    for(c=1;c<num;c++)
    {
        if(a[c]>max)
        {
            max=a[c];
            pos=c+1;
        }
    }
    printf("Maximum elements is present at location %d and it's value is %d.\n", pos,max);
    getch();
    return 0;
}
