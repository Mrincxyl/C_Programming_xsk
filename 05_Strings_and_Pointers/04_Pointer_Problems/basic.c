#include<stdio.h>
int main()
{
    int x=5, y= 7;
    //int* a=&x, b=&y; // error // according to computer int* x and int y
    // we can solve this problem using typedef
    int* a =&x;
    int* b=&y;
    printf("\n%p",a);
    printf("\n%p",b);
    return 0;
}