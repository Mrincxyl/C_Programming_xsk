#include<stdio.h>

void TOH(int n, char x,char y, char z)
{
    if(n>0)
    {
        TOH(n-1,x,z,y);
        printf("(%c to %c)\n",x,z);
        TOH(n-1,y,x,z);
    }
}

int main()
{
    char x = 'A', y = 'B', z = 'C';

    printf("The following steps are:\n");
    TOH(3,x,y,z);

}