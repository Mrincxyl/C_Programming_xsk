#include<stdio.h>

float taylor(int x, int n)
{
    static float r, p=1, f=1;
    if(n==0)
    {
        return 1;
    }
    else{

        r = taylor(x,n-1);

        p = p*x, f = f*n;

        return r+(p/f);
    }

}

int main()
{
    float val;

    val = taylor(2,3);

    printf("%f\n",val);
}