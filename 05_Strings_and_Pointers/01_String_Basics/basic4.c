#include<stdio.h>
int main(){
     char ch2[]={'H','E','L','L','O'};
     int k=0;
    while(ch2[k]!='\0')
    {
        printf("%c",ch2[k]);
        k++;
    }
// as a output we are getting some unknown parameter at last
    return 0;
}