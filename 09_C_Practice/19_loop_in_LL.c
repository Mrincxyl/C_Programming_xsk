#include<stdio.h>
#include<stdlib.h>

typedef struct Node {

    int data;
    struct Node *next;

}Node;

Node *first = NULL;

void  createCyclicLL()
{
    Node *n1 = (Node*)malloc(sizeof(Node));
    Node *n2 = (Node*)malloc(sizeof(Node));
    Node *n3 = (Node*)malloc(sizeof(Node));
    Node *n4 = (Node*)malloc(sizeof(Node));
    Node *n5 = (Node*)malloc(sizeof(Node));
    

    n1->data = 1; n1->next = n2;
    n2->data = 2; n2->next = n3;
    n3->data = 3; n3->next = n4;
    n4->data = 4; n4->next = n5;
    n5->data = 5; n5->next = n3;


    first = n1;


}

int hasCycle(Node *s)
{

    Node *p,*q;
    p = q = s;

  


    while(p != NULL && p->next != NULL)
    {
        p = p->next;
        q = q->next->next;

        if(p==q)
        {
            return 1;
        }

    }

    return 0;


}

int main()
{
    createCyclicLL();

    if(hasCycle(first))
    {
        printf("Cycle Detacted\n");
    }
    else{
        printf("No Cycle\n");
    }


}
