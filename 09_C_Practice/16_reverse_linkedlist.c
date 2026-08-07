#include<stdio.h>
#include<stdlib.h>

typedef struct Node {

    int data;
    struct Node *next;

}Node;

void createlink(Node **s)
{
    int n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);

    Node *temp = (Node*)malloc(sizeof(Node));

    printf("Enter the first element of the linkedlist\n");
    scanf("%d",&temp->data);

    temp->next = NULL;

    Node *t = temp;

    

    for(int i=1; i<n; i++)
    {
        Node * new = (Node*)malloc(sizeof(Node));

        printf("Enter the %dth element of the LL\n",i+1);
        scanf("%d",&new->data);
        new->next = NULL;

        t->next = new;
        t = new;

    }


   

    *s = temp;

}

void printLL(Node *s)
{
    while(s!=NULL)
    {
        printf("%d\n",s->data);

        s = s->next;
    }
}

void reverse(Node **s)
{

    if (*s == NULL) return;
    Node *temp , *r, *p;
    temp = *s;

    r = temp;
    p = temp->next;

    while(p!=NULL)
    {
        Node *q = p->next;
        p->next = r;

        r = p;
        p=q;

    }

    temp->next = NULL;

    *s = r;

    
}

int main()
{
    Node * first = NULL;

    createlink(&first);

    printLL(first); 

    reverse(&first);

    printLL(first);

}
