#include<stdio.h>
int main()
{
    char str[]= "SKRAIHANALI";
    str[0]='D';

   // str = "NEWINDIA";  // only can change individual character not whole string at a time
    printf("%s",str);
    /////////////////////////////////////////////

char * ptr = "SKTohidALI";
//ptr[0]= 'D';//error 
//*ptr='y'; // error
ptr = "LOVEME";

//// pointer can change whole string but not individual character

printf("\n%s",ptr);

    return 0;
}