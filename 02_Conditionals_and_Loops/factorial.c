#include<stdio.h>
int main(){
    int n;
    int r=1;
    printf("enter n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
r=r*i;
    }
    printf("factorial of the number is:\n%d", r);
    return 0;
}