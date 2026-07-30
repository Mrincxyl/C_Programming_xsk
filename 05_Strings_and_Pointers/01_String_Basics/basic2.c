// Null Character -> backslash 0 -> \0 = single character
#include<stdio.h>
int main()
{
    // char ch ='ab'; // char datatype can store only single character
    // printf("%c\n",ch); // will return error // Multicharacter or overflow error

    char ch = '\0'; // Null character
    printf("%c\n",ch);
    printf("%d\n",ch); // \0 ASCII value 0

    char arr[] = {'H','E','L','L','O',}; // -->1 // in single quote
    int i = 0;
    while(i<5)
    {
        printf("%c",arr[i]);
        i++;
    }
    // but we don't know the size of array in this case we will use null character
    char arr1[]= "Hello"; // -->2 // in double quote
    int j=0;
    printf("\n");
    while(j<5)
    {
        printf("%c",arr1[j]);
        j++;
    }
    // Code 1 & code 2 is same 

    

    return 0;
} 