// 
#include<stdio.h>
int main()
{
   char str[50];
   puts("Enter a string");
   scanf("%[^\n]s",str);
   int size = 0;
   int j = 0;
   for(int i=0; i!='\0'; i++)
   {
    printf("\n%c",str[i]);
   }
   while(str[j]!='\0')
   {
    size++;
    j++;
   }
   printf("%d", size);
    
    return 0;
}