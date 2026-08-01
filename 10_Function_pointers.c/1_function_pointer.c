#include<stdio.h>

int add(int a, int b)
{
    return a+b;
}

int subtract(int a, int b)
{
    return a-b;
}

int main()
{
    int (*fp) (int , int);

    fp = add;
    printf("%d\n",fp(10,5));

    fp = subtract;

    printf("%d\n",fp(10,5));

}