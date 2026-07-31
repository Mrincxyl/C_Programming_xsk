#include<stdio.h>
#include<stdlib.h>

int main()
{

    int n = 10;

    int *p = &n;

    printf("%d \n",p);

    printf("%d \n",*p);

    free(p);

    printf("%d \n",p);

    printf("%d \n",*p);


    // Wild Pointer ->A pointer that has been declared but never initialized

    int *w;

    printf("%d \n",w);

    //printf("%d \n",*w);

    int *l = NULL;

    printf("%d \n",w);

    // void pointer ->A generic pointer type (void *) that can point to any data type, but cannot be dereferenced directly without casting 
    //— because the compiler doesn't know the size/type of what it points to.
    
    int y = 10;
    void *vp = &y;

    printf("%d \n",vp);
    printf("%d \n", *(int*)vp);


    int a = 10, b= 20;

    const int *cp;

    cp = &a;

    printf("Constant value %d \n",*cp);

    cp=&b; // OK — can repoint p to a different variable

    printf("Constant value %d \n",*cp);

    // *cp = 25; // ERROR — can't change the value through cp



    //Case 2: int *const p;

    int a = 10, b = 20;

    int *const cpp = &a;

    *cpp = 10;  // OK — value can change

    // cpp = &b; // ERROR — p is locked to &a, can't repoint


    //Case 3: const int *const p;

    int a = 10;

    const int *const ccpp = &a;

    // *ccpp = 10; // ERROR — value cannot change
    // ccpp = &b; // ERROR — p is locked to &a, can't repoint

    









}