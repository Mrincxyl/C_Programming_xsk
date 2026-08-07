#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *p;
};


void insertAtEnd(struct Node **head, int value)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node ));

    temp->data = value;
    temp->p = NULL;

    if(*head==NULL)
    {
        *head = temp;

    }
    else
    {
        struct Node *temp1 = *head;

        while(temp1->p != NULL)
        {
            temp1 = temp1->p;
        }

        temp1->p = temp;
    

        
    }


    
}
void printList(struct Node *head)
{
    
    while(head != NULL)
    {
        printf("%d\n",head->data);

        head = head->p;

    }
}



int main()
{
    struct Node *top = (struct Node *)malloc(sizeof(struct Node));

    top->data = 10;
    top->p = NULL;

    insertAtEnd(&top,18);

    printList(top);
    

}
