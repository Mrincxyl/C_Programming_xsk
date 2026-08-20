#include<stdio.h>

#define MAX 5

typedef struct stack
{
    int arr[MAX];
    int top;
}stack;

void initStack(stack *s)
{
    s->top = -1;
}

int isFull(stack *s)
{
    if(s->top == MAX-1)
    {
        return 1;
    }
    return 0;
}

int isEmpty(stack *s)
{
    if(s->top ==-1 )
    {
        return 1;
    }
    return 0;
}

void push(stack *s, int val)
{
    if(isFull(s)) 
    {
        printf("Stack Overflow\n");  

        return;

    }
    s->top++;
    s->arr[s->top] = val;

}
int pop(stack *s)
{
    if(isEmpty(s)) 
    {
        printf("Stack Underflow\n");
        return -1;

    }
    int x = s->arr[s->top--];
    printf("Poped Element is %d\n",x);
    return x;


}

int peek(stack *s)
{
    if(isEmpty(s))
    {
        printf("Stack Underflow\n");
        return -1;
    }
    return s->arr[s->top];
}

int main()
{
    stack s1;

    initStack(&s1);

    push(&s1,1);
    push(&s1,2);
    push(&s1,3);
    push(&s1,4);
    push(&s1,5);
    push(&s1,6);

    printf("Top element: %d\n",peek(&s1));

    pop(&s1);
     pop(&s1);
      pop(&s1);
       pop(&s1);
        pop(&s1);
         pop(&s1);


    

    
}