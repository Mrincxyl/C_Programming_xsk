//find the sum of element between two cordinate
#include<stdio.h>
int main()
{   
    
    int arr[4][5]; 
    printf("Take array's element from user:\n");
     
    for(int i =0; i<4; i++)
    {
        for(int j=0; j<5; j++)
        {
           printf("Enter arr[%d][%d] no element: ",i,j);
           scanf("%d",&arr[i][j]); 
        }
       
    }
    printf("The Element of the 2D array is:\n");
     for(int i =0; i<4; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    int sum=0;
     for(int i =0; i<3; i++)
    {
        for(int j=1; j<5; j++)
        {
           sum = sum + arr[i][j]; 
        }
       
    }
    printf("sum=%d",sum);
    
    
    return 0;
}


