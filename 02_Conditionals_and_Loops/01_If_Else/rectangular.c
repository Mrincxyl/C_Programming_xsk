#include<stdio.h>
int main(){
int B, L;
   printf("inter Breadth: ");
   scanf("%d", &B);
     printf("inter Length: ");
   scanf("%d", &L);
   int A, P; // A ie area , p is perimeter
   A= B*L;
   P =2*(B+L);
   if(A>P){
    printf("Area is greater than primeter");

   }
   if(A<P){
    printf("Area is lesser than Perimeter");
   }


    return 0;
}