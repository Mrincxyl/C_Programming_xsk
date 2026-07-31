#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(sizeof(int));
    *p = 100;
    printf("Value: %d\n", *p);

    free(p);
    p = NULL;      // the defensive habit

    free(p);       // safe — free(NULL) is a documented no-op
    printf("Second free on NULL was safe, no crash\n");

    return 0;
}