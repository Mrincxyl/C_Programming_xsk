#include<stdio.h>
int main(){
 int a,b,c;
 printf("enter 1st number (a)=");
 scanf("%d", &a);
 printf("enter 2nd number(b)=");
 scanf("%d", &b);
 c=a;
 a=b;
 b=c;
 printf("a=%d\n,b=%d", a, b);   
return 0;

}