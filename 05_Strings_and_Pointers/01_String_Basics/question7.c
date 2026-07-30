// Reverse the string
#include<stdio.h>
int main()
{
   char str[50];
   puts("Enter a string");
   scanf("%[^\n]s",str);
   int size = 0;
   int i = 0;
   // this loop to calculate the size of the string
   while(str[i]!='\0')
   {
    size++;
    i++;
   }
   printf("%d\n", size);
   // to reverse the present string
   for(int i =0, j = size-1; i<=j; i++, j--)
   {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
   }
   puts("The Reverse string is : ");
   puts(str);

  return 0;
}