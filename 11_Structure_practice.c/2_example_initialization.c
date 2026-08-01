
#include<stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p1 = {10, 20};   // initialize in declaration order
    printf("%d, %d\n", p1.x, p1.y);

    struct Point p2 = {.y = 5, .x = 3};  // designated initializers (C99) — order-independent
    printf("%d, %d\n", p2.x, p2.y);

    return 0;
}