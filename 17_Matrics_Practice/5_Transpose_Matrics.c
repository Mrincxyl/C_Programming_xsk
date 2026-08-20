#include<stdio.h>
#define MAX 10

void Transpose(int a[MAX][MAX],int b[MAX][MAX],int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
             b[j][i] = a[i][j];
        }

    }

}

int main()
{
    int a[MAX][MAX] = {{1,2,5},{3,4,8}};

    int b[MAX][MAX]={0};

    int n = 2, m = 3;

    Transpose(a,b,n,m);

     printf("\nOriginal Matrix:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose Matrix:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

}