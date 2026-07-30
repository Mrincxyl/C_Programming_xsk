#include<stdio.h>
int main(){
    int n, s1, s2, result;
    printf("enter n:\n");
    scanf("%d", &n);
    s1=0, s2=0;
    for(int i=1; i<=n; i++){
        if(i%2==0){
            s1=s1+i;
        }
        else s2=s2+i;
    }
    result=s2-s1;
    printf("the sum of alternating series is %d", result);
    return 0;
}