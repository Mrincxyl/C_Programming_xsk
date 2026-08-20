#include<stdio.h>
#include<string.h>

int main()
{
    char s[] = "hello";

    int n = strlen(s);

    int i = 0, j = n-1;
    while(i<j)
    {
        char c = s[i];
        s[i++] = s[j];
        s[j--] = c;
    }

    printf("%s ",s);

}