#include<stdio.h>
int main()
{   char str[20]="College Wallah";
    puts(str);
    for(int i=14; i>=2; i--)
    {
        str[i+1]=str[i];
    }
    str[2]='K';
    puts(str);

    return 0;
}