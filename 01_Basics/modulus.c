#include<stdio.h>
int main(){
    // int a=41; // a>b
    // int b=8;
    // int r=a%b;
    // printf("%d", r);
    int a, b;
    float r;
    printf("enter a, b,:\n");
    scanf("%d %d", &a, &b);
    r= a%b;
    printf("the remainder is %f", r);

    return 0;
}