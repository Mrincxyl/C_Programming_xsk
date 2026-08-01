#include<stdio.h>

struct Point {
    int x, y;
};

int main() {
    struct Point p1 = {5, 10};
    struct Point *ptr = &p1;

    printf("%d\n", ptr->x);     // correct — arrow operator
    printf("%d\n", (*ptr).x);   // also correct — equivalent, less common style
    // printf("%d\n", ptr.x);   // ERROR — ptr is a pointer, dot operator doesn't work here

    return 0;
}