// string // Null character
#include<stdio.h>
int main()
{
    char  ch0[]={'H','E','L','L','O','\0'};
    int l=0;
    while(ch0[l]!=0)
    {
        printf("%c",ch0[l]);
        l++;
    }

    /////////////////////////////////
    printf("\n");
    char ch[]="Hello! My Name is SK Raihan Ali.\0"; // using \0
    int i=0;
    while(ch[i]!=0)
    {
        printf("%c",ch[i]); //ch[i] & i[ch] both are same
        i++;
    }

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
printf("\n");
    // computer atomatic detect \0
     char ch1[]="Hello! My Name is SK Raihan Ali."; // without using \0
    int j=0;
    while(ch1[j]!='\0')
    {
        printf("%c",ch1[j]);
        j++;
    }
    return 0;
}