#include<stdio.h>
#define MAX 10

void MultiMatrics(int a[MAX][MAX], int b[MAX][MAX],int c[MAX][MAX], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            for(int k=0; k<n; k++)
            {
                c[i][j] += a[i][k]*b[k][j];
            }
            
        }

    }

}

int main()
{
    int a[MAX][MAX] = {{5,3},{9,6}};

    int b[MAX][MAX] = {{6,1},{0,2}};

    int c[MAX][MAX]={0};

    int n = 2;

    MultiMatrics(a,b,c,n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");

    }




}