//Write a program that performs the multiplication of matrices.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,c,r,k;
    clrscr();
    int a[10][10],b[10][10],mmu[10][10];
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
        printf("\n");
    }
    printf("\n Matrix b:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            mmu[i][j]=0;
            for(k=0;k<c;k++)
            {
                mmu[i][j]+=a[i][j]*b[i][j];
            }
        }
    }
    printf("\nThe multiplication matrix is:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("\t%d",mmu[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
