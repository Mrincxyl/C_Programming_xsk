#include <stdio.h>

union Test
{
    int x;
    char ch;
};

int main()
{
    union Test t;

    t.x = 65;
    printf("%d\n", t.x);

    t.ch = 'A';

    printf("%c\n", t.ch);
    printf("%d\n", t.x);   // Value may change

    return 0;
}