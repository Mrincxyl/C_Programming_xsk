#include<stdio.h>
int main()
{
    char str[]="MrXol!";
    int size = 0;
    int i=0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    printf("%d\n",size);

    char str2[size];
    
    int j=0, k=0;
    while(k<size)
    { str2[j]=str[k];
    k++;
    j++;

    }
    puts(str2);
    return 0;
}