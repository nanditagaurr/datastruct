//****program for bubble,selection,insertion sort**************
//********** made by nandita gaur,1703210092*******************
//****************9th july ,2018*******************************

//*************************************************************
//*********preprocessor directive and header files************
#include<stdio.h>
//************************************************************
//*******************main function****************************
void main()
{
    int a[50],ch=1,op,n,i;
    printf("enter size of array:");
    scanf("%d",&n);
    while(ch==1)
    {
        printf("\nenter elements:");
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        printf("Select by which technique u wanna sort array:\n 1. Bubble sort\n 2. Selection Sort\n 3. Insertion sort\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:bubbleSort(a,n);
                    printf("\nArray after sorting:\n");
                    traverse(a,n);
                    break;
            case 2:selSort(a,n);
                    printf("\nArray after sorting:\n");
                    traverse(a,n);
                    break;
            case 3:insSort(a,n);
                    printf("\nArray after sorting:\n");
                    traverse(a,n);
                    break;
            default:printf("wrong choice");
        }
       printf("\nenter 1 to try again...:");
       scanf("%d",&ch);
    }
}
//************************************************************
//***********function to print elements of array**************
void traverse(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d  ",a[i]);
}
//************************************************************
//*************function for bubble sort***********************
void bubbleSort(int *p,int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
            if(*(p+j)>*(p+j+1))
            {
               t=*(p+j+1);
               *(p+j+1)=*(p+j);
               *(p+j)=t;
            }
}
//************************************************************
//**************function for selection sort*******************
void selSort(int *p,int n)
{
    int small,pos,t,i,j;
    for(i=0;i<n-1;i++)
    {
        small=*(p+i);
        pos=i;
        for(j=i+1;j<n;j++)
            if(*(p+j)<small)
            {
                small=*(p+j);
                pos=j;
            }
        t=*(p+i);
        *(p+i)=*(p+pos);
        *(p+pos)=t;
    }
}
//************************************************************
//******************function for insertion sort***************
void insSort(int *p,int n)
{
   int i,j,min;
    for(i=0;i<n;i++)
    {
        min=*(p+i);
        j=i-1;
        while(min<*(p+j)&&j>=0)
        {
            *(p+j+1)=*(p+j);
            j=j-1;
        }
        *(p+j+1)=min;
    }
}
//************************************************************
//****************end of program******************************
//************************************************************
//********************output*************************************
