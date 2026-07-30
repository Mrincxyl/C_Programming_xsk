//WAP To find out max & min element of a 2D array 
//& also print index of max & min
#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[4][2]={{1,78},{2,89},{3,88},{4,90}};
    int max = INT_MIN;
    int min=INT_MAX;
     
    //loop for print array's element
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int max_index[2] = {0,0};

//loop for find maximum element
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            if (max<arr[i][j])
            {
                max_index[0]=i;
                max_index[1]=j;
                max = arr[i][j];
            

            }

           
        }
        
    }
    printf("max_index =(%d,%d)\n",max_index[0],max_index[1]);
    printf("max = %d\n",max);


int min_index[2]={0,0};

//loop for find minimum element
     for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            if (min>arr[i][j])
            {   
                min_index[0]=i; // for storing row  
                min_index[1]=j; // for stroing column
                min = arr[i][j]; // for storing minimum value
            }

           
        }
        
    }
    printf("min_index =(%d,%d)\n",min_index[0],min_index[1]);
    printf("min = %d",min);
    

    return 0;
}