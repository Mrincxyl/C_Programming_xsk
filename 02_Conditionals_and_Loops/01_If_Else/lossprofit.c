#include<stdio.h>
int main(){
    int x , y; // x= selling price, y= cost price
    printf("enter\n x: ");
    scanf("%d", &x);
     printf("enter y: ");
    scanf("%d", &y);
    int  p;
    p = x-y;

    if(p>0){
        printf("Profit is: %d", p );
    }
    if(p<0){
        printf("loss is: %d", p);
    }
    if(p==0){
        printf("no profit, no loss");
    }




    return 0;
}