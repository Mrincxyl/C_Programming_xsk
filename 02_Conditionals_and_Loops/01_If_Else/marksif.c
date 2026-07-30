#include <stdio.h>
int main()
{
    int n;
    printf("entet n:\n");
    scanf("%d", &n);
    if (n > 80)
    {
        printf("Excellent");
    }
    else
    {
        if (n > 70)
        {
            printf("very good");
        }
        else
        {
            if (n > 60)
            {
                printf("good");
            }
        }
    }
    return 0;
}