#include<stdio.h>
int main(){
    int a,b;
    printf("enter devidend:");
    scanf("%d",&a);
     printf("enter devisor:");
    scanf("%d",&b);
    // int q=a/b;
    // int r=a-q*b;
    int r;
    r=a%b;
    printf("The remainder is:%d", r);
    return 0;
}