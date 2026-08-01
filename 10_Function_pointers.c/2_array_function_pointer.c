#include<stdio.h>

int add(int a, int b){return a+b;}
int subtract(int a, int b){return a-b;}
int multiply(int a, int b){return a*b;}

int main()
{
    int (*ptr[3])(int,int) = {add,subtract,multiply};

    for(int i=0; i<3; i++)
    {
        printf("%d \n",ptr[i](6,3));
    }


}