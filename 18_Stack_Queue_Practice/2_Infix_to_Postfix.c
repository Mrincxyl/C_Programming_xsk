#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MAX 100


char stack[MAX];
int top = -1;

void push(char c)
{
    stack[++top] = c;
}

char pop()
{
    return stack[top--];
}

int precedence(char op)
{
    if(op == '^') return 3;
    if(op == '*'|| op =='/') return 2;
    if(op=='+'||op=='-') return 1;
    return 0;

}

void infixToPostfix(char infix[MAX],char postfix[MAX])
{
    int j=0,i=0;
    for(i =0; infix[i]!='\0'; i++)
    {
        char c = infix[i];
        if(isalnum(c)) 
        {
            postfix[j++] = c;
        }
        else if(c=='(')
        {
            push(c);
        }
        else if(c==')')
        {
            while(top!=-1 && stack[top]!='(')
           {
           
                postfix[j++] = pop();
            
           }
           pop();
        }
        else{
            if(top!=-1)
            {
                if(precedence(c)>precedence(stack[top]))
                {
                    push(c);
                }
                else{
                    while(top!=-1 && stack[top]!='(' && precedence(stack[top])>=precedence(c))
                    {   postfix[j++] = pop();
                    }
                    push(c);
                }
            }
            else{
                push(c);
            }
        }
    }

    while(top!=-1)
    {
        postfix[j++] = pop();
    }

    postfix[j]='\0';

}


int main()
{
    char exp[MAX] = "A+B*C^D-E";

    char postfix[MAX];

    infixToPostfix(exp,postfix);

    printf("%s\n",postfix);
}