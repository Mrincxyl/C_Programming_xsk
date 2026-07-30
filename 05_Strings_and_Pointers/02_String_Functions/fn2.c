#include<stdio.h>
#include<string.h>
int main()
{
char str[12]="SKRAIHANALI";
char str1[12];
strcpy(str1,str);
str1[0]='M';
printf("%s\n",str);
printf("%s",str1);
return 0;
}