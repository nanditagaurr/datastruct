//********pr0gram for matrix multiplication**************
//**********made by nandita gaur, 1703210092*************
//***************dated 4th sept,2018*********************

//**************preprocessor and header files*************
//********************************************************
#include<stdio.h>
//********************************************************
//****************main function***************************
void main()
{
    int a[10][10],b[10][10],c[10][10],ra,rb,ca,cb;
    printf("Matrix 1:\n enter no of rows and columns:");
    scanf("%d%d",&ra,&ca);
    printf("Matrix 2:\nenter no of rows and columns:");
    scanf("%d%d",&rb,&cb);
    if(ca!=rb)
        printf("multiplication can't be carried out!!");
    else
    {
        printf("enter elements of matrix 1:\n");
        input(a,ra,cb);
        printf("\nenter elements of matrix 2:\n");
        input(b,rb,cb);
        multiply(a,b,c,ra,cb,ca);
        printf("Matrix 1 * Matrix 2=");
        out(c,ra,cb);
    }
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
            printf("\t%d",p[i][j]);
    }
}
//********************************************************
//*********function to multiply elements of two matrix****
void multiply(int a[10][10], int b[10][10], int m[10][10], int r,int c,int n)
{
    int i,j,k;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        {
            m[i][j]=0;
            for(k=0;k<n;k++)
                m[i][j]+=a[i][k]*b[k][j];
        }
}
//********************************************************
//********************end of program**********************
//********************************************************
//********************output******************************
