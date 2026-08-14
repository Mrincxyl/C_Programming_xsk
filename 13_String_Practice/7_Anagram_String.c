#include<stdio.h>
#include<stdbool.h>

int main()
{
    char A[] = "medical";
    char B[] = "debimal";

    for(int i=0; A[i]!='\0'; i++)
    {
        bool check = false;

        for(int j=0; B[j]!='\0'; j++)
        {
            if(A[i]==B[j])
            {
                check = true;
            }
        }
        if(check == false)
        {
            printf("Not Anagram\n");
            break;
        }

    }
}