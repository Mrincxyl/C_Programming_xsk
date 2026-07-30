#include<stdio.h>
int main(){
   int a, n;
   a=4;
   printf("enter  number:\n");
   scanf("%d", &n);
   for(int i=1; i<=n; i++){
    a=a+3;
    printf("%d ", a);
   }
   
    return 0;

} 