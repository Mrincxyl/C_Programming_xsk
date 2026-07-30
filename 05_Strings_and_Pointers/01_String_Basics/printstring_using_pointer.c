// print string using pointer
#include<stdio.h>
int main(){
     char str[]="Hello!";
    char* ptr = str; // str or str[0]
    while(*ptr!='\0')
    {
        printf("%c\n",*ptr);
        ptr++;
        
    }

    return 0;
}