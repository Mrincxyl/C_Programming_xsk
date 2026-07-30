// pointer , address
#include<stdio.h>
int main()
{
    char str[]="Hello!mr";
    char * ptr = &str[0];
    // a character type pointer ptr that store the address of str[0] no element 
    // which is H or str[0] = H
    printf(" The address is :\n%p\n",ptr);

    // %p for address
    printf("%p",&str[0]); // the first element of the string
    printf("\n%p", str); // address of any string , is the address of his first or 0 index element
    // so the address of the string & the first element will be same
    printf("\n%p",&str);

    /////////////////////////////////////////////
    char * ptr1 = str; //ptr1 now points to str[0]
    printf("\n%p", ptr1);
    return 0; 
}