#include<stdio.h>
int main(){
    int  i;
    int a[8];
    int sume=0, sumo=0;
    for(i=0; i<=7; i++){
        printf("enter %dth value\n", i);
        scanf("%d", &a[i]);
    }
    for(i=0; i<=7; i++){// value of i represent indexes
        if(i%2==0)
        sume= sume + a[i];
        else
       sumo= sumo +a[i];
       
    }
    
    printf("the difference =%d", sume-sumo);
    
    return 0;
}  