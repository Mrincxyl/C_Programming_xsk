#include<STDIO.H>
#include<STRING.H>

int main()
{
    char str[] = "Hello";

    //1. strlen — length

    printf("Length: %zu\n",strlen(str)); // ->Scans from the start until it hits \0, counting characters (not including the \0 itself).

    int n = strlen(str);

    for(int i=0; i<n; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");

    //2. strcpy / strncpy — copy

    char dest[15];

    strcpy(dest,"Hellllo");

    printf("%s\n",dest); 

    // 3. strcat / strncat — concatenate

    char dest1[20] = "Hellop ";

    strcat(dest1,"Kinee");

    printf("%s\n",dest1); 

    //4. strcmp / strncmp — compare
    //Compares character by character (by ASCII value), returns:

    /*0 if equal
    negative if s1 < s2 (lexicographically first difference)
    positive if s1 > s2*/

    printf("%d\n",strcmp("apple","banana"));
    printf("%d\n",strcmp("apple", "apple"));
    printf("%d\n",strcmp("banana", "apple"));



    char str1[] = "Hello World";
    char *p = strchr(str1, 'W');   // points to "World"
    char *q = strstr(str1, "Wor"); // points to "World"
    if (q == NULL) printf("not found\n");

}