#include<stdio.h>
int main(){
    int n1,n2;
    int add,sub,mul,div,mod;
    printf("Enter first Number:\n");
    scanf("%d", &n1);
    printf("Enter Secound Number:\n");
    scanf("%d", &n2);
    add = n1+n2;
    printf("Addition is:%d\n", add);
    sub= n1-n2;
    printf("Substraction is;%d\n", sub);
    mul=n1*n2;
    printf("Multipication is:%d\n", mul);
    div=n1/n2;
    printf("Division is:%d\n", div);
    mod=n1%n2;
    printf("Modulus is:%d\n", mod);

    return 0;
}