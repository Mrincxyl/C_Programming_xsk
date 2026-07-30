#include<stdio.h>
#include<math.h> // math a library many fun included in this math lib 
int main(){
int a;
printf("enter a number: ");
scanf("%d", &a);
int root= sqrt(a); // sqrt is a library function
printf("the square root is: %d", root);
int q=pow(2,4); // pow means power of number 2,4 means 2^4
printf("\nthe square  is: %d", q);

    return 0;
}