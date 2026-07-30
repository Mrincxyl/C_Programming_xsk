//Wap Find the row with the maximum number of 1's
#include<stdio.h>
int main()
{
    int arr[3][4]={{1,0,1,1},{0,1,0,1},{1,0,0,1}};
    int maxcount =0;
    int max_ind = -1;
    for(int i=0; i<3;i++)
    {   int count=0;
        for(int j=0; j<4; j++)
        {
            if(arr[i][j]==1)
            {
                count++;
            }
        }
         if(maxcount<count)
            {
                maxcount=count;
                max_ind=i;
            }
            printf("\n");
    }
    printf("%d\n",maxcount);
    printf("%d",max_ind);
    return 0;
}