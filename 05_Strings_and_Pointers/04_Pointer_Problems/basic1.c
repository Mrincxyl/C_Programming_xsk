#include<stdio.h>
typedef int* pointer;
int main()
{
    int x=5, y= 7;
    pointer a=&x, b=&y; 
    
    printf("\n%p",a);
    printf("\n%p",b);
    return 0;
}