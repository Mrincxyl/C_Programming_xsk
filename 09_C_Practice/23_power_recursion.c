#include<stdio.h>

int powe(int n, int p)
{

    
    if(p==0)
    {
        return 1;
    }
    return powe(n,p-1)*n;
}

int main()
{
    
    printf("%d\n",powe(2,5));

    printf("%d\n",powe(0,0));

}