#include<stdio.h>
int main(){
    int n, i;
    printf("enter n:\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        if(i%2==0)
        printf("%d is even number\n", i);
        else 
        printf("%d is odd number\n", i);
    }
    return 0;
} 