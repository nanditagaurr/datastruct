//different operations on linked list*******************************
//*****************made by nandita gaur,1703210092******************
//********************dated 24th september,2018**********************

//*******preprocessor directive and header files********************
//******************************************************************
#include<stdio.h>
//***********************main function*******************************
//*******************************************************************
struct node
{
    int data;
    struct node * next;
}*head;
void main()
{
    addBeg(4);
    addBeg(5);
    traverse();
    addLast(6);
    addPos(7,3);
    traverse();
    delBeg();
    traverse();
    delEnd();
    traverse();
    addBeg(1);
    traverse();
    delPos(2);
    traverse();
}
//*******************************************************************
//**function to traverse a linked list*******************************
//*******************************************************************
void traverse()
{
    struct node *temp = head;
    printf("\n\nList elements are - \n");
    while(temp != NULL)
    {
        printf("%d ->",temp->data);
        temp = temp->next;
    }
}
//*******************************************************************
//*********function to add an element at beginning of list***********
//*******************************************************************
void addBeg(int d)
{
    struct node *n;
    n= malloc(sizeof(struct node));
    n->data = d;
    n->next = head;
    head = n;
}
//*******************************************************************
//*********function to add an element at end of list*****************
//*******************************************************************
void addLast(int d)
{
    struct node *n;
    n= malloc(sizeof(struct node));
    n->data = d;
    n->next = NULL;

    struct node *temp = head;
    while(temp->next != NULL)
    temp = temp->next;

    temp->next = n;
}
//*******************************************************************
//******function to add an element at a given position of list*******
//*******************************************************************
void addPos(int d,int position)
{
    int i;
    struct node *n;
    n = malloc(sizeof(struct node));
    n->data = d;
    struct node *temp = head;

    for(i=0; i < position-1; i++)
    if(temp->next != NULL)
        temp = temp->next;
    n->next = temp->next;
    temp->next = n;
}
//*******************************************************************
//*********function to delete an element at beginning of list***********
//*******************************************************************

void delBeg()
{
    head = head->next;
}
//*******************************************************************
//*********function to delete an element at end of list***********
//*******************************************************************

void delEnd()
{
    struct node* temp = head;
    while(temp->next->next!=NULL)
    temp = temp->next;
    temp->next = NULL;
}
//*******************************************************************
//*********function to delete an element from position of list*******
//*******************************************************************

void delPos(int p)
{
    int i;
    if(head==NULL)
        return;
    struct node *temp=head;
    if(p==0)
    {
     head=temp->next;
     free(temp);
     return;
    }
    for(i=0;temp!=NULL && i<p-2;i++)
        temp=temp->next;
    if (temp == NULL || temp->next == NULL)
         return;
    struct Node *next = temp->next->next;
    free(temp->next);
    temp->next=next;
}
//***********************************************************************************************
//*********************************end of program***********************************************

//************************************output******************************************************
//************************************************************************************************
