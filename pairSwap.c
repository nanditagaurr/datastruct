#include<stdio.h>
struct node
{
    int data;
    struct node * next;
}*head;
void main()
{
    addBeg(50);
    addBeg(40);
    addBeg(30);
    addBeg(20);
    addBeg(10);
    traverse();
    pairSwap();
    traverse();
}
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
void pairSwap()
{
    struct node *p=head;
    while(p->next!=NULL)
    {
        swap(&p->data,&p->next->data);
        p=p->next->next;
    }
}
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
void addBeg(int d)
{
    struct node *n;
    n= malloc(sizeof(struct node));
    n->data = d;
    n->next = head;
    head = n;
}
