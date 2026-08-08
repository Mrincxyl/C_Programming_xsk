#include <stdio.h>
    int main()
    {
        int i = 4, j = 1;
        int *a[] = {&i, &j};
        
        printf("%d\n", *a[1]);
        printf("%d\n", (*a)[1]);
        printf("%d\n", (*a)[0]);
        printf("%d\n", *a[0]);

            
        return 0;
    } 