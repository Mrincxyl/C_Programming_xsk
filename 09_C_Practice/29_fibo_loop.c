#include<stdio.h>

int fibo(int n)
{
    // 0 1 1 2 3 5 8 13
    // 0 1 2 3 4 5 6 7

    int t0 = 0, t1 = 1;

   

    if(n==0) return 0;
    if(n==1) return 1;

    for(int i=2; i<=n; i++)
    {
        int x = t0 + t1;
        t0 = t1;

        t1 = x;
    }

    return t1;
}

int main()
{

    printf("%d\n",fibo(12));

}