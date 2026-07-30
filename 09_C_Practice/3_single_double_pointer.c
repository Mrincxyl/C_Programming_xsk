#include<stdio.h>
int main()
{
    int x = 40;

    int * p = &x;

    int ** P = &p;

    printf("Value via *p: %d\n",*p);
    printf("Value via **p: %d\n",**P);

    return 0;
}