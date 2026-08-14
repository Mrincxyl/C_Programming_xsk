#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;

}Node;

void create(Node **s,int arr[],int n)
{
    printf("create function calling\n");
    Node *f = NULL;
    if(*s==NULL)
    {
        Node *first = (Node*)malloc(sizeof(Node)); 
        first->data = arr[0];
        first->next = NULL;

        *s = first;
    }
    f = *s;

    for(int i=1; i<n; i++)
        {
            Node *temp = (Node*)malloc(sizeof(Node));
            temp->data = arr[i];
            temp->next = NULL;

            f->next = temp;
            f = temp;

        }   

}

void printLL(Node *p)
{
    
    if(p==NULL)
    {
        return ;
    }
    else{
        printf("%d ",p->data);
        printLL(p->next);

    }
}

Node *middle(Node *p, Node *q)
{ 
    if(q==NULL || q->next==NULL)
    {
        return p;
    }
    else
    {

        return middle(p->next,q->next->next);
    }

}

Node *MIDDLE(Node *r)
{
    Node *p = r, *q=r;
    while(q!=NULL && q->next!=NULL )
    {
        p=p->next;
        q=q->next->next;
    }

    return p;

}

int main()
{
    Node *a = NULL;
    int arr[] = {1,2,3,4,5};

    int n = 5;


    create(&a,arr,n);

    printLL(a);

    Node *r = middle(a,a);
    printf("\nValue of the middle node is %d\n",r->data);

    Node *m = MIDDLE(a);
    printf("\nValue of the middle node is %d\n",m->data);




}