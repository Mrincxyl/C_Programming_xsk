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


Node *merge(Node *a, Node *b)
{
    if (a == NULL) return b;
    if (b == NULL) return a;
    Node *final = NULL, *q = NULL;

   if(a->data<b->data)
   {
    final = a;
    a = a->next;

    q = final;
    q->next = NULL;

   }

   else
   {
    final = b;

    b= b->next;
    q = final;
    q->next = NULL;
   }

   while(a && b)
   {
        if(a->data<b->data)
        {
            q->next = a;
            q = q->next;
            a = a->next;
            q->next = NULL;
        }
        else if(a->data==b->data)
        {
            q->next = a;
            q = q->next;
            a = a->next;
            b = b->next;
            q->next = NULL;

        }
        else{

            q->next = b;
            q = q->next;
            b = b->next;
            q->next = NULL;
 
        }

   }
   

   while(a)
   {
        q->next = a;
        q = q->next;
        a = a->next;
        q->next = NULL;
   }
   while(b)
   {
    q->next = b;
    q = q->next;
    b = b->next;
    q->next = NULL;

   }
   return final;



}



int main()
{
    Node *a = NULL, *b = NULL;
    int arr[] = {1,3,5}, brr[] = {3,4,6,8,10};

    int n = 3,m=5;


    create(&a,arr,n);

    create(&b,brr,m);

    printLL(a);
    printf("\n");
    printLL(b);
    printf("\n");

    Node *final  = merge(a,b);

    printLL(final);
    

}