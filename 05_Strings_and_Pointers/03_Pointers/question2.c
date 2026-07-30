#include<stdio.h>
int main(){
    int a=5;
    int* x= &a;
    *x =9;// value of stored variable's will be change
 //printf("%p\n", x); // address of a will be print
    //printf("%p\n", &x);
     //address of x wiil print %p means address of a
printf("%d", a); 
    return 0;
}