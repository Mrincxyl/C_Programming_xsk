#include<stdio.h>
int main(){
    int a, b;
    printf("enter a and b\n");
    scanf("%d%d", &a, &b);
    int x=1;
    for(int i=1;  i<= b; i++){
        x=x*a;

    }
    printf("%d", x);
  
    return 0;
}