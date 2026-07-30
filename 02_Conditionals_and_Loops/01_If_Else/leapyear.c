#include<stdio.h>
int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if(year%4==0){
        printf(" is a leap year");
    }
    else{
        printf("%d is not a leap year");
    }
    return 0;
}