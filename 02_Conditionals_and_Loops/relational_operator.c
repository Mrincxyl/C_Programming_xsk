#include<stdio.h>
int main(){
    int a=21, b=10, c;
    if(a==b)
    {
        printf("a is equal to b\n");
    }
else{
    printf("a is not equal to b\n"); 
}
if (a<b)
{
     printf("a is less than  b\n");
}
else
{
   printf("a is not less than  b\n"); 
}
if (a>b)
{
    printf("a is greater than  b\n"); 
}
else
{
 printf("a is not greater than  b\n");
}
// Lets change the value of a and b
a=5;
b=20;
if(a<=b)
{
    printf("a is either less than  or equal to b\n");
}
if(b>=a)
{
printf("b is either greater than  or equal to a\n");
}
    return 0;
}