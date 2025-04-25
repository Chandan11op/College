//Write a program to print the following patterns.
#include<stdio.h>
#include<conio.h>
/*print following pattern
1
12
123*/
int main()
{
    int i,j,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    //for used as row wise.
    for(i=1;i<=n;i++)
    {
    // for used as column wise.
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
