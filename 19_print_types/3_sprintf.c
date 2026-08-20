#include <stdio.h>

int main()
{
    char str[50];

    sprintf(str, "Age = %d", 21);

    //sprintf() writes formatted output into a character array (string) instead of displaying it.

    printf("%s", str);

    return 0;
}