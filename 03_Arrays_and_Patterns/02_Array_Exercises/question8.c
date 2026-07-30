#include <stdio.h>
int main()
{
    int i, x, r;
    x = 10;
    int a[5];
    int count = 0;
    for (i = 0; i <= 4; i++)
    {
        printf("enter %dth value\n", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 4; i++) // value of i represent indexes
    {
        for (r = i+1; r <=4; r++)
        {
            if (x == a[i] + a[r])
                count++;
        }
    }
    printf("number of pairs= %d", count);

    return 0;
}