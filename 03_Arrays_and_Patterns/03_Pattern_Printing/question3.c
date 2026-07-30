#include<stdio.h>
 int main(){
    int r, c, a, n;

    
    printf("enter n\n");
    scanf("%d", &n);
    for(r=1; r<=n; r++){
        a=1;
        
        for(c=1; c<=r; c++){
            if(a%2!=0)
            printf("%d", a);

    
        }
    
        
         printf("\n");      
                                                                                                                                                          
    }

    return 0;
 }