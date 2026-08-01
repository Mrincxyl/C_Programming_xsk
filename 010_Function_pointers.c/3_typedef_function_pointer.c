#include<stdio.h>

typedef int (*ptr)(int,int);

int add(int a,int b)
{
    return a+b;
}


int subtract(int a,int b)
{
    return a-b;
}


int multiply(int a,int b)
{
    return a*b;
}

int divide(int a,int b)
{
   if(b==0)
   {
    printf("Error: division by zero\n");

   }
   return a/b;
}


int main()
{
    ptr fun1[4] = {add,subtract,multiply,divide};

    char *names[4] = {"Add","Subtract","Multiply","Divide"};

    int a = 10, b = 5;

    for(int i=0; i<4; i++)
    {
        printf("%s: %d\n", names[i],fun1[i](a,b));
    }
}