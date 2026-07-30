#include<stdio.h>
int main(){
  int a,b;
  printf("enter first number");
  scanf("%d", &a);
  printf("enter secound number:");
scanf("%d",&b );

  float sum= a+b;
  float sub=a-b;
  float mul=a*b;
  float div=a/b;
  int modu=a%b;
  printf("Addition of two no is: %f\n", sum);
  printf("Substraction of two no is: %f\n", sub);
  printf("Multiplication of two no is: %f\n", mul);
  printf("Division of two no is: %f\n", div);
  printf("Remender of two no is: %f", modu);
    return 0;
}
