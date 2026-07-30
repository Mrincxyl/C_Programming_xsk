#include <stdio.h>
int main()
{
    int i, x, k, r;
    x = 10;
    int a[7];
    int count = 0;
    for (i = 0; i <= 6; i++)
    {
        printf("enter %dth value\n", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 6; i++)
    {
        for (r = i + 1; r <= 6; r++)
        {
            for (k = r + 1; k <= 6; k++)
            {
                if (x == a[i] + a[r] + a[k])
                printf("(%d, %d, %d)\n", a[i], a[r], a[k]);
            }
        }
    }

    return 0;
}