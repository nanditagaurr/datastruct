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
void cnct(Node *h1,Node *h2)
{
    Node *temp;
    temp=h1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=h2;
}
int  main()
{
    Node *head1=NULL;
    Node *head2=NULL;
    addBeg(40,&head1);
    addBeg(30,&head1);
    addBeg(20,&head1);
    addBeg(10,&head1);
    printf("list 1:");
    traverse(head1);
    addBeg(80,&head2);
    addBeg(70,&head2);
    addBeg(60,&head2);
    printf("\nList 2:");
    traverse(head2);
    cnct(head1,head2);
    printf("\nAfter concatenate:\n");
    traverse(head1);
}
