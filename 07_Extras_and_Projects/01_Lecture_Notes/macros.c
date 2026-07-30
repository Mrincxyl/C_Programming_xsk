#include<stdio.h>
#define PI 3.14159265359
int main()
{
    printf("\n%f",PI);
    // float-> 6 decimal places
    double x =PI;
    printf("\n%.8f",x);
    printf("\n%.11f",x);
    printf("\n%.15f",x);
    printf("\n%.50f",x);
    return 0;
}