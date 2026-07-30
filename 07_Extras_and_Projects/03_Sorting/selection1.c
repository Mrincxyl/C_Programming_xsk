// Swaping element in ascending order using selection sort
#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
int main()
{

    int arr[7]={7,4,5,9,8,2,1};
    int n=7;
    printf("\nprint unsorted array");
    for(int i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }

// Selection sort
for(int i=0; i<n-1;i++)
{
      int min=INT_MAX;
      int min_index=-1;
      for(int j=i;j<=n-1;j++)
      {
        if(min>arr[j])
        {
            min = arr[j];
            min_index=j;
        }
      }  
    // swap the min and first element of unsorted part
    // swap minindex and i 
    int temp = arr[min_index];
    arr[min_index]=arr[i];
    arr[i]=temp;
} 

    printf("\nPrint sorted array");
 for(int i=0;i<n;i++)

    {

      printf("\n%d",arr[i]);

    }

    return 0;
}