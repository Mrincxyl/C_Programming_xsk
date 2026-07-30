// string is nothing but array of characters
#include<stdio.h>
int main()
{  //ASCII values
// A -> 65
// a -> 97
// '0' -> character 0 ASCII value -> 48
// '1' -> 49
// '9' -> character 9 ASCII value -> 57    
   char ch = 'A';
   printf("%c\n", ch);
   printf("%d\n", ch); //%d return ASCII value
   int x = (int)ch; // typecasting // x will return ASCII value that store in ch variable
   printf("%d\n",x);
   char ch1 = '0';
   printf("%d\n",ch1); // will return the ASCII value of character '0'
 
    
int a[4]={1,2,3,4};
printf("%p\n",&a[0]); //%p for address // 1 integer = 4 bytes // 0 bytes
printf("%p\n",&a[1]); // 0+4 = 4bytes 
printf("%p\n",&a[2]); // 4+4 = 8 bytes
printf("%p\n",&a[3]); // 8+4 = 12 = c

    char arr[5] = {'a','b','c','d','e'};
    printf("%p\n", arr[0]); // 1 character take 1 byte storage // 1 byte
    printf("%p\n", arr[1]); // 1+1 = 2byte
    printf("%p\n", arr[2]); // 3 byte
    printf("%p\n", arr[3]); // 4 byte
    printf("%p\n", arr[4]); // 5 byte
    return 0;
}