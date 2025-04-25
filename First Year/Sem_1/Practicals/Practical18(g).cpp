/* print the following pattern
1
23
456
78910
1112131415 */
#include<stdio.h>
#include<conio.h>

int main()
{
    int n = 5; // Number of rows
    int num = 1; // Starting number
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    getch();
    return 0; 
}
