//assignment 3

//Write a 'C' program to implement Linklist that will a)
//Insert elements in the list. b) Delete elements from the list. c) Reverse linklist. d) Traverse linklist.

#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
    int info;
    struct node *next;
} node;

void insertatbeg(node **head,int val);
void insertatend(node **head,int val);
void insertbeforetarget(node **head,int val, int t);
void insertaftertarget(node **head,int t, int val);
void createemptylist(node **head);



int main()
{

    node *head;

    createemptylist(&head);

    int ch,val,t;

    printf("enter choices according to action you want to perform\n 1. insert at begining \n 2. insert at end \n 3. insert before target \n 4. insert after target \n 5. view \n 6. exit\n");

    switch(ch)
    {

    case 1:
        printf("enter no.\n" );
        scanf("%d",&val);
        insertatbeg(&head, val);
        break;
    case 2:
        printf("enter no.\n" );
        scanf("%d",&val);
        insertatend(&head,val);
        break;
    case 3:
        printf("enter no. you want to insert\n" );
        scanf("%d",&val);
        printf("enter no. before you want to insert\n");
        scanf("%d",&t);
        insertbeforetarget(&head,val, t);
        break;
    case 4:
        printf("enter no. you want to insert\n" );
        scanf("%d",&val);
        printf("enter no. after which you want to insert\n");
        scanf("%d",&t);
        insertaftertarget(&head, t,  val);
        break;
    case 5:
        view();
        break;
    case 6:
        return 0;

    default :
        printf("incorrect choice. Try again !!!");


    }


}

void insertatbeg(node **head,int val)
{
    node *p =(node*)malloc(sizeof(node));
    p->info=val;
    p->next=*head;
    *head=p;
}

void insertaftertarget(node **head,int t, int val)
{
    node *p,*q=*head;
    p=(node*)malloc(sizeof(node));
    p->info=val;

while((q->info!=t)&&(q!=NULL))
    {
        q=q->next;

    }

    if(q==NULL)
        printf("target not found!!! :( \n");
    else
    {
        p->next=q->next;
        q->next=p;
    }
}


void insertatend(node **head,int val)
{
    node *p,*q=*head;

    p=(node*)malloc(sizeof(node));

    p->info=val;

    while(q!=NULL)
    {
        q=q->next;
    }

    p->next=NULL;
    q->next=p;

}


void insertbeforetarget(node **head,int val, int t)
{
    node *p,*r=*head,*q=*head;

    p=(node*)malloc(sizeof(node));
    int i=0;
    while((q->info!=t))
    {
        i++;
    }
    i--;
    while(i>=0)
    {
        r=r->next;
        i--;

    }

    p->next=r->next;
    r->next=p;

}
void print()
{
    node* = temp;

    while(temp->next!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }


}
void createemptylist(node **head)
{
    *head=NULL;

}



