#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter x, y, z:");
    scanf("%d\n%d\n%d", &x, &y, &z);
    if (x > y && x > z)
    {
        printf("x is the greatest number");
    }
    if (y > x && y > z)
    {
        printf("y is the greatest number");
    }
    if (z > x && z > y)
    {
        printf("z is the greatest number");
    }

    return 0;
}