#include<stdio.h>
struct node
{
    int data;
    struct node * next;
}*head=NULL;
void main()
{
    addBeg(50);
    addBeg(40);
    addBeg(30);
    addBeg(20);
    addBeg(10);
    traverse();
    revList(head);
    printf("\n List after reversing:\n");
    traverse();
}
void revList(struct node *temp)
{
    if(temp==NULL)
        return NULL;
    if(temp->next==NULL)
        {
            head=temp;
            return NULL;
        }
    revList(temp->next);
    temp->next->next=temp;
    temp->next=NULL;
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

