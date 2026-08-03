#include<stdio.h>

int main()
{
    char str[6] = "Hello";

    str[1] = 'C'; // -> read and write , means we can change the character
    
    printf("%s\n",str);

    printf("%c\n",str[4]);



    // 2.  Read Only

    char *s = "Yummy"; // Read only

    printf("%s\n",s);

    s[0] = 'L'; // Value can't be changed

    printf("%s\n",s);

    

}