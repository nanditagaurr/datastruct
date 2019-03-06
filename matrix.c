//********pr0gram for matrix addition********************
//**********made by nandita gaur, 1703210092*************
//***************dated 4th sept,2018*********************

//**************preprocessor and header files*************
//********************************************************
#include<stdio.h>
//********************************************************
//****************main function***************************
void main()
{
    int a[10][10],b[5][6],c[10][10],m,n;
    printf("enter no of rows of matrix:");
    scanf("%d",&m);
    printf("enter no of columns:");
    scanf("%d",&n);
    printf("enter elements of matrix 1:\n");
    input(a,m,n);
    printf("\nenter elements of matrix 2:\n");
    input(b,m,n);
    sum(a,b,c,m,n);
    printf("sum:");
    out(c,m,n);
}
//******************end of main***************************
//********************************************************

//*****function to input elements in a matrix*************
//********************************************************
void input(int p[10][10], int r, int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        printf("row %d:",i+1);
        for(j=0;j<c;j++)
            scanf("%d",&p[i][j]);
    }
}
//********************************************************
//*****function to print elements of matrix***************
void out(int p[10][10],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
            printf("  %d",p[i][j]);
    }
}
void sum(int a[10][10],int b[10][10],int c[10][10],int r,int cl)
{
    int i,j;
    for(i=0;i<r;i++)
            for(j=0;j<cl;j++)
                c[i][j]=a[i][j]+b[i][j];
}
//********************************************************
//********************end of program**********************
//********************************************************
//********************output******************************
