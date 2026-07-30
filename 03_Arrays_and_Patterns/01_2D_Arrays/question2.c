#include<stdio.h>
int main()
{
    int arr[4][2]={{1,78},{2,89},{3,88},{4,90}};
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}