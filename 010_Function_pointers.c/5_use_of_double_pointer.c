#include<stdio.h>
#include<stdlib.h>
void allocate(int **p) {
    *p = malloc(sizeof(int));   // modifies the ACTUAL ptr in main(), via its address
    **p = 100;
}

int main() {
    int *ptr = NULL;
    allocate(&ptr);
    printf("%d\n", *ptr);   // works! prints 100
    free(ptr);
}