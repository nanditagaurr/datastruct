//*****************program for linear search**********************
//*****************program for binary search**********************
//**************made by nandita gaur, 1703210092***************
//******************dated 7th aug,2018**********************

//*************preprocessor directive and header files*********
//*************************************************************

#include<stdio.h>
#include"array_func.h"

//*****************main function*********************************
//***************************************************************

void main()
{
    int a[30],size,ele,pos,op,ch=1;
    while(ch==1)
    {
    printf("enter no of elements you wanna insert in array:");
    scanf("%d",&size);
    insertFresh(a,size);
    printf("enter element u wanna search for:");
    scanf("%d",&ele);
    printf("which searching technique u wanna apply:\n 1. Linear Search\n 2.Binary Search\n");
    scanf("%d",&op);
    switch(op)
    {
        case 1: pos=linearSearch(a,size,ele);
                if(pos==-1)
                    printf("element not found");
                else
                    printf("element found at position:%d",pos);
                break;
        case 2: srt(a,size);
                traverse(a,size);
                pos=bSearch(a,size,ele);
                if(pos==-1)
                    printf("\nelement not found");
                else
                    printf("\n element found at position %d",pos+1);
                break;
        default:printf("wrong choice");
    }
    printf("\nenter 1 to try more...");
    scanf("%d",&ch);
    }
}
//***********************************************************************
//*********************function for linear search*************************
//************************************************************************
int linearSearch(int *p,int n,int e)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(*(p+i)==e)
            {
                c=i+1;
                break;
            }

    }
    if(c!=0)
            return c;
    else return -1;
}

//***********************************************************************
//*********************function for binary search*************************
//************************************************************************
int bSearch(int *p,int size, int item)
{
    int beg,last,mid;
    beg=0;
    last=size-1;
    while(beg<=last)
    {
        mid=(beg+last)/2;
        if(item==*(p+mid))
            return mid;
        else if(item>*(p+mid))
            beg=mid+1;
        else last=mid-1;
    }
    return -1;
}
//***************************************************************
////*********************************end of program***************

//************************************output**********************
//****************************************************************
