#include<stdio.h>
int main(){
    int  i;
    int a[4];
    for(i=0; i<=3; i++){
        printf("enter %dth value\n", i);
        scanf("%d", &a[i]);
    }
    for(i=0; i<=3; i++){// value of i represent indexes
        if(i%2==0)
        a[i]=10+a[i];
        else
        a[i]=2*a[i];
       
    }
     for(i=0; i<=3; i++){
        printf("value of %dth element is = %d\n", i, a[i]);
        
    }
    
    return 0;
}  
  