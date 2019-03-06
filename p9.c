//***********program for quick sort***************************
//********** made by nandita gaur,1703210092*******************
//****************9th july ,2018*******************************

//*************************************************************
//*********preprocessor directive and header files************

#include<stdio.h>
//************************************************************
//*******************main function****************************
void main()
{
    int a[30],i,n;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter elements in array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    quickSort(a,0,n-1);
    printf("\nsorted array is:");
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);
}
//************************************************************
//****************** function for quick sort******************

void quickSort(int A[], int p, int r)
{
    int q;
    if(p<r)
    {
        q=partition(A,p,r);
        quickSort(A,p,q-1);
        quickSort(A,q+1,r);
    }
}
//************************************************************
//**********function for partition ***************************

int partition(int A[], int p, int r)
{
    int x,i,j,t;
    x=A[r];
    i=p-1;
    for(j=p;j<r;j++)
        if(A[j]<x)
    {
        i=i+1;
        t=A[i];
        A[i]=A[j];
        A[j]=t;
    }
    t=A[i+1];
    A[i+1]=A[r];
    A[r]=t;
    return i+1;
}
//************************************************************
//****************end of program******************************
//************************************************************
//********************output*************************************
