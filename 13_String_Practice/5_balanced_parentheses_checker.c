#include<stdio.h>
#include<stdlib.h>

typedef struct stack 
{
    int size;
    int top;
    char *arr;

}stack;

 

int isBalanced(char *s)
{
    stack s1;

    

    s1.size = 10;
    s1.top = -1;
    s1.arr = (char * )malloc(10*sizeof(char));

    while(*s != '\0' )
    {
        if(*s == '{' || *s == '(' || *s == '[')
        {
            if(s1.top==s1.size-1)
            {
                printf("Stack Overflow.\n");
                
                return s1.top;
            }
            else{
                s1.top++;
                s1.arr[s1.top] = *s;
                

            }
        }
        if(*s == '}' || *s == ')' || *s == ']')
        {
            if(s1.top==-1)
            {
                printf("Empty stack.\n");
                return 0;
            }
            else{
                 char pop = s1.arr[s1.top];
                 if((*s==')' && pop == '(' ) || (*s=='}' && pop == '{' ) || (*s==']' && pop == '[' ))
                 {
                    s1.top--;
                 }
                 else{
                    return 0;
                 }
              

                
            }
        }
     s++;   
    }
    if(s1.top == -1)
    {
       return 1;

    }
    else{
        return 0;

    }
    
}

int main()
{


    
    
    char ar[] = "{()}[]";
    char arr[] = "{(})";
    char arrr[] = "((";

    int val = isBalanced(arrr);

    if(val==1)
    {
        printf("Balanced\n");
    }
    else{
        printf("Not Balanced\n");
    }





}