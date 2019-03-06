
#include<stdio.h>
struct node
{
    int data;
    struct node * next;
}*head=NULL;
void main()
{
    int e;
    addBeg(50);
    addBeg(40);
    addBeg(30);
    addBeg(20);
    addBeg(10);
    traverse();
    printf("\nEnter element to be added:");
    scanf("%d",&e);
    addE(e);
    traverse();
}
void addE(int e)
{
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=e;
    struct node *temp=head;
    if(temp->next->data>=e)
        addBeg(e);
    else
    {
        while(temp->next!=NULL)
        {
            if(temp->data<=e&&temp->next->data>=e)
                break;
            temp=temp->next;
        }
        n->next=temp->next;
        temp->next=n;
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
    n= (struct node*)malloc(sizeof(struct node));
    n->data = d;
    n->next = head;
    head = n;
}
