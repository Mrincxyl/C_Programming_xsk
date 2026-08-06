#include<stdio.h>

int main()
{
    int a = 5, b = 3;
printf("%d\n", a & b);   // 1
printf("%d\n", a | b);   // 7
printf("%d\n", a ^ b);   // 6
printf("%d\n", ~a);      // -6 (two's complement — explained below)
printf("%d\n", a << 1);  // 10 (5*2)
printf("%d\n", a >> 1);  // 2  (5/2, integer division)
}