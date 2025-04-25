#include<stdio.h>
#include<conio.h>
/*print the following pattern
1
21
321
4321
54321*/
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
