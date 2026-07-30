#include<stdio.h>
void swap(int* x, int* y){
    int temp;
    temp=*x; // temp =5
    *x=*y; //a=9
    *y=temp; // b=5
    return;
}
int main(){
int a=5;
int b=9;
swap(&a,&b);
printf("%d\n%d", a, b);
    return 0;
}