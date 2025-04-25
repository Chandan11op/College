//Write a program for function pointer.

#include<stdio.h>
#include<conio.h>
int myfunction(int a, int b)
{
    printf("\n a=%d\n",a);
    printf("\n b=%d\n",b);
    return 0;
}
 int main(void)
{
    clrscr();
    int (*myfunctionp)(int,int);
    myfunctionp = myfunction;
    myfunction(2,3);
    myfunctionp(2,3);
    getch();
    return 0;
}
