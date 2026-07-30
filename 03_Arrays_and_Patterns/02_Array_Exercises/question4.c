// print the sum of all element in array
#include<stdio.h>
int main(){
    int sum=0, i;
    int a[4];
    for(i=0; i<=3; i++){
        printf("enter %dth value\n", i);
        scanf("%d", &a[i]);
    }
    for(i=0; i<=3; i++){
        sum=sum+a[i];
    }
    printf("the sum of all element of array = %d", sum);
    return 0;
}