#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
void display(node*);
int main()
{
    node *head=NULL;
    node *first;
    node *second;
    node *third;
    first=(node*)malloc(sizeof(node));
    second=(node*)malloc(sizeof(node));
    third=(node*)malloc(sizeof(node));
    //head=first;
    first->data=1;
    first->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;
    head=first;
    display(head);
}
void display(node *head)
{
    node* p;
    p=head;
    while(p!=NULL)
    {
        printf(" %d ",p->data);
        p=p->next;
    }
}
