#include <stdio.h>
int main()
{
    // int a[4]={1,5,4,7};
    // for( int i=0; i<=3; i++ ) //i= 0, 1, 2, 3;
    // printf("%d\n", a[i]);
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("enter %dth value\n", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}