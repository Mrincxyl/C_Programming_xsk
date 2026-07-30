#include<stdio.h>
int main()
{
    char str[]= "SKRAIHANALI";
    str[0]='D'; 
    puts(str);
    printf("%s",str);
    /////////////////////////////////////////////

char * ptr = "SKTohidALI";
//ptr[0]= 'D';//error 
//*ptr[0]='D'; // error
printf("\n%s",ptr);

    return 0;
}