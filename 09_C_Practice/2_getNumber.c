#include<stdio.h>

int * getNumber()
{
    int num = 10;
    return &num;
}

int main()
{
    int *x = getNumber();

    

    return 0;
}