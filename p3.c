//program to find the number which is not repeated in array of integers,
//others are present for two times***************************************
//**************made by nandita gaur, 1703210092***************
//******************dated 31st july ,2018**********************

//*************preprocessor directive and header files*********
//*************************************************************

#include<stdio.h>
#include"array_func.h"

//*****************main function*********************************
//***************************************************************

main()
{
    int a[30],size;
    printf("enter no of elements you wanna insert in array:");
    scanf("%d",&size);
    insertFresh(a,size);
    check(a,size);
}
//**************************************************************
//**function to check not repeated integers*********************
void check(int *p,int n)
{
    int i,j,c;
    printf("non repeated integers are:");
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
                if(*(p+i)==*(p+j))
               {
                c=1;
                break;
               }
        }
        if(c==0)
            printf("  %d",*(p+i));
    }
}
//***************************************************************
////*********************************end of program***************

//************************************output**********************
//****************************************************************
