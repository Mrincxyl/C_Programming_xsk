#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    if (n % 3== 0)
    {
        if (n % 5 == 0)
        {
            printf("n is divisible by 5 and 3");
        }
        else
        {
            printf("n is not divisible by  5");
        }
    }
    else{
        printf("n is not divisible by 5 and 3 ");
    }

    return 0;
}