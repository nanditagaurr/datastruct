#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};
typedef struct node Node ;

void traverse(struct node *temp)
{
    while(temp != NULL)
    {
        printf("%d ->",temp->data);
        temp = temp->next;
    }
}
void addBeg(int d, struct node **temp)
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data = d;
    n->next = *temp;
    *temp = n;
}
void addLast(int d,Node **temp;)
{
    struct node *n;
    n= malloc(sizeof(struct node));
    n->data = d;
    n->next = NULL;
    while(temp->next != NULL)
    temp = temp->next;
    *(temp->next) = n;
}
void mrg(Node *h1,Node *h2,Node *h3);
{
    Node *t1=h1;
    Node *t2=h2;
    while(t1!=NULL && t2!=NULL)
    {
        if(t1->data<=)
    }
}
int  main()
{
    Node *head1=NULL;
    Node *head2=NULL;
    Node *head3=NULL;
    addBeg(40,&head1);
    addBeg(30,&head1);
    addBeg(20,&head1);
    addBeg(10,&head1);
    printf("list 1:");
    traverse(head1);
    addBeg(35,&head2);
    addBeg(25,&head2);
    addBeg(5,&head2);
    printf("\nList 2:");
    traverse(head2);
    mrg(head1.head2,head3);
    printf("\nAfter merging, list:");
    traverse(head3);
}
