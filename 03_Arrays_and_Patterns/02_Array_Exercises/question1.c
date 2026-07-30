#include <stdio.h>
int main()
{
    int i, a[4];
    for (i = 0; i <= 3; i++)
    { // i act as index of array
        printf("enter %dth element\n", i);
        scanf("%d", &a[i]);
    }
    for (i = 3; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}