#include<stdio.h>

void printarray(int a[])
{
    for (int i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    printf("%lu\n",sizeof(a));
}

int main()
{
    int a[8];

    printarray(a);

} 