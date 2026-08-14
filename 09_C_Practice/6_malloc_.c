#include<stdio.h>
#include<stdlib.h>


int main()
{

    int *p = malloc(5*sizeof(int));

    printf("%p \n", (void*)p);

    printf("%p \n", p);

    printf("%d \n",p);

    if (p==NULL)
    {
        printf("Allocation Failed\n");
        return 1;
    }

    printf("Uninitialized values from malloc:\n");
    for (int i=0; i<5; i++)
    {
        printf("%d ",p[i]);
    }

    printf("\n");

    free(p);


    printf("%d ",p);
}