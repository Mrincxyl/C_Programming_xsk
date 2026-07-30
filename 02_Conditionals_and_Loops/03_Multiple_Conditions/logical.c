#include<stdio.h>
int main(){
    int a;
    printf("enter a: ");
    scanf("%d", &a);
    if(a>99 || a<1000) 
    {
        printf(" a is a three digit number: %d", a);
    }
    else{
        printf("a is not a three digit number: %d", a);
    }



    return 0;
}