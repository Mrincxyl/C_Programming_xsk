#include<stdio.h>

int main()
{
    char A[] = "finding";

    

    for(int i=0; A[i]!='\0'; i++)
    {
        for(int j=i+1; A[j]!='\0'; j++ )
        {
            if(A[i]==A[j])
            {
                printf("%c ",A[j]);
            }
        }

    }
}