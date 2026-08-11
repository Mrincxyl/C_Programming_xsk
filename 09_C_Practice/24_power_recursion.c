#include<stdio.h>

int oddpow(int n, int p)
{

    if(p==0) return 1;
    return oddpow(n,p-1)*n;

}

int main()
{
    // 3^11 -> n = 3, p = 11
    
    printf("%d\n",3*oddpow(3*3,5));

}