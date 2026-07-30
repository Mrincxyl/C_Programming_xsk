#include <stdio.h>
int main()
{
    int  i;
   int a[4] = {40, 45, 39, 32};
    for (i = 0; i <= 3; i++)
    {
        if (a[i] <= 35)
            printf("roll no of the student is %d", i);
    }
    return 0;
} 