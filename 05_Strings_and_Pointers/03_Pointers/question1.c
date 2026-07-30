#include<stdio.h>
int main(){
    int a=5;
    int* x= &a;
 printf("%p\n", x); // address of a will be print
    printf("%p\n", &x);
//address of x wiil print %p means address of a
printf("%d", *x); // it is pointing the value that stored in x
    return 0;
}