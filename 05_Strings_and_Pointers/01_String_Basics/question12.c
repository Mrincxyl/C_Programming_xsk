#include<stdio.h>
int main()
{
    char str[]= "SKRAIHANALI";
   
char * ptr = str;
*ptr = 'P';
printf("\n%s",ptr);
printf("\n%s",str);
    return 0;
}