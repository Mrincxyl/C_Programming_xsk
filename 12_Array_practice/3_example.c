#include<stdio.h>

int main()
{
    int a[8] = {1,2,3,4,5};

    int *ptr = &a[0];

    // or int *ptr = a;

    for (int i=0; i<8; i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("\n");


    

} 