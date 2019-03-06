//*************program for insertion in sorted array***********
//**************made by nandita gaur, 1703210092***************
//******************dated 31st july ,2018**********************

//*************preprocessor directive and header files*********
//*************************************************************
#include<stdio.h>
#include"array_func.h"

//*************************************main function*****************************************
//*******************************************************************************************

void main()
{
    int a[30],size,element;
    printf("enter no of elements:");
    scanf("%d",&size);
    insertFresh(a,size);
    srt(a,size);
    traverse(a,size);
    printf("\nenter element u wanna insert:");
    scanf("%d",&element);
    insertInSorted(a,&size,element);
    traverse(a,size);
}

//******function to insert an element in sorted array**********
//*************************************************************
void insertInSorted(int *p,int *n,int e)
{
    int i,loc;
    for(i=0;i<*n-1;i++)
    {
        if(*(p+i)<=e && e<*(p+i+1))
        {
            loc=i+1;
            break;
        }
    }
    if(i==*n-1)
        loc=*n;
    for(i=*n;i>loc;i--)
        *(p+i)=*(p+i-1);
    *(p+loc)=e;
    *n=*n+1;
}
//***************************************************************
////*********************************end of program***************

//************************************output**********************
//****************************************************************
