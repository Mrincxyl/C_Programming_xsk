//WAP to print the row number having the maximum sum in a given array
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
    
     for(int i =0; i<1; i++)
    {   int sum0=0;
        for(int j=0; j<5; j++)
        {
           sum0 = sum0 + arr[i][j]; 
        }
    printf("sum0=%d\n",sum0);   
    }
    
 
     for(int i =1; i<2; i++)
    {   int sum1=0;
        for(int j=0; j<5; j++)
        {
           sum1 = sum1 + arr[i][j]; 
        }
    printf("sum1=%d\n",sum1);   
    }
    
 
     for(int i =2; i<3; i++)
    {   int sum2=0;
        for(int j=0; j<5; j++)
        {
           sum2 = sum2 + arr[i][j]; 
        }
    printf("sum2=%d\n",sum2);  
    } 

    
     for(int i =3; i<4; i++)
    {   int sum3=0;
        for(int j=0; j<5; j++)
        {
           sum3 = sum3 + arr[i][j]; 
        }
    printf("sum3=%d\n",sum3);   
    } 

    return 0;
}


