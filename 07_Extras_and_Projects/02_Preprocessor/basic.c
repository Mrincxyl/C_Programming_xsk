#include<stdio.h>
#include<math.h>
#include<limits.h>
int main()
{
printf("\nHello");
float x= sqrt(5);
printf("\n%f",x);
int y = INT_MAX;
printf("\n%d",y); //2147483647 largest integer value 2^32/2
int m=2147483649;
printf("\n%d",m);
long k= 2147483649;
printf("\n%ld",k);
long p = LONG_MAX;
printf("\n%ld",p);
    return 0;
}