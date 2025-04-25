// Write a Program that performs addition and subtraction of matrices.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,c,r;
    clrscr();
    int a[10][10],b[10][10],madd[10][10],msub[20][20];
    printf("\nEnter the value for row and column:");
    scanf("%d %d",&c,&r);
    printf("\n Enter the value for matrix A.\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("\t%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("\n Enter the value for matrix B.\n");
    for(i=0;i<c;i++)
        {
            for(j=0;j<r;j++)
            {
            scanf("\t%d",&b[i][j]);
            }
            printf("\n");
        }
    printf("\n Matrix A:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("\t%d",a[i][j]);
        }
    }
    printf("\n");
    printf("\n Matrix b:\n");
    for(i=0;i<c;i++)
        {
            for(j=0;j<r;j++)
            {
                printf("\t%d",b[i][j]);
            }
        }
    printf("\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            madd[i][j]=a[i][j]+b[i][j];
            msub[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("\nThe addition matrix is:\n");
    for(i=0;i<c;i++)
    {
        printf("\t%d",madd[i][j]);
    }
    printf("\n");
    printf("\nThe subtraction matrix is:\n");
    for(i=0;i<c;i++)
    {
        printf("\t%d",msub[i][j]);
    }
    printf("\n");
    getch();
    return 0;
}
