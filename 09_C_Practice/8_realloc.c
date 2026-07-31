#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p = malloc(3*sizeof(int));

    p[0] = 10, p[1] = 20, p[2] = 30;

    printf("Before realloc: %d %d %d\n", p[0], p[1], p[2]);

    int *temp = realloc(p,5*sizeof(int));

    if (temp==NULL)
    {
        printf("Realloc failed, original data still safe\n");
        free(p);
        return 1;
    }
    p = temp;

    p[3] = 40;
    p[4] = 50;

     printf("After realloc: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", p[i]);   // old data preserved + new slots
    }
    printf("\n");

    free(p);
    p = NULL;

    printf("%p ",(void*)p);
}