#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = calloc(5, sizeof(int));

    if (p == NULL) {
        printf("Allocation failed\n");
        return 1;
    }

    printf("Values from calloc:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", p[i]);   // guaranteed 0
    }
    printf("\n");

    free(p);
    return 0;
}