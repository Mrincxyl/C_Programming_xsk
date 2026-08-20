#include<stdio.h>
#define MAX 10
void AddMatrics(int a[MAX][MAX], int b[MAX][MAX], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            a[i][j] = a[i][j] + b[i][j];
        }

    }

}

int main()
{
    int a[2][2] = {{5,3},{9,6}};

    int b[2][2] = {{6,1},{0,2}};

    int n = 2;

    AddMatrics(a,b,n);

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");

    }




}