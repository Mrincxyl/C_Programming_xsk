//Find the sum of a given matrix of n*m.
//Take input from the user and print the element:
#include<stdio.h>
int main()
{   
    int n, m;
    printf("Enter the row number:\n");
    scanf("%d",&n);
    printf("Enter the column number:\n");
    scanf("%d",&m);
    int arr[n][m]; 
    printf("Take array's element from user:\n");
     
    for(int i =0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
           printf("Enter arr[%d][%d] no element: ",i,j);
           scanf("%d",&arr[i][j]); 
        }
       
    }
    printf("The Element of the 2D array is:\n");
     for(int i =0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int sum=0;
     for(int i =0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
           sum = sum + arr[i][j]; 
        }
       
    }
    printf("sum=%d",sum);
    
    
    return 0;
}


