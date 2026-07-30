#include<stdio.h>
int main(){
   int a,b;
   printf("%d",a);
   scanf("%d", &a);
   printf("%d", b);
   scanf("%d", &b);
   int q=a/b;
   int r=(a-q*b);
   printf("The remainder when %d is devided be %d is :%d", a, b, r);

    return 0;
