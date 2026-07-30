#include<stdio.h>
int main(){
    int n, count;
    count =0;
    printf("enter n:\n");
    scanf("%d", &n);
    while(n>0){
        n=n/10;
        count++;
    }
printf("total digits are %d", count); 
    return 0;
}