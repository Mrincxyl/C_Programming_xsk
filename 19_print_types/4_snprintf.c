#include <stdio.h>

int main()
{
    char str[10];

    snprintf(str, sizeof(str), "Hello World");

    printf("%s", str);

    return 0;
}