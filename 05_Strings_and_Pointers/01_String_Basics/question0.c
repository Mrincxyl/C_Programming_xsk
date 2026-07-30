// Input & Output of string without loop
// gets() & puts() function we have to use
#include<stdio.h>
#include<string.h>
int main()
{
    char str[]= "Welcome to my channel!";
    printf("%s",str);
    // using %s we can print whole string in a single code
    printf("\n");
    // without using print fun. we can print string using puts() fun. only can print string
    puts(str);
    puts("\nMIOOOOOOOOp"); // puts fun. atomatically \n add

    // to take input from user
    char str1[20];
    //scanf("%s", str1); // don't need to write &str1 but after space character will not store in string
    gets(str1); // scanf("%[^\n]s", str1);
    printf("you have store: %s", str1);

    ////////// ///////// ////////
    // so we have to use gets()
    return 0;
}