/// copy one string to another string using pointer string
#include<stdio.h>
int main()
{
    char *str="MrXol!";
    char *str1;
    str1 = str;
    str = "SKREHAN";
    puts(str);
    puts(str1);
    return 0;
}