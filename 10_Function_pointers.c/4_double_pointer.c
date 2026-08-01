#include<stdio.h>
#include<stdlib.h>

void allocate(int *p) {
    p = malloc(sizeof(int));   // only changes local copy of p
    *p = 100;
}


int main()
{
    int x =10;
     int *p = &x;
     int **pp = &p;

    printf("x = %d\n", x);
    printf("*p = %d\n", *p);
    printf("**pp = %d\n", **pp);
    printf("*pp = %p (address of x)\n", (void*)*pp);
    printf("pp = %p (address of p)\n", (void*)pp);


    int *ptr = NULL;
    allocate(ptr);
    printf("%d\n", *ptr);   // CRASH — ptr is still NULL in main()
}