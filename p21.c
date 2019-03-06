//********pr0gram for matrix transpose*******************
//**********made by nandita gaur, 1703210092*************
//***************dated 4th sept,2018*********************

//**************preprocessor and header files*************
//********************************************************
#include<stdio.h>
//********************************************************
//****************main function***************************
void main()
{
    int a[10][10],t[10][10],ra,ca,rt,ct;
    printf("enter no of rows and columns of the matrix:");
    scanf("%d%d",&ra,&ca);
    input(a,ra,ca);
    transpose(a,t,ra,ca,&rt,&ct);
    printf("transpose:");
    out(t,rt,ct);
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
void transpose(int a[10][10],int t[10][10],int r,int c, int *rt,int *ct)
{
    int i,j;
    *rt=c;
    *ct=r;
    for(i=0;i<c;i++)
        for(j=0;j<r;j++)
              t[i][j]=a[j][i];
}
//********************************************************
//********************end of program**********************
//********************************************************
//********************output******************************
