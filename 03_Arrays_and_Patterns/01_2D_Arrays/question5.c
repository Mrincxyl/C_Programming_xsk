//WAP to add two matrices without using extra array
#include<stdio.h>
int main()
{
    int arr[2][2]={1,2,3,4};
    int barr[2][2]={1,2,3,4};

    for(int i=0; i<2;i++)
    {
        for(int j=0; j<2; j++)
        {
            arr[i][j]=arr[i][j]+barr[i][j];
        }
    }
    for(int i=0; i<2;i++)
    {
        for(int j=0; j<2; j++)
        {
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}