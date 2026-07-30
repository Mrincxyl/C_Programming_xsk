#include<stdio.h>
 int main(){
    int r, c, a, n;

    printf("enter n\n");
    scanf("%d", &n);
    a=n;
    for(r=1; r<=n; r++){
        for(c=1; c<=a; c++){
            printf("*");
        }
        
         printf("\n");      
         a--;                                                                                                                                                   
    }

    return 0;
 }