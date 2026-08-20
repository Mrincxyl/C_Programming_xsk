#include<stdio.h>
#define MAX 6

typedef struct queue
{
    int arr[MAX];

    int front;
    int rear;

}queue;

void initQueue(queue *s1)
{
    s1->front = 0;
    s1->rear = 0;

}

int isFull(queue *s1)
{
    if((s1->rear+1)%MAX==s1->front)
    {
        printf("Queue is Full.\n");
        return 1;
    }
    else return 0;

}

int IsEmpty(queue *s1)
{
    if(s1->front == s1->rear)
    {
        printf("Queue is Empty.\n");
        return 1;
    }
    else return 0;

}

void enqueue(queue *s,int val)
{
    if(isFull(s)) return;
    s->arr[s->rear] = val;
    s->rear = (s->rear+1)%MAX;

}

int dequeue(queue *s)
{

    if(IsEmpty(s)) return -1;
    
    int x = s->arr[s->front];
    s->front = (s->front+1)%MAX;
    return x;
        
  
    
}

void display(queue *s)
{
    if(IsEmpty(s))
    {
        return;
    }
    else
    {
        int x = s->front;
        while(x!=s->rear)
        {
            printf("%d\n",s->arr[x]);
            x = (x+1)%MAX;
        }
    }
}

int peek(queue *s)
{
    if(IsEmpty(s)) return -1;
    int x = s->arr[s->front];
    return x;

}

int main()
{
    queue q1;

    initQueue(&q1);

    dequeue(&q1);

    enqueue(&q1,5);
     enqueue(&q1,8);
      enqueue(&q1,14);
       enqueue(&q1,3);
        enqueue(&q1,8);

    dequeue(&q1);
    dequeue(&q1);
    
    enqueue(&q1,122);
    enqueue(&q1,12);
         

         

    display(&q1);  
    
    
    printf("%d\n",peek(&q1));




    
}