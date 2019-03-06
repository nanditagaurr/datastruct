//**********************program for array insertion,deletion and traversal******************
//************************made by nandita gaur,1703210092***********************************
//******************************dated 31st july,2018****************************************

//*************preprocessor directive and header files**************************************
//******************************************************************************************
#include<stdio.h>
#include"array_func.h"

//*************************************main function*****************************************
//*******************************************************************************************
void main()
{
    int a[20],n,op,pos,ele,ch=1;
    printf("Enter no of elements:");
    scanf("%d",&n);
    insertFresh(a,n);
    while(ch==1)
    {
        printf("Choose operation on array:\n 1.Insertion\n 2.Deletion\n 3. Traversal\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1: printf("\n Enter element and its position:");
                    scanf("%d%d",&ele,&pos);
                    insertElement(a,&n,ele,pos);
                break;
            case 2: printf("\nEnter position at which u want to delete from array:");
                    scanf("%d",&pos);
                    del(a,&n,pos);
                break;
            case 3: traverse(a,n);
                break;
            default:printf("\n wrong choice");
        }
        printf("\ndo u want to continue?? press 1...");
        scanf("%d",&ch);
    }
}
//***********************************************************************************************
//*********************************end of program***********************************************

//************************************output******************************************************
//************************************************************************************************
