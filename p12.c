//program to find set elements of a that belong to set b
//********** made by nandita gaur,1703210092*******************
//****************16th august ,2018*******************************

//*************************************************************
//*********preprocessor directive and header files************

#include<stdio.h>
//************************************************************
//*******************main function****************************

void main()
{
    int a[]={2,10,50,60}, b[]={2,50,55,75},j,i;
    printf("\narray 1:");
    for(i=0;i<4;i++)
        printf("  %d",a[i]);
    printf("\narray 2:");
    for(i=0;i<4;i++)
        printf("  %d",b[i]);
    printf("\nelements of a that belong to b:");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
            if(a[i]==b[j])
            printf("%d ",a[i]);
    }
}
//************************************************************
//****************end of program******************************
//************************************************************
//********************output*************************************
