#include<stdio.h>

int myStrlen(char *s)
{
    int len = 0;
    while(*s!='\0')
    {
        len++;
        s++;
    }
    return len;
}
int main()

{

    char str[] = "Murytskc";

    int len = myStrlen(str);

    printf("%d\n",len);
}