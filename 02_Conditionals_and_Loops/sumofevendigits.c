#include <stdio.h>

int main()
{
    int sum, n;
    sum = 0;
    int r;
    printf("enter n:\n");
    scanf("%d", &n);
    while (n > 0)
    {
        r = n % 10;
        if (r % 2 == 0)
        {
            sum = sum + r;
        }
        n = n / 10;
    }
    printf("the sum of all the even digits are:\n%d", sum);

    return 0;
}
