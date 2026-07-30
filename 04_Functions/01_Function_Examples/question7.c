#include<stdio.h>
int main(){
int a=5;
int b=9;
int temp; //temporary
//temp =a;
//a=b;
//b=temp;
a=a+b;
b=a-b;
a=a-b;

printf("%d\n%d", a, b);

    return 0;
}