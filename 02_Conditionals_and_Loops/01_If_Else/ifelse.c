#include <stdio.h>
int main()
{
    int x;
    printf("enter the number:\n");
    scanf("%d", &x);
    if ((x % 5 == 0 || x % 3 == 0) && x % 15 != 0)
    {
        printf("the number is divisible by 5 or 3 but not by 15");
    }
    else
    {
        printf("the number is not matching the required condition");
    }
    return 0;
}