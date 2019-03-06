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
    printf("\n elements in reverse order:\n");
    printRev(head);
}
void printRev(struct node *temp)
{
    if(temp->next==NULL)
        {
            printf("%d->",temp->data);
            return;
        }
    else
    {
        printRev(temp->next);
        printf("%d->",temp->data);
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
