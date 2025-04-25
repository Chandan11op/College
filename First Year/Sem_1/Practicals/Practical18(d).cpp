
/*
*
**
***
****
*****
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int i, j;
    int n = 5; // Number of rows
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
    return 0;
}
